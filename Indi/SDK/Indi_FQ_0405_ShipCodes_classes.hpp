#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FQ_0405_ShipCodes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FQ_0405_ShipCodes.FQ_0405_ShipCodes_C
// 0x0000 (0x01D0 - 0x01D0)
class UFQ_0405_ShipCodes_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FQ_0405_ShipCodes.FQ_0405_ShipCodes_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif