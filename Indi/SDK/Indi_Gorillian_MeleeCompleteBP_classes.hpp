#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_MeleeCompleteBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorillian_MeleeCompleteBP.Gorillian_MeleeCompleteBP_C
// 0x0000 (0x0040 - 0x0040)
class UGorillian_MeleeCompleteBP_C : public UDecisionTree_GorillianMeleeComplete
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorillian_MeleeCompleteBP.Gorillian_MeleeCompleteBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
