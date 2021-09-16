#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CQ_Parvati_Ingredient_Dessert_One_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CQ_Parvati_Ingredient_Dessert_One.CQ_Parvati_Ingredient_Dessert_One_C
// 0x0000 (0x01D0 - 0x01D0)
class UCQ_Parvati_Ingredient_Dessert_One_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CQ_Parvati_Ingredient_Dessert_One.CQ_Parvati_Ingredient_Dessert_One_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
