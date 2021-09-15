#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Drink_Rizzo_SpectrumVodkaYellow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Drink_Rizzo_SpectrumVodkaYellow.Drink_Rizzo_SpectrumVodkaYellow_C.SetObjective
struct UDrink_Rizzo_SpectrumVodkaYellow_C_SetObjective_Params
{
	class AActor*                                      Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ObjectiveName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Drink_Rizzo_SpectrumVodkaYellow.Drink_Rizzo_SpectrumVodkaYellow_C.ExecuteUbergraph_Drink_Rizzo_SpectrumVodkaYellow
struct UDrink_Rizzo_SpectrumVodkaYellow_C_ExecuteUbergraph_Drink_Rizzo_SpectrumVodkaYellow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
