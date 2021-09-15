#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionMoveTo_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CompanionMoveTo_BP.CompanionMoveTo_BP_C
// 0x0020 (0x02D0 - 0x02B0)
class UCompanionMoveTo_BP_C : public UCompanionMoveToWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompanionMoveTo_BP.CompanionMoveTo_BP_C");
		return ptr;
	}


	void STATIC_OnAnimationEnd();
	void STATIC_OnNewLocation();
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_Construct();
	void STATIC_OnMoveToCancelled();
	void STATIC_ExecuteUbergraph_CompanionMoveTo_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
