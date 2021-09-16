#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EVLightSwitch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EVLightSwitch.EVLightSwitch_C.Update
struct AEVLightSwitch_C_Update_Params
{
};

// Function EVLightSwitch.EVLightSwitch_C.UpdateIfSettingsChanged
struct AEVLightSwitch_C_UpdateIfSettingsChanged_Params
{
};

// Function EVLightSwitch.EVLightSwitch_C.UserConstructionScript
struct AEVLightSwitch_C_UserConstructionScript_Params
{
};

// Function EVLightSwitch.EVLightSwitch_C.Low Power Mode
struct AEVLightSwitch_C_Low_Power_Mode_Params
{
};

// Function EVLightSwitch.EVLightSwitch_C.High Power Mode
struct AEVLightSwitch_C_High_Power_Mode_Params
{
};

// Function EVLightSwitch.EVLightSwitch_C.ReceiveTick
struct AEVLightSwitch_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EVLightSwitch.EVLightSwitch_C.Normal Mode (Reset)
struct AEVLightSwitch_C_Normal_Mode__Reset__Params
{
};

// Function EVLightSwitch.EVLightSwitch_C.ReceiveBeginPlay
struct AEVLightSwitch_C_ReceiveBeginPlay_Params
{
};

// Function EVLightSwitch.EVLightSwitch_C.ExecuteUbergraph_EVLightSwitch
struct AEVLightSwitch_C_ExecuteUbergraph_EVLightSwitch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
