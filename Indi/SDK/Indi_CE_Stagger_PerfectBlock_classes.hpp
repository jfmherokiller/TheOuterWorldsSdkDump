#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Stagger_PerfectBlock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Stagger_PerfectBlock.CE_Stagger_PerfectBlock_C
// 0x0000 (0x0200 - 0x0200)
class UCE_Stagger_PerfectBlock_C : public UCE_Stagger_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Stagger_PerfectBlock.CE_Stagger_PerfectBlock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
