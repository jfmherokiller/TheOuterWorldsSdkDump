#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Door_Sound_SlidingInterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Door_Sound_SlidingInterior.Door_Sound_SlidingInterior_C
// 0x0000 (0x01E0 - 0x01E0)
class UDoor_Sound_SlidingInterior_C : public U_Door_Sound_Sliding_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_Sound_SlidingInterior.Door_Sound_SlidingInterior_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
