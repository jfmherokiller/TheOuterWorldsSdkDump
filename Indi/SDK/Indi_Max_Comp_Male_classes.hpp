#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Max_Comp_Male_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Max_Comp_Male.Max_Comp_Male_C
// 0x0008 (0x1140 - 0x1138)
class AMax_Comp_Male_C : public ABase_Companion_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Max_Comp_Male.Max_Comp_Male_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature(class AActor* ZoneOwner);
	void STATIC_ReceiveBeginPlay();
	void STATIC_DEATH_MAX(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnCompanionDismissed_Event_1(bool bCompanionDied);
	void STATIC_ExecuteUbergraph_Max_Comp_Male(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
