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

// MediabrixPlugin
struct MediabrixPlugin_t1639768150;
// System.String
struct String_t;
// MediaBrixAdEvents
struct MediaBrixAdEvents_t3780574111;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void MediabrixPlugin::.ctor()
extern "C"  void MediabrixPlugin__ctor_m4153599957 (MediabrixPlugin_t1639768150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPlugin::Initialize(System.String,System.String,MediaBrixAdEvents)
extern "C"  void MediabrixPlugin_Initialize_m758839404 (Il2CppObject * __this /* static, unused */, String_t* ___url, String_t* ___appId, Il2CppObject * ___callbacks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPlugin::Load(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void MediabrixPlugin_Load_m318050794 (Il2CppObject * __this /* static, unused */, String_t* ___target, Dictionary_2_t2606186806 * ___mbrixVars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPlugin::Show(System.String)
extern "C"  void MediabrixPlugin_Show_m1879219190 (Il2CppObject * __this /* static, unused */, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPlugin::Pause()
extern "C"  void MediabrixPlugin_Pause_m4207725929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPlugin::Resume()
extern "C"  void MediabrixPlugin_Resume_m4276038716 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MediabrixPlugin::Destroy()
extern "C"  void MediabrixPlugin_Destroy_m3219104237 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
