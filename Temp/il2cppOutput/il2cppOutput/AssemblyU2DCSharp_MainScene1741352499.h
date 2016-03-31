#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.String[]
struct StringU5BU5D_t2956870243;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainScene
struct  MainScene_t1741352499  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> MainScene::mbrixVars
	Dictionary_2_t2606186806 * ___mbrixVars_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> MainScene::DefaultMbrixVars
	Dictionary_2_t2606186806 * ___DefaultMbrixVars_18;
	// System.String MainScene::rewardConfirmationLabel
	String_t* ___rewardConfirmationLabel_19;
	// System.String MainScene::viewsButtonLabel
	String_t* ___viewsButtonLabel_20;
	// System.String MainScene::flexButtonLabel
	String_t* ___flexButtonLabel_21;
	// System.String MainScene::rewardsButtonLabel
	String_t* ___rewardsButtonLabel_22;
	// System.Boolean MainScene::serviceAvailable
	bool ___serviceAvailable_23;
	// System.Boolean MainScene::serviceConnecting
	bool ___serviceConnecting_24;
	// System.Boolean MainScene::flexAdLoading
	bool ___flexAdLoading_25;
	// System.Boolean MainScene::flexAdLoaded
	bool ___flexAdLoaded_26;
	// System.Boolean MainScene::flexAdShowing
	bool ___flexAdShowing_27;
	// System.Boolean MainScene::viewsAdLoading
	bool ___viewsAdLoading_28;
	// System.Boolean MainScene::viewsAdLoaded
	bool ___viewsAdLoaded_29;
	// System.Boolean MainScene::viewsAdShowing
	bool ___viewsAdShowing_30;
	// System.Boolean MainScene::rewardsAdLoading
	bool ___rewardsAdLoading_31;
	// System.Boolean MainScene::rewardsAdLoaded
	bool ___rewardsAdLoaded_32;
	// System.Boolean MainScene::rewardsAdShowing
	bool ___rewardsAdShowing_33;
	// System.Int32 MainScene::viewsRewardCount
	int32_t ___viewsRewardCount_34;
	// System.Int32 MainScene::rewardsRewardCount
	int32_t ___rewardsRewardCount_35;
	// System.Int32 MainScene::indexOffset
	int32_t ___indexOffset_36;
	// System.Boolean MainScene::useMbrixVars
	bool ___useMbrixVars_37;
	// System.Boolean MainScene::autoRotate
	bool ___autoRotate_38;
	// System.Boolean MainScene::toggleAutoRotate
	bool ___toggleAutoRotate_39;
	// System.String[] MainScene::mbTextVarNames
	StringU5BU5D_t2956870243* ___mbTextVarNames_40;
	// UnityEngine.GUIStyle MainScene::LabelStyle
	GUIStyle_t1006925219 * ___LabelStyle_41;
	// UnityEngine.GUIStyle MainScene::TextStyle
	GUIStyle_t1006925219 * ___TextStyle_42;

public:
	inline static int32_t get_offset_of_mbrixVars_17() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___mbrixVars_17)); }
	inline Dictionary_2_t2606186806 * get_mbrixVars_17() const { return ___mbrixVars_17; }
	inline Dictionary_2_t2606186806 ** get_address_of_mbrixVars_17() { return &___mbrixVars_17; }
	inline void set_mbrixVars_17(Dictionary_2_t2606186806 * value)
	{
		___mbrixVars_17 = value;
		Il2CppCodeGenWriteBarrier(&___mbrixVars_17, value);
	}

	inline static int32_t get_offset_of_DefaultMbrixVars_18() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___DefaultMbrixVars_18)); }
	inline Dictionary_2_t2606186806 * get_DefaultMbrixVars_18() const { return ___DefaultMbrixVars_18; }
	inline Dictionary_2_t2606186806 ** get_address_of_DefaultMbrixVars_18() { return &___DefaultMbrixVars_18; }
	inline void set_DefaultMbrixVars_18(Dictionary_2_t2606186806 * value)
	{
		___DefaultMbrixVars_18 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultMbrixVars_18, value);
	}

	inline static int32_t get_offset_of_rewardConfirmationLabel_19() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___rewardConfirmationLabel_19)); }
	inline String_t* get_rewardConfirmationLabel_19() const { return ___rewardConfirmationLabel_19; }
	inline String_t** get_address_of_rewardConfirmationLabel_19() { return &___rewardConfirmationLabel_19; }
	inline void set_rewardConfirmationLabel_19(String_t* value)
	{
		___rewardConfirmationLabel_19 = value;
		Il2CppCodeGenWriteBarrier(&___rewardConfirmationLabel_19, value);
	}

	inline static int32_t get_offset_of_viewsButtonLabel_20() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___viewsButtonLabel_20)); }
	inline String_t* get_viewsButtonLabel_20() const { return ___viewsButtonLabel_20; }
	inline String_t** get_address_of_viewsButtonLabel_20() { return &___viewsButtonLabel_20; }
	inline void set_viewsButtonLabel_20(String_t* value)
	{
		___viewsButtonLabel_20 = value;
		Il2CppCodeGenWriteBarrier(&___viewsButtonLabel_20, value);
	}

	inline static int32_t get_offset_of_flexButtonLabel_21() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___flexButtonLabel_21)); }
	inline String_t* get_flexButtonLabel_21() const { return ___flexButtonLabel_21; }
	inline String_t** get_address_of_flexButtonLabel_21() { return &___flexButtonLabel_21; }
	inline void set_flexButtonLabel_21(String_t* value)
	{
		___flexButtonLabel_21 = value;
		Il2CppCodeGenWriteBarrier(&___flexButtonLabel_21, value);
	}

	inline static int32_t get_offset_of_rewardsButtonLabel_22() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___rewardsButtonLabel_22)); }
	inline String_t* get_rewardsButtonLabel_22() const { return ___rewardsButtonLabel_22; }
	inline String_t** get_address_of_rewardsButtonLabel_22() { return &___rewardsButtonLabel_22; }
	inline void set_rewardsButtonLabel_22(String_t* value)
	{
		___rewardsButtonLabel_22 = value;
		Il2CppCodeGenWriteBarrier(&___rewardsButtonLabel_22, value);
	}

	inline static int32_t get_offset_of_serviceAvailable_23() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___serviceAvailable_23)); }
	inline bool get_serviceAvailable_23() const { return ___serviceAvailable_23; }
	inline bool* get_address_of_serviceAvailable_23() { return &___serviceAvailable_23; }
	inline void set_serviceAvailable_23(bool value)
	{
		___serviceAvailable_23 = value;
	}

	inline static int32_t get_offset_of_serviceConnecting_24() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___serviceConnecting_24)); }
	inline bool get_serviceConnecting_24() const { return ___serviceConnecting_24; }
	inline bool* get_address_of_serviceConnecting_24() { return &___serviceConnecting_24; }
	inline void set_serviceConnecting_24(bool value)
	{
		___serviceConnecting_24 = value;
	}

	inline static int32_t get_offset_of_flexAdLoading_25() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___flexAdLoading_25)); }
	inline bool get_flexAdLoading_25() const { return ___flexAdLoading_25; }
	inline bool* get_address_of_flexAdLoading_25() { return &___flexAdLoading_25; }
	inline void set_flexAdLoading_25(bool value)
	{
		___flexAdLoading_25 = value;
	}

	inline static int32_t get_offset_of_flexAdLoaded_26() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___flexAdLoaded_26)); }
	inline bool get_flexAdLoaded_26() const { return ___flexAdLoaded_26; }
	inline bool* get_address_of_flexAdLoaded_26() { return &___flexAdLoaded_26; }
	inline void set_flexAdLoaded_26(bool value)
	{
		___flexAdLoaded_26 = value;
	}

	inline static int32_t get_offset_of_flexAdShowing_27() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___flexAdShowing_27)); }
	inline bool get_flexAdShowing_27() const { return ___flexAdShowing_27; }
	inline bool* get_address_of_flexAdShowing_27() { return &___flexAdShowing_27; }
	inline void set_flexAdShowing_27(bool value)
	{
		___flexAdShowing_27 = value;
	}

	inline static int32_t get_offset_of_viewsAdLoading_28() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___viewsAdLoading_28)); }
	inline bool get_viewsAdLoading_28() const { return ___viewsAdLoading_28; }
	inline bool* get_address_of_viewsAdLoading_28() { return &___viewsAdLoading_28; }
	inline void set_viewsAdLoading_28(bool value)
	{
		___viewsAdLoading_28 = value;
	}

	inline static int32_t get_offset_of_viewsAdLoaded_29() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___viewsAdLoaded_29)); }
	inline bool get_viewsAdLoaded_29() const { return ___viewsAdLoaded_29; }
	inline bool* get_address_of_viewsAdLoaded_29() { return &___viewsAdLoaded_29; }
	inline void set_viewsAdLoaded_29(bool value)
	{
		___viewsAdLoaded_29 = value;
	}

	inline static int32_t get_offset_of_viewsAdShowing_30() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___viewsAdShowing_30)); }
	inline bool get_viewsAdShowing_30() const { return ___viewsAdShowing_30; }
	inline bool* get_address_of_viewsAdShowing_30() { return &___viewsAdShowing_30; }
	inline void set_viewsAdShowing_30(bool value)
	{
		___viewsAdShowing_30 = value;
	}

	inline static int32_t get_offset_of_rewardsAdLoading_31() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___rewardsAdLoading_31)); }
	inline bool get_rewardsAdLoading_31() const { return ___rewardsAdLoading_31; }
	inline bool* get_address_of_rewardsAdLoading_31() { return &___rewardsAdLoading_31; }
	inline void set_rewardsAdLoading_31(bool value)
	{
		___rewardsAdLoading_31 = value;
	}

	inline static int32_t get_offset_of_rewardsAdLoaded_32() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___rewardsAdLoaded_32)); }
	inline bool get_rewardsAdLoaded_32() const { return ___rewardsAdLoaded_32; }
	inline bool* get_address_of_rewardsAdLoaded_32() { return &___rewardsAdLoaded_32; }
	inline void set_rewardsAdLoaded_32(bool value)
	{
		___rewardsAdLoaded_32 = value;
	}

	inline static int32_t get_offset_of_rewardsAdShowing_33() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___rewardsAdShowing_33)); }
	inline bool get_rewardsAdShowing_33() const { return ___rewardsAdShowing_33; }
	inline bool* get_address_of_rewardsAdShowing_33() { return &___rewardsAdShowing_33; }
	inline void set_rewardsAdShowing_33(bool value)
	{
		___rewardsAdShowing_33 = value;
	}

	inline static int32_t get_offset_of_viewsRewardCount_34() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___viewsRewardCount_34)); }
	inline int32_t get_viewsRewardCount_34() const { return ___viewsRewardCount_34; }
	inline int32_t* get_address_of_viewsRewardCount_34() { return &___viewsRewardCount_34; }
	inline void set_viewsRewardCount_34(int32_t value)
	{
		___viewsRewardCount_34 = value;
	}

	inline static int32_t get_offset_of_rewardsRewardCount_35() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___rewardsRewardCount_35)); }
	inline int32_t get_rewardsRewardCount_35() const { return ___rewardsRewardCount_35; }
	inline int32_t* get_address_of_rewardsRewardCount_35() { return &___rewardsRewardCount_35; }
	inline void set_rewardsRewardCount_35(int32_t value)
	{
		___rewardsRewardCount_35 = value;
	}

	inline static int32_t get_offset_of_indexOffset_36() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___indexOffset_36)); }
	inline int32_t get_indexOffset_36() const { return ___indexOffset_36; }
	inline int32_t* get_address_of_indexOffset_36() { return &___indexOffset_36; }
	inline void set_indexOffset_36(int32_t value)
	{
		___indexOffset_36 = value;
	}

	inline static int32_t get_offset_of_useMbrixVars_37() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___useMbrixVars_37)); }
	inline bool get_useMbrixVars_37() const { return ___useMbrixVars_37; }
	inline bool* get_address_of_useMbrixVars_37() { return &___useMbrixVars_37; }
	inline void set_useMbrixVars_37(bool value)
	{
		___useMbrixVars_37 = value;
	}

	inline static int32_t get_offset_of_autoRotate_38() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___autoRotate_38)); }
	inline bool get_autoRotate_38() const { return ___autoRotate_38; }
	inline bool* get_address_of_autoRotate_38() { return &___autoRotate_38; }
	inline void set_autoRotate_38(bool value)
	{
		___autoRotate_38 = value;
	}

	inline static int32_t get_offset_of_toggleAutoRotate_39() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___toggleAutoRotate_39)); }
	inline bool get_toggleAutoRotate_39() const { return ___toggleAutoRotate_39; }
	inline bool* get_address_of_toggleAutoRotate_39() { return &___toggleAutoRotate_39; }
	inline void set_toggleAutoRotate_39(bool value)
	{
		___toggleAutoRotate_39 = value;
	}

	inline static int32_t get_offset_of_mbTextVarNames_40() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___mbTextVarNames_40)); }
	inline StringU5BU5D_t2956870243* get_mbTextVarNames_40() const { return ___mbTextVarNames_40; }
	inline StringU5BU5D_t2956870243** get_address_of_mbTextVarNames_40() { return &___mbTextVarNames_40; }
	inline void set_mbTextVarNames_40(StringU5BU5D_t2956870243* value)
	{
		___mbTextVarNames_40 = value;
		Il2CppCodeGenWriteBarrier(&___mbTextVarNames_40, value);
	}

	inline static int32_t get_offset_of_LabelStyle_41() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___LabelStyle_41)); }
	inline GUIStyle_t1006925219 * get_LabelStyle_41() const { return ___LabelStyle_41; }
	inline GUIStyle_t1006925219 ** get_address_of_LabelStyle_41() { return &___LabelStyle_41; }
	inline void set_LabelStyle_41(GUIStyle_t1006925219 * value)
	{
		___LabelStyle_41 = value;
		Il2CppCodeGenWriteBarrier(&___LabelStyle_41, value);
	}

	inline static int32_t get_offset_of_TextStyle_42() { return static_cast<int32_t>(offsetof(MainScene_t1741352499, ___TextStyle_42)); }
	inline GUIStyle_t1006925219 * get_TextStyle_42() const { return ___TextStyle_42; }
	inline GUIStyle_t1006925219 ** get_address_of_TextStyle_42() { return &___TextStyle_42; }
	inline void set_TextStyle_42(GUIStyle_t1006925219 * value)
	{
		___TextStyle_42 = value;
		Il2CppCodeGenWriteBarrier(&___TextStyle_42, value);
	}
};

struct MainScene_t1741352499_StaticFields
{
public:
	// System.String MainScene::serverURL
	String_t* ___serverURL_14;
	// System.String MainScene::appID
	String_t* ___appID_15;
	// System.String MainScene::BUILD_DATE
	String_t* ___BUILD_DATE_16;

public:
	inline static int32_t get_offset_of_serverURL_14() { return static_cast<int32_t>(offsetof(MainScene_t1741352499_StaticFields, ___serverURL_14)); }
	inline String_t* get_serverURL_14() const { return ___serverURL_14; }
	inline String_t** get_address_of_serverURL_14() { return &___serverURL_14; }
	inline void set_serverURL_14(String_t* value)
	{
		___serverURL_14 = value;
		Il2CppCodeGenWriteBarrier(&___serverURL_14, value);
	}

	inline static int32_t get_offset_of_appID_15() { return static_cast<int32_t>(offsetof(MainScene_t1741352499_StaticFields, ___appID_15)); }
	inline String_t* get_appID_15() const { return ___appID_15; }
	inline String_t** get_address_of_appID_15() { return &___appID_15; }
	inline void set_appID_15(String_t* value)
	{
		___appID_15 = value;
		Il2CppCodeGenWriteBarrier(&___appID_15, value);
	}

	inline static int32_t get_offset_of_BUILD_DATE_16() { return static_cast<int32_t>(offsetof(MainScene_t1741352499_StaticFields, ___BUILD_DATE_16)); }
	inline String_t* get_BUILD_DATE_16() const { return ___BUILD_DATE_16; }
	inline String_t** get_address_of_BUILD_DATE_16() { return &___BUILD_DATE_16; }
	inline void set_BUILD_DATE_16(String_t* value)
	{
		___BUILD_DATE_16 = value;
		Il2CppCodeGenWriteBarrier(&___BUILD_DATE_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
