#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LineOfFireBlocked_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LineOfFireBlocked.LineOfFireBlocked_C
// 0x0000 (0x0038 - 0x0038)
class ULineOfFireBlocked_C : public UDecisionTree_LineOfFireBlocked
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LineOfFireBlocked.LineOfFireBlocked_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
