// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SlidingDoor_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SlidingDoor_BP.SlidingDoor_BP_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASlidingDoor_BP_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoor_BP.SlidingDoor_BP_C.UserConstructionScript");

	ASlidingDoor_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__FinishedFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASlidingDoor_BP_C::STATIC_AnimateDoors__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__FinishedFunc");

	ASlidingDoor_BP_C_AnimateDoors__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__UpdateFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASlidingDoor_BP_C::STATIC_AnimateDoors__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__UpdateFunc");

	ASlidingDoor_BP_C_AnimateDoors__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__NewTrack_0__EventFunc
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASlidingDoor_BP_C::STATIC_AnimateDoors__NewTrack_0__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoor_BP.SlidingDoor_BP_C.AnimateDoors__NewTrack_0__EventFunc");

	ASlidingDoor_BP_C_AnimateDoors__NewTrack_0__EventFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoor_BP.SlidingDoor_BP_C.OnStateChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ASlidingDoor_BP_C::STATIC_OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoor_BP.SlidingDoor_BP_C.OnStateChanged");

	ASlidingDoor_BP_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoor_BP.SlidingDoor_BP_C.OnAnimateOpen
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASlidingDoor_BP_C::STATIC_OnAnimateOpen(bool* InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoor_BP.SlidingDoor_BP_C.OnAnimateOpen");

	ASlidingDoor_BP_C_OnAnimateOpen_Params params;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoor_BP.SlidingDoor_BP_C.OnAnimateClose
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          IgnoreSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InstantAnimation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASlidingDoor_BP_C::STATIC_OnAnimateClose(bool* IgnoreSound, bool* InstantAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoor_BP.SlidingDoor_BP_C.OnAnimateClose");

	ASlidingDoor_BP_C_OnAnimateClose_Params params;
	params.IgnoreSound = IgnoreSound;
	params.InstantAnimation = InstantAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SlidingDoor_BP.SlidingDoor_BP_C.ExecuteUbergraph_SlidingDoor_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASlidingDoor_BP_C::STATIC_ExecuteUbergraph_SlidingDoor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SlidingDoor_BP.SlidingDoor_BP_C.ExecuteUbergraph_SlidingDoor_BP");

	ASlidingDoor_BP_C_ExecuteUbergraph_SlidingDoor_BP_Params params;
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
