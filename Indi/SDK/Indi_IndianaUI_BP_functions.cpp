// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaUI_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IndianaUI_BP.IndianaUI_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AIndianaUI_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaUI_BP.IndianaUI_BP_C.UserConstructionScript");

	AIndianaUI_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IndianaUI_BP.IndianaUI_BP_C.SetObjective
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ObjectiveName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AIndianaUI_BP_C::STATIC_SetObjective(class AActor* Objective, const class FString& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaUI_BP.IndianaUI_BP_C.SetObjective");

	AIndianaUI_BP_C_SetObjective_Params params;
	params.Objective = Objective;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IndianaUI_BP.IndianaUI_BP_C.ExecuteUbergraph_IndianaUI_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIndianaUI_BP_C::STATIC_ExecuteUbergraph_IndianaUI_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaUI_BP.IndianaUI_BP_C.ExecuteUbergraph_IndianaUI_BP");

	AIndianaUI_BP_C_ExecuteUbergraph_IndianaUI_BP_Params params;
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
