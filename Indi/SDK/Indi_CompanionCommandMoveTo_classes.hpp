#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionCommandMoveTo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompanionCommandMoveTo.CompanionCommandMoveTo_C
// 0x0000 (0x0048 - 0x0048)
class UCompanionCommandMoveTo_C : public UDecisionTree_CombinedRequests
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CompanionCommandMoveTo.CompanionCommandMoveTo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
