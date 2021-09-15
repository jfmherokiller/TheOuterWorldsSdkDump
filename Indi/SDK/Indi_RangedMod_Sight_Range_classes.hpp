#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RangedMod_Sight_Range_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RangedMod_Sight_Range.RangedMod_Sight_Range_C
// 0x0000 (0x01D0 - 0x01D0)
class URangedMod_Sight_Range_C : public URangedSightMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedMod_Sight_Range.RangedMod_Sight_Range_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
