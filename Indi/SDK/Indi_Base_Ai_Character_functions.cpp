// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Ai_Character_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Ai_Character.Base_Ai_Character_C.SetEmotion
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// EEmotion                       NewEmotion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Ai_Character_C::STATIC_SetEmotion(EEmotion NewEmotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Ai_Character.Base_Ai_Character_C.SetEmotion");

	ABase_Ai_Character_C_SetEmotion_Params params;
	params.NewEmotion = NewEmotion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Ai_Character.Base_Ai_Character_C.UserConstructionScript
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABase_Ai_Character_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Ai_Character.Base_Ai_Character_C.UserConstructionScript");

	ABase_Ai_Character_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Ai_Character.Base_Ai_Character_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void ABase_Ai_Character_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Ai_Character.Base_Ai_Character_C.ReceiveBeginPlay");

	ABase_Ai_Character_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Ai_Character.Base_Ai_Character_C.ExecuteUbergraph_Base_Ai_Character
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABase_Ai_Character_C::STATIC_ExecuteUbergraph_Base_Ai_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Ai_Character.Base_Ai_Character_C.ExecuteUbergraph_Base_Ai_Character");

	ABase_Ai_Character_C_ExecuteUbergraph_Base_Ai_Character_Params params;
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
