#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_META_AvoidMeleeAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass META_AvoidMeleeAttack.META_AvoidMeleeAttack_C
// 0x0000 (0x0040 - 0x0040)
class UMETA_AvoidMeleeAttack_C : public UDecisionTree_AvoidMeleeAttack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass META_AvoidMeleeAttack.META_AvoidMeleeAttack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
