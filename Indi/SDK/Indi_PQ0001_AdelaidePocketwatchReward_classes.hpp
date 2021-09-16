#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PQ0001_AdelaidePocketwatchReward_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PQ0001_AdelaidePocketwatchReward.PQ0001_AdelaidePocketwatchReward_C
// 0x0000 (0x0140 - 0x0140)
class UPQ0001_AdelaidePocketwatchReward_C : public UResourceItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PQ0001_AdelaidePocketwatchReward.PQ0001_AdelaidePocketwatchReward_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
