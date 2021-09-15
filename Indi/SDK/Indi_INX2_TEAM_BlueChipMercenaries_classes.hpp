#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_INX2_TEAM_BlueChipMercenaries_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INX2_TEAM_BlueChipMercenaries.INX2_TEAM_BlueChipMercenaries_C
// 0x0000 (0x0238 - 0x0238)
class UINX2_TEAM_BlueChipMercenaries_C : public UTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INX2_TEAM_BlueChipMercenaries.INX2_TEAM_BlueChipMercenaries_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
