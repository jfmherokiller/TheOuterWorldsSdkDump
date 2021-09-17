#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_META_CanidMeleeAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass META_CanidMeleeAttack.META_CanidMeleeAttack_C
// 0x0000 (0x0068 - 0x0068)
class UMETA_CanidMeleeAttack_C : public UDecisionTree_CanidMeleeAttack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass META_CanidMeleeAttack.META_CanidMeleeAttack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
