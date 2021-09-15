#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PC_Sound_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PC_Sound.PC_Sound_C.DebugDrawEmitterVisualization
struct UPC_Sound_C_DebugDrawEmitterVisualization_Params
{
	class UAkComponent*                                EmitterToVisualize;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ListenerWorldLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DataColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.DebugVisualizeEmitters
struct UPC_Sound_C_DebugVisualizeEmitters_Params
{
};

// Function PC_Sound.PC_Sound_C.ReceiveBeginPlay
struct UPC_Sound_C_ReceiveBeginPlay_Params
{
};

// Function PC_Sound.PC_Sound_C.ReceiveTick
struct UPC_Sound_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.AudioDebug_ShowAmbientEmitters
struct UPC_Sound_C_AudioDebug_ShowAmbientEmitters_Params
{
	float                                              MaxVisRange;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.AudioDebug_HideAmbientEmitters
struct UPC_Sound_C_AudioDebug_HideAmbientEmitters_Params
{
};

// Function PC_Sound.PC_Sound_C.AudioDebug_ShowCharacterEmitters
struct UPC_Sound_C_AudioDebug_ShowCharacterEmitters_Params
{
	float                                              MaxVisRange;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.AudioDebug_HideCharacterEmitters
struct UPC_Sound_C_AudioDebug_HideCharacterEmitters_Params
{
};

// Function PC_Sound.PC_Sound_C.AudioDebug_SetVisParams
struct UPC_Sound_C_AudioDebug_SetVisParams_Params
{
	bool                                               ShowEmitterName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAssociatedEvent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxVisRange;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.AudioDebug_SetMaxVisRange
struct UPC_Sound_C_AudioDebug_SetMaxVisRange_Params
{
	float                                              MaxVisRange;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.Cuil
struct UPC_Sound_C_Cuil_Params
{
	float                                              CuilLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.AudioDebug_SetCharacterDataColor
struct UPC_Sound_C_AudioDebug_SetCharacterDataColor_Params
{
	float                                              R;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.AudioDebug_SetAmbientDataColor
struct UPC_Sound_C_AudioDebug_SetAmbientDataColor_Params
{
	float                                              R;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_Sound.PC_Sound_C.ExecuteUbergraph_PC_Sound
struct UPC_Sound_C_ExecuteUbergraph_PC_Sound_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
