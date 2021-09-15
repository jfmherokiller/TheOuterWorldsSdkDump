#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_META_MeleeUnreachable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass META_MeleeUnreachable.META_MeleeUnreachable_C
// 0x0000 (0x0048 - 0x0048)
class UMETA_MeleeUnreachable_C : public UDecisionTree_MeleeUnreachable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass META_MeleeUnreachable.META_MeleeUnreachable_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
