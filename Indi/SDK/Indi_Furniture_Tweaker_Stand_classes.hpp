#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Furniture_Tweaker_Stand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Furniture_Tweaker_Stand.Furniture_Tweaker_Stand_C
// 0x0000 (0x0398 - 0x0398)
class AFurniture_Tweaker_Stand_C : public AFurnitureBase_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_Tweaker_Stand.Furniture_Tweaker_Stand_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
