#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_ScratchGround_Furniture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorillian_ScratchGround_Furniture.Gorillian_ScratchGround_Furniture_C
// 0x0000 (0x0398 - 0x0398)
class AGorillian_ScratchGround_Furniture_C : public AFurnitureActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorillian_ScratchGround_Furniture.Gorillian_ScratchGround_Furniture_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
