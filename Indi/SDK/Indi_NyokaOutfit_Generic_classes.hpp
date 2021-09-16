#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NyokaOutfit_Generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NyokaOutfit_Generic.NyokaOutfit_Generic_C
// 0x0000 (0x0370 - 0x0370)
class UNyokaOutfit_Generic_C : public UNyokaOutfit_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NyokaOutfit_Generic.NyokaOutfit_Generic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
