#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_HurlerRangeFinish_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorillian_HurlerRangeFinish.Gorillian_HurlerRangeFinish_C
// 0x0000 (0x0048 - 0x0048)
class UGorillian_HurlerRangeFinish_C : public UDecisionTree_RandomRequest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorillian_HurlerRangeFinish.Gorillian_HurlerRangeFinish_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
