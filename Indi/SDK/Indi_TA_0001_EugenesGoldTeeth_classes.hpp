#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TA_0001_EugenesGoldTeeth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TA_0001_EugenesGoldTeeth.TA_0001_EugenesGoldTeeth_C
// 0x0000 (0x01D0 - 0x01D0)
class UTA_0001_EugenesGoldTeeth_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TA_0001_EugenesGoldTeeth.TA_0001_EugenesGoldTeeth_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
