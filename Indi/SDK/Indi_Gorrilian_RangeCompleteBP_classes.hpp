#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorrilian_RangeCompleteBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorrilian_RangeCompleteBP.Gorrilian_RangeCompleteBP_C
// 0x0000 (0x0048 - 0x0048)
class UGorrilian_RangeCompleteBP_C : public UDecisionTree_GorillianRangeComplete
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorrilian_RangeCompleteBP.Gorrilian_RangeCompleteBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
