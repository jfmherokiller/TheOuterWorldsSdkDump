#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerCompanionCommandComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCompanionCommandComponent.PlayerCompanionCommandComponent_C
// 0x0000 (0x03F0 - 0x03F0)
class UPlayerCompanionCommandComponent_C : public UCompanionCommandComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCompanionCommandComponent.PlayerCompanionCommandComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
