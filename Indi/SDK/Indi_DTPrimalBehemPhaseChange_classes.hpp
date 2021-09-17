#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DTPrimalBehemPhaseChange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DTPrimalBehemPhaseChange.DTPrimalBehemPhaseChange_C
// 0x0000 (0x0048 - 0x0048)
class UDTPrimalBehemPhaseChange_C : public UDecisionTree_RandomRequest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DTPrimalBehemPhaseChange.DTPrimalBehemPhaseChange_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
