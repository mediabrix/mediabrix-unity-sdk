#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MediabrixPluginIOS
struct MediabrixPluginIOS_t3669971927;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// MediaBrixAdEvents
struct MediaBrixAdEvents_t3780574111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void MediabrixPluginIOS::.ctor()
extern "C"  void MediabrixPluginIOS__ctor_m2644643492 (MediabrixPluginIOS_t3669971927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::mb_initialize_unity(System.String,System.String,System.String)
extern "C"  void MediabrixPluginIOS_mb_initialize_unity_m1380466216 (Il2CppObject * __this /* static, unused */, String_t* ___flagKey, String_t* ___flagValue, String_t* ___callbackHandlerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::mb_load_ad_with_identifier(System.String,System.String)
extern "C"  void MediabrixPluginIOS_mb_load_ad_with_identifier_m1887418921 (Il2CppObject * __this /* static, unused */, String_t* ___identifier, String_t* ___key_value_pairs_null_terminated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::mb_show_ad_with_identifier(System.String)
extern "C"  void MediabrixPluginIOS_mb_show_ad_with_identifier_m2434635012 (Il2CppObject * __this /* static, unused */, String_t* ___identifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::mb_set_verbose(System.String)
extern "C"  void MediabrixPluginIOS_mb_set_verbose_m3270330215 (Il2CppObject * __this /* static, unused */, String_t* ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MediabrixPluginIOS::componentSeparatedStringFromDictionaryWithSeparator(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
extern "C"  String_t* MediabrixPluginIOS_componentSeparatedStringFromDictionaryWithSeparator_m2779878262 (Il2CppObject * __this /* static, unused */, Dictionary_2_t2606186806 * ___dictionary, String_t* ___separator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::Initialize(System.String,System.String,MediaBrixAdEvents)
extern "C"  void MediabrixPluginIOS_Initialize_m1433513339 (Il2CppObject * __this /* static, unused */, String_t* ___url, String_t* ___appId, Il2CppObject * ___callbacks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::Load(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void MediabrixPluginIOS_Load_m2080078587 (Il2CppObject * __this /* static, unused */, String_t* ___target, Dictionary_2_t2606186806 * ___mbrixVars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::Show(System.String)
extern "C"  void MediabrixPluginIOS_Show_m3329950789 (Il2CppObject * __this /* static, unused */, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::Pause()
extern "C"  void MediabrixPluginIOS_Pause_m2698769464 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::Resume()
extern "C"  void MediabrixPluginIOS_Resume_m448061261 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::Destroy()
extern "C"  void MediabrixPluginIOS_Destroy_m515920124 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPluginIOS::SetVerbose(System.Boolean)
extern "C"  void MediabrixPluginIOS_SetVerbose_m2343458583 (Il2CppObject * __this /* static, unused */, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
