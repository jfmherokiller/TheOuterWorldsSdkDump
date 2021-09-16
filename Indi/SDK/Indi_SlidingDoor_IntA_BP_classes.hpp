#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingDoor_IntA_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlidingDoor_IntA_BP.SlidingDoor_IntA_BP_C
// 0x0000 (0x0660 - 0x0660)
class ASlidingDoor_IntA_BP_C : public ASlidingDoor_Int_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlidingDoor_IntA_BP.SlidingDoor_IntA_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
