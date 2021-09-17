#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Canid_DefaultAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Canid_DefaultAttack.Canid_DefaultAttack_C
// 0x0000 (0x0058 - 0x0058)
class UCanid_DefaultAttack_C : public UDecisionTree_DefaultAttack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Canid_DefaultAttack.Canid_DefaultAttack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
