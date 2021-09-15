#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsPerkEntryButton_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StatsPerkEntryButton_BP.StatsPerkEntryButton_BP_C
// 0x0000 (0x0B08 - 0x0B08)
class UStatsPerkEntryButton_BP_C : public UButtonBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatsPerkEntryButton_BP.StatsPerkEntryButton_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
