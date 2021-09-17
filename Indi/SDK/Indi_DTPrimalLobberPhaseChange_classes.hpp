#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DTPrimalLobberPhaseChange_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DTPrimalLobberPhaseChange.DTPrimalLobberPhaseChange_C
// 0x0000 (0x0048 - 0x0048)
class UDTPrimalLobberPhaseChange_C : public UDecisionTree_CombinedRequests
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DTPrimalLobberPhaseChange.DTPrimalLobberPhaseChange_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
