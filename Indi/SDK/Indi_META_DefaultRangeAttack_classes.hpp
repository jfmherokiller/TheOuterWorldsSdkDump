#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_META_DefaultRangeAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass META_DefaultRangeAttack.META_DefaultRangeAttack_C
// 0x0000 (0x0080 - 0x0080)
class UMETA_DefaultRangeAttack_C : public UDecisionTree_DefaultRangeAttack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass META_DefaultRangeAttack.META_DefaultRangeAttack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
