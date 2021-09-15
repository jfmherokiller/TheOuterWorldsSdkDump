// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GenericNotificationEntry_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.Construct
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGenericNotificationEntry_BP_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.Construct");

	UGenericNotificationEntry_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.PrepareNewMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGenericNotificationEntry_BP_C::STATIC_PrepareNewMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.PrepareNewMessage");

	UGenericNotificationEntry_BP_C_PrepareNewMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.OnFadeOutFinished
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGenericNotificationEntry_BP_C::STATIC_OnFadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.OnFadeOutFinished");

	UGenericNotificationEntry_BP_C_OnFadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.PrepareNextMessage
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGenericNotificationEntry_BP_C::STATIC_PrepareNextMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.PrepareNextMessage");

	UGenericNotificationEntry_BP_C_PrepareNextMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.OnFadeInFinished
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UGenericNotificationEntry_BP_C::STATIC_OnFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.OnFadeInFinished");

	UGenericNotificationEntry_BP_C_OnFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.ExecuteUbergraph_GenericNotificationEntry_BP
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGenericNotificationEntry_BP_C::STATIC_ExecuteUbergraph_GenericNotificationEntry_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericNotificationEntry_BP.GenericNotificationEntry_BP_C.ExecuteUbergraph_GenericNotificationEntry_BP");

	UGenericNotificationEntry_BP_C_ExecuteUbergraph_GenericNotificationEntry_BP_Params params;
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
