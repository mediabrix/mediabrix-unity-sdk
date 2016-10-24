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

// Main
struct Main_t2390489;
// System.String
struct String_t;
// MediabrixPlugin
struct MediabrixPlugin_t1639768150;
// MediaBrixAdEvents
struct MediaBrixAdEvents_t3780574111;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// MediabrixPluginIOS
struct MediabrixPluginIOS_t3669971927;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_Main2390489.h"
#include "AssemblyU2DCSharp_Main2390489MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Boolean211005341.h"
#include "AssemblyU2DCSharp_MediabrixPlugin1639768150MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUILayout2490032242MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUILayoutOption3151226183.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2606186806.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "AssemblyU2DCSharp_MediabrixPlugin1639768150.h"
#include "AssemblyU2DCSharp_MediabrixPluginIOS3669971927MethodDeclarations.h"
#include "AssemblyU2DCSharp_MediabrixPluginIOS3669971927.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2606186806MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2373214747MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22094718104MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22094718104.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2373214747.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Type2779229935MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main::.ctor()
extern Il2CppCodeGenString* _stringLiteral3816254443;
extern const uint32_t Main__ctor_m2928940258_MetadataUsageId;
extern "C"  void Main__ctor_m2928940258 (Main_t2390489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main__ctor_m2928940258_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_ViewButton_7(_stringLiteral3816254443);
		__this->set_FlexButton_8(_stringLiteral3816254443);
		__this->set_RewardButton_9(_stringLiteral3816254443);
		__this->set_viewFail_11((bool)1);
		__this->set_flexFail_13((bool)1);
		__this->set_rewardFail_15((bool)1);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::.cctor()
extern TypeInfo* Main_t2390489_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2481551872;
extern Il2CppCodeGenString* _stringLiteral2461472517;
extern const uint32_t Main__cctor_m120738571_MetadataUsageId;
extern "C"  void Main__cctor_m120738571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main__cctor_m120738571_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Main_t2390489_StaticFields*)Main_t2390489_il2cpp_TypeInfo_var->static_fields)->set_serverURL_5(_stringLiteral2481551872);
		((Main_t2390489_StaticFields*)Main_t2390489_il2cpp_TypeInfo_var->static_fields)->set_appID_6(_stringLiteral2461472517);
		return;
	}
}
// System.Void Main::Start()
extern TypeInfo* Main_t2390489_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral637811354;
extern const uint32_t Main_Start_m1876078050_MetadataUsageId;
extern "C"  void Main_Start_m1876078050 (Main_t2390489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_Start_m1876078050_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral637811354, /*hidden argument*/NULL);
		MediabrixPlugin_SetVerbose_m275703366(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2390489_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Main_t2390489_StaticFields*)Main_t2390489_il2cpp_TypeInfo_var->static_fields)->get_serverURL_5();
		String_t* L_1 = ((Main_t2390489_StaticFields*)Main_t2390489_il2cpp_TypeInfo_var->static_fields)->get_appID_6();
		MediabrixPlugin_Initialize_m758839404(NULL /*static, unused*/, L_0, L_1, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::Update()
extern "C"  void Main_Update_m2329696875 (Main_t2390489 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Main::OnGUI()
extern TypeInfo* GUIStyle_t1006925219_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral97739;
extern Il2CppCodeGenString* _stringLiteral637150375;
extern Il2CppCodeGenString* _stringLiteral2831272341;
extern Il2CppCodeGenString* _stringLiteral637901424;
extern Il2CppCodeGenString* _stringLiteral2953457479;
extern Il2CppCodeGenString* _stringLiteral1873990600;
extern Il2CppCodeGenString* _stringLiteral1874107748;
extern const uint32_t Main_OnGUI_m2424338908_MetadataUsageId;
extern "C"  void Main_OnGUI_m2424338908 (Main_t2390489 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_OnGUI_m2424338908_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t1006925219_il2cpp_TypeInfo_var);
		GUIStyle_t1006925219 * L_0 = GUIStyle_op_Implicit_m169215436(NULL /*static, unused*/, _stringLiteral97739, /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m2418525209(NULL /*static, unused*/, L_0, ((GUILayoutOptionU5BU5D_t1890718142*)SZArrayNew(GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		String_t* L_1 = __this->get_ViewButton_7();
		GUILayoutOptionU5BU5D_t1890718142* L_2 = ((GUILayoutOptionU5BU5D_t1890718142*)SZArrayNew(GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var, (uint32_t)2));
		GUILayoutOption_t3151226183 * L_3 = GUILayout_Width_m2259621411(NULL /*static, unused*/, (300.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t3151226183 *)L_3);
		GUILayoutOptionU5BU5D_t1890718142* L_4 = L_2;
		GUILayoutOption_t3151226183 * L_5 = GUILayout_Height_m3774802884(NULL /*static, unused*/, (300.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t3151226183 *)L_5);
		bool L_6 = GUILayout_Button_m6468109(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0098;
		}
	}
	{
		bool L_7 = __this->get_viewFail_11();
		if (L_7)
		{
			goto IL_0069;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral637150375, /*hidden argument*/NULL);
		MediabrixPlugin_Show_m1879219190(NULL /*static, unused*/, _stringLiteral2831272341, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0069:
	{
		bool L_8 = __this->get_started_10();
		if (!L_8)
		{
			goto IL_008e;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral637901424, /*hidden argument*/NULL);
		MediabrixPlugin_Load_m318050794(NULL /*static, unused*/, _stringLiteral2831272341, (Dictionary_2_t2606186806 *)NULL, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_008e:
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2953457479, /*hidden argument*/NULL);
	}

IL_0098:
	{
		String_t* L_9 = __this->get_FlexButton_8();
		GUILayoutOptionU5BU5D_t1890718142* L_10 = ((GUILayoutOptionU5BU5D_t1890718142*)SZArrayNew(GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var, (uint32_t)2));
		GUILayoutOption_t3151226183 * L_11 = GUILayout_Width_m2259621411(NULL /*static, unused*/, (300.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t3151226183 *)L_11);
		GUILayoutOptionU5BU5D_t1890718142* L_12 = L_10;
		GUILayoutOption_t3151226183 * L_13 = GUILayout_Height_m3774802884(NULL /*static, unused*/, (300.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t3151226183 *)L_13);
		bool L_14 = GUILayout_Button_m6468109(NULL /*static, unused*/, L_9, L_12, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_011b;
		}
	}
	{
		bool L_15 = __this->get_flexFail_13();
		if (L_15)
		{
			goto IL_00ec;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral637150375, /*hidden argument*/NULL);
		MediabrixPlugin_Show_m1879219190(NULL /*static, unused*/, _stringLiteral1873990600, /*hidden argument*/NULL);
		goto IL_011b;
	}

IL_00ec:
	{
		bool L_16 = __this->get_started_10();
		if (!L_16)
		{
			goto IL_0111;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral637901424, /*hidden argument*/NULL);
		MediabrixPlugin_Load_m318050794(NULL /*static, unused*/, _stringLiteral1873990600, (Dictionary_2_t2606186806 *)NULL, /*hidden argument*/NULL);
		goto IL_011b;
	}

IL_0111:
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2953457479, /*hidden argument*/NULL);
	}

IL_011b:
	{
		String_t* L_17 = __this->get_RewardButton_9();
		GUILayoutOptionU5BU5D_t1890718142* L_18 = ((GUILayoutOptionU5BU5D_t1890718142*)SZArrayNew(GUILayoutOptionU5BU5D_t1890718142_il2cpp_TypeInfo_var, (uint32_t)2));
		GUILayoutOption_t3151226183 * L_19 = GUILayout_Width_m2259621411(NULL /*static, unused*/, (300.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t3151226183 *)L_19);
		GUILayoutOptionU5BU5D_t1890718142* L_20 = L_18;
		GUILayoutOption_t3151226183 * L_21 = GUILayout_Height_m3774802884(NULL /*static, unused*/, (300.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t3151226183 *)L_21);
		bool L_22 = GUILayout_Button_m6468109(NULL /*static, unused*/, L_17, L_20, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_019e;
		}
	}
	{
		bool L_23 = __this->get_rewardFail_15();
		if (L_23)
		{
			goto IL_016f;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral637150375, /*hidden argument*/NULL);
		MediabrixPlugin_Show_m1879219190(NULL /*static, unused*/, _stringLiteral1874107748, /*hidden argument*/NULL);
		goto IL_019e;
	}

IL_016f:
	{
		bool L_24 = __this->get_started_10();
		if (!L_24)
		{
			goto IL_0194;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral637901424, /*hidden argument*/NULL);
		MediabrixPlugin_Load_m318050794(NULL /*static, unused*/, _stringLiteral1874107748, (Dictionary_2_t2606186806 *)NULL, /*hidden argument*/NULL);
		goto IL_019e;
	}

IL_0194:
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2953457479, /*hidden argument*/NULL);
	}

IL_019e:
	{
		GUILayout_EndHorizontal_m556624369(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::OnApplicationPause(System.Boolean)
extern Il2CppCodeGenString* _stringLiteral2598371756;
extern Il2CppCodeGenString* _stringLiteral3301008183;
extern const uint32_t Main_OnApplicationPause_m3168982238_MetadataUsageId;
extern "C"  void Main_OnApplicationPause_m3168982238 (Main_t2390489 * __this, bool ___pauseStatus, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_OnApplicationPause_m3168982238_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___pauseStatus;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2598371756, /*hidden argument*/NULL);
		MediabrixPlugin_Pause_m4207725929(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_001a:
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3301008183, /*hidden argument*/NULL);
		MediabrixPlugin_Resume_m4276038716(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Main::OnStarted(System.String)
extern Il2CppCodeGenString* _stringLiteral2831272341;
extern Il2CppCodeGenString* _stringLiteral1873990600;
extern Il2CppCodeGenString* _stringLiteral1874107748;
extern Il2CppCodeGenString* _stringLiteral552273591;
extern const uint32_t Main_OnStarted_m4091663008_MetadataUsageId;
extern "C"  void Main_OnStarted_m4091663008 (Main_t2390489 * __this, String_t* ___status, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_OnStarted_m4091663008_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_started_10((bool)1);
		__this->set_ViewButton_7(_stringLiteral2831272341);
		__this->set_FlexButton_8(_stringLiteral1873990600);
		__this->set_RewardButton_9(_stringLiteral1874107748);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral552273591, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::OnAdUnavailable(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3588172426;
extern Il2CppCodeGenString* _stringLiteral432203901;
extern Il2CppCodeGenString* _stringLiteral2831272341;
extern Il2CppCodeGenString* _stringLiteral1873990600;
extern Il2CppCodeGenString* _stringLiteral1874107748;
extern const uint32_t Main_OnAdUnavailable_m2404187508_MetadataUsageId;
extern "C"  void Main_OnAdUnavailable_m2404187508 (Main_t2390489 * __this, String_t* ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_OnAdUnavailable_m2404187508_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___target;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral3588172426, L_0, _stringLiteral432203901, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___target;
		NullCheck(L_2);
		bool L_3 = String_Equals_m3541721061(L_2, _stringLiteral2831272341, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_4 = __this->get_ViewButton_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m138640077(NULL /*static, unused*/, L_4, _stringLiteral432203901, /*hidden argument*/NULL);
		__this->set_ViewButton_7(L_5);
		__this->set_viewFail_11((bool)1);
		goto IL_00a6;
	}

IL_0047:
	{
		String_t* L_6 = ___target;
		NullCheck(L_6);
		bool L_7 = String_Equals_m3541721061(L_6, _stringLiteral1873990600, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_8 = __this->get_FlexButton_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m138640077(NULL /*static, unused*/, L_8, _stringLiteral432203901, /*hidden argument*/NULL);
		__this->set_FlexButton_8(L_9);
		__this->set_flexFail_13((bool)1);
		goto IL_00a6;
	}

IL_0079:
	{
		String_t* L_10 = ___target;
		NullCheck(L_10);
		bool L_11 = String_Equals_m3541721061(L_10, _stringLiteral1874107748, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_12 = __this->get_RewardButton_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m138640077(NULL /*static, unused*/, L_12, _stringLiteral432203901, /*hidden argument*/NULL);
		__this->set_RewardButton_9(L_13);
		__this->set_rewardFail_15((bool)1);
	}

IL_00a6:
	{
		return;
	}
}
// System.Void Main::OnAdReady(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3588172426;
extern Il2CppCodeGenString* _stringLiteral994966883;
extern Il2CppCodeGenString* _stringLiteral2831272341;
extern Il2CppCodeGenString* _stringLiteral1873990600;
extern Il2CppCodeGenString* _stringLiteral1874107748;
extern const uint32_t Main_OnAdReady_m1245864449_MetadataUsageId;
extern "C"  void Main_OnAdReady_m1245864449 (Main_t2390489 * __this, String_t* ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_OnAdReady_m1245864449_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___target;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral3588172426, L_0, _stringLiteral994966883, /*hidden argument*/NULL);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___target;
		NullCheck(L_2);
		bool L_3 = String_Equals_m3541721061(L_2, _stringLiteral2831272341, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_4 = __this->get_ViewButton_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m138640077(NULL /*static, unused*/, L_4, _stringLiteral994966883, /*hidden argument*/NULL);
		__this->set_ViewButton_7(L_5);
		__this->set_viewFail_11((bool)0);
		goto IL_00a6;
	}

IL_0047:
	{
		String_t* L_6 = ___target;
		NullCheck(L_6);
		bool L_7 = String_Equals_m3541721061(L_6, _stringLiteral1873990600, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_8 = __this->get_FlexButton_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m138640077(NULL /*static, unused*/, L_8, _stringLiteral994966883, /*hidden argument*/NULL);
		__this->set_FlexButton_8(L_9);
		__this->set_flexFail_13((bool)0);
		goto IL_00a6;
	}

IL_0079:
	{
		String_t* L_10 = ___target;
		NullCheck(L_10);
		bool L_11 = String_Equals_m3541721061(L_10, _stringLiteral1874107748, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_12 = __this->get_RewardButton_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m138640077(NULL /*static, unused*/, L_12, _stringLiteral994966883, /*hidden argument*/NULL);
		__this->set_RewardButton_9(L_13);
		__this->set_rewardFail_15((bool)0);
	}

IL_00a6:
	{
		return;
	}
}
// System.Void Main::OnAdClosed(System.String)
extern Il2CppCodeGenString* _stringLiteral2831272341;
extern Il2CppCodeGenString* _stringLiteral1873990600;
extern Il2CppCodeGenString* _stringLiteral1874107748;
extern const uint32_t Main_OnAdClosed_m2659309234_MetadataUsageId;
extern "C"  void Main_OnAdClosed_m2659309234 (Main_t2390489 * __this, String_t* ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_OnAdClosed_m2659309234_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___target;
		NullCheck(L_0);
		bool L_1 = String_Equals_m3541721061(L_0, _stringLiteral2831272341, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		__this->set_ViewButton_7(_stringLiteral2831272341);
		__this->set_viewFail_11((bool)1);
		goto IL_0070;
	}

IL_0027:
	{
		String_t* L_2 = ___target;
		NullCheck(L_2);
		bool L_3 = String_Equals_m3541721061(L_2, _stringLiteral1873990600, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		__this->set_FlexButton_8(_stringLiteral1873990600);
		__this->set_flexFail_13((bool)1);
		goto IL_0070;
	}

IL_004e:
	{
		String_t* L_4 = ___target;
		NullCheck(L_4);
		bool L_5 = String_Equals_m3541721061(L_4, _stringLiteral1874107748, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		__this->set_RewardButton_9(_stringLiteral1874107748);
		__this->set_rewardFail_15((bool)1);
	}

IL_0070:
	{
		return;
	}
}
// System.Void Main::OnAdRewardConfirmation(System.String)
extern "C"  void Main_OnAdRewardConfirmation_m291283098 (Main_t2390489 * __this, String_t* ___target, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Main::OnAdShown(System.String)
extern Il2CppCodeGenString* _stringLiteral3878822574;
extern const uint32_t Main_OnAdShown_m2788469971_MetadataUsageId;
extern "C"  void Main_OnAdShown_m2788469971 (Main_t2390489 * __this, String_t* ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_OnAdShown_m2788469971_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3878822574, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::OnAdClicked(System.String)
extern Il2CppCodeGenString* _stringLiteral1318392775;
extern const uint32_t Main_OnAdClicked_m1724270141_MetadataUsageId;
extern "C"  void Main_OnAdClicked_m1724270141 (Main_t2390489 * __this, String_t* ___target, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Main_OnAdClicked_m1724270141_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral1318392775, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPlugin::.ctor()
extern "C"  void MediabrixPlugin__ctor_m4153599957 (MediabrixPlugin_t1639768150 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPlugin::Initialize(System.String,System.String,MediaBrixAdEvents)
extern "C"  void MediabrixPlugin_Initialize_m758839404 (Il2CppObject * __this /* static, unused */, String_t* ___url, String_t* ___appId, Il2CppObject * ___callbacks, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		String_t* L_1 = ___appId;
		Il2CppObject * L_2 = ___callbacks;
		MediabrixPluginIOS_Initialize_m1433513339(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPlugin::Load(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void MediabrixPlugin_Load_m318050794 (Il2CppObject * __this /* static, unused */, String_t* ___target, Dictionary_2_t2606186806 * ___mbrixVars, const MethodInfo* method)
{
	{
		String_t* L_0 = ___target;
		Dictionary_2_t2606186806 * L_1 = ___mbrixVars;
		MediabrixPluginIOS_Load_m2080078587(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPlugin::Show(System.String)
extern "C"  void MediabrixPlugin_Show_m1879219190 (Il2CppObject * __this /* static, unused */, String_t* ___target, const MethodInfo* method)
{
	{
		String_t* L_0 = ___target;
		MediabrixPluginIOS_Show_m3329950789(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPlugin::Pause()
extern "C"  void MediabrixPlugin_Pause_m4207725929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		MediabrixPluginIOS_Pause_m2698769464(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPlugin::Resume()
extern "C"  void MediabrixPlugin_Resume_m4276038716 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		MediabrixPluginIOS_Resume_m448061261(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPlugin::Destroy()
extern "C"  void MediabrixPlugin_Destroy_m3219104237 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		MediabrixPluginIOS_Destroy_m515920124(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPlugin::SetVerbose(System.Boolean)
extern "C"  void MediabrixPlugin_SetVerbose_m275703366 (Il2CppObject * __this /* static, unused */, bool ___debug, const MethodInfo* method)
{
	{
		bool L_0 = ___debug;
		MediabrixPluginIOS_SetVerbose_m2343458583(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPluginIOS::.ctor()
extern "C"  void MediabrixPluginIOS__ctor_m2644643492 (MediabrixPluginIOS_t3669971927 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPluginIOS::mb_initialize_unity(System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL mb_initialize_unity(char*, char*, char*);}
extern "C"  void MediabrixPluginIOS_mb_initialize_unity_m1380466216 (Il2CppObject * __this /* static, unused */, String_t* ___flagKey, String_t* ___flagValue, String_t* ___callbackHandlerName, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)mb_initialize_unity;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'mb_initialize_unity'"));
		}
	}

	// Marshaling of parameter '___flagKey' to native representation
	char* ____flagKey_marshaled = NULL;
	____flagKey_marshaled = il2cpp_codegen_marshal_string(___flagKey);

	// Marshaling of parameter '___flagValue' to native representation
	char* ____flagValue_marshaled = NULL;
	____flagValue_marshaled = il2cpp_codegen_marshal_string(___flagValue);

	// Marshaling of parameter '___callbackHandlerName' to native representation
	char* ____callbackHandlerName_marshaled = NULL;
	____callbackHandlerName_marshaled = il2cpp_codegen_marshal_string(___callbackHandlerName);

	// Native function invocation
	_il2cpp_pinvoke_func(____flagKey_marshaled, ____flagValue_marshaled, ____callbackHandlerName_marshaled);

	// Marshaling cleanup of parameter '___flagKey' native representation
	il2cpp_codegen_marshal_free(____flagKey_marshaled);
	____flagKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___flagValue' native representation
	il2cpp_codegen_marshal_free(____flagValue_marshaled);
	____flagValue_marshaled = NULL;

	// Marshaling cleanup of parameter '___callbackHandlerName' native representation
	il2cpp_codegen_marshal_free(____callbackHandlerName_marshaled);
	____callbackHandlerName_marshaled = NULL;

}
// System.Void MediabrixPluginIOS::mb_load_ad_with_identifier(System.String,System.String)
extern "C" {void DEFAULT_CALL mb_load_ad_with_identifier(char*, char*);}
extern "C"  void MediabrixPluginIOS_mb_load_ad_with_identifier_m1887418921 (Il2CppObject * __this /* static, unused */, String_t* ___identifier, String_t* ___key_value_pairs_null_terminated, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)mb_load_ad_with_identifier;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'mb_load_ad_with_identifier'"));
		}
	}

	// Marshaling of parameter '___identifier' to native representation
	char* ____identifier_marshaled = NULL;
	____identifier_marshaled = il2cpp_codegen_marshal_string(___identifier);

	// Marshaling of parameter '___key_value_pairs_null_terminated' to native representation
	char* ____key_value_pairs_null_terminated_marshaled = NULL;
	____key_value_pairs_null_terminated_marshaled = il2cpp_codegen_marshal_string(___key_value_pairs_null_terminated);

	// Native function invocation
	_il2cpp_pinvoke_func(____identifier_marshaled, ____key_value_pairs_null_terminated_marshaled);

	// Marshaling cleanup of parameter '___identifier' native representation
	il2cpp_codegen_marshal_free(____identifier_marshaled);
	____identifier_marshaled = NULL;

	// Marshaling cleanup of parameter '___key_value_pairs_null_terminated' native representation
	il2cpp_codegen_marshal_free(____key_value_pairs_null_terminated_marshaled);
	____key_value_pairs_null_terminated_marshaled = NULL;

}
// System.Void MediabrixPluginIOS::mb_show_ad_with_identifier(System.String)
extern "C" {void DEFAULT_CALL mb_show_ad_with_identifier(char*);}
extern "C"  void MediabrixPluginIOS_mb_show_ad_with_identifier_m2434635012 (Il2CppObject * __this /* static, unused */, String_t* ___identifier, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)mb_show_ad_with_identifier;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'mb_show_ad_with_identifier'"));
		}
	}

	// Marshaling of parameter '___identifier' to native representation
	char* ____identifier_marshaled = NULL;
	____identifier_marshaled = il2cpp_codegen_marshal_string(___identifier);

	// Native function invocation
	_il2cpp_pinvoke_func(____identifier_marshaled);

	// Marshaling cleanup of parameter '___identifier' native representation
	il2cpp_codegen_marshal_free(____identifier_marshaled);
	____identifier_marshaled = NULL;

}
// System.Void MediabrixPluginIOS::mb_set_verbose(System.String)
extern "C" {void DEFAULT_CALL mb_set_verbose(char*);}
extern "C"  void MediabrixPluginIOS_mb_set_verbose_m3270330215 (Il2CppObject * __this /* static, unused */, String_t* ___flag, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)mb_set_verbose;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'mb_set_verbose'"));
		}
	}

	// Marshaling of parameter '___flag' to native representation
	char* ____flag_marshaled = NULL;
	____flag_marshaled = il2cpp_codegen_marshal_string(___flag);

	// Native function invocation
	_il2cpp_pinvoke_func(____flag_marshaled);

	// Marshaling cleanup of parameter '___flag' native representation
	il2cpp_codegen_marshal_free(____flag_marshaled);
	____flag_marshaled = NULL;

}
// System.String MediabrixPluginIOS::componentSeparatedStringFromDictionaryWithSeparator(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t2956870243_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t2373214747_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3769107138_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3881634252_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m41001384_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m586818491_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2915303667_MethodInfo_var;
extern const uint32_t MediabrixPluginIOS_componentSeparatedStringFromDictionaryWithSeparator_m2779878262_MetadataUsageId;
extern "C"  String_t* MediabrixPluginIOS_componentSeparatedStringFromDictionaryWithSeparator_m2779878262 (Il2CppObject * __this /* static, unused */, Dictionary_2_t2606186806 * ___dictionary, String_t* ___separator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MediabrixPluginIOS_componentSeparatedStringFromDictionaryWithSeparator_m2779878262_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t2094718104  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t2373214747  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_0 = L_0;
		Dictionary_2_t2606186806 * L_1 = ___dictionary;
		NullCheck(L_1);
		Enumerator_t2373214747  L_2 = Dictionary_2_GetEnumerator_m3769107138(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m3769107138_MethodInfo_var);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0012:
		{
			KeyValuePair_2_t2094718104  L_3 = Enumerator_get_Current_m3881634252((&V_2), /*hidden argument*/Enumerator_get_Current_m3881634252_MethodInfo_var);
			V_1 = L_3;
			String_t* L_4 = V_0;
			V_3 = L_4;
			StringU5BU5D_t2956870243* L_5 = ((StringU5BU5D_t2956870243*)SZArrayNew(StringU5BU5D_t2956870243_il2cpp_TypeInfo_var, (uint32_t)5));
			String_t* L_6 = V_3;
			NullCheck(L_5);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
			ArrayElementTypeCheck (L_5, L_6);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
			StringU5BU5D_t2956870243* L_7 = L_5;
			String_t* L_8 = KeyValuePair_2_get_Key_m41001384((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m41001384_MethodInfo_var);
			NullCheck(L_7);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
			StringU5BU5D_t2956870243* L_9 = L_7;
			String_t* L_10 = ___separator;
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
			ArrayElementTypeCheck (L_9, L_10);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
			StringU5BU5D_t2956870243* L_11 = L_9;
			String_t* L_12 = KeyValuePair_2_get_Value_m586818491((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m586818491_MethodInfo_var);
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
			ArrayElementTypeCheck (L_11, L_12);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
			StringU5BU5D_t2956870243* L_13 = L_11;
			String_t* L_14 = ___separator;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
			ArrayElementTypeCheck (L_13, L_14);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_14);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_15 = String_Concat_m21867311(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			V_0 = L_15;
		}

IL_0048:
		{
			bool L_16 = Enumerator_MoveNext_m2915303667((&V_2), /*hidden argument*/Enumerator_MoveNext_m2915303667_MethodInfo_var);
			if (L_16)
			{
				goto IL_0012;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		Enumerator_t2373214747  L_17 = V_2;
		Enumerator_t2373214747  L_18 = L_17;
		Il2CppObject * L_19 = Box(Enumerator_t2373214747_il2cpp_TypeInfo_var, &L_18);
		NullCheck((Il2CppObject *)L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, (Il2CppObject *)L_19);
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0065:
	{
		String_t* L_20 = V_0;
		return L_20;
	}
}
// System.Void MediabrixPluginIOS::Initialize(System.String,System.String,MediaBrixAdEvents)
extern "C"  void MediabrixPluginIOS_Initialize_m1433513339 (Il2CppObject * __this /* static, unused */, String_t* ___url, String_t* ___appId, Il2CppObject * ___callbacks, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		String_t* L_1 = ___appId;
		Il2CppObject * L_2 = ___callbacks;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2022236990(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		MediabrixPluginIOS_mb_initialize_unity_m1380466216(NULL /*static, unused*/, L_0, L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPluginIOS::Load(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t2373214747_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3769107138_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3881634252_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m41001384_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m586818491_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2915303667_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral124;
extern const uint32_t MediabrixPluginIOS_Load_m2080078587_MetadataUsageId;
extern "C"  void MediabrixPluginIOS_Load_m2080078587 (Il2CppObject * __this /* static, unused */, String_t* ___target, Dictionary_2_t2606186806 * ___mbrixVars, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MediabrixPluginIOS_Load_m2080078587_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t2094718104  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t2373214747  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2606186806 * L_0 = ___mbrixVars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___target;
		MediabrixPluginIOS_mb_load_ad_with_identifier_m1887418921(NULL /*static, unused*/, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_0 = L_2;
		Dictionary_2_t2606186806 * L_3 = ___mbrixVars;
		NullCheck(L_3);
		Enumerator_t2373214747  L_4 = Dictionary_2_GetEnumerator_m3769107138(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3769107138_MethodInfo_var);
		V_2 = L_4;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0020:
		{
			KeyValuePair_2_t2094718104  L_5 = Enumerator_get_Current_m3881634252((&V_2), /*hidden argument*/Enumerator_get_Current_m3881634252_MethodInfo_var);
			V_1 = L_5;
			String_t* L_6 = V_0;
			String_t* L_7 = KeyValuePair_2_get_Key_m41001384((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m41001384_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_8 = String_Concat_m138640077(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			V_0 = L_8;
			String_t* L_9 = V_0;
			String_t* L_10 = String_Concat_m138640077(NULL /*static, unused*/, L_9, _stringLiteral124, /*hidden argument*/NULL);
			V_0 = L_10;
			String_t* L_11 = V_0;
			String_t* L_12 = KeyValuePair_2_get_Value_m586818491((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m586818491_MethodInfo_var);
			String_t* L_13 = String_Concat_m138640077(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
			V_0 = L_13;
			String_t* L_14 = V_0;
			String_t* L_15 = String_Concat_m138640077(NULL /*static, unused*/, L_14, _stringLiteral124, /*hidden argument*/NULL);
			V_0 = L_15;
		}

IL_005c:
		{
			bool L_16 = Enumerator_MoveNext_m2915303667((&V_2), /*hidden argument*/Enumerator_MoveNext_m2915303667_MethodInfo_var);
			if (L_16)
			{
				goto IL_0020;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x79, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		Enumerator_t2373214747  L_17 = V_2;
		Enumerator_t2373214747  L_18 = L_17;
		Il2CppObject * L_19 = Box(Enumerator_t2373214747_il2cpp_TypeInfo_var, &L_18);
		NullCheck((Il2CppObject *)L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, (Il2CppObject *)L_19);
		IL2CPP_END_FINALLY(109)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0079:
	{
		String_t* L_20 = ___target;
		String_t* L_21 = V_0;
		MediabrixPluginIOS_mb_load_ad_with_identifier_m1887418921(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPluginIOS::Show(System.String)
extern "C"  void MediabrixPluginIOS_Show_m3329950789 (Il2CppObject * __this /* static, unused */, String_t* ___target, const MethodInfo* method)
{
	{
		String_t* L_0 = ___target;
		MediabrixPluginIOS_mb_show_ad_with_identifier_m2434635012(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MediabrixPluginIOS::Pause()
extern "C"  void MediabrixPluginIOS_Pause_m2698769464 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MediabrixPluginIOS::Resume()
extern "C"  void MediabrixPluginIOS_Resume_m448061261 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MediabrixPluginIOS::Destroy()
extern "C"  void MediabrixPluginIOS_Destroy_m515920124 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MediabrixPluginIOS::SetVerbose(System.Boolean)
extern Il2CppCodeGenString* _stringLiteral3569038;
extern Il2CppCodeGenString* _stringLiteral97196323;
extern const uint32_t MediabrixPluginIOS_SetVerbose_m2343458583_MetadataUsageId;
extern "C"  void MediabrixPluginIOS_SetVerbose_m2343458583 (Il2CppObject * __this /* static, unused */, bool ___verbose, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MediabrixPluginIOS_SetVerbose_m2343458583_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___verbose;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MediabrixPluginIOS_mb_set_verbose_m3270330215(NULL /*static, unused*/, _stringLiteral3569038, /*hidden argument*/NULL);
		goto IL_001f;
	}

IL_0015:
	{
		MediabrixPluginIOS_mb_set_verbose_m3270330215(NULL /*static, unused*/, _stringLiteral97196323, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
