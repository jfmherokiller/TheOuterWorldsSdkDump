#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NPC_Sound_PrimalBehemoth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPC_Sound_PrimalBehemoth.NPC_Sound_PrimalBehemoth_C
// 0x0000 (0x02C0 - 0x02C0)
class UNPC_Sound_PrimalBehemoth_C : public UIndianaAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPC_Sound_PrimalBehemoth.NPC_Sound_PrimalBehemoth_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
