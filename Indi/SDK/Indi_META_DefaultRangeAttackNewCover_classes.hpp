#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_META_DefaultRangeAttackNewCover_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass META_DefaultRangeAttackNewCover.META_DefaultRangeAttackNewCover_C
// 0x0000 (0x0080 - 0x0080)
class UMETA_DefaultRangeAttackNewCover_C : public UDecisionTree_DefaultRangeAttack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass META_DefaultRangeAttackNewCover.META_DefaultRangeAttackNewCover_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
