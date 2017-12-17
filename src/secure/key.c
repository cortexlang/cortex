/* This is a managed file. Do not delete this comment. */

#include <corto/corto.h>


static corto_secure_key corto_secure_keyInstance;
static corto_string corto_secure_token;
static corto_thread corto_secure_mainThread;

static
corto_entityAdmin corto_lock_admin = {
    .key = 0,
    .count = 0,
    .lock = CORTO_RWMUTEX_INITIALIZER,
    .changed = 0
};

void corto_secure_init(void) {
    corto_secure_mainThread = corto_thread_self();
    corto_tls_new(&corto_lock_admin.key, corto_entityAdmin_free);
}

corto_bool corto_secured(void) {
    return corto_secure_keyInstance != NULL;
}

corto_string corto_login(corto_string username, corto_string password) {
    if (corto_secure_keyInstance) {
        return corto_secure_key_authenticate(corto_secure_keyInstance, username, password);
    } else {
        return NULL;
    }
}

corto_string corto_authenticate(corto_string key) {
    if (corto_rwmutex_write(&corto_lock_admin.lock)) {
        corto_throw(NULL);
        goto error;
    }

    corto_string prev = corto_secure_token;
    corto_secure_token = key;

    if (corto_rwmutex_unlock(&corto_lock_admin.lock)) {
        corto_throw(NULL);
        goto error;
    }

    return prev;
error:
    return key;
}

int16_t corto_secure_registerLock(corto_secure_lock lock) {

    if (corto_secure_mainThread == corto_thread_self()) {
        corto_entityAdmin_add(&corto_lock_admin, lock->mount, lock, NULL);
    } else {
        corto_throw("locks can only be created in mainthread");
        goto error;
    }

    return 0;
error:
    return -1;
}

int16_t corto_secure_unregisterLock(corto_secure_lock lock) {

    if (corto_secure_mainThread == corto_thread_self()) {
        corto_entityAdmin_remove(&corto_lock_admin, lock->mount, lock, NULL, FALSE);
    } else {
        corto_throw("locks can only be removed from mainthread");
        goto error;
    }

    return 0;
error:
    return -1;
}

corto_bool corto_authorized(corto_object object, corto_secure_actionKind access)
{
    if (corto_checkAttr(object, CORTO_ATTR_NAMED)) {
        corto_id objectId;
        corto_fullpath(objectId, object);
        return corto_authorizedId(objectId, access);
    } else {
        return TRUE;
    }
}

corto_bool corto_authorizedId(corto_string objectId, corto_secure_actionKind access) {
    corto_secure_accessKind allowed = CORTO_SECURE_ACCESS_UNDEFINED;

    if (corto_secure_keyInstance) {
        corto_int32 depth = corto_entityAdmin_getDepthFromId(objectId);
        corto_uint16 currentDepth = 0;
        corto_int16 priority = 0;

        /* Walk over locks in the lock admin */
        corto_entityAdmin *admin = corto_entityAdmin_get(&corto_lock_admin);
        do {
            int ep, e;
            for (ep = 0; ep < admin->entities[depth].length; ep ++) {
                corto_entityPerParent *perParent = &admin->entities[depth].buffer[ep];
                char *expr;
                if (!(expr = corto_matchParent(perParent->parent, objectId))) {
                    continue;
                }

                for (e = 0; e < perParent->entities.length; e ++) {
                    corto_entity *entity = &perParent->entities.buffer[e];
                    corto_secure_lock lock = entity->e;

                    if (lock->expr && *expr && !corto_idmatch(lock->expr, expr)) {
                        continue;
                    }

                    /* Priority of lock must be at least of the same priority or
                     * higher than set value. */
                    if (lock->priority >= priority) {

                        /* More specific locks take precedence over less specific
                         * locks, unless priority is higher */
                        if ((allowed == CORTO_SECURE_ACCESS_UNDEFINED) ||
                            (currentDepth == depth) ||
                            (lock->priority > priority))
                        {
                            corto_secure_accessKind result;

                            result = corto_secure_lock_authorize(lock, corto_secure_token, access);

                            /* Only overwrite value if access is undefined, result
                             * is not undefined or access is denied and lock has
                             * a higher priority than what was set */
                            if (result != CORTO_SECURE_ACCESS_UNDEFINED) {
                                if ((allowed != CORTO_SECURE_ACCESS_DENIED) ||
                                    (lock->priority > priority))
                                {
                                      allowed = result;
                                      priority = lock->priority;
                                      currentDepth = depth;
                                }
                            }
                        }
                    }
                }
            }
        } while (--depth >= 0);
    }
    return allowed != CORTO_SECURE_ACCESS_DENIED;
}

corto_string corto_secure_key_authenticate_v(
    corto_secure_key this,
    corto_string user,
    corto_string password)
{

    CORTO_UNUSED(this);
    CORTO_UNUSED(user);
    CORTO_UNUSED(password);

    return NULL;
}

int16_t corto_secure_key_construct(
    corto_secure_key this)
{
    if (corto_secure_keyInstance != NULL) {
        corto_throw("secure: a secure/key instance is already active");
        goto error;
    }

    /* Only allow setting key in the mainthread */
    if (corto_secure_mainThread != corto_thread_self()) {
        corto_throw("secure: may only create a secure/key instance in the mainthread");
        goto error;
    }

    corto_secure_keyInstance = this;

    return 0;
error:
    return -1;
}

void corto_secure_key_destruct(
    corto_secure_key this)
{
    CORTO_UNUSED(this);

    corto_trace("secure: delete key");
    corto_secure_keyInstance = NULL;

}