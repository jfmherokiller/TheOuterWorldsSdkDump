#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Critter_Bird_FlyOff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Critter_Bird_FlyOff.Critter_Bird_FlyOff_C
// 0x0000 (0x03A8 - 0x03A8)
class ACritter_Bird_FlyOff_C : public AReactiveEnvironmentActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Critter_Bird_FlyOff.Critter_Bird_FlyOff_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
