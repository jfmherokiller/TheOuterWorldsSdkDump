#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PQ_0002_GeothermalPasscode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PQ_0002_GeothermalPasscode.PQ_0002_GeothermalPasscode_C
// 0x0000 (0x01D0 - 0x01D0)
class UPQ_0002_GeothermalPasscode_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PQ_0002_GeothermalPasscode.PQ_0002_GeothermalPasscode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
