#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_INX2_CE_BrownVodkaWillies_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INX2_CE_BrownVodkaWillies.INX2_CE_BrownVodkaWillies_C
// 0x0000 (0x01B8 - 0x01B8)
class UINX2_CE_BrownVodkaWillies_C : public UMultiStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INX2_CE_BrownVodkaWillies.INX2_CE_BrownVodkaWillies_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
