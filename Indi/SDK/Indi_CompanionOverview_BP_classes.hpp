#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionOverview_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CompanionOverview_BP.CompanionOverview_BP_C
// 0x0030 (0x0398 - 0x0368)
class UCompanionOverview_BP_C : public UCompanionOverviewWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0368(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompanionOverview_BP.CompanionOverview_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_OnMadeActive();
	void STATIC_OnMadeInactive();
	void STATIC_OnNoStatusEffect();
	void STATIC_OnFirstStatusEffect();
	void STATIC_OnAnimInOutComplete();
	void STATIC_ExecuteUbergraph_CompanionOverview_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
