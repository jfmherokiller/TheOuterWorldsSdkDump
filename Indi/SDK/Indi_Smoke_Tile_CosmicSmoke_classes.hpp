#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Smoke_Tile_CosmicSmoke_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Smoke_Tile_CosmicSmoke.Smoke_Tile_CosmicSmoke_C
// 0x0000 (0x0230 - 0x0230)
class USmoke_Tile_CosmicSmoke_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Smoke_Tile_CosmicSmoke.Smoke_Tile_CosmicSmoke_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
