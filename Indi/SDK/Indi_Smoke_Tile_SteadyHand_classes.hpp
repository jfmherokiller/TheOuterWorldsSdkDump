#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Smoke_Tile_SteadyHand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Smoke_Tile_SteadyHand.Smoke_Tile_SteadyHand_C
// 0x0000 (0x0230 - 0x0230)
class USmoke_Tile_SteadyHand_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Smoke_Tile_SteadyHand.Smoke_Tile_SteadyHand_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
