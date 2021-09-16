#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CREA_Sprat_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CREA_Sprat_AnimBlueprint.CREA_Sprat_AnimBlueprint_C
// 0x0000 (0x3BA0 - 0x3BA0)
class UCREA_Sprat_AnimBlueprint_C : public UCREA_Raptidon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CREA_Sprat_AnimBlueprint.CREA_Sprat_AnimBlueprint_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
