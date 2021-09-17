#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_Campfire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hazard_Campfire.Hazard_Campfire_C
// 0x0020 (0x0518 - 0x04F8)
class AHazard_Campfire_C : public AHazard_Abstract_Fire_C
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Campfire.Hazard_Campfire_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_OnHazardDisabled_Event_Base();
	void STATIC_OnHazardEnabled_Event_Base();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Hazard_Campfire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
