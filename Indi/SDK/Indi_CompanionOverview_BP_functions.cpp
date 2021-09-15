// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionOverview_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompanionOverview_BP.CompanionOverview_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionOverview_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionOverview_BP.CompanionOverview_BP_C.Construct");

	UCompanionOverview_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionOverview_BP.CompanionOverview_BP_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompanionOverview_BP_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionOverview_BP.CompanionOverview_BP_C.Tick");

	UCompanionOverview_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionOverview_BP.CompanionOverview_BP_C.OnMadeActive
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionOverview_BP_C::STATIC_OnMadeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionOverview_BP.CompanionOverview_BP_C.OnMadeActive");

	UCompanionOverview_BP_C_OnMadeActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionOverview_BP.CompanionOverview_BP_C.OnMadeInactive
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionOverview_BP_C::STATIC_OnMadeInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionOverview_BP.CompanionOverview_BP_C.OnMadeInactive");

	UCompanionOverview_BP_C_OnMadeInactive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionOverview_BP.CompanionOverview_BP_C.OnNoStatusEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionOverview_BP_C::STATIC_OnNoStatusEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionOverview_BP.CompanionOverview_BP_C.OnNoStatusEffect");

	UCompanionOverview_BP_C_OnNoStatusEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionOverview_BP.CompanionOverview_BP_C.OnFirstStatusEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionOverview_BP_C::STATIC_OnFirstStatusEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionOverview_BP.CompanionOverview_BP_C.OnFirstStatusEffect");

	UCompanionOverview_BP_C_OnFirstStatusEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionOverview_BP.CompanionOverview_BP_C.OnAnimInOutComplete
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionOverview_BP_C::STATIC_OnAnimInOutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionOverview_BP.CompanionOverview_BP_C.OnAnimInOutComplete");

	UCompanionOverview_BP_C_OnAnimInOutComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionOverview_BP.CompanionOverview_BP_C.ExecuteUbergraph_CompanionOverview_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompanionOverview_BP_C::STATIC_ExecuteUbergraph_CompanionOverview_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionOverview_BP.CompanionOverview_BP_C.ExecuteUbergraph_CompanionOverview_BP");

	UCompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP_Params params;
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
