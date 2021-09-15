#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WorldSpaceTextGenerator_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSpaceTextGenerator_BP.WorldSpaceTextGenerator_BP_C
// 0x0000 (0x0100 - 0x0100)
class UWorldSpaceTextGenerator_BP_C : public UWorldSpaceDamageTextGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSpaceTextGenerator_BP.WorldSpaceTextGenerator_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
