#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_Eat_Furniture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gorillian_Eat_Furniture.Gorillian_Eat_Furniture_C
// 0x0010 (0x03A8 - 0x0398)
class AGorillian_Eat_Furniture_C : public AFurnitureBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gorillian_Eat_Furniture.Gorillian_Eat_Furniture_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
