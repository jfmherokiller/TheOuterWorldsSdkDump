#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SQ_0003_Marauder03Proof_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SQ_0003_Marauder03Proof.SQ_0003_Marauder03Proof_C
// 0x0000 (0x01D0 - 0x01D0)
class USQ_0003_Marauder03Proof_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SQ_0003_Marauder03Proof.SQ_0003_Marauder03Proof_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
