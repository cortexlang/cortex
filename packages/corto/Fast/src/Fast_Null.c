/* Fast_Null.c
 *
 * This file contains the implementation for the generated interface.
 *
 * Don't mess with the begin and end tags, since these will ensure that modified
 * code in interface functions isn't replaced when code is re-generated.
 */

#define corto_Fast_LIB
#include "Fast.h"

/* $header() */
#include "Fast__private.h"
/* $end */

/* ::corto::Fast::Null::init() */
cx_int16 _Fast_Null_init(Fast_Null _this) {
/* $begin(::corto::Fast::Null::init) */
    Fast_Literal(_this)->kind = Fast_Nothing;
    Fast_Expression(_this)->type = NULL;
    return Fast_Literal_init(Fast_Literal(_this));
/* $end */
}

/* ::corto::Fast::Null::serialize(type dstType,word dst) */
cx_int16 _Fast_Null_serialize(Fast_Null _this, cx_type dstType, cx_word dst) {
/* $begin(::corto::Fast::Null::serialize) */
    Fast_valueKind kind;
    CX_UNUSED(_this);

    kind = Fast_valueKindFromType(dstType);
    
    switch(kind) {
    case Fast_Bool:
        *(cx_bool*)dst = FALSE;
        break;
    case Fast_Text:
        if (*(cx_string*)dst) {
            cx_dealloc(*(cx_string*)dst);
        }
        *(cx_string*)dst = NULL;
        break;
    case Fast_Ref:
        if (*(cx_object*)dst) {
            cx_release(*(cx_object*)dst);
        }
        *(cx_object*)dst = NULL;
        break;
    default: {
        cx_id id;
        Fast_Parser_error(yparser(), "cannot serialize null value to storage of type '%s'", Fast_Parser_id(dstType, id));
        goto error;
        break;
    }
    }

    return 0;
error:
    return -1;
/* $end */
}

/* ::corto::Fast::Null::toIc(ic::program program,ic::storage storage,bool stored) */
ic_node _Fast_Null_toIc_v(Fast_Null _this, ic_program program, ic_storage storage, cx_bool stored) {
/* $begin(::corto::Fast::Null::toIc) */
    CX_UNUSED(storage);
    CX_UNUSED(stored);
    CX_UNUSED(_this);
    CX_UNUSED(program);

    return ic_node(ic_literalCreate((cx_any){cx_type(cx_void_o), NULL, FALSE}));
/* $end */
}
