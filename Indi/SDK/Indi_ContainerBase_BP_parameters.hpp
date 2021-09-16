#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ContainerBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ContainerBase_BP.ContainerBase_BP_C.ToggleOpenCloseState
struct AContainerBase_BP_C_ToggleOpenCloseState_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lock;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Seal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreLockStatus;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStartEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreEndEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpening;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClosing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.IsSealed
struct AContainerBase_BP_C_IsSealed_Params
{
	bool                                               IsSealed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.IsClosed
struct AContainerBase_BP_C_IsClosed_Params
{
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.IsBarred
struct AContainerBase_BP_C_IsBarred_Params
{
	bool                                               IsBarred;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.SetIsLocked
struct AContainerBase_BP_C_SetIsLocked_Params
{
	bool                                               IsLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLockedOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.IsOpen
struct AContainerBase_BP_C_IsOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpening;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.IsLocked
struct AContainerBase_BP_C_IsLocked_Params
{
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.SetupCAC
struct AContainerBase_BP_C_SetupCAC_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.SignalAnimationComplete
struct AContainerBase_BP_C_SignalAnimationComplete_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.Update
struct AContainerBase_BP_C_Update_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.CheckCAC
struct AContainerBase_BP_C_CheckCAC_Params
{
	bool                                               Use;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CAC_Actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             Attach_Point;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.UserConstructionScript
struct AContainerBase_BP_C_UserConstructionScript_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLOpenAttemptedLocked__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLOpenAttemptedLocked__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_5_OCLOpenAttemptedLocked__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_5_OCLOpenAttemptedLocked__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_6_OCLLocked__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_6_OCLLocked__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_7_OCLUnlocked__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_7_OCLUnlocked__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_8_OCLUnbarred__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_8_OCLUnbarred__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLCloseEnd__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLCloseEnd__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayOpenAudio
struct AContainerBase_BP_C_PlayOpenAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayClosedAudio
struct AContainerBase_BP_C_PlayClosedAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayLockedAudio
struct AContainerBase_BP_C_PlayLockedAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayUnlockedAudio
struct AContainerBase_BP_C_PlayUnlockedAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayBarredAudio
struct AContainerBase_BP_C_PlayBarredAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayLockpickSucceedAudio
struct AContainerBase_BP_C_PlayLockpickSucceedAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayLockpickInterruptedAudio
struct AContainerBase_BP_C_PlayLockpickInterruptedAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayLockpickAudio
struct AContainerBase_BP_C_PlayLockpickAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.StopLockpickAudio
struct AContainerBase_BP_C_StopLockpickAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLAnimateOpen__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLAnimateOpen__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InFrontOfDoor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLAnimateClose__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLAnimateClose__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLCloseStart__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLCloseStart__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLLockpickStart__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_2_OCLLockpickStart__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LockpickSeconds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LockpickNumResources;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLLockpickInterrupted__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_3_OCLLockpickInterrupted__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLLockpickSuccess__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_4_OCLLockpickSuccess__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLOpenEnd__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_1_OCLOpenEnd__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.ReceiveBeginPlay
struct AContainerBase_BP_C_ReceiveBeginPlay_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.OnAnimateOpenComplete
struct AContainerBase_BP_C_OnAnimateOpenComplete_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.OnAnimateCloseComplete
struct AContainerBase_BP_C_OnAnimateCloseComplete_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLOpenStart__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLOpenStart__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.OnPostConstruction
struct AContainerBase_BP_C_OnPostConstruction_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.OnStateChanged
struct AContainerBase_BP_C_OnStateChanged_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.OnAnimateClose
struct AContainerBase_BP_C_OnAnimateClose_Params
{
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayOpeningAudio
struct AContainerBase_BP_C_PlayOpeningAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLBarred__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLBarred__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayClosingAudio
struct AContainerBase_BP_C_PlayClosingAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayUnbarredAudio
struct AContainerBase_BP_C_PlayUnbarredAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.OnAnimateOpen
struct AContainerBase_BP_C_OnAnimateOpen_Params
{
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.PlayAmbientAudio
struct AContainerBase_BP_C_PlayAmbientAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.OpenOCL
struct AContainerBase_BP_C_OpenOCL_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Seal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreLockStatus;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStartEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreEndEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.CloseOCL
struct AContainerBase_BP_C_CloseOCL_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lock;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Seal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStartEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreEndEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.BndEvt__OCLComponent_K2Node_ComponentBoundEvent_9_OCLLockpickLoopStop__DelegateSignature
struct AContainerBase_BP_C_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_9_OCLLockpickLoopStop__DelegateSignature_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ContainerBase_BP.ContainerBase_BP_C.StopLockpickLoopAudio
struct AContainerBase_BP_C_StopLockpickLoopAudio_Params
{
};

// Function ContainerBase_BP.ContainerBase_BP_C.ExecuteUbergraph_ContainerBase_BP
struct AContainerBase_BP_C_ExecuteUbergraph_ContainerBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
