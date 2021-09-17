#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_ShipAI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0001_ShipAI.0001_ShipAI_C
// 0x0030 (0x1130 - 0x1100)
class A0001_ShipAI_C : public ABase_Ai_Character_C
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x1100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0001_ShipAI.0001_ShipAI_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature(class AActor* ZoneOwner);
	void STATIC_ExecuteUbergraph_0001_ShipAI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
