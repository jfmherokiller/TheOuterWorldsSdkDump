#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Cower_ReapplyCD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Cower_ReapplyCD.CE_Cower_ReapplyCD_C
// 0x0000 (0x0230 - 0x0230)
class UCE_Cower_ReapplyCD_C : public UStatModifierStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Cower_ReapplyCD.CE_Cower_ReapplyCD_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
