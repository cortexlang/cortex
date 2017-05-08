/* $CORTO_GENERATED
 *
 * TestLock.c
 *
 * Only code written between the begin and end tags will be preserved
 * when the file is regenerated.
 */

#include <include/test.h>

corto_secure_accessKind _test_TestLock_authorize(
    test_TestLock this,
    corto_string token,
    corto_secure_actionKind action)
{
/* $begin(test/TestLock/authorize) */
    if (token) {
        corto_iter it = corto_ll_iter(this->rules);
        while (corto_iter_hasNext(&it)) {
            test_AccessRule *r = corto_iter_next(&it);
            if (!strcmp(r->user, token) && (r->action == action)) {
                return r->access;
            }
        }
    }
    return CORTO_SECURE_ACCESS_UNDEFINED;
/* $end */
}
