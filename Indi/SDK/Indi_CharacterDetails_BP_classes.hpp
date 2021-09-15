#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CharacterDetails_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CharacterDetails_BP.CharacterDetails_BP_C
// 0x0020 (0x0300 - 0x02E0)
class UCharacterDetails_BP_C : public UCharacterDetailsWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterDetails_BP.CharacterDetails_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
