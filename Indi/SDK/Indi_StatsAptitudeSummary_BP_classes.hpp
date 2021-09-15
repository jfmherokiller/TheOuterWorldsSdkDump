#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsAptitudeSummary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C
// 0x0008 (0x0240 - 0x0238)
class UStatsAptitudeSummary_BP_C : public UAptitudeSummaryWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C");
		return ptr;
	}


	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_52_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_78_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_102_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_124_NoParamMCD__DelegateSignature();
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_144_NoParamMCD__DelegateSignature();
	void STATIC_ExecuteUbergraph_StatsAptitudeSummary_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
