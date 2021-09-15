// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PC_Sound_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PC_Sound.PC_Sound_C.DebugDrawEmitterVisualization
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UAkComponent*            EmitterToVisualize             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ListenerWorldLocation          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DataColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_DebugDrawEmitterVisualization(class UAkComponent* EmitterToVisualize, const struct FVector& ListenerWorldLocation, const struct FLinearColor& DataColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.DebugDrawEmitterVisualization");

	UPC_Sound_C_DebugDrawEmitterVisualization_Params params;
	params.EmitterToVisualize = EmitterToVisualize;
	params.ListenerWorldLocation = ListenerWorldLocation;
	params.DataColor = DataColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.DebugVisualizeEmitters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPC_Sound_C::STATIC_DebugVisualizeEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.DebugVisualizeEmitters");

	UPC_Sound_C_DebugVisualizeEmitters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.ReceiveBeginPlay
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPC_Sound_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.ReceiveBeginPlay");

	UPC_Sound_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.ReceiveTick
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.ReceiveTick");

	UPC_Sound_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.AudioDebug_ShowAmbientEmitters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          MaxVisRange                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_AudioDebug_ShowAmbientEmitters(float MaxVisRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.AudioDebug_ShowAmbientEmitters");

	UPC_Sound_C_AudioDebug_ShowAmbientEmitters_Params params;
	params.MaxVisRange = MaxVisRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.AudioDebug_HideAmbientEmitters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPC_Sound_C::STATIC_AudioDebug_HideAmbientEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.AudioDebug_HideAmbientEmitters");

	UPC_Sound_C_AudioDebug_HideAmbientEmitters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.AudioDebug_ShowCharacterEmitters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          MaxVisRange                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_AudioDebug_ShowCharacterEmitters(float MaxVisRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.AudioDebug_ShowCharacterEmitters");

	UPC_Sound_C_AudioDebug_ShowCharacterEmitters_Params params;
	params.MaxVisRange = MaxVisRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.AudioDebug_HideCharacterEmitters
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UPC_Sound_C::STATIC_AudioDebug_HideCharacterEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.AudioDebug_HideCharacterEmitters");

	UPC_Sound_C_AudioDebug_HideCharacterEmitters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.AudioDebug_SetVisParams
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// bool                           ShowEmitterName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowAssociatedEvent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowDistance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxVisRange                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_AudioDebug_SetVisParams(bool ShowEmitterName, bool ShowAssociatedEvent, bool ShowDistance, float MaxVisRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.AudioDebug_SetVisParams");

	UPC_Sound_C_AudioDebug_SetVisParams_Params params;
	params.ShowEmitterName = ShowEmitterName;
	params.ShowAssociatedEvent = ShowAssociatedEvent;
	params.ShowDistance = ShowDistance;
	params.MaxVisRange = MaxVisRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.AudioDebug_SetMaxVisRange
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          MaxVisRange                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_AudioDebug_SetMaxVisRange(float MaxVisRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.AudioDebug_SetMaxVisRange");

	UPC_Sound_C_AudioDebug_SetMaxVisRange_Params params;
	params.MaxVisRange = MaxVisRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.Cuil
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          CuilLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_Cuil(float CuilLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.Cuil");

	UPC_Sound_C_Cuil_Params params;
	params.CuilLevel = CuilLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.AudioDebug_SetCharacterDataColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          R                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          G                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_AudioDebug_SetCharacterDataColor(float R, float G, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.AudioDebug_SetCharacterDataColor");

	UPC_Sound_C_AudioDebug_SetCharacterDataColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.AudioDebug_SetAmbientDataColor
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// float                          R                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          G                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_AudioDebug_SetAmbientDataColor(float R, float G, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.AudioDebug_SetAmbientDataColor");

	UPC_Sound_C_AudioDebug_SetAmbientDataColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PC_Sound.PC_Sound_C.ExecuteUbergraph_PC_Sound
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPC_Sound_C::STATIC_ExecuteUbergraph_PC_Sound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PC_Sound.PC_Sound_C.ExecuteUbergraph_PC_Sound");

	UPC_Sound_C_ExecuteUbergraph_PC_Sound_Params params;
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
