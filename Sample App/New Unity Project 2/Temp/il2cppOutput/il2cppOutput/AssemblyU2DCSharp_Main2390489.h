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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Main
struct  Main_t2390489  : public MonoBehaviour_t3012272455
{
public:
	// System.String Main::ViewButton
	String_t* ___ViewButton_7;
	// System.String Main::FlexButton
	String_t* ___FlexButton_8;
	// System.String Main::RewardButton
	String_t* ___RewardButton_9;
	// System.Boolean Main::started
	bool ___started_10;
	// System.Boolean Main::viewFail
	bool ___viewFail_11;
	// System.Boolean Main::flexLoad
	bool ___flexLoad_12;
	// System.Boolean Main::flexFail
	bool ___flexFail_13;
	// System.Boolean Main::rewardLoad
	bool ___rewardLoad_14;
	// System.Boolean Main::rewardFail
	bool ___rewardFail_15;

public:
	inline static int32_t get_offset_of_ViewButton_7() { return static_cast<int32_t>(offsetof(Main_t2390489, ___ViewButton_7)); }
	inline String_t* get_ViewButton_7() const { return ___ViewButton_7; }
	inline String_t** get_address_of_ViewButton_7() { return &___ViewButton_7; }
	inline void set_ViewButton_7(String_t* value)
	{
		___ViewButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___ViewButton_7, value);
	}

	inline static int32_t get_offset_of_FlexButton_8() { return static_cast<int32_t>(offsetof(Main_t2390489, ___FlexButton_8)); }
	inline String_t* get_FlexButton_8() const { return ___FlexButton_8; }
	inline String_t** get_address_of_FlexButton_8() { return &___FlexButton_8; }
	inline void set_FlexButton_8(String_t* value)
	{
		___FlexButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___FlexButton_8, value);
	}

	inline static int32_t get_offset_of_RewardButton_9() { return static_cast<int32_t>(offsetof(Main_t2390489, ___RewardButton_9)); }
	inline String_t* get_RewardButton_9() const { return ___RewardButton_9; }
	inline String_t** get_address_of_RewardButton_9() { return &___RewardButton_9; }
	inline void set_RewardButton_9(String_t* value)
	{
		___RewardButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___RewardButton_9, value);
	}

	inline static int32_t get_offset_of_started_10() { return static_cast<int32_t>(offsetof(Main_t2390489, ___started_10)); }
	inline bool get_started_10() const { return ___started_10; }
	inline bool* get_address_of_started_10() { return &___started_10; }
	inline void set_started_10(bool value)
	{
		___started_10 = value;
	}

	inline static int32_t get_offset_of_viewFail_11() { return static_cast<int32_t>(offsetof(Main_t2390489, ___viewFail_11)); }
	inline bool get_viewFail_11() const { return ___viewFail_11; }
	inline bool* get_address_of_viewFail_11() { return &___viewFail_11; }
	inline void set_viewFail_11(bool value)
	{
		___viewFail_11 = value;
	}

	inline static int32_t get_offset_of_flexLoad_12() { return static_cast<int32_t>(offsetof(Main_t2390489, ___flexLoad_12)); }
	inline bool get_flexLoad_12() const { return ___flexLoad_12; }
	inline bool* get_address_of_flexLoad_12() { return &___flexLoad_12; }
	inline void set_flexLoad_12(bool value)
	{
		___flexLoad_12 = value;
	}

	inline static int32_t get_offset_of_flexFail_13() { return static_cast<int32_t>(offsetof(Main_t2390489, ___flexFail_13)); }
	inline bool get_flexFail_13() const { return ___flexFail_13; }
	inline bool* get_address_of_flexFail_13() { return &___flexFail_13; }
	inline void set_flexFail_13(bool value)
	{
		___flexFail_13 = value;
	}

	inline static int32_t get_offset_of_rewardLoad_14() { return static_cast<int32_t>(offsetof(Main_t2390489, ___rewardLoad_14)); }
	inline bool get_rewardLoad_14() const { return ___rewardLoad_14; }
	inline bool* get_address_of_rewardLoad_14() { return &___rewardLoad_14; }
	inline void set_rewardLoad_14(bool value)
	{
		___rewardLoad_14 = value;
	}

	inline static int32_t get_offset_of_rewardFail_15() { return static_cast<int32_t>(offsetof(Main_t2390489, ___rewardFail_15)); }
	inline bool get_rewardFail_15() const { return ___rewardFail_15; }
	inline bool* get_address_of_rewardFail_15() { return &___rewardFail_15; }
	inline void set_rewardFail_15(bool value)
	{
		___rewardFail_15 = value;
	}
};

struct Main_t2390489_StaticFields
{
public:
	// System.String Main::serverURL
	String_t* ___serverURL_5;
	// System.String Main::appID
	String_t* ___appID_6;

public:
	inline static int32_t get_offset_of_serverURL_5() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___serverURL_5)); }
	inline String_t* get_serverURL_5() const { return ___serverURL_5; }
	inline String_t** get_address_of_serverURL_5() { return &___serverURL_5; }
	inline void set_serverURL_5(String_t* value)
	{
		___serverURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___serverURL_5, value);
	}

	inline static int32_t get_offset_of_appID_6() { return static_cast<int32_t>(offsetof(Main_t2390489_StaticFields, ___appID_6)); }
	inline String_t* get_appID_6() const { return ___appID_6; }
	inline String_t** get_address_of_appID_6() { return &___appID_6; }
	inline void set_appID_6(String_t* value)
	{
		___appID_6 = value;
		Il2CppCodeGenWriteBarrier(&___appID_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
