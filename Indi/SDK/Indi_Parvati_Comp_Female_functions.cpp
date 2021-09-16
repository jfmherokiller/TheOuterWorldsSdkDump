// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Parvati_Comp_Female_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Parvati_Comp_Female.Parvati_Comp_Female_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AParvati_Comp_Female_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parvati_Comp_Female.Parvati_Comp_Female_C.UserConstructionScript");

	AParvati_Comp_Female_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parvati_Comp_Female.Parvati_Comp_Female_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void AParvati_Comp_Female_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Parvati_Comp_Female.Parvati_Comp_Female_C.ReceiveBeginPlay");

	AParvati_Comp_Female_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parvati_Comp_Female.Parvati_Comp_Female_C.DEATH_PARVATI
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCauseDamageInfo        CauseDamageInfo                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AParvati_Comp_Female_C::STATIC_DEATH_PARVATI(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parvati_Comp_Female.Parvati_Comp_Female_C.DEATH_PARVATI");

	AParvati_Comp_Female_C_DEATH_PARVATI_Params params;
	params.Instigator = Instigator;
	params.CauseDamageInfo = CauseDamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parvati_Comp_Female.Parvati_Comp_Female_C.OnCompanionDismissed_Event_1
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           bCompanionDied                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParvati_Comp_Female_C::STATIC_OnCompanionDismissed_Event_1(bool bCompanionDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parvati_Comp_Female.Parvati_Comp_Female_C.OnCompanionDismissed_Event_1");

	AParvati_Comp_Female_C_OnCompanionDismissed_Event_1_Params params;
	params.bCompanionDied = bCompanionDied;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Parvati_Comp_Female.Parvati_Comp_Female_C.ExecuteUbergraph_Parvati_Comp_Female
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AParvati_Comp_Female_C::STATIC_ExecuteUbergraph_Parvati_Comp_Female(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Parvati_Comp_Female.Parvati_Comp_Female_C.ExecuteUbergraph_Parvati_Comp_Female");

	AParvati_Comp_Female_C_ExecuteUbergraph_Parvati_Comp_Female_Params params;
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
