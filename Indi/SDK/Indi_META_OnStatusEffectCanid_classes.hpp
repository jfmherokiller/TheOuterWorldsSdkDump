#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_META_OnStatusEffectCanid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass META_OnStatusEffectCanid.META_OnStatusEffectCanid_C
// 0x0000 (0x0060 - 0x0060)
class UMETA_OnStatusEffectCanid_C : public UDecisionTree_CanidOnStatusEffectAdded
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass META_OnStatusEffectCanid.META_OnStatusEffectCanid_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
