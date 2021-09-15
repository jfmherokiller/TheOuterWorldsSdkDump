#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Shrink_GhostDebuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Shrink_GhostDebuff.CE_Shrink_GhostDebuff_C
// 0x0000 (0x0188 - 0x0188)
class UCE_Shrink_GhostDebuff_C : public UEmptyStatusEffect_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Shrink_GhostDebuff.CE_Shrink_GhostDebuff_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
