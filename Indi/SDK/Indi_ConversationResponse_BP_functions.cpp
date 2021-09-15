// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ConversationResponse_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConversationResponse_BP.ConversationResponse_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UConversationResponse_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationResponse_BP.ConversationResponse_BP_C.Construct");

	UConversationResponse_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConversationResponse_BP.ConversationResponse_BP_C.OnResponseSkillsChanged
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bContainsSkillCheck            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConversationResponse_BP_C::STATIC_OnResponseSkillsChanged(bool* bContainsSkillCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationResponse_BP.ConversationResponse_BP_C.OnResponseSkillsChanged");

	UConversationResponse_BP_C_OnResponseSkillsChanged_Params params;
	params.bContainsSkillCheck = bContainsSkillCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConversationResponse_BP.ConversationResponse_BP_C.OnSetSelectableOption
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bSelectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConversationResponse_BP_C::STATIC_OnSetSelectableOption(bool* bSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationResponse_BP.ConversationResponse_BP_C.OnSetSelectableOption");

	UConversationResponse_BP_C_OnSetSelectableOption_Params params;
	params.bSelectable = bSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConversationResponse_BP.ConversationResponse_BP_C.OnSetSkillCheckRequiredCompanion
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool*                          bSelectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConversationResponse_BP_C::STATIC_OnSetSkillCheckRequiredCompanion(bool* bSelectable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationResponse_BP.ConversationResponse_BP_C.OnSetSkillCheckRequiredCompanion");

	UConversationResponse_BP_C_OnSetSkillCheckRequiredCompanion_Params params;
	params.bSelectable = bSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConversationResponse_BP.ConversationResponse_BP_C.ExecuteUbergraph_ConversationResponse_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConversationResponse_BP_C::STATIC_ExecuteUbergraph_ConversationResponse_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConversationResponse_BP.ConversationResponse_BP_C.ExecuteUbergraph_ConversationResponse_BP");

	UConversationResponse_BP_C_ExecuteUbergraph_ConversationResponse_BP_Params params;
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
