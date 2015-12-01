/* test__meta.h
 *
 * Loads objects in object store.
 * This file contains generated code. Do not modify!
 */

#ifndef test_META_H
#define test_META_H

#include "corto.h"
#include "test__interface.h"

#ifdef __cplusplus
extern "C" {
#endif

extern corto_package test_o;
TEST_EXPORT extern corto_class test_Animal_o;
TEST_EXPORT extern corto_member test_Animal_a_o;
TEST_EXPORT extern corto_class test_AnonymousTest_o;
TEST_EXPORT extern corto_member test_AnonymousTest_objects_o;
TEST_EXPORT extern test_Suite test_Args_o;
TEST_EXPORT extern test_Case test_Args_tc_matchAddNoProject_o;
TEST_EXPORT extern test_Case test_Args_tc_matchAll_o;
TEST_EXPORT extern test_Case test_Args_tc_matchCreate_o;
TEST_EXPORT extern test_Case test_Args_tc_matchCreateApp_o;
TEST_EXPORT extern test_Case test_Args_tc_matchCreateMultiple_o;
TEST_EXPORT extern test_Case test_Args_tc_matchCreatePackage_o;
TEST_EXPORT extern test_Case test_Args_tc_matchCreatePackageAndApp_o;
TEST_EXPORT extern test_Case test_Args_tc_matchCreatePackageAndAppEscaped_o;
TEST_EXPORT extern test_Case test_Args_tc_matchCreatePackageOptions_o;
TEST_EXPORT extern test_Case test_Args_tc_matchDuplicate_o;
TEST_EXPORT extern test_Case test_Args_tc_matchDuplicateArg_o;
TEST_EXPORT extern test_Case test_Args_tc_matchErr_o;
TEST_EXPORT extern test_Case test_Args_tc_matchFixed_o;
TEST_EXPORT extern test_Case test_Args_tc_matchMultiple_o;
TEST_EXPORT extern test_Case test_Args_tc_matchMultipleArg_o;
TEST_EXPORT extern test_Case test_Args_tc_matchNone_o;
TEST_EXPORT extern test_Case test_Args_tc_matchOptional_o;
TEST_EXPORT extern test_Case test_Args_tc_matchOptionalOneArg_o;
TEST_EXPORT extern test_Case test_Args_tc_matchOptionalWithOtherArgs_o;
TEST_EXPORT extern test_Case test_Args_tc_matchPattern_o;
TEST_EXPORT extern test_Case test_Args_tc_matchPublish_o;
TEST_EXPORT extern test_Case test_Args_tc_matchPublishNoProject_o;
TEST_EXPORT extern test_Case test_Args_tc_matchShell_o;
TEST_EXPORT extern test_Case test_Args_tc_matchSingle_o;
TEST_EXPORT extern test_Case test_Args_tc_matchSingleArg_o;
TEST_EXPORT extern corto_class test_Bar_o;
TEST_EXPORT extern corto_member test_Bar___dummy_o;
TEST_EXPORT extern corto_method test_Bar_init_o;
TEST_EXPORT extern corto_class test_Cat_o;
TEST_EXPORT extern corto_member test_Cat_b_o;
TEST_EXPORT extern corto_enum test_Color_o;
TEST_EXPORT extern corto_constant ___ (*test_Color_Blue_o);
TEST_EXPORT extern corto_constant ___ (*test_Color_Green_o);
TEST_EXPORT extern corto_constant ___ (*test_Color_Orange_o);
TEST_EXPORT extern corto_constant ___ (*test_Color_Red_o);
TEST_EXPORT extern corto_constant ___ (*test_Color_Yellow_o);
TEST_EXPORT extern corto_struct test_CompositeCollection_o;
TEST_EXPORT extern corto_member test_CompositeCollection_points_o;
TEST_EXPORT extern corto_int8 ___ (*test_constructCalled_o);
TEST_EXPORT extern corto_struct test_DeclaredParent_o;
TEST_EXPORT extern corto_member test_DeclaredParent_Foo_o;
TEST_EXPORT extern corto_struct test_DefinedParent_o;
TEST_EXPORT extern corto_member test_DefinedParent_Foo_o;
TEST_EXPORT extern corto_int8 ___ (*test_destructCalled_o);
TEST_EXPORT extern corto_class test_Dog_o;
TEST_EXPORT extern corto_member test_Dog_b_o;
TEST_EXPORT extern test_Suite test_Env_o;
TEST_EXPORT extern test_Case test_Env_tc_envparseFormatAndReplace_o;
TEST_EXPORT extern test_Case test_Env_tc_envparseReplaceMultiple_o;
TEST_EXPORT extern test_Case test_Env_tc_envparseReplaceWithSameVariable_o;
TEST_EXPORT extern test_Case test_Env_tc_envparseSimpleFormat_o;
TEST_EXPORT extern test_Case test_Env_tc_envparseSimpleReplace_o;
TEST_EXPORT extern test_Case test_Env_tc_envparseVariableNotFound_o;
TEST_EXPORT extern test_Case test_Env_tc_setenvFormatAndReplace_o;
TEST_EXPORT extern test_Case test_Env_tc_setenvNull_o;
TEST_EXPORT extern test_Case test_Env_tc_setenvReplaceMultiple_o;
TEST_EXPORT extern test_Case test_Env_tc_setenvReplaceWithSameVariable_o;
TEST_EXPORT extern test_Case test_Env_tc_setenvSimple_o;
TEST_EXPORT extern test_Case test_Env_tc_setenvSimpleFormat_o;
TEST_EXPORT extern test_Case test_Env_tc_setenvSimpleReplace_o;
TEST_EXPORT extern test_Case test_Env_tc_setenvVariableNotFound_o;
TEST_EXPORT extern test_Suite test_Event_o;
TEST_EXPORT extern corto_member test_Event_et_o;
TEST_EXPORT extern corto_member test_Event_prevAttr_o;
TEST_EXPORT extern corto_method test_Event_setup_o;
TEST_EXPORT extern test_Case test_Event_tc_onDeclare_o;
TEST_EXPORT extern test_Case test_Event_tc_onDeclareScope_o;
TEST_EXPORT extern test_Case test_Event_tc_onDeclareSelf_o;
TEST_EXPORT extern test_Case test_Event_tc_onDeclareTree_o;
TEST_EXPORT extern test_Case test_Event_tc_onDefine_o;
TEST_EXPORT extern test_Case test_Event_tc_onDefineScope_o;
TEST_EXPORT extern test_Case test_Event_tc_onDefineSelf_o;
TEST_EXPORT extern test_Case test_Event_tc_onDefineTree_o;
TEST_EXPORT extern test_Case test_Event_tc_onDelete_o;
TEST_EXPORT extern test_Case test_Event_tc_onDeleteScope_o;
TEST_EXPORT extern test_Case test_Event_tc_onDeleteSelf_o;
TEST_EXPORT extern test_Case test_Event_tc_onDeleteTree_o;
TEST_EXPORT extern test_Case test_Event_tc_onUpdate_o;
TEST_EXPORT extern test_Case test_Event_tc_onUpdateScope_o;
TEST_EXPORT extern test_Case test_Event_tc_onUpdateSelf_o;
TEST_EXPORT extern test_Case test_Event_tc_onUpdateTree_o;
TEST_EXPORT extern test_Case test_Event_tc_updateUndefined_o;
TEST_EXPORT extern test_Case test_Event_tc_updateVoidErr_o;
TEST_EXPORT extern corto_method test_Event_teardown_o;
TEST_EXPORT extern corto_class test_EventTest_o;
TEST_EXPORT extern corto_method test_EventTest_construct_o;
TEST_EXPORT extern corto_member test_EventTest_countDeclare_o;
TEST_EXPORT extern corto_member test_EventTest_countDeclareScope_o;
TEST_EXPORT extern corto_member test_EventTest_countDeclareSelf_o;
TEST_EXPORT extern corto_member test_EventTest_countDeclareTree_o;
TEST_EXPORT extern corto_member test_EventTest_countDefine_o;
TEST_EXPORT extern corto_member test_EventTest_countDefineScope_o;
TEST_EXPORT extern corto_member test_EventTest_countDefineSelf_o;
TEST_EXPORT extern corto_member test_EventTest_countDefineTree_o;
TEST_EXPORT extern corto_member test_EventTest_countDelete_o;
TEST_EXPORT extern corto_member test_EventTest_countDeleteScope_o;
TEST_EXPORT extern corto_member test_EventTest_countDeleteSelf_o;
TEST_EXPORT extern corto_member test_EventTest_countDeleteTree_o;
TEST_EXPORT extern corto_member test_EventTest_countUpdate_o;
TEST_EXPORT extern corto_member test_EventTest_countUpdateScope_o;
TEST_EXPORT extern corto_member test_EventTest_countUpdateSelf_o;
TEST_EXPORT extern corto_member test_EventTest_countUpdateTree_o;
TEST_EXPORT extern corto_member test_EventTest_lastObservable_o;
TEST_EXPORT extern corto_member test_EventTest_lastThis_o;
TEST_EXPORT extern corto_observer test_EventTest_onDeclare_o;
TEST_EXPORT extern corto_observer test_EventTest_onDeclareScope_o;
TEST_EXPORT extern corto_observer test_EventTest_onDeclareSelf_o;
TEST_EXPORT extern corto_observer test_EventTest_onDeclareTree_o;
TEST_EXPORT extern corto_observer test_EventTest_onDefine_o;
TEST_EXPORT extern corto_observer test_EventTest_onDefineScope_o;
TEST_EXPORT extern corto_observer test_EventTest_onDefineSelf_o;
TEST_EXPORT extern corto_observer test_EventTest_onDefineTree_o;
TEST_EXPORT extern corto_observer test_EventTest_onDelete_o;
TEST_EXPORT extern corto_observer test_EventTest_onDeleteScope_o;
TEST_EXPORT extern corto_observer test_EventTest_onDeleteSelf_o;
TEST_EXPORT extern corto_observer test_EventTest_onDeleteTree_o;
TEST_EXPORT extern corto_observer test_EventTest_onUpdate_o;
TEST_EXPORT extern corto_observer test_EventTest_onUpdateScope_o;
TEST_EXPORT extern corto_observer test_EventTest_onUpdateSelf_o;
TEST_EXPORT extern corto_observer test_EventTest_onUpdateTree_o;
TEST_EXPORT extern corto_member test_EventTest_scope_o;
TEST_EXPORT extern corto_class test_Foo_o;
TEST_EXPORT extern corto_method test_Foo_construct_o;
TEST_EXPORT extern corto_method test_Foo_destruct_o;
TEST_EXPORT extern corto_member test_Foo_fail_o;
TEST_EXPORT extern corto_method test_Foo_init_o;
TEST_EXPORT extern corto_member test_Foo_x_o;
TEST_EXPORT extern corto_member test_Foo_y_o;
TEST_EXPORT extern test_Suite test_Fullname_o;
TEST_EXPORT extern test_Case test_Fullname_tc_null_o;
TEST_EXPORT extern test_Case test_Fullname_tc_nullBuffer_o;
TEST_EXPORT extern test_Case test_Fullname_tc_onelevel_o;
TEST_EXPORT extern test_Case test_Fullname_tc_root_o;
TEST_EXPORT extern test_Case test_Fullname_tc_twolevels_o;
TEST_EXPORT extern corto_function test_functionToResolve_o;
TEST_EXPORT extern corto_class test_GoldenRetriever_o;
TEST_EXPORT extern corto_member test_GoldenRetriever_c_o;
TEST_EXPORT extern corto_int8 ___ (*test_initCalled_o);
TEST_EXPORT extern corto_struct test_Line_o;
TEST_EXPORT extern corto_member test_Line_start_o;
TEST_EXPORT extern corto_member test_Line_stop_o;
TEST_EXPORT extern test_Suite test_MethodResolver_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritOverload_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritOverloadBaseClass_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritOverloadBaseInt_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritOverloadBaseString_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritOverloadBaseTwoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritOverloadClass_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritOverloadNoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritSimple_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritSimpleNoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritVirtualOverload_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_inheritVirtualOverloadNoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_nonexisting_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_onearg_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_oneargErr_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_oneargErrType_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_oneargNoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_overloadAmbiguous_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_overloadClass_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_overloadInt_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_overloadString_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_overloadTwoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_redeclare_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_simple_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_simpleErr_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_simpleErrType_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_simpleNoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_twoargs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_twoargsNoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_twoargsSpaces_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_virtualOverload_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_virtualOverloadArg_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_virtualOverloadNoArgs_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_virtualSimple_o;
TEST_EXPORT extern test_Case test_MethodResolver_tc_virtualSimpleNoArgs_o;
TEST_EXPORT extern corto_class test_MethodTester_o;
TEST_EXPORT extern corto_member test_MethodTester___dummy_o;
TEST_EXPORT extern corto_method test_MethodTester_onearg_o;
TEST_EXPORT extern corto_method test_MethodTester_overload__test_MethodTester_o;
TEST_EXPORT extern corto_method test_MethodTester_overload_int32_o;
TEST_EXPORT extern corto_method test_MethodTester_overload_int32_int32_o;
TEST_EXPORT extern corto_method test_MethodTester_overload_string_o;
TEST_EXPORT extern corto_method test_MethodTester_simple_o;
TEST_EXPORT extern corto_method test_MethodTester_twoargs_o;
TEST_EXPORT extern corto_virtual test_MethodTester_virtualOverload__o;
TEST_EXPORT extern corto_method test_MethodTester_virtualOverload_int32_o;
TEST_EXPORT extern corto_virtual test_MethodTester_virtualSimple_o;
TEST_EXPORT extern corto_class test_MethodTesterInherit_o;
TEST_EXPORT extern corto_method test_MethodTesterInherit_overload__test_MethodTesterInherit_o;
TEST_EXPORT extern corto_method test_MethodTesterInherit_overload_string_string_o;
TEST_EXPORT extern corto_method test_MethodTesterInherit_simple_o;
TEST_EXPORT extern corto_method test_MethodTesterInherit_virtualOverload_o;
TEST_EXPORT extern test_Suite test_ObjectMgmt_o;
TEST_EXPORT extern corto_member test_ObjectMgmt_prevAttr_o;
TEST_EXPORT extern corto_method test_ObjectMgmt_setup_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildFoo_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildFooAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildInitFail_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildInt_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildIntAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildInvalidType_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildNested_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildNullType_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildParentStateErr_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildParentTypeErr_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildVoid_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createChildVoidAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createFoo_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createFooAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createInitFail_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createInt_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createIntAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createInvalidType_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createNullType_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createVoid_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_createVoidAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildFoo_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildFooAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildInitFail_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildInt_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildIntAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildInvalidType_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildNullType_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildParentStateErr_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildParentTypeErr_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildVoid_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareChildVoidAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareExistingWithParentState_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareFoo_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareFooAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareInitFail_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareInt_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareIntAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareInvalidType_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareNullType_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareVoid_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_declareVoidAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_defineFoo_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_defineFooAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_defineFooFail_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_defineInt_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_defineIntAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_defineVoid_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_defineVoidAttr0_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_drop_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_invalidate_o;
TEST_EXPORT extern test_Case test_ObjectMgmt_tc_redeclareWithDifferentType_o;
TEST_EXPORT extern corto_method test_ObjectMgmt_teardown_o;
TEST_EXPORT extern corto_function test_ol_any__test_Color_o;
TEST_EXPORT extern corto_function test_ol_any_bool_o;
TEST_EXPORT extern corto_function test_ol_any_char_o;
TEST_EXPORT extern corto_function test_ol_any_float32_o;
TEST_EXPORT extern corto_function test_ol_any_int32_o;
TEST_EXPORT extern corto_function test_ol_any_object_o;
TEST_EXPORT extern corto_function test_ol_any_string_o;
TEST_EXPORT extern corto_function test_ol_bool_o;
TEST_EXPORT extern corto_function test_ol_inherit__test_Animal_o;
TEST_EXPORT extern corto_function test_ol_inherit__test_Dog_o;
TEST_EXPORT extern corto_function test_ol_int_o;
TEST_EXPORT extern corto_function test_ol_null_bool_o;
TEST_EXPORT extern corto_function test_ol_null_object_o;
TEST_EXPORT extern corto_function test_ol_null_string_o;
TEST_EXPORT extern corto_function test_ol_num_float64_o;
TEST_EXPORT extern corto_function test_ol_num_int32_o;
TEST_EXPORT extern corto_function test_ol_object_o;
TEST_EXPORT extern corto_function test_ol_string_o;
TEST_EXPORT extern corto_function test_ol_uint_o;
TEST_EXPORT extern corto_function test_ol_wildcard_float32_string_o;
TEST_EXPORT extern corto_function test_ol_wildcard_int32_string_o;
TEST_EXPORT extern test_Suite test_Overload_o;
TEST_EXPORT extern test_Case test_Overload_tc_ambiguous_o;
TEST_EXPORT extern test_Case test_Overload_tc_ambiguousNull_o;
TEST_EXPORT extern test_Case test_Overload_tc_ambiguousWildcard_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyChar_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyColor_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyFloat32_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyFloat64_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyInt16_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyInt32_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyInt64_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyInt8_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyOctet_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyString_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyUint16_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyUint32_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyUint64_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyUint8_o;
TEST_EXPORT extern test_Case test_Overload_tc_anyWord_o;
TEST_EXPORT extern test_Case test_Overload_tc_inheritanceBase_o;
TEST_EXPORT extern test_Case test_Overload_tc_inheritanceMatchSub_o;
TEST_EXPORT extern test_Case test_Overload_tc_inheritanceSub_o;
TEST_EXPORT extern test_Case test_Overload_tc_inheritSibling_o;
TEST_EXPORT extern test_Case test_Overload_tc_nullBool_o;
TEST_EXPORT extern test_Case test_Overload_tc_nullObject_o;
TEST_EXPORT extern test_Case test_Overload_tc_nullString_o;
TEST_EXPORT extern test_Case test_Overload_tc_numChar_o;
TEST_EXPORT extern test_Case test_Overload_tc_numColor_o;
TEST_EXPORT extern test_Case test_Overload_tc_numFloat32_o;
TEST_EXPORT extern test_Case test_Overload_tc_numFloat64_o;
TEST_EXPORT extern test_Case test_Overload_tc_numInt16_o;
TEST_EXPORT extern test_Case test_Overload_tc_numInt32_o;
TEST_EXPORT extern test_Case test_Overload_tc_numInt64_o;
TEST_EXPORT extern test_Case test_Overload_tc_numInt8_o;
TEST_EXPORT extern test_Case test_Overload_tc_numOctet_o;
TEST_EXPORT extern test_Case test_Overload_tc_numString_o;
TEST_EXPORT extern test_Case test_Overload_tc_numUint16_o;
TEST_EXPORT extern test_Case test_Overload_tc_numUint32_o;
TEST_EXPORT extern test_Case test_Overload_tc_numUint64_o;
TEST_EXPORT extern test_Case test_Overload_tc_numUint8_o;
TEST_EXPORT extern test_Case test_Overload_tc_numWord_o;
TEST_EXPORT extern test_Case test_Overload_tc_wildcard_o;
TEST_EXPORT extern corto_struct test_Point_o;
TEST_EXPORT extern corto_member test_Point_x_o;
TEST_EXPORT extern corto_member test_Point_y_o;
TEST_EXPORT extern corto_struct test_Point3D_o;
TEST_EXPORT extern corto_member test_Point3D_z_o;
TEST_EXPORT extern corto_struct test_PrimitiveCollection_o;
TEST_EXPORT extern corto_member test_PrimitiveCollection_ints_o;
TEST_EXPORT extern test_Suite test_Project_o;
TEST_EXPORT extern corto_method test_Project_setup_o;
TEST_EXPORT extern test_Case test_Project_tc_app_o;
TEST_EXPORT extern test_Case test_Project_tc_appNoTest_o;
TEST_EXPORT extern test_Case test_Project_tc_package_o;
TEST_EXPORT extern test_Case test_Project_tc_packageLocal_o;
TEST_EXPORT extern test_Case test_Project_tc_publishNotag_o;
TEST_EXPORT extern corto_method test_Project_teardown_o;
TEST_EXPORT extern test_Suite test_RelativeName_o;
TEST_EXPORT extern corto_member test_RelativeName_child_o;
TEST_EXPORT extern corto_member test_RelativeName_disjunct_o;
TEST_EXPORT extern corto_member test_RelativeName_obj_o;
TEST_EXPORT extern corto_method test_RelativeName_setup_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromChild_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromDisjunct_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromGrandchild_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromOneUp_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromParent_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromRoot_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromSelf_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromThreeUp_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_fromTwoUp_o;
TEST_EXPORT extern test_Case test_RelativeName_tc_rootFromObj_o;
TEST_EXPORT extern corto_method test_RelativeName_teardown_o;
TEST_EXPORT extern corto_member test_RelativeName_tier1_o;
TEST_EXPORT extern corto_member test_RelativeName_tier2_o;
TEST_EXPORT extern corto_member test_RelativeName_tier3_o;
TEST_EXPORT extern test_Suite test_Resolver_o;
TEST_EXPORT extern corto_method test_Resolver_setup_o;
TEST_EXPORT extern test_Case test_Resolver_tc_caseInsensitive_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveAll_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveAnonymous_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveCorto_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveEmptyString_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveFunctionArgs_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveFunctionNoArgs_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveIo_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveLang_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveNull_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveParenthesesNoFunction_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveParenthesesNoFunctionArgs_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveParenthesesNoFunctionArgsScoped_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveParenthesesNoFunctionMatchingArgs_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveParenthesesNoFunctionMatchingArgsScoped_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveParenthesesNoFunctionScoped_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveRoot_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveString_o;
TEST_EXPORT extern test_Case test_Resolver_tc_resolveThis_o;
TEST_EXPORT extern corto_method test_Resolver_teardown_o;
TEST_EXPORT extern test_Suite test_Select_o;
TEST_EXPORT extern corto_function test_Select_collect_o;
TEST_EXPORT extern corto_function test_Select_hasObject_o;
TEST_EXPORT extern corto_method test_Select_setup_o;
TEST_EXPORT extern test_Case test_Select_tc_selectDeleteCurrent_o;
TEST_EXPORT extern test_Case test_Select_tc_selectDeleteFirst_o;
TEST_EXPORT extern test_Case test_Select_tc_selectDeleteNext_o;
TEST_EXPORT extern test_Case test_Select_tc_selectDeleteParent_o;
TEST_EXPORT extern test_Case test_Select_tc_selectDeletePrevious_o;
TEST_EXPORT extern test_Case test_Select_tc_selectErrParentAst_o;
TEST_EXPORT extern test_Case test_Select_tc_selectErrParentId_o;
TEST_EXPORT extern test_Case test_Select_tc_selectErrParentTree_o;
TEST_EXPORT extern test_Case test_Select_tc_selectErrParentWc_o;
TEST_EXPORT extern test_Case test_Select_tc_selectErrScopeScope_o;
TEST_EXPORT extern test_Case test_Select_tc_selectFilterAsterisk_o;
TEST_EXPORT extern test_Case test_Select_tc_selectFilterWildcard_o;
TEST_EXPORT extern test_Case test_Select_tc_selectIdentifier_o;
TEST_EXPORT extern test_Case test_Select_tc_selectIdentifierCaps_o;
TEST_EXPORT extern test_Case test_Select_tc_selectNumeric_o;
TEST_EXPORT extern test_Case test_Select_tc_selectOrder_o;
TEST_EXPORT extern test_Case test_Select_tc_selectParent_o;
TEST_EXPORT extern test_Case test_Select_tc_selectScope_o;
TEST_EXPORT extern test_Case test_Select_tc_selectScopedIdentifier_o;
TEST_EXPORT extern test_Case test_Select_tc_selectScopedParent_o;
TEST_EXPORT extern test_Case test_Select_tc_selectScopedThis_o;
TEST_EXPORT extern test_Case test_Select_tc_selectScopeWithAsterisk_o;
TEST_EXPORT extern test_Case test_Select_tc_selectScopeWithAsteriskFilter_o;
TEST_EXPORT extern test_Case test_Select_tc_selectScopeWithWildcard_o;
TEST_EXPORT extern test_Case test_Select_tc_selectScopeWithWildcardFilter_o;
TEST_EXPORT extern test_Case test_Select_tc_selectThis_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTree_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeDeleteCurrent_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeDeleteFirst_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeDeleteGrandparent_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeDeleteNext_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeDeleteParent_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeDeletePrevious_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeWithAsterisk_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeWithAsteriskFilter_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeWithWildcard_o;
TEST_EXPORT extern test_Case test_Select_tc_selectTreeWithWildcardFilter_o;
TEST_EXPORT extern test_Case test_Select_tc_selectUnderscore_o;
TEST_EXPORT extern corto_method test_Select_teardown_o;
TEST_EXPORT extern corto_struct test_selectItem_o;
TEST_EXPORT extern corto_member test_selectItem_name_o;
TEST_EXPORT extern corto_member test_selectItem_parent_o;
TEST_EXPORT extern corto_member test_selectItem_type_o;
TEST_EXPORT extern test_Suite test_StringDeserializer_o;
TEST_EXPORT extern corto_method test_StringDeserializer_setup_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserAnonymousMultiple_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserAnonymousNested_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserAnonymousReuse_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserAnonymousReuseNested_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserAnonymousSimple_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserBoolFalse_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserBoolInvalid_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserBoolTrue_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserChar_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCharEscape_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCharEscapeQuoted_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCharNull_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCharNullQuoted_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCharQuoted_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCollection_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCollectionComplex_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserComposite_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCompositeMembers_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCompositeMixed_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCompositeNested_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCompositeNestedMembers_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCompositeNestedMixed_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCompositeNoType_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserCompositeWhitespace_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserExisting_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserExisting_w_scopedType_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserExisting_w_type_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInheritance_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInheritanceMembers_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInheritanceMixed_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt16_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt16Minus_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt16Overflow_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt32_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt32Minus_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt32Overflow_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt64_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt64Minus_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt8_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt8Minus_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserInt8Overflow_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserString_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserStringEscape_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserStringQuotes_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserStringQuotesWhitespaces_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserStringWhitespace_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserStringWhitespaceTrailing_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserStringWhitespaceTrailingNoType_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserUint16_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserUint16Overflow_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserUint32_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserUint32Overflow_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserUint64_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserUint8_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_deserUint8Overflow_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_errExcessElements_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_errMissingType_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_errNotAType_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_errTypeMismatch_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_errUnresolvedMember_o;
TEST_EXPORT extern test_Case test_StringDeserializer_tc_errUnresolvedType_o;
TEST_EXPORT extern corto_method test_StringDeserializer_teardown_o;
TEST_EXPORT extern corto_struct test_VoidParent_o;
TEST_EXPORT extern corto_member test_VoidParent_Foo_o;

#ifdef __cplusplus
}
#endif
#endif

