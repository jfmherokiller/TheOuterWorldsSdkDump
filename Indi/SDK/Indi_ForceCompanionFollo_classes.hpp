#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ForceCompanionFollo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForceCompanionFollo.ForceCompanionFollo_C
// 0x0000 (0x0038 - 0x0038)
class UForceCompanionFollo_C : public UDecisionTree_ForceCompanionFollow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForceCompanionFollo.ForceCompanionFollo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
