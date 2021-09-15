// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TerminalResponse_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TerminalResponse_BP.TerminalResponse_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UTerminalResponse_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerminalResponse_BP.TerminalResponse_BP_C.Construct");

	UTerminalResponse_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerminalResponse_BP.TerminalResponse_BP_C.OnResponseSkillsChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bContainsSkillCheck            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerminalResponse_BP_C::STATIC_OnResponseSkillsChanged(bool* bContainsSkillCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerminalResponse_BP.TerminalResponse_BP_C.OnResponseSkillsChanged");

	UTerminalResponse_BP_C_OnResponseSkillsChanged_Params params;
	params.bContainsSkillCheck = bContainsSkillCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerminalResponse_BP.TerminalResponse_BP_C.OnSetSelectableOption
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bSelectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerminalResponse_BP_C::STATIC_OnSetSelectableOption(bool* bSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerminalResponse_BP.TerminalResponse_BP_C.OnSetSelectableOption");

	UTerminalResponse_BP_C_OnSetSelectableOption_Params params;
	params.bSelectable = bSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerminalResponse_BP.TerminalResponse_BP_C.OnSetSkillCheckRequiredCompanion
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bSelectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerminalResponse_BP_C::STATIC_OnSetSkillCheckRequiredCompanion(bool* bSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerminalResponse_BP.TerminalResponse_BP_C.OnSetSkillCheckRequiredCompanion");

	UTerminalResponse_BP_C_OnSetSkillCheckRequiredCompanion_Params params;
	params.bSelectable = bSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerminalResponse_BP.TerminalResponse_BP_C.ExecuteUbergraph_TerminalResponse_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTerminalResponse_BP_C::STATIC_ExecuteUbergraph_TerminalResponse_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerminalResponse_BP.TerminalResponse_BP_C.ExecuteUbergraph_TerminalResponse_BP");

	UTerminalResponse_BP_C_ExecuteUbergraph_TerminalResponse_BP_Params params;
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
