// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionMoveTo_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnAnimationEnd
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionMoveTo_BP_C::STATIC_OnAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnAnimationEnd");

	UCompanionMoveTo_BP_C_OnAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnNewLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionMoveTo_BP_C::STATIC_OnNewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnNewLocation");

	UCompanionMoveTo_BP_C_OnNewLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.Tick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompanionMoveTo_BP_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.Tick");

	UCompanionMoveTo_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionMoveTo_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.Construct");

	UCompanionMoveTo_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnMoveToCancelled
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UCompanionMoveTo_BP_C::STATIC_OnMoveToCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnMoveToCancelled");

	UCompanionMoveTo_BP_C_OnMoveToCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.ExecuteUbergraph_CompanionMoveTo_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCompanionMoveTo_BP_C::STATIC_ExecuteUbergraph_CompanionMoveTo_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.ExecuteUbergraph_CompanionMoveTo_BP");

	UCompanionMoveTo_BP_C_ExecuteUbergraph_CompanionMoveTo_BP_Params params;
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
