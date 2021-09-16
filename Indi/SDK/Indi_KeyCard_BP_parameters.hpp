#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_KeyCard_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KeyCard_BP.KeyCard_BP_C.Update
struct AKeyCard_BP_C_Update_Params
{
	bool                                               IsEmpty;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.Setup
struct AKeyCard_BP_C_Setup_Params
{
	class UOCLComponent*                               OCL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.Set_ContainerState
struct AKeyCard_BP_C_Set_ContainerState_Params
{
	bool                                               Container_Empty_Value;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.CanInteract
struct AKeyCard_BP_C_CanInteract_Params
{
	class AIndianaCharacter**                          Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractPayload*                           Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.ApplyLights
struct AKeyCard_BP_C_ApplyLights_Params
{
	bool                                               IsEmpty;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.UserConstructionScript
struct AKeyCard_BP_C_UserConstructionScript_Params
{
};

// Function KeyCard_BP.KeyCard_BP_C.GearAnimation__FinishedFunc
struct AKeyCard_BP_C_GearAnimation__FinishedFunc_Params
{
};

// Function KeyCard_BP.KeyCard_BP_C.GearAnimation__UpdateFunc
struct AKeyCard_BP_C_GearAnimation__UpdateFunc_Params
{
};

// Function KeyCard_BP.KeyCard_BP_C.Timeline_0__FinishedFunc
struct AKeyCard_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function KeyCard_BP.KeyCard_BP_C.Timeline_0__UpdateFunc
struct AKeyCard_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function KeyCard_BP.KeyCard_BP_C.BindEvents
struct AKeyCard_BP_C_BindEvents_Params
{
	class UOCLComponent*                               OCL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickStart_Event_1
struct AKeyCard_BP_C_OnOCLLockpickStart_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LockpickSeconds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LockpickNumResources;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickInterrupted_Event_1
struct AKeyCard_BP_C_OnOCLLockpickInterrupted_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.OnOCLLockpickSuccess_Event_1
struct AKeyCard_BP_C_OnOCLLockpickSuccess_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.OnOCLAnimateOpen_Event_1
struct AKeyCard_BP_C_OnOCLAnimateOpen_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InFrontOfDoor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.OnOCLAnimateClose_Event_1
struct AKeyCard_BP_C_OnOCLAnimateClose_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyCard_BP.KeyCard_BP_C.ReceiveBeginPlay
struct AKeyCard_BP_C_ReceiveBeginPlay_Params
{
};

// Function KeyCard_BP.KeyCard_BP_C.ExecuteUbergraph_KeyCard_BP
struct AKeyCard_BP_C_ExecuteUbergraph_KeyCard_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
