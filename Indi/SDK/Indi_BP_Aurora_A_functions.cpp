// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Aurora_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Aurora_A.BP_Aurora_A_C.SetOpacity
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          NewOpacity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Aurora_A_C::STATIC_SetOpacity(float NewOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Aurora_A.BP_Aurora_A_C.SetOpacity");

	ABP_Aurora_A_C_SetOpacity_Params params;
	params.NewOpacity = NewOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Aurora_A.BP_Aurora_A_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Aurora_A_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Aurora_A.BP_Aurora_A_C.UserConstructionScript");

	ABP_Aurora_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Aurora_A.BP_Aurora_A_C.FadeInTimeline__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Aurora_A_C::STATIC_FadeInTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Aurora_A.BP_Aurora_A_C.FadeInTimeline__FinishedFunc");

	ABP_Aurora_A_C_FadeInTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Aurora_A.BP_Aurora_A_C.FadeInTimeline__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABP_Aurora_A_C::STATIC_FadeInTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Aurora_A.BP_Aurora_A_C.FadeInTimeline__UpdateFunc");

	ABP_Aurora_A_C_FadeInTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Aurora_A.BP_Aurora_A_C.FadeIn
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          FadeTimeSeconds                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Aurora_A_C::STATIC_FadeIn(float FadeTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Aurora_A.BP_Aurora_A_C.FadeIn");

	ABP_Aurora_A_C_FadeIn_Params params;
	params.FadeTimeSeconds = FadeTimeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Aurora_A.BP_Aurora_A_C.FadeOut
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          FadeTimeSeconds                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Aurora_A_C::STATIC_FadeOut(float FadeTimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Aurora_A.BP_Aurora_A_C.FadeOut");

	ABP_Aurora_A_C_FadeOut_Params params;
	params.FadeTimeSeconds = FadeTimeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Aurora_A.BP_Aurora_A_C.ExecuteUbergraph_BP_Aurora_A
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Aurora_A_C::STATIC_ExecuteUbergraph_BP_Aurora_A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Aurora_A.BP_Aurora_A_C.ExecuteUbergraph_BP_Aurora_A");

	ABP_Aurora_A_C_ExecuteUbergraph_BP_Aurora_A_Params params;
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
