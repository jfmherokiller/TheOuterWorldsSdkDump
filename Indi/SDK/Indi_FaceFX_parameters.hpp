#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FaceFX_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FaceFX.FaceFXComponent.StopAll
struct UFaceFXComponent_StopAll_Params
{
};

// Function FaceFX.FaceFXComponent.Stop
struct UFaceFXComponent_Stop_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.Setup
struct UFaceFXComponent_Setup_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFaceFXActor*                                Asset;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAutoPlaySound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDisableMorphTargets;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDisableMaterialParameters;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.Resume
struct UFaceFXComponent_Resume_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.PlayById
struct UFaceFXComponent_PlayById_Params
{
	struct FName                                       Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.Play
struct UFaceFXComponent_Play_Params
{
	class UFaceFXAnim*                                 Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.Pause
struct UFaceFXComponent_Pause_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.OnCharacterPlaybackStopped
struct UFaceFXComponent_OnCharacterPlaybackStopped_Params
{
	class UFaceFXCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFaceFXAnimId                               AnimId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function FaceFX.FaceFXComponent.OnCharacterAudioStart
struct UFaceFXComponent_OnCharacterAudioStart_Params
{
	class UFaceFXCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFaceFXAnimId                               AnimId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               IsAudioStarted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             AudioComponentStartedOn;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.JumpToById
struct UFaceFXComponent_JumpToById_Params
{
	float                                              Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LoopAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.JumpTo
struct UFaceFXComponent_JumpTo_Params
{
	float                                              Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UFaceFXAnim*                                 Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LoopAnimation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.IsPlayingAnimation
struct UFaceFXComponent_IsPlayingAnimation_Params
{
	struct FFaceFXAnimId                               AnimId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.IsPlaying
struct UFaceFXComponent_IsPlaying_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FaceFX.FaceFXComponent.IsPaused
struct UFaceFXComponent_IsPaused_Params
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Caller;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
