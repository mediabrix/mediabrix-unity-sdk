#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Predicate`1<System.Object>
struct Predicate_1_t1408070318;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t539570894;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t171826611;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t4074528527;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t3775219180;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t1749754057;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t1065917714;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Nullable_1_gen3649900800.h"
#include "mscorlib_System_Nullable_1_gen3649900800MethodDeclarations.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_InvalidOperationException2420574324MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_InvalidOperationException2420574324.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_TimeSpan763862892MethodDeclarations.h"
#include "mscorlib_System_ValueType4014882752MethodDeclarations.h"
#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "mscorlib_System_Predicate_1_gen1408070318.h"
#include "mscorlib_System_Predicate_1_gen1408070318MethodDeclarations.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_ge539570894.h"
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_ge539570894MethodDeclarations.h"
#include "mscorlib_System_Reflection_MonoProperty_StaticGette171826611.h"
#include "mscorlib_System_Reflection_MonoProperty_StaticGette171826611MethodDeclarations.h"
#include "UnityEngine_UnityEngine_CastHelper_1_gen4244616972.h"
#include "UnityEngine_UnityEngine_CastHelper_1_gen4244616972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen4074528527.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen4074528527MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase2174897510MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen3775219180.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen3775219180MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen1749754057.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen1749754057MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen1065917714.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen1065917714MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C"  void Nullable_1__ctor_m4008503583_gshared (Nullable_1_t3649900800 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method)
{
	{
		__this->set_has_value_1((bool)1);
		TimeSpan_t763862892  L_0 = ___value;
		__this->set_value_0(L_0);
		return;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m2797118855_gshared (Nullable_1_t3649900800 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern TypeInfo* InvalidOperationException_t2420574324_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral78850559;
extern const uint32_t Nullable_1_get_Value_m3338249190_MetadataUsageId;
extern "C"  TimeSpan_t763862892  Nullable_1_get_Value_m3338249190_gshared (Nullable_1_t3649900800 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_get_Value_m3338249190_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t2420574324 * L_1 = (InvalidOperationException_t2420574324 *)il2cpp_codegen_object_new(InvalidOperationException_t2420574324_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1485483280(L_1, (String_t*)_stringLiteral78850559, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		TimeSpan_t763862892  L_2 = (TimeSpan_t763862892 )__this->get_value_0();
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C"  bool Nullable_1_Equals_m2158814990_gshared (Nullable_1_t3649900800 * __this, Il2CppObject * ___other, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___other;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)__this->get_has_value_1();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0010:
	{
		Il2CppObject * L_2 = ___other;
		if (((Il2CppObject *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		Il2CppObject * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t3649900800 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = ((  bool (*) (Nullable_1_t3649900800 *, Nullable_1_t3649900800 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t3649900800 *)__this, (Nullable_1_t3649900800 )((*(Nullable_1_t3649900800 *)((Nullable_1_t3649900800 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C"  bool Nullable_1_Equals_m3609411697_gshared (Nullable_1_t3649900800 * __this, Nullable_1_t3649900800  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(&___other)->get_has_value_1();
		bool L_1 = (bool)__this->get_has_value_1();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		bool L_2 = (bool)__this->get_has_value_1();
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		TimeSpan_t763862892 * L_3 = (TimeSpan_t763862892 *)(&___other)->get_address_of_value_0();
		TimeSpan_t763862892  L_4 = (TimeSpan_t763862892 )__this->get_value_0();
		TimeSpan_t763862892  L_5 = L_4;
		Il2CppObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		bool L_7 = TimeSpan_Equals_m2969422609((TimeSpan_t763862892 *)L_3, (Il2CppObject *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C"  int32_t Nullable_1_GetHashCode_m2957066482_gshared (Nullable_1_t3649900800 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		TimeSpan_t763862892 * L_1 = (TimeSpan_t763862892 *)__this->get_address_of_value_0();
		int32_t L_2 = TimeSpan_GetHashCode_m3188156777((TimeSpan_t763862892 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Nullable_1_ToString_m3059865940_MetadataUsageId;
extern "C"  String_t* Nullable_1_ToString_m3059865940_gshared (Nullable_1_t3649900800 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Nullable_1_ToString_m3059865940_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)__this->get_has_value_1();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		TimeSpan_t763862892 * L_1 = (TimeSpan_t763862892 *)__this->get_address_of_value_0();
		String_t* L_2 = TimeSpan_ToString_m2803989647((TimeSpan_t763862892 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		return L_3;
	}
}
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m982040097_gshared (Predicate_1_t1408070318 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->set_method_ptr_0((methodPointerType)((MethodInfo*)___method.get_m_value_0())->method);
	__this->set_method_3(___method);
	__this->set_m_target_2(___object);
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m4106178309_gshared (Predicate_1_t1408070318 * __this, Il2CppObject * ___obj, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Predicate_1_Invoke_m4106178309((Predicate_1_t1408070318 *)__this->get_prev_9(),___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),___obj,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (void* __this, Il2CppObject * ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),___obj,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef bool (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(___obj,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2038073176_gshared (Predicate_1_t1408070318 * __this, Il2CppObject * ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3970497007_gshared (Predicate_1_t1408070318 * __this, Il2CppObject * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Getter_2__ctor_m4236926794_gshared (Getter_2_t539570894 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->set_method_ptr_0((methodPointerType)((MethodInfo*)___method.get_m_value_0())->method);
	__this->set_method_3(___method);
	__this->set_m_target_2(___object);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C"  Il2CppObject * Getter_2_Invoke_m410564889_gshared (Getter_2_t539570894 * __this, Il2CppObject * ____this, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Getter_2_Invoke_m410564889((Getter_2_t539570894 *)__this->get_prev_9(),____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (Il2CppObject *, void* __this, Il2CppObject * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),____this,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, Il2CppObject * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),____this,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(____this,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Getter_2_BeginInvoke_m3146221447_gshared (Getter_2_t539570894 * __this, Il2CppObject * ____this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Getter_2_EndInvoke_m1749574747_gshared (Getter_2_t539570894 * __this, Il2CppObject * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Il2CppObject *)__result;
}
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void StaticGetter_1__ctor_m3357261135_gshared (StaticGetter_1_t171826611 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->set_method_ptr_0((methodPointerType)((MethodInfo*)___method.get_m_value_0())->method);
	__this->set_method_3(___method);
	__this->set_m_target_2(___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C"  Il2CppObject * StaticGetter_1_Invoke_m3410367530_gshared (StaticGetter_1_t171826611 * __this, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		StaticGetter_1_Invoke_m3410367530((StaticGetter_1_t171826611 *)__this->get_prev_9(), method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if ((__this->get_m_target_2() != NULL || MethodHasParameters((MethodInfo*)(__this->get_method_3().get_m_value_0()))) && ___methodIsStatic)
	{
		typedef Il2CppObject * (*FunctionPointerType) (Il2CppObject *, void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef Il2CppObject * (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StaticGetter_1_BeginInvoke_m3837643130_gshared (StaticGetter_1_t171826611 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * StaticGetter_1_EndInvoke_m3212189152_gshared (StaticGetter_1_t171826611 * __this, Il2CppObject * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Il2CppObject *)__result;
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_1__ctor_m4139691420_MetadataUsageId;
extern "C"  void UnityEvent_1__ctor_m4139691420_gshared (UnityEvent_1_t4074528527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1__ctor_m4139691420_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)1)));
		NullCheck((UnityEventBase_t2174897510 *)__this);
		UnityEventBase__ctor_m199506446((UnityEventBase_t2174897510 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_2__ctor_m1950601551_MetadataUsageId;
extern "C"  void UnityEvent_2__ctor_m1950601551_gshared (UnityEvent_2_t3775219180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2__ctor_m1950601551_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)2)));
		NullCheck((UnityEventBase_t2174897510 *)__this);
		UnityEventBase__ctor_m199506446((UnityEventBase_t2174897510 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_3__ctor_m4248091138_MetadataUsageId;
extern "C"  void UnityEvent_3__ctor_m4248091138_gshared (UnityEvent_3_t1749754057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3__ctor_m4248091138_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)3)));
		NullCheck((UnityEventBase_t2174897510 *)__this);
		UnityEventBase__ctor_m199506446((UnityEventBase_t2174897510 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern const uint32_t UnityEvent_4__ctor_m492943285_MetadataUsageId;
extern "C"  void UnityEvent_4__ctor_m492943285_gshared (UnityEvent_4_t1065917714 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4__ctor_m492943285_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_InvokeArray_4(((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)4)));
		NullCheck((UnityEventBase_t2174897510 *)__this);
		UnityEventBase__ctor_m199506446((UnityEventBase_t2174897510 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
