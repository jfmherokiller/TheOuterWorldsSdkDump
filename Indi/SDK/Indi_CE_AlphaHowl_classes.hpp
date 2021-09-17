#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_AlphaHowl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_AlphaHowl.CE_AlphaHowl_C
// 0x0000 (0x01B8 - 0x01B8)
class UCE_AlphaHowl_C : public UMultiStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_AlphaHowl.CE_AlphaHowl_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
