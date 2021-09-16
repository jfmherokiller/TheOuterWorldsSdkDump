#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ParvatiOutfit_Generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ParvatiOutfit_Generic.ParvatiOutfit_Generic_C
// 0x0000 (0x0370 - 0x0370)
class UParvatiOutfit_Generic_C : public UParvatiOutfit_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ParvatiOutfit_Generic.ParvatiOutfit_Generic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
