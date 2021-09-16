// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Max_Comp_Male_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Max_Comp_Male.Max_Comp_Male_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AMax_Comp_Male_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Max_Comp_Male.Max_Comp_Male_C.UserConstructionScript");

	AMax_Comp_Male_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Max_Comp_Male.Max_Comp_Male_C.BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  ZoneOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMax_Comp_Male_C::STATIC_BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature(class AActor* ZoneOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Max_Comp_Male.Max_Comp_Male_C.BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature");

	AMax_Comp_Male_C_BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature_Params params;
	params.ZoneOwner = ZoneOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Max_Comp_Male.Max_Comp_Male_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AMax_Comp_Male_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Max_Comp_Male.Max_Comp_Male_C.ReceiveBeginPlay");

	AMax_Comp_Male_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Max_Comp_Male.Max_Comp_Male_C.DEATH_MAX
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCauseDamageInfo        CauseDamageInfo                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMax_Comp_Male_C::STATIC_DEATH_MAX(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Max_Comp_Male.Max_Comp_Male_C.DEATH_MAX");

	AMax_Comp_Male_C_DEATH_MAX_Params params;
	params.Instigator = Instigator;
	params.CauseDamageInfo = CauseDamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Max_Comp_Male.Max_Comp_Male_C.OnCompanionDismissed_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bCompanionDied                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMax_Comp_Male_C::STATIC_OnCompanionDismissed_Event_1(bool bCompanionDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function Max_Comp_Male.Max_Comp_Male_C.OnCompanionDismissed_Event_1");

	AMax_Comp_Male_C_OnCompanionDismissed_Event_1_Params params;
	params.bCompanionDied = bCompanionDied;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Max_Comp_Male.Max_Comp_Male_C.ExecuteUbergraph_Max_Comp_Male
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMax_Comp_Male_C::STATIC_ExecuteUbergraph_Max_Comp_Male(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Max_Comp_Male.Max_Comp_Male_C.ExecuteUbergraph_Max_Comp_Male");

	AMax_Comp_Male_C_ExecuteUbergraph_Max_Comp_Male_Params params;
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
