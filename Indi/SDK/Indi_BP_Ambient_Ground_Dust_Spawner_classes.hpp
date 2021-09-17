#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Ambient_Ground_Dust_Spawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ambient_Ground_Dust_Spawner.BP_Ambient_Ground_Dust_Spawner_C
// 0x0000 (0x03C8 - 0x03C8)
class ABP_Ambient_Ground_Dust_Spawner_C : public ABP_Ground_Spawner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ambient_Ground_Dust_Spawner.BP_Ambient_Ground_Dust_Spawner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
