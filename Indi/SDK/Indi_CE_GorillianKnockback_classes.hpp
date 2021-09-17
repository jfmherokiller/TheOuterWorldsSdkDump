#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_GorillianKnockback_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_GorillianKnockback.CE_GorillianKnockback_C
// 0x0000 (0x01B8 - 0x01B8)
class UCE_GorillianKnockback_C : public UMultiStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_GorillianKnockback.CE_GorillianKnockback_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
