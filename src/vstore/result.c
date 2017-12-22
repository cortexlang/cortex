/* This is a managed file. Do not delete this comment. */

#include <corto/corto.h>
#include "src/store/object.h"
corto_string corto_result_contentof(
    corto_result* this,
    const char *contentType)
{
    corto_string result = NULL;

    corto_fmt type = corto_fmt_lookup(contentType);
    if (!type) {
        goto error;
    }

    if (!(result = (corto_string)type->fromResult(this))) {
        goto error;
    }

    return 0;
error:
    return NULL;
}

int16_t corto_result_fromcontent(
    corto_result* this,
    const char *contentType,
    const char *content)
{
    corto_fmt type = corto_fmt_lookup(contentType);
    if (!type) {
        goto error;
    }

    if (type->toResult(this, (corto_word)content)) {
        goto error;
    }

    return 0;
error:
    return -1;
}

corto_string corto_result_getText(
    corto_result* this)
{
    return (corto_string)this->value;
}

