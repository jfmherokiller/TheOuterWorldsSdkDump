#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_SmokeLow_Wait_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_SmokeLow_Wait.CE_SmokeLow_Wait_C
// 0x0000 (0x0198 - 0x0198)
class UCE_SmokeLow_Wait_C : public UCastSpellStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_SmokeLow_Wait.CE_SmokeLow_Wait_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
