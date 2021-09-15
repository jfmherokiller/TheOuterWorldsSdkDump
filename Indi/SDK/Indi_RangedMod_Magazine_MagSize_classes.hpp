#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RangedMod_Magazine_MagSize_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RangedMod_Magazine_MagSize.RangedMod_Magazine_MagSize_C
// 0x0000 (0x01D0 - 0x01D0)
class URangedMod_Magazine_MagSize_C : public URangedMagazineMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedMod_Magazine_MagSize.RangedMod_Magazine_MagSize_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
