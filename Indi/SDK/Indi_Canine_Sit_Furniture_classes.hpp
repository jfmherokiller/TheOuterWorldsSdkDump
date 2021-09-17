#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Canine_Sit_Furniture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Canine_Sit_Furniture.Canine_Sit_Furniture_C
// 0x0000 (0x0398 - 0x0398)
class ACanine_Sit_Furniture_C : public AFurnitureBase_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Canine_Sit_Furniture.Canine_Sit_Furniture_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
