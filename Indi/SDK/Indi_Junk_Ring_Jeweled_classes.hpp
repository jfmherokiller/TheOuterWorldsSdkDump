#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Junk_Ring_Jeweled_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Junk_Ring_Jeweled.Junk_Ring_Jeweled_C
// 0x0000 (0x0140 - 0x0140)
class UJunk_Ring_Jeweled_C : public UResourceItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Junk_Ring_Jeweled.Junk_Ring_Jeweled_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
