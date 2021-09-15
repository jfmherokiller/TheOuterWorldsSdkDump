// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Drink_Rizzo_SpectrumVodkaYellow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Drink_Rizzo_SpectrumVodkaYellow.Drink_Rizzo_SpectrumVodkaYellow_C.SetObjective
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ObjectiveName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDrink_Rizzo_SpectrumVodkaYellow_C::STATIC_SetObjective(class AActor* Objective, const class FString& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drink_Rizzo_SpectrumVodkaYellow.Drink_Rizzo_SpectrumVodkaYellow_C.SetObjective");

	UDrink_Rizzo_SpectrumVodkaYellow_C_SetObjective_Params params;
	params.Objective = Objective;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drink_Rizzo_SpectrumVodkaYellow.Drink_Rizzo_SpectrumVodkaYellow_C.ExecuteUbergraph_Drink_Rizzo_SpectrumVodkaYellow
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDrink_Rizzo_SpectrumVodkaYellow_C::STATIC_ExecuteUbergraph_Drink_Rizzo_SpectrumVodkaYellow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drink_Rizzo_SpectrumVodkaYellow.Drink_Rizzo_SpectrumVodkaYellow_C.ExecuteUbergraph_Drink_Rizzo_SpectrumVodkaYellow");

	UDrink_Rizzo_SpectrumVodkaYellow_C_ExecuteUbergraph_Drink_Rizzo_SpectrumVodkaYellow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
