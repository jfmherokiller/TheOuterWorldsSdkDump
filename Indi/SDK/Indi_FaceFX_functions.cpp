// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FaceFX_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FaceFX.FaceFXComponent.StopAll
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)

void UFaceFXComponent::STATIC_StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.StopAll");

	UFaceFXComponent_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FaceFX.FaceFXComponent.Stop
// ()
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::Stop(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.Stop");

	UFaceFXComponent_Stop_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.Setup
// (BlueprintCosmetic)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UActorComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFaceFXActor*            Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoPlaySound                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDisableMorphTargets          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDisableMaterialParameters    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::Setup(class USkeletalMeshComponent* SkelMeshComp, class UActorComponent* AudioComponent, class UFaceFXActor* Asset, bool IsAutoPlaySound, bool IsDisableMorphTargets, bool IsDisableMaterialParameters, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.Setup");

	UFaceFXComponent_Setup_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.AudioComponent = AudioComponent;
	params.Asset = Asset;
	params.IsAutoPlaySound = IsAutoPlaySound;
	params.IsDisableMorphTargets = IsDisableMorphTargets;
	params.IsDisableMaterialParameters = IsDisableMaterialParameters;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.Resume
// ()
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::Resume(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.Resume");

	UFaceFXComponent_Resume_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.PlayById
// (BlueprintCosmetic)
// Parameters:
// struct FName                   Group                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AnimName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::PlayById(const struct FName& Group, const struct FName& AnimName, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.PlayById");

	UFaceFXComponent_PlayById_Params params;
	params.Group = Group;
	params.AnimName = AnimName;
	params.SkelMeshComp = SkelMeshComp;
	params.Loop = Loop;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.Play
// ()
// Parameters:
// class UFaceFXAnim*             Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Loop                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::Play(class UFaceFXAnim* Animation, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.Play");

	UFaceFXComponent_Play_Params params;
	params.Animation = Animation;
	params.SkelMeshComp = SkelMeshComp;
	params.Loop = Loop;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.Pause
// ()
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::Pause(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.Pause");

	UFaceFXComponent_Pause_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.OnCharacterPlaybackStopped
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UFaceFXCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFaceFXAnimId           AnimId                         (ConstParm, Parm, OutParm, ReferenceParm)

void UFaceFXComponent::STATIC_OnCharacterPlaybackStopped(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.OnCharacterPlaybackStopped");

	UFaceFXComponent_OnCharacterPlaybackStopped_Params params;
	params.Character = Character;
	params.AnimId = AnimId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FaceFX.FaceFXComponent.OnCharacterAudioStart
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// class UFaceFXCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFaceFXAnimId           AnimId                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           IsAudioStarted                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         AudioComponentStartedOn        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFaceFXComponent::STATIC_OnCharacterAudioStart(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId, bool IsAudioStarted, class UActorComponent* AudioComponentStartedOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.OnCharacterAudioStart");

	UFaceFXComponent_OnCharacterAudioStart_Params params;
	params.Character = Character;
	params.AnimId = AnimId;
	params.IsAudioStarted = IsAudioStarted;
	params.AudioComponentStartedOn = AudioComponentStartedOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FaceFX.FaceFXComponent.JumpToById
// ()
// Parameters:
// float                          Position                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Pause                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Group                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AnimName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoopAnimation                  (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::JumpToById(float Position, bool Pause, const struct FName& Group, const struct FName& AnimName, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.JumpToById");

	UFaceFXComponent_JumpToById_Params params;
	params.Position = Position;
	params.Pause = Pause;
	params.Group = Group;
	params.AnimName = AnimName;
	params.LoopAnimation = LoopAnimation;
	params.SkelMeshComp = SkelMeshComp;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.JumpTo
// (BlueprintCosmetic)
// Parameters:
// float                          Position                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Pause                          (Parm, ZeroConstructor, IsPlainOldData)
// class UFaceFXAnim*             Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoopAnimation                  (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::JumpTo(float Position, bool Pause, class UFaceFXAnim* Animation, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.JumpTo");

	UFaceFXComponent_JumpTo_Params params;
	params.Position = Position;
	params.Pause = Pause;
	params.Animation = Animation;
	params.LoopAnimation = LoopAnimation;
	params.SkelMeshComp = SkelMeshComp;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.IsPlayingAnimation
// ()
// Parameters:
// struct FFaceFXAnimId           AnimId                         (ConstParm, Parm, OutParm, ReferenceParm)
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::IsPlayingAnimation(const struct FFaceFXAnimId& AnimId, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.IsPlayingAnimation");

	UFaceFXComponent_IsPlayingAnimation_Params params;
	params.AnimId = AnimId;
	params.SkelMeshComp = SkelMeshComp;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.IsPlaying
// ()
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::IsPlaying(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.IsPlaying");

	UFaceFXComponent_IsPlaying_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FaceFX.FaceFXComponent.IsPaused
// ()
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComp                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Caller                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFaceFXComponent::IsPaused(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static auto fn = UObject::FindObject<UFunction>("Function FaceFX.FaceFXComponent.IsPaused");

	UFaceFXComponent_IsPaused_Params params;
	params.SkelMeshComp = SkelMeshComp;
	params.Caller = Caller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
