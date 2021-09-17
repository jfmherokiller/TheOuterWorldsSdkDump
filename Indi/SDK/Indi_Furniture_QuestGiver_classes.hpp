#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Furniture_QuestGiver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Furniture_QuestGiver.Furniture_QuestGiver_C
// 0x0000 (0x0398 - 0x0398)
class AFurniture_QuestGiver_C : public AFurnitureBase_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Furniture_QuestGiver.Furniture_QuestGiver_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
