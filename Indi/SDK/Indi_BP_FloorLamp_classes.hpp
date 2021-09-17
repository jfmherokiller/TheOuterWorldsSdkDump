#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_FloorLamp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FloorLamp.BP_FloorLamp_C
// 0x003E (0x03C6 - 0x0388)
class ABP_FloorLamp_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3E];                                      // 0x0388(0x003E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FloorLamp.BP_FloorLamp_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
