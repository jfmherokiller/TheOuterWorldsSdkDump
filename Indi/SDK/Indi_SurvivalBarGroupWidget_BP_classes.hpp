#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SurvivalBarGroupWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SurvivalBarGroupWidget_BP.SurvivalBarGroupWidget_BP_C
// 0x0000 (0x02F8 - 0x02F8)
class USurvivalBarGroupWidget_BP_C : public USurvivalBarGroupWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvivalBarGroupWidget_BP.SurvivalBarGroupWidget_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
