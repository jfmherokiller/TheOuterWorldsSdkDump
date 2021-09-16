#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Engine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Engine.Actor
// 0x0358 (0x0388 - 0x0030)
class AActor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x358];                                     // 0x0030(0x0358) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Actor");
		return ptr;
	}


	bool WasRecentlyRendered(float Tolerance);
	void STATIC_UserConstructionScript();
	void STATIC_TearOff();
	void STATIC_SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	void STATIC_SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void STATIC_SetTickableWhenPaused(bool bTickableWhenPaused);
	void STATIC_SetStasis(bool bNewStasis);
	void STATIC_SetReplicates(bool bInReplicates);
	void STATIC_SetReplicateMovement(bool bInReplicateMovement);
	void STATIC_SetOwner(class AActor* NewOwner);
	void STATIC_SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy);
	void STATIC_SetLifeSpan(float InLifespan);
	void STATIC_SetActorTickInterval(float TickInterval);
	void STATIC_SetActorTickEnabled(bool bEnabled, const struct FName& Source);
	void STATIC_SetActorScale3D(const struct FVector& NewScale3D);
	void STATIC_SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	void STATIC_SetActorHiddenInGame(bool bNewHidden);
	void STATIC_SetActorEnableCollision(bool bNewActorEnableCollision);
	void STATIC_RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void STATIC_RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void STATIC_ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ReceiveDestroyed();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_ReceiveActorOnReleased(const struct FKey& ButtonReleased);
	void STATIC_ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	void STATIC_ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	void STATIC_ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	void STATIC_ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	void STATIC_ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	void STATIC_ReceiveActorEndOverlap(class AActor* OtherActor);
	void STATIC_ReceiveActorEndCursorOver();
	void STATIC_ReceiveActorBeginOverlap(class AActor* OtherActor);
	void STATIC_ReceiveActorBeginCursorOver();
	void STATIC_PrestreamTextures(float Seconds, bool bEnableStreaming, int CinematicTextureGroups);
	void STATIC_OnRep_ReplicateMovement();
	void STATIC_OnRep_ReplicatedMovement();
	void STATIC_OnRep_Owner();
	void STATIC_OnRep_Instigator();
	void STATIC_OnRep_AttachmentReplication();
	void STATIC_MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
	void STATIC_K2_TeleportToFeetLocation(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics);
	void STATIC_K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_OnReset();
	void STATIC_K2_OnEndViewTarget(class APlayerController* PC);
	void STATIC_K2_OnBecomeViewTarget(class APlayerController* PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void STATIC_K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
	void STATIC_K2_DestroyComponent(class UActorComponent* Component);
	void STATIC_K2_DestroyActor();
	void STATIC_K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void STATIC_K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void STATIC_K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void STATIC_K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void STATIC_K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor* Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor* OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor* OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void STATIC_GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void STATIC_GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	TEnumAsByte<ENetRole> GetLocalRole();
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	float GetInputAxisValue(const struct FName& InputAxisName);
	float GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	float GetHorizontalDotProductTo(class AActor* OtherActor);
	float GetHorizontalDistanceTo(class AActor* OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor* OtherActor);
	float GetDistanceTo(class AActor* OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass* ComponentClass);
	class UActorComponent* GetComponentByTag(class UClass* ComponentClass, const struct FName& Tag);
	class UActorComponent* GetComponentByClass(class UClass* ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void STATIC_GetAttachedActors(TArray<class AActor*>* OutActors);
	void STATIC_GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void STATIC_GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void STATIC_GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void STATIC_ForceNetUpdate();
	void STATIC_FlushNetDormancy();
	void STATIC_EvaluateStasisImmediate();
	void STATIC_EnableInput(class APlayerController* PlayerController);
	void STATIC_DisableInput(class APlayerController* PlayerController);
	void STATIC_DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void STATIC_AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void STATIC_AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	class UActorComponent* AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	bool ActorHasTag(const struct FName& Tag);
};


// Class Engine.ActorComponent
// 0x00E8 (0x0118 - 0x0030)
class UActorComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0030(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorComponent");
		return ptr;
	}


	void STATIC_ToggleActive(const struct FName& Source);
	void STATIC_SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void STATIC_SetTickableWhenPaused(bool bTickableWhenPaused);
	void STATIC_SetIsReplicated(bool ShouldReplicate);
	void STATIC_SetComponentTickInterval(float TickInterval);
	void STATIC_SetComponentTickEnabled(bool bEnabled, const struct FName& Source);
	void STATIC_SetAutoActivate(bool bNewAutoActivate);
	void STATIC_SetActive(bool bNewActive, bool bReset, const struct FName& Source);
	void STATIC_RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void STATIC_RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnRep_IsActive();
	void STATIC_K2_DestroyComponent(class UObject* Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	bool ComponentHasTag(const struct FName& Tag);
	void STATIC_AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void STATIC_AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
};


// Class Engine.SceneComponent
// 0x0198 (0x02B0 - 0x0118)
class USceneComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0118(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneComponent");
		return ptr;
	}


	void STATIC_ToggleVisibility(bool bPropagateToChildren);
	bool SnapTo(class USceneComponent* InParent, const struct FName& InSocketName);
	void STATIC_SetWorldScale3D(const struct FVector& NewScale);
	void STATIC_SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
	void STATIC_SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
	void STATIC_SetRelativeScale3D(const struct FVector& NewScale3D);
	void STATIC_SetMobility(TEnumAsByte<EComponentMobility> NewMobility);
	void STATIC_SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
	void STATIC_SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
	void STATIC_ResetRelativeTransform();
	void STATIC_OnRep_Visibility(bool OldValue);
	void STATIC_OnRep_Transform();
	void STATIC_OnRep_AttachSocketName();
	void STATIC_OnRep_AttachParent();
	void STATIC_OnRep_AttachChildren();
	void STATIC_K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetWorldRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetWorldLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetWorldLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetRelativeLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_SetRelativeLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	struct FTransform K2_GetComponentToWorld();
	struct FVector K2_GetComponentScale();
	struct FRotator K2_GetComponentRotation();
	struct FVector K2_GetComponentLocation();
	void STATIC_K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);
	bool K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	bool K2_AttachTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies);
	void STATIC_K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddRelativeRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddRelativeLocation(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void STATIC_K2_AddLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsVisible();
	bool IsSimulatingPhysics(const struct FName& BoneName);
	bool IsAnySimulatingPhysics();
	struct FVector GetUpVector();
	struct FTransform GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
	struct FRotator GetSocketRotation(const struct FName& InSocketName);
	struct FQuat GetSocketQuaternion(const struct FName& InSocketName);
	struct FVector GetSocketLocation(const struct FName& InSocketName);
	bool GetShouldUpdatePhysicsVolume();
	struct FVector GetRightVector();
	struct FTransform GetRelativeTransform();
	class APhysicsVolume* GetPhysicsVolume();
	void STATIC_GetParentComponents(TArray<class USceneComponent*>* Parents);
	int GetNumChildrenComponents();
	struct FVector GetForwardVector();
	struct FVector GetComponentVelocity();
	void STATIC_GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children);
	class USceneComponent* GetChildComponent(int ChildIndex);
	struct FName GetAttachSocketName();
	class USceneComponent* GetAttachParent();
	TArray<struct FName> GetAllSocketNames();
	bool DoesSocketExist(const struct FName& InSocketName);
	void STATIC_DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
};


// Class Engine.DeveloperSettings
// 0x0010 (0x0040 - 0x0030)
class UDeveloperSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeveloperSettings");
		return ptr;
	}

};


// Class Engine.BlueprintFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UBlueprintFunctionLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintFunctionLibrary");
		return ptr;
	}

};


// Class Engine.OnlineBlueprintCallProxyBase
// 0x0000 (0x0030 - 0x0030)
class UOnlineBlueprintCallProxyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineBlueprintCallProxyBase");
		return ptr;
	}


	void STATIC_Activate();
};


// Class Engine.Player
// 0x0020 (0x0050 - 0x0030)
class UPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Player");
		return ptr;
	}

};


// Class Engine.NetConnection
// 0x18D0 (0x1920 - 0x0050)
class UNetConnection : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x18D0];                                    // 0x0050(0x18D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetConnection");
		return ptr;
	}

};


// Class Engine.NetDriver
// 0x0670 (0x06A0 - 0x0030)
class UNetDriver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x670];                                     // 0x0030(0x0670) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetDriver");
		return ptr;
	}

};


// Class Engine.BlueprintAsyncActionBase
// 0x0008 (0x0038 - 0x0030)
class UBlueprintAsyncActionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintAsyncActionBase");
		return ptr;
	}


	void STATIC_Activate();
};


// Class Engine.OnlineEngineInterface
// 0x0000 (0x0030 - 0x0030)
class UOnlineEngineInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineEngineInterface");
		return ptr;
	}

};


// Class Engine.OnlineSession
// 0x0000 (0x0030 - 0x0030)
class UOnlineSession : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OnlineSession");
		return ptr;
	}

};


// Class Engine.AudioComponent
// 0x0410 (0x06C0 - 0x02B0)
class UAudioComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x410];                                     // 0x02B0(0x0410) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioComponent");
		return ptr;
	}


	void STATIC_Stop();
	void STATIC_SetWaveParameter(const struct FName& InName, class USoundWave* InWave);
	void STATIC_SetVolumeMultiplier(float NewVolumeMultiplier);
	void STATIC_SetUISound(bool bInUISound);
	void STATIC_SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	void STATIC_SetSound(class USoundBase* NewSound);
	void STATIC_SetPitchMultiplier(float NewPitchMultiplier);
	void STATIC_SetPaused(bool bPause);
	void STATIC_SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void STATIC_SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	void STATIC_SetIntParameter(const struct FName& InName, int inInt);
	void STATIC_SetFloatParameter(const struct FName& InName, float InFloat);
	void STATIC_SetBoolParameter(const struct FName& InName, bool InBool);
	void STATIC_Play(float StartTime);
	bool IsPlaying();
	void STATIC_FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void STATIC_FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
	void STATIC_AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
	void STATIC_AdjustAttenuation(const struct FSoundAttenuationSettings& InAttenuationSettings);
};


// Class Engine.AssetImportData
// 0x0000 (0x0030 - 0x0030)
class UAssetImportData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetImportData");
		return ptr;
	}

};


// Class Engine.AssetUserData
// 0x0000 (0x0030 - 0x0030)
class UAssetUserData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetUserData");
		return ptr;
	}

};


// Class Engine.StreamableComponent
// 0x0010 (0x02C0 - 0x02B0)
class UStreamableComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamableComponent");
		return ptr;
	}

};


// Class Engine.PrimitiveComponent
// 0x0350 (0x0610 - 0x02C0)
class UPrimitiveComponent : public UStreamableComponent
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x02C0(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimitiveComponent");
		return ptr;
	}


	void STATIC_WakeRigidBody(const struct FName& BoneName);
	void STATIC_WakeAllRigidBodies();
	void STATIC_SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride);
	void STATIC_SetVisibilityQuery(int Mask);
	void STATIC_SetUseCCD(bool InUseCCD, const struct FName& BoneName);
	void STATIC_SetTranslucentSortPriority(int NewTranslucentSortPriority);
	void STATIC_SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
	void STATIC_SetSimulatePhysics(bool bSimulate);
	void STATIC_SetRenderInMono(bool bValue);
	void STATIC_SetRenderInMainPass(bool bValue);
	void STATIC_SetRenderCustomDepth(bool bValue);
	void STATIC_SetReceivesDecals(bool bNewReceivesDecals);
	void STATIC_SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	void STATIC_SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void STATIC_SetOwnerNoSee(bool bNewOwnerNoSee);
	void STATIC_SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
	void STATIC_SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
	void STATIC_SetMaterialByName(const struct FName& MaterialSlotName, class UMaterialInterface* Material);
	void STATIC_SetMaterialBatchParamemterValue(TArray<int> ElementIndices, const struct FName& ParameterName, const struct FLinearColor& Value);
	void STATIC_SetMaterial(int ElementIndex, class UMaterialInterface* Material);
	void STATIC_SetMassScale(const struct FName& BoneName, float InMassScale);
	void STATIC_SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass);
	void STATIC_SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis);
	void STATIC_SetLinearDamping(float InDamping);
	void STATIC_SetIndirectLightingCacheQuality(TEnumAsByte<EIndirectLightingCacheQuality> NewQuality);
	void STATIC_SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
	void STATIC_SetForeground(bool bValue);
	void STATIC_SetEnableGravity(bool bGravityEnabled);
	void STATIC_SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);
	void STATIC_SetCustomDepthStencilValue(int Value);
	void STATIC_SetCullDistance(float NewCullDistance);
	void STATIC_SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode);
	void STATIC_SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	void STATIC_SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
	void STATIC_SetCollisionProfileName(const struct FName& InCollisionProfileName);
	void STATIC_SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
	void STATIC_SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);
	void STATIC_SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName);
	void STATIC_SetCastShadow(bool NewCastShadow);
	void STATIC_SetBoundsScale(float NewBoundsScale);
	void STATIC_SetAngularDamping(float InDamping);
	void STATIC_SetAllUseCCD(bool InUseCCD);
	void STATIC_SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent);
	void STATIC_SetAllPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool bAddToCurrent);
	void STATIC_SetAllPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool bAddToCurrent);
	void STATIC_SetAllPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent);
	void STATIC_SetAllMassScale(float InMassScale);
	struct FVector ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName);
	void STATIC_PutRigidBodyToSleep(const struct FName& BoneName);
	bool K2_SphereTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool K2_SphereOverlapComponent(const struct FVector& InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool K2_IsQueryCollisionEnabled();
	bool K2_IsPhysicsCollisionEnabled();
	bool K2_IsCollisionEnabled();
	bool K2_BoxOverlapComponent(const struct FVector& InBoxCentre, const struct FBox& InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool IsOverlappingComponent(class UPrimitiveComponent* OtherComp);
	bool IsOverlappingActor(class AActor* Other);
	bool IsGravityEnabled();
	bool IsAnyRigidBodyAwake();
	void STATIC_IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore);
	void STATIC_IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);
	struct FWalkableSlopeOverride GetWalkableSlopeOverride();
	struct FVector GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName);
	struct FVector GetPhysicsLinearVelocity(const struct FName& BoneName);
	struct FVector GetPhysicsAngularVelocityInRadians(const struct FName& BoneName);
	struct FVector GetPhysicsAngularVelocityInDegrees(const struct FName& BoneName);
	struct FVector GetPhysicsAngularVelocity(const struct FName& BoneName);
	void STATIC_GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents);
	void STATIC_GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	int GetNumMaterials();
	class UMaterialInterface* GetMaterialFromCollisionFaceIndex(int FaceIndex, int* SectionIndex);
	class UMaterialInterface* GetMaterial(int ElementIndex);
	float GetMassScale(const struct FName& BoneName);
	float GetMass();
	float GetLinearDamping();
	struct FVector GetInertiaTensor(const struct FName& BoneName);
	bool GetGenerateOverlapEvents();
	TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel);
	struct FName GetCollisionProfileName();
	TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
	TEnumAsByte<ECollisionEnabled> GetCollisionEnabled();
	float GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody);
	struct FVector GetCenterOfMass(const struct FName& BoneName);
	float GetAngularDamping();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial, const struct FName& OptionalName);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int ElementIndex);
	TArray<class UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
	TArray<class AActor*> CopyArrayOfMoveIgnoreActors();
	void STATIC_ClearMoveIgnoreComponents();
	void STATIC_ClearMoveIgnoreActors();
	bool CanCharacterStepUp(class APawn* Pawn);
	void STATIC_AddTorqueInRadians(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	void STATIC_AddTorqueInDegrees(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	void STATIC_AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	void STATIC_AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
	void STATIC_AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
	void STATIC_AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName);
	void STATIC_AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	void STATIC_AddForceAtLocationLocal(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName);
	void STATIC_AddForceAtLocation(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName);
	void STATIC_AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange);
	void STATIC_AddAngularImpulseInRadians(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	void STATIC_AddAngularImpulseInDegrees(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	void STATIC_AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
};


// Class Engine.MeshComponent
// 0x0020 (0x0630 - 0x0610)
class UMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0610(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshComponent");
		return ptr;
	}


	void STATIC_SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue);
	void STATIC_SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue);
	void STATIC_PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int CinematicTextureGroups);
	bool IsMaterialSlotNameValid(const struct FName& MaterialSlotName);
	TArray<struct FName> GetMaterialSlotNames();
	TArray<class UMaterialInterface*> GetMaterials();
	int GetMaterialIndex(const struct FName& MaterialSlotName);
};


// Class Engine.InterpTrack
// 0x0048 (0x0078 - 0x0030)
class UInterpTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrack");
		return ptr;
	}

};


// Class Engine.InterpTrackInst
// 0x0000 (0x0030 - 0x0030)
class UInterpTrackInst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInst");
		return ptr;
	}

};


// Class Engine.Brush
// 0x0038 (0x03C0 - 0x0388)
class ABrush : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0388(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Brush");
		return ptr;
	}

};


// Class Engine.Volume
// 0x0020 (0x03E0 - 0x03C0)
class AVolume : public ABrush
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Volume");
		return ptr;
	}

};


// Class Engine.PhysicalMaterial
// 0x0058 (0x0088 - 0x0030)
class UPhysicalMaterial : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterial");
		return ptr;
	}

};


// Class Engine.World
// 0x0998 (0x09C8 - 0x0030)
class UWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x998];                                     // 0x0030(0x0998) MISSED OFFSET

	static UWorld** GWorld;
	static inline UWorld* GetWorld()
	{
		return *GWorld;
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.World");
		return ptr;
	}


	void STATIC_HandleTimelineScrubbed();
};


// Class Engine.InterpTrackVectorBase
// 0x0020 (0x0098 - 0x0078)
class UInterpTrackVectorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatBase
// 0x0020 (0x0098 - 0x0078)
class UInterpTrackFloatBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatBase");
		return ptr;
	}

};


// Class Engine.DataAsset
// 0x0008 (0x0038 - 0x0030)
class UDataAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataAsset");
		return ptr;
	}

};


// Class Engine.AnimNotify
// 0x0010 (0x0040 - 0x0030)
class UAnimNotify : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	class FString GetNotifyName();
};


// Class Engine.AnimNotifyState
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	class FString GetNotifyName();
};


// Class Engine.MovementComponent
// 0x0040 (0x0158 - 0x0118)
class UMovementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0118(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MovementComponent");
		return ptr;
	}


	void STATIC_StopMovementImmediately();
	void STATIC_SnapUpdatedComponentToPlane();
	void STATIC_SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
	void STATIC_SetPlaneConstraintOrigin(const struct FVector& PlaneOrigin);
	void STATIC_SetPlaneConstraintNormal(const struct FVector& PlaneNormal);
	void STATIC_SetPlaneConstraintFromVectors(const struct FVector& Forward, const struct FVector& Up);
	void STATIC_SetPlaneConstraintEnabled(bool bEnabled);
	void STATIC_SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting);
	void STATIC_PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	bool K2_MoveUpdatedComponent(const struct FVector& Delta, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* OutHit);
	float K2_GetModifiedMaxSpeed();
	float K2_GetMaxSpeedModifier();
	bool IsExceedingMaxSpeed(float MaxSpeed);
	struct FVector GetPlaneConstraintOrigin();
	struct FVector GetPlaneConstraintNormal();
	EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting();
	class APhysicsVolume* GetPhysicsVolume();
	float GetMaxSpeed();
	float GetGravityZ();
	struct FVector ConstrainNormalToPlane(const struct FVector& Normal);
	struct FVector ConstrainLocationToPlane(const struct FVector& Location);
	struct FVector ConstrainDirectionToPlane(const struct FVector& Direction);
};


// Class Engine.NavMovementComponent
// 0x0058 (0x01B0 - 0x0158)
class UNavMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0158(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavMovementComponent");
		return ptr;
	}


	void STATIC_StopMovementKeepPathing();
	void STATIC_StopActiveMovement();
	bool IsSwimming();
	bool IsMovingOnGround();
	bool IsFlying();
	bool IsFalling();
	bool IsCrouching();
	bool IsClimbing();
};


// Class Engine.PawnMovementComponent
// 0x0008 (0x01B8 - 0x01B0)
class UPawnMovementComponent : public UNavMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnMovementComponent");
		return ptr;
	}


	struct FVector K2_GetInputVector();
	bool IsMoveInputIgnored();
	struct FVector GetPendingInputVector();
	class APawn* GetPawnOwner();
	struct FVector GetLastInputVector();
	struct FVector ConsumeInputVector();
	void STATIC_AddInputVector(const struct FVector& WorldVector, bool bForce);
};


// Class Engine.CharacterMovementComponent
// 0x05B8 (0x0770 - 0x01B8)
class UCharacterMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x5B8];                                     // 0x01B8(0x05B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CharacterMovementComponent");
		return ptr;
	}


	void STATIC_SetWalkableFloorZ(float InWalkableFloorZ);
	void STATIC_SetWalkableFloorAngle(float InWalkableFloorAngle);
	void STATIC_SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void STATIC_SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void STATIC_SetGroupsToIgnore(int GroupFlags);
	void STATIC_SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void STATIC_SetGroupsToAvoid(int GroupFlags);
	void STATIC_SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void STATIC_SetAvoidanceGroup(int GroupFlags);
	void STATIC_SetAvoidanceEnabled(bool bEnable);
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	void STATIC_K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult);
	void STATIC_K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult);
	bool IsWalking();
	bool IsWalkable(const struct FHitResult& Hit);
	float GetValidPerchRadius();
	float GetPerchRadiusThreshold();
	class UPrimitiveComponent* GetMovementBase();
	float GetMinAnalogSpeed();
	float GetMaxJumpHeightWithJumpTime();
	float GetMaxJumpHeight();
	float GetMaxBrakingDeceleration();
	float GetMaxAcceleration();
	struct FVector GetLastUpdateVelocity();
	struct FRotator GetLastUpdateRotation();
	struct FVector GetLastUpdateLocation();
	struct FVector GetImpartedMovementBaseVelocity();
	struct FVector GetCurrentAcceleration();
	class ACharacter* GetCharacterOwner();
	float GetAnalogInputModifier();
	void STATIC_DisableMovement();
	void STATIC_ClearAccumulatedForces();
	void STATIC_CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void STATIC_AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void STATIC_AddForce(const struct FVector& Force);
};


// Class Engine.PrimaryDataAsset
// 0x0000 (0x0038 - 0x0038)
class UPrimaryDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryDataAsset");
		return ptr;
	}

};


// Class Engine.SkinnedMeshComponent
// 0x0160 (0x0790 - 0x0630)
class USkinnedMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0630(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkinnedMeshComponent");
		return ptr;
	}


	void STATIC_UnHideBoneByName(const struct FName& BoneName);
	void STATIC_TransformToBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	void STATIC_TransformFromBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	void STATIC_ShowMaterialSection(int MaterialID, bool bShow, int LODIndex);
	void STATIC_ShowAllMaterialSections(int LODIndex);
	void STATIC_SetVertexColorOverride_LinearColor(int LODIndex, TArray<struct FLinearColor> VertexColors);
	void STATIC_SetSkinWeightOverride(int LODIndex, TArray<struct FSkelMeshSkinWeightInfo> SkinWeights);
	void STATIC_SetSkeletalMesh(class USkeletalMesh* NewMesh, bool bReinitPose);
	void STATIC_SetRenderStatic(bool bNewValue);
	void STATIC_SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
	void STATIC_SetMinLOD(int InNewMinLOD);
	void STATIC_SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
	void STATIC_SetForcedLOD(int InNewForcedLOD);
	void STATIC_SetCastCapsuleIndirectShadow(bool bNewValue);
	void STATIC_SetCastCapsuleDirectShadow(bool bNewValue);
	void STATIC_SetCapsuleIndirectShadowMinVisibility(float NewValue);
	bool IsMaterialSectionShown(int MaterialID, int LODIndex);
	bool IsBoneHiddenByName(const struct FName& BoneName);
	void STATIC_HideBoneByName(const struct FName& BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);
	struct FName GetSocketBoneName(const struct FName& InSocketName);
	struct FVector GetRefPosePosition(int BoneIndex);
	struct FName GetParentBone(const struct FName& BoneName);
	int GetNumLODs();
	int GetNumBones();
	struct FTransform GetDeltaTransformFromRefPose(const struct FName& BoneName, const struct FName& BaseName);
	struct FName GetBoneName(int BoneIndex);
	int GetBoneIndex(const struct FName& BoneName);
	struct FName FindClosestBone_K2(const struct FVector& TestLocation, float IgnoreScale, bool bRequirePhysicsAsset, struct FVector* BoneLocation);
	void STATIC_ClearVertexColorOverride(int LODIndex);
	void STATIC_ClearSkinWeightOverride(int LODIndex);
	bool BoneIsChildOf(const struct FName& BoneName, const struct FName& ParentBoneName);
};


// Class Engine.SkeletalMeshComponent
// 0x0490 (0x0C20 - 0x0790)
class USkeletalMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x490];                                     // 0x0790(0x0490) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshComponent");
		return ptr;
	}


	void STATIC_UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
	void STATIC_ToggleDisablePostProcessBlueprint();
	void STATIC_TermBodiesBelow(const struct FName& ParentBoneName);
	void STATIC_SuspendClothingSimulation();
	void STATIC_Stop();
	void STATIC_SnapshotPose(struct FPoseSnapshot* Snapshot);
	void STATIC_SetUpdateAnimationInEditor(bool NewUpdateState);
	void STATIC_SetTeleportRotationThreshold(float Threshold);
	void STATIC_SetTeleportDistanceThreshold(float Threshold);
	void STATIC_SetPosition(float InPos, bool bFireNotifies);
	void STATIC_SetPlayRate(float Rate);
	void STATIC_SetPhysicsBlendWeight(float PhysicsBlendWeight);
	void STATIC_SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, const struct FName& BoneName, bool bIncludeSelf);
	void STATIC_SetMorphTarget(const struct FName& MorphTargetName, float Value, bool bRemoveZeroWeight);
	void STATIC_SetEnablePhysicsBlending(bool bNewBlendPhysics);
	void STATIC_SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, const struct FName& BoneName, bool bIncludeSelf);
	void STATIC_SetEnableBodyGravity(bool bEnableGravity, const struct FName& BoneName);
	void STATIC_SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
	void STATIC_SetDisableAnimCurves(bool bInDisableAnimCurves);
	void STATIC_SetConstraintProfileForAll(const struct FName& ProfileName, bool bDefaultIfNotFound);
	void STATIC_SetConstraintProfile(const struct FName& JointName, const struct FName& ProfileName, bool bDefaultIfNotFound);
	void STATIC_SetClothMaxDistanceScale(float Scale);
	void STATIC_SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, const struct FName& BoneName);
	void STATIC_SetAnimationMode(TEnumAsByte<EAnimationMode> InAnimationMode);
	void STATIC_SetAnimation(class UAnimationAsset* NewAnimToPlay);
	void STATIC_SetAngularLimits(const struct FName& InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
	void STATIC_SetAllowedAnimCurvesEvaluation(TArray<struct FName> List, bool bAllow);
	void STATIC_SetAllowAnimCurveEvaluation(bool bInAllow);
	void STATIC_SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	void STATIC_SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	void STATIC_SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
	void STATIC_SetAllBodiesSimulatePhysics(bool bNewSimulate);
	void STATIC_SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
	void STATIC_SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
	void STATIC_SetAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
	void STATIC_ResumeClothingSimulation();
	void STATIC_ResetClothTeleportMode();
	void STATIC_ResetAnimInstanceDynamics(ETeleportType InTeleportType);
	void STATIC_ResetAllowedAnimCurveEvaluation();
	void STATIC_ResetAllBodiesSimulatePhysics();
	void STATIC_PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping);
	void STATIC_Play(bool bLooping);
	void STATIC_OverrideAnimationData(class UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
	void STATIC_K2_SetAnimInstanceClass(class UClass* NewClass);
	bool K2_GetClosestPointOnPhysicsAsset(const struct FVector& WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance);
	bool IsPlaying();
	bool IsClothingSimulationSuspended();
	bool IsBodyGravityEnabled(const struct FName& BoneName);
	bool HasValidAnimationInstance();
	float GetTeleportRotationThreshold();
	float GetTeleportDistanceThreshold();
	class UAnimInstance* GetSubInstanceByName(const struct FName& InName);
	struct FVector GetSkeletalCenterOfMass();
	class UAnimInstance* GetPostProcessInstance();
	float GetPosition();
	float GetPlayRate();
	float GetMorphTarget(const struct FName& MorphTargetName);
	bool GetDisablePostProcessBlueprint();
	bool GetDisableAnimCurves();
	void STATIC_GetCurrentJointAngles(const struct FName& InBoneName, float* Swing1Angle, float* TwistAngle, float* Swing2Angle);
	float GetClothMaxDistanceScale();
	class UClothingSimulationInteractor* GetClothingSimulationInteractor();
	float GetBoneMass(const struct FName& BoneName, bool bScaleMass);
	class UAnimInstance* GetAnimInstance();
	TEnumAsByte<EAnimationMode> GetAnimationMode();
	bool GetAllowedAnimCurveEvaluate();
	void STATIC_ForceClothNextUpdateTeleportAndReset();
	void STATIC_ForceClothNextUpdateTeleport();
	struct FName FindConstraintBoneName(int ConstraintIndex);
	void STATIC_ClearMorphTargets();
	void STATIC_BreakConstraint(const struct FVector& Impulse, const struct FVector& HitLocation, const struct FName& InBoneName);
	void STATIC_BindClothToMasterPoseComponent();
	void STATIC_AllowAnimCurveEvaluation(const struct FName& NameOfCurve, bool bAllow);
	void STATIC_AddImpulseToAllBodiesBelow(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange, bool bIncludeSelf);
	void STATIC_AddForceToAllBodiesBelow(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange, bool bIncludeSelf);
	void STATIC_AccumulateAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
};


// Class Engine.AnimInstance
// 0x0340 (0x0370 - 0x0030)
class UAnimInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x340];                                     // 0x0030(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimInstance");
		return ptr;
	}


	void STATIC_UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
	class APawn* TryGetPawnOwner();
	void STATIC_StopSlotAnimation(float InBlendOutTime, const struct FName& SlotNodeName);
	void STATIC_SnapshotPose(struct FPoseSnapshot* Snapshot);
	void STATIC_SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value);
	void STATIC_SetMorphTarget(const struct FName& MorphTargetName, float Value);
	void STATIC_SavePoseSnapshot(const struct FName& SnapshotName);
	void STATIC_ResetDynamics(ETeleportType InTeleportType);
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
	float PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount);
	void STATIC_Montage_Stop(float InBlendOutTime, class UAnimMontage* Montage);
	void STATIC_Montage_SetPosition(class UAnimMontage* Montage, float NewPosition);
	void STATIC_Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate);
	void STATIC_Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage);
	void STATIC_Montage_Resume(class UAnimMontage* Montage);
	float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
	void STATIC_Montage_Pause(class UAnimMontage* Montage);
	void STATIC_Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage);
	void STATIC_Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage);
	bool Montage_IsPlaying(class UAnimMontage* Montage);
	bool Montage_IsActive(class UAnimMontage* Montage);
	float Montage_GetPosition(class UAnimMontage* Montage);
	float Montage_GetPlayRate(class UAnimMontage* Montage);
	bool Montage_GetIsStopped(class UAnimMontage* Montage);
	struct FName Montage_GetCurrentSection(class UAnimMontage* Montage);
	float Montage_GetBlendTime(class UAnimMontage* Montage);
	void STATIC_LockAIResources(bool bLockMovement, bool LockAILogic);
	bool IsSyncGroupBetweenMarkers(const struct FName& InSyncGroupName, const struct FName& PreviousMarker, const struct FName& NextMarker, bool bRespectMarkerOrder);
	bool IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName);
	bool IsAnyMontagePlaying();
	bool HasMarkerBeenHitThisFrame(const struct FName& SyncGroup, const struct FName& MarkerName);
	bool GetTimeToClosestMarker(const struct FName& SyncGroup, const struct FName& MarkerName, float* OutMarkerTime);
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(const struct FName& InSyncGroupName);
	float GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex);
	float GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex);
	float GetRelevantAnimTime(int MachineIndex, int StateIndex);
	float GetRelevantAnimLength(int MachineIndex, int StateIndex);
	class USkeletalMeshComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	float GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex);
	float GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex);
	float GetInstanceStateWeight(int MachineIndex, int StateIndex);
	float GetInstanceMachineWeight(int MachineIndex);
	float GetInstanceCurrentStateElapsedTime(int MachineIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int AssetPlayerIndex);
	float GetInstanceAssetPlayerLength(int AssetPlayerIndex);
	float GetCurveValue(const struct FName& CurveName);
	struct FName GetCurrentStateName(int MachineIndex);
	class UAnimMontage* GetCurrentActiveMontage();
	void STATIC_GetAllCurveNames(TArray<struct FName>* OutNames);
	void STATIC_GetActiveCurveNames(EAnimCurveType CurveType, TArray<struct FName>* OutNames);
	void STATIC_ClearMorphTargets();
	float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_BlueprintPostEvaluateAnimation();
	void STATIC_BlueprintInitializeAnimation();
	void STATIC_BlueprintBeginPlay();
};


// Class Engine.ShapeComponent
// 0x0010 (0x0620 - 0x0610)
class UShapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0610(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShapeComponent");
		return ptr;
	}

};


// Class Engine.BoxComponent
// 0x0010 (0x0630 - 0x0620)
class UBoxComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0620(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxComponent");
		return ptr;
	}


	void STATIC_SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);
	struct FVector GetUnscaledBoxExtent();
	struct FVector GetScaledBoxExtent();
};


// Class Engine.CameraComponent
// 0x0570 (0x0820 - 0x02B0)
class UCameraComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x570];                                     // 0x02B0(0x0570) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraComponent");
		return ptr;
	}


	void STATIC_SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
	void STATIC_SetProjectionMode(TEnumAsByte<ECameraProjectionMode> InProjectionMode);
	void STATIC_SetPostProcessBlendWeight(float InPostProcessBlendWeight);
	void STATIC_SetOrthoWidth(float InOrthoWidth);
	void STATIC_SetOrthoNearClipPlane(float InOrthoNearClipPlane);
	void STATIC_SetOrthoFarClipPlane(float InOrthoFarClipPlane);
	void STATIC_SetFieldOfView(float InFieldOfView);
	void STATIC_SetConstraintAspectRatio(bool bInConstrainAspectRatio);
	void STATIC_SetAspectRatio(float InAspectRatio);
	void STATIC_RemoveBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject);
	void STATIC_GetCameraView(float DeltaTime, struct FMinimalViewInfo* DesiredView);
	void STATIC_AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.InputComponent
// 0x0090 (0x01A8 - 0x0118)
class UInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0118(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputComponent");
		return ptr;
	}


	bool WasControllerKeyJustReleased(const struct FKey& Key);
	bool WasControllerKeyJustPressed(const struct FKey& Key);
	bool IsControllerKeyDown(const struct FKey& Key);
	void STATIC_GetTouchState(int FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	struct FVector GetControllerVectorKeyState(const struct FKey& Key);
	void STATIC_GetControllerMouseDelta(float* DeltaX, float* DeltaY);
	float GetControllerKeyTimeDown(const struct FKey& Key);
	void STATIC_GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	float GetControllerAnalogKeyState(const struct FKey& Key);
};


// Class Engine.LogicalExpressionBaseDataAsset
// 0x0000 (0x0038 - 0x0038)
class ULogicalExpressionBaseDataAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LogicalExpressionBaseDataAsset");
		return ptr;
	}

};


// Class Engine.StaticMeshComponent
// 0x0070 (0x06A0 - 0x0630)
class UStaticMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0630(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshComponent");
		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh* NewMesh);
	void STATIC_SetReverseCulling(bool ReverseCulling);
	void STATIC_SetOverrideMinLOD(bool bNewOverrideMinLOD);
	void STATIC_SetMinLOD(int NewMinLOD);
	int SetLightMapResOverride(int OverrideRes);
	void STATIC_SetForcedLodModel(int NewForcedLodModel);
	void STATIC_SetDistanceFieldSelfShadowBias(float NewValue);
	void STATIC_OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
	void STATIC_GetLocalBounds(struct FVector* Min, struct FVector* Max);
	void STATIC_DisableLightMapResOverride();
};


// Class Engine.SpringArmComponent
// 0x0080 (0x0330 - 0x02B0)
class USpringArmComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpringArmComponent");
		return ptr;
	}


	bool IsCollisionFixApplied();
	struct FVector GetUnfixedCameraPosition();
	struct FRotator GetTargetRotation();
};


// Class Engine.Pawn
// 0x0068 (0x03F0 - 0x0388)
class APawn : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0388(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Pawn");
		return ptr;
	}


	void STATIC_SpawnDefaultController();
	void STATIC_SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
	void STATIC_ReceiveUnpossessed(class AController* OldController);
	void STATIC_ReceivePossessed(class AController* NewController);
	void STATIC_PawnMakeNoise(float Loudness, const struct FVector& NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker);
	void STATIC_OnRep_PlayerState();
	void STATIC_OnRep_Controller();
	void STATIC_LaunchPawn(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	struct FVector K2_GetMovementInputVector();
	bool IsPlayerControlled();
	bool IsMoveInputIgnored();
	bool IsLocallyControlled();
	bool IsControlled();
	struct FVector GetPendingMovementInputVector();
	struct FVector GetNavAgentLocation();
	class UPawnMovementComponent* GetMovementComponent();
	class AActor* GetMovementBaseActor(class APawn* Pawn);
	struct FVector GetLastMovementInputVector();
	struct FRotator GetControlRotation();
	class AController* GetController();
	struct FRotator GetBaseAimRotation();
	void STATIC_DetachFromControllerPendingDestroy();
	struct FVector ConsumeMovementInputVector();
	void STATIC_AddMovementInput(const struct FVector& WorldDirection, float ScaleValue, bool bForce);
	void STATIC_AddControllerYawInput(float Val);
	void STATIC_AddControllerRollInput(float Val);
	void STATIC_AddControllerPitchInput(float Val);
};


// Class Engine.Character
// 0x03C0 (0x07B0 - 0x03F0)
class ACharacter : public APawn
{
public:
	unsigned char                                      UnknownData00[0x3C0];                                     // 0x03F0(0x03C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Character");
		return ptr;
	}


	void STATIC_Uncrouch(bool bClientSimulation);
	void STATIC_StopJumping();
	void STATIC_StopAnimMontage(class UAnimMontage* AnimMontage);
	void STATIC_ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags);
	void STATIC_ServerMoveNoBase(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode);
	void STATIC_ServerMoveDualNoBase(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode);
	void STATIC_ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void STATIC_ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void STATIC_ServerMove(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	void STATIC_RootMotionDebugClientPrintOnScreen(const class FString& inString);
	float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName);
	void STATIC_OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	void STATIC_OnRep_RootMotion();
	void STATIC_OnRep_ReplicatedBasedMovement();
	void STATIC_OnRep_ReplayLastTransformUpdateTimeStamp();
	void STATIC_OnRep_IsCrouched();
	void STATIC_OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void STATIC_OnLanded(const struct FHitResult& Hit);
	void STATIC_OnJumped();
	void STATIC_LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void STATIC_K2_UpdateCustomMovement(float DeltaTime);
	void STATIC_K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void STATIC_K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void STATIC_K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void STATIC_Jump();
	bool IsPlayingRootMotion();
	bool IsPlayingNetworkedRootMotionMontage();
	bool IsJumpProvidingForce();
	class UAnimMontage* GetCurrentMontage();
	struct FVector GetBaseTranslationOffset();
	struct FRotator GetBaseRotationOffsetRotator();
	float GetAnimRootMotionTranslationScale();
	void STATIC_Crouch(bool bClientSimulation);
	void STATIC_ClientVeryShortAdjustPosition(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void STATIC_ClientCheatWalk();
	void STATIC_ClientCheatGhost();
	void STATIC_ClientCheatFly();
	void STATIC_ClientAdjustRootMotionSourcePosition(float Timestamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void STATIC_ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void STATIC_ClientAdjustPosition(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void STATIC_ClientAckGoodMove(float Timestamp);
	bool CanJumpInternal();
	bool CanJump();
	void STATIC_CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation);
};


// Class Engine.Controller
// 0x0080 (0x0408 - 0x0388)
class AController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0388(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Controller");
		return ptr;
	}


	void STATIC_UnPossess();
	void STATIC_StopMovement();
	void STATIC_SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void STATIC_SetIgnoreMoveInput(bool bNewMoveInput);
	void STATIC_SetIgnoreLookInput(bool bNewLookInput);
	void STATIC_SetControlRotation(const struct FRotator& NewRotation);
	void STATIC_ResetIgnoreMoveInput();
	void STATIC_ResetIgnoreLookInput();
	void STATIC_ResetIgnoreInputFlags();
	void STATIC_ReceiveInstigatedAnyDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
	void STATIC_Possess(class APawn* InPawn);
	void STATIC_OnRep_PlayerState();
	void STATIC_OnRep_Pawn();
	bool LineOfSightTo(class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks);
	class APawn* K2_GetPawn();
	bool IsPlayerController();
	bool IsMoveInputIgnored();
	bool IsLookInputIgnored();
	bool IsLocalPlayerController();
	bool IsLocalController();
	class AActor* GetViewTarget();
	struct FRotator GetDesiredRotation();
	struct FRotator GetControlRotation();
	void STATIC_ClientSetRotation(const struct FRotator& NewRotation, bool bResetCamera);
	void STATIC_ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	class APlayerController* CastToPlayerController();
};


// Class Engine.AISystemBase
// 0x0030 (0x0060 - 0x0030)
class UAISystemBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AISystemBase");
		return ptr;
	}

};


// Class Engine.TriggerVolume
// 0x0048 (0x0428 - 0x03E0)
class ATriggerVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03E0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerVolume");
		return ptr;
	}


	void STATIC_SetTriggerEnabled(bool bEnable);
	bool IsTriggerEnabled();
};


// Class Engine.AvoidanceManager
// 0x00B8 (0x00E8 - 0x0030)
class UAvoidanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AvoidanceManager");
		return ptr;
	}


	bool RegisterMovementComponent(class UMovementComponent* MovementComp, float AvoidanceWeight);
	int GetObjectCount();
	int GetNewAvoidanceUID();
	struct FVector GetAvoidanceVelocityForComponent(class UMovementComponent* MovementComp, bool bPerformSweep);
};


// Class Engine.PlayerController
// 0x02D0 (0x06D8 - 0x0408)
class APlayerController : public AController
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0408(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerController");
		return ptr;
	}


	bool WasInputKeyJustReleased(const struct FKey& Key);
	bool WasInputKeyJustPressed(const struct FKey& Key);
	void STATIC_ToggleSpeaking(bool bInSpeaking);
	void STATIC_SwitchLevel(const class FString& URL);
	void STATIC_StopHapticEffect(EControllerHand Hand);
	void STATIC_StartFire(unsigned char FireModeNum);
	void STATIC_SetVirtualJoystickVisibility(bool bVisible);
	void STATIC_SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	void STATIC_SetName(const class FString& S);
	void STATIC_SetMouseLocation(int X, int Y);
	void STATIC_SetMouseCursorWidget(TEnumAsByte<EMouseCursor> Cursor, class UUserWidget* CursorWidget);
	void STATIC_SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand);
	void STATIC_SetDisableHaptics(bool bNewDisabled);
	void STATIC_SetControllerLightColor(const struct FColor& Color);
	void STATIC_SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	void STATIC_SetAudioListenerOverride(class USceneComponent* AttachToComponent, const struct FVector& Location, const struct FRotator& Rotation);
	void STATIC_SetAudioListenerAttenuationOverride(class USceneComponent* AttachToComponent, const struct FVector& AttenuationLocationOVerride);
	void STATIC_ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams);
	void STATIC_ServerViewPrevPlayer();
	void STATIC_ServerViewNextPlayer();
	void STATIC_ServerVerifyViewTarget();
	void STATIC_ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities);
	void STATIC_ServerUpdateLevelVisibility(const struct FName& PackageName, bool bIsVisible);
	void STATIC_ServerUpdateCamera(const struct FVector_NetQuantize& CamLoc, int CamPitchAndYaw);
	void STATIC_ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_ServerToggleAILogging();
	void STATIC_ServerShortTimeout();
	void STATIC_ServerSetSpectatorWaiting(bool bWaiting);
	void STATIC_ServerSetSpectatorLocation(const struct FVector& NewLoc, const struct FRotator& NewRot);
	void STATIC_ServerRestartPlayer();
	void STATIC_ServerPause();
	void STATIC_ServerNotifyLoadedWorld(const struct FName& WorldPackageName);
	void STATIC_ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_ServerCheckClientPossessionReliable();
	void STATIC_ServerCheckClientPossession();
	void STATIC_ServerChangeName(const class FString& S);
	void STATIC_ServerCamera(const struct FName& NewMode);
	void STATIC_ServerAcknowledgePossession(class APawn* P);
	void STATIC_SendToConsole(const class FString& Command);
	void STATIC_RestartLevel();
	bool ProjectWorldLocationToScreen(const struct FVector& WorldLocation, bool bPlayerViewportRelative, struct FVector2D* ScreenLocation);
	void STATIC_PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop);
	void STATIC_PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, const struct FLatentActionInfo& LatentInfo);
	void STATIC_Pause();
	void STATIC_OnServerStartedVisualLogger(bool bIsLogging);
	void STATIC_LocalTravel(const class FString& URL);
	bool IsInputKeyDown(const struct FKey& Key);
	void STATIC_GetViewportSize(int* SizeX, int* SizeY);
	class ASpectatorPawn* GetSpectatorPawn();
	bool GetMousePosition(float* LocationX, float* LocationY);
	struct FVector GetInputVectorKeyState(const struct FKey& Key);
	void STATIC_GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	void STATIC_GetInputMouseDelta(float* DeltaX, float* DeltaY);
	void STATIC_GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration);
	float GetInputKeyTimeDown(const struct FKey& Key);
	void STATIC_GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	float GetInputAnalogKeyState(const struct FKey& Key);
	class AHUD* GetHUD();
	bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	struct FVector GetFocalLocation();
	void STATIC_FOV(float NewFOV);
	void STATIC_EnableCheats();
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection);
	bool DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection);
	void STATIC_ConsoleKey(const struct FKey& Key);
	void STATIC_ClientWasKicked(const struct FText& KickReason);
	void STATIC_ClientVoiceHandshakeComplete();
	void STATIC_ClientUpdateMultipleLevelsStreamingStatus(TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses);
	void STATIC_ClientUpdateLevelStreamingStatus(const struct FName& PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int LODIndex);
	void STATIC_ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_ClientTravelInternal(const class FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void STATIC_ClientTravel(const class FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	void STATIC_ClientTeamMessage(class APlayerState* SenderPlayerState, const class FString& S, const struct FName& Type, float MsgLifeTime);
	void STATIC_ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, const struct FName& Tag);
	void STATIC_ClientStopCameraShake(class UClass* Shake, bool bImmediately);
	void STATIC_ClientStopCameraAnim(class UCameraAnim* AnimToStop);
	void STATIC_ClientStartOnlineSession();
	void STATIC_ClientSpawnCameraLensEffect(class UClass* LensEffectEmitterClass);
	void STATIC_ClientSetViewTarget(class AActor* A, const struct FViewTargetTransitionParams& TransitionParams);
	void STATIC_ClientSetSpectatorWaiting(bool bWaiting);
	void STATIC_ClientSetHUD(class UClass* NewHUDClass);
	void STATIC_ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int CinematicTextureGroups);
	void STATIC_ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
	void STATIC_ClientSetCameraMode(const struct FName& NewCamMode);
	void STATIC_ClientSetCameraFade(bool bEnableFading, const struct FColor& FadeColor, const struct FVector2D& FadeAlpha, float FadeTime, bool bFadeAudio);
	void STATIC_ClientSetBlockOnAsyncLoading();
	void STATIC_ClientReturnToMainMenuWithTextReason(const struct FText& ReturnReason);
	void STATIC_ClientReturnToMainMenu(const class FString& ReturnReason);
	void STATIC_ClientRetryClientRestart(class APawn* NewPawn);
	void STATIC_ClientRestart(class APawn* NewPawn);
	void STATIC_ClientReset();
	void STATIC_ClientRepObjRef(class UObject* Object);
	void STATIC_ClientReceiveLocalizedMessage(class UClass* Message, int Switch, class APlayerState* RelatedPlayerState_2, class APlayerState* RelatedPlayerState_3, class UObject* OptionalObject);
	void STATIC_ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups);
	void STATIC_ClientPrepareMapChange(const struct FName& LevelName, bool bFirst, bool bLast);
	void STATIC_ClientPlaySoundAtLocation(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier);
	void STATIC_ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
	void STATIC_ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, const struct FName& Tag);
	void STATIC_ClientPlayCameraShake(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void STATIC_ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace> Space, const struct FRotator& CustomPlaySpace);
	void STATIC_ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	void STATIC_ClientMessage(const class FString& S, const struct FName& Type, float MsgLifeTime);
	void STATIC_ClientIgnoreMoveInput(bool bIgnore);
	void STATIC_ClientIgnoreLookInput(bool bIgnore);
	void STATIC_ClientGotoState(const struct FName& NewState);
	void STATIC_ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner);
	void STATIC_ClientForceGarbageCollection();
	void STATIC_ClientFlushLevelStreaming();
	void STATIC_ClientEndOnlineSession();
	void STATIC_ClientEnableNetworkVoice(bool bEnable);
	void STATIC_ClientCommitMapChange();
	void STATIC_ClientClearCameraLensEffects();
	void STATIC_ClientCapBandwidth(int Cap);
	void STATIC_ClientCancelPendingMapChange();
	void STATIC_ClientAddTextureStreamingLoc(const struct FVector& InLoc, float Duration, bool bOverrideLocation);
	void STATIC_ClearAudioListenerOverride();
	void STATIC_ClearAudioListenerAttenuationOverride();
	bool CanRestartPlayer();
	void STATIC_Camera(const struct FName& NewMode);
	void STATIC_AddYawInput(float Val);
	void STATIC_AddRollInput(float Val);
	void STATIC_AddPitchInput(float Val);
	void STATIC_ActivateTouchInterface(class UTouchInterface* NewTouchInterface);
};


// Class Engine.CheatManager
// 0x0050 (0x0080 - 0x0030)
class UCheatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheatManager");
		return ptr;
	}


	void STATIC_Walk();
	void STATIC_ViewSelf();
	void STATIC_ViewPlayer(const class FString& S);
	void STATIC_ViewClass(class UClass* DesiredClass);
	void STATIC_ViewActor(const struct FName& ActorName);
	void STATIC_UpdateSafeArea();
	void STATIC_ToggleServerStatReplicatorUpdateStatNet();
	void STATIC_ToggleServerStatReplicatorClientOverwrite();
	void STATIC_ToggleDebugCamera();
	void STATIC_ToggleAILogging();
	void STATIC_TestCollisionDistance();
	void STATIC_Teleport();
	void STATIC_Summon(const class FString& ClassName);
	void STATIC_StreamLevelOut(const struct FName& PackageName);
	void STATIC_StreamLevelIn(const struct FName& PackageName);
	void STATIC_SpawnServerStatReplicator();
	void STATIC_Slomo(float NewTimeDilation);
	void STATIC_SetWorldOrigin();
	void STATIC_SetMouseSensitivityToDefault();
	void STATIC_ServerToggleAILogging();
	void STATIC_ReceiveInitCheatManager();
	void STATIC_ReceiveEndPlay();
	void STATIC_PlayersOnly();
	void STATIC_OnlyLoadLevel(const struct FName& PackageName);
	void STATIC_LogLoc();
	void STATIC_InvertMouse();
	void STATIC_God();
	void STATIC_Ghost();
	void STATIC_FreezeFrame(float Delay);
	void STATIC_Fly();
	void STATIC_FlushLog();
	void STATIC_EnableDebugCamera();
	void STATIC_DumpVoiceMutingState();
	void STATIC_DumpPartyState();
	void STATIC_DumpOnlineSessionState();
	void STATIC_DumpChatState();
	void STATIC_DisableDebugCamera();
	void STATIC_DestroyTarget();
	void STATIC_DestroyServerStatReplicator();
	void STATIC_DestroyPawns(class UClass* aClass);
	void STATIC_DestroyAllPawnsExceptTarget();
	void STATIC_DestroyAll(class UClass* aClass);
	void STATIC_DebugCapsuleSweepSize(float HalfHeight, float Radius);
	void STATIC_DebugCapsuleSweepPawn();
	void STATIC_DebugCapsuleSweepComplex(bool bTraceComplex);
	void STATIC_DebugCapsuleSweepClear();
	void STATIC_DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);
	void STATIC_DebugCapsuleSweepCapture();
	void STATIC_DebugCapsuleSweep();
	void STATIC_DamageTarget(float DamageAmount);
	void STATIC_CheatScript(const class FString& ScriptName);
	void STATIC_ChangeSize(float F);
	void STATIC_BugItStringCreator(const struct FVector& ViewLocation, const struct FRotator& ViewRotation, class FString* GoString, class FString* LocString);
	void STATIC_BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	void STATIC_BugIt(const class FString& ScreenShotDescription);
};


// Class Engine.DamageType
// 0x0018 (0x0048 - 0x0030)
class UDamageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DamageType");
		return ptr;
	}

};


// Class Engine.DebugCameraController
// 0x0048 (0x0720 - 0x06D8)
class ADebugCameraController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x06D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraController");
		return ptr;
	}


	void STATIC_ToggleDisplay();
	void STATIC_ShowDebugSelectedInfo();
	void STATIC_SetPawnMovementSpeedScale(float NewSpeedScale);
	void STATIC_ReceiveOnDeactivate(class APlayerController* RestoredPC);
	void STATIC_ReceiveOnActorSelected(class AActor* NewSelectedActor, const struct FVector& SelectHitLocation, const struct FVector& SelectHitNormal, const struct FHitResult& Hit);
	void STATIC_ReceiveOnActivate(class APlayerController* OriginalPC);
	class AActor* GetSelectedActor();
};


// Class Engine.GameInstance
// 0x0078 (0x00A8 - 0x0030)
class UGameInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameInstance");
		return ptr;
	}


	void STATIC_ReceiveShutdown();
	void STATIC_ReceiveInit();
	void STATIC_HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);
	void STATIC_HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);
	void STATIC_DebugRemovePlayer(int ControllerId);
	void STATIC_DebugCreatePlayer(int ControllerId);
};


// Class Engine.Info
// 0x0000 (0x0388 - 0x0388)
class AInfo : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Info");
		return ptr;
	}

};


// Class Engine.GameModeBase
// 0x00A8 (0x0430 - 0x0388)
class AGameModeBase : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0388(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameModeBase");
		return ptr;
	}


	void STATIC_StartPlay();
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
	class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
	bool ShouldReset(class AActor* ActorToReset);
	void STATIC_ReturnToMainMenuHost();
	void STATIC_RestartPlayerAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
	void STATIC_RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);
	void STATIC_RestartPlayer(class AController* NewPlayer);
	void STATIC_ResetLevel();
	bool PlayerCanRestart(class APlayerController* Player);
	bool MustSpectate(class APlayerController* NewPlayerController);
	void STATIC_K2_PostLogin(class APlayerController* NewPlayer);
	void STATIC_K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC);
	void STATIC_K2_OnRestartPlayer(class AController* NewPlayer);
	void STATIC_K2_OnLogout(class AController* ExitingController);
	void STATIC_K2_OnChangeName(class AController* Other, const class FString& NewName, bool bNameChange);
	class AActor* K2_FindPlayerStart(class AController* Player, const class FString& IncomingName);
	void STATIC_InitStartSpot(class AActor* StartSpot, class AController* NewPlayer);
	void STATIC_InitializeHUDForPlayer(class APlayerController* NewPlayer);
	bool HasMatchStarted();
	void STATIC_HandleStartingNewPlayer(class APlayerController* NewPlayer);
	int GetNumSpectators();
	int GetNumPlayers();
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	class AActor* FindPlayerStart(class AController* Player, const class FString& IncomingName);
	class AActor* ChoosePlayerStart(class AController* Player);
	void STATIC_ChangeName(class AController* Controller, const class FString& NewName, bool bNameChange);
	bool CanSpectate(class APlayerController* Viewer, class APlayerState* ViewTarget);
};


// Class Engine.GameMode
// 0x0048 (0x0478 - 0x0430)
class AGameMode : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0430(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameMode");
		return ptr;
	}


	void STATIC_StartMatch();
	void STATIC_SetBandwidthLimit(float AsyncIOBandwidthLimit);
	void STATIC_Say(const class FString& Msg);
	void STATIC_RestartGame();
	bool ReadyToStartMatch();
	bool ReadyToEndMatch();
	void STATIC_K2_OnSetMatchState(const struct FName& NewState);
	bool IsMatchInProgress();
	bool HasMatchEnded();
	struct FName GetMatchState();
	void STATIC_EndMatch();
	void STATIC_AbortMatch();
};


// Class Engine.GameUserSettings
// 0x00F0 (0x0120 - 0x0030)
class UGameUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameUserSettings");
		return ptr;
	}


	void STATIC_ValidateSettings();
	bool SupportsHDRDisplayOutput();
	void STATIC_SetVSyncEnabled(bool bEnable);
	void STATIC_SetVisualEffectQuality(int Value);
	void STATIC_SetViewDistanceQuality(int Value);
	void STATIC_SetToDefaults();
	void STATIC_SetTextureQuality(int Value);
	void STATIC_SetShadowQuality(int Value);
	void STATIC_SetScreenResolution(const struct FIntPoint& Resolution);
	void STATIC_SetResolutionScaleValueEx(float NewScaleValue);
	void STATIC_SetResolutionScaleValue(int NewScaleValue);
	void STATIC_SetResolutionScaleNormalized(float NewScaleNormalized);
	void STATIC_SetPostProcessingQuality(int Value);
	void STATIC_SetOverallScalabilityLevel(int Value);
	void STATIC_SetFullscreenMode(TEnumAsByte<EWindowMode> InFullscreenMode);
	void STATIC_SetFrameRateLimit(float NewLimit);
	void STATIC_SetFoliageQuality(int Value);
	void STATIC_SetDynamicResolutionEnabled(bool bEnable);
	void STATIC_SetBenchmarkFallbackValues();
	void STATIC_SetAudioQualityLevel(int QualityLevel);
	void STATIC_SetAntiAliasingQuality(int Value);
	void STATIC_SaveSettings();
	void STATIC_RunHardwareBenchmark(int WorkScale, float CPUMultiplier, float GPUMultiplier);
	void STATIC_RevertVideoMode();
	void STATIC_ResetToCurrentSettings();
	void STATIC_LoadSettings(bool bForceReload);
	bool IsVSyncEnabled();
	bool IsVSyncDirty();
	bool IsScreenResolutionDirty();
	bool IsHDREnabled();
	bool IsFullscreenModeDirty();
	bool IsDynamicResolutionEnabled();
	bool IsDynamicResolutionDirty();
	bool IsDirty();
	int GetVisualEffectQuality();
	int GetViewDistanceQuality();
	int GetTextureQuality();
	int GetShadowQuality();
	struct FIntPoint GetScreenResolution();
	void STATIC_GetResolutionScaleInformationEx(float* CurrentScaleNormalized, float* CurrentScaleValue, float* MinScaleValue, float* MaxScaleValue);
	void STATIC_GetResolutionScaleInformation(float* CurrentScaleNormalized, int* CurrentScaleValue, int* MinScaleValue, int* MaxScaleValue);
	float GetRecommendedResolutionScale();
	TEnumAsByte<EWindowMode> GetPreferredFullscreenMode();
	int GetPostProcessingQuality();
	int GetOverallScalabilityLevel();
	struct FIntPoint GetLastConfirmedScreenResolution();
	TEnumAsByte<EWindowMode> GetLastConfirmedFullscreenMode();
	class UGameUserSettings* GetGameUserSettings();
	TEnumAsByte<EWindowMode> GetFullscreenMode();
	float GetFrameRateLimit();
	int GetFoliageQuality();
	struct FIntPoint GetDesktopResolution();
	struct FIntPoint GetDefaultWindowPosition();
	TEnumAsByte<EWindowMode> GetDefaultWindowMode();
	float GetDefaultResolutionScale();
	struct FIntPoint GetDefaultResolution();
	int GetCurrentHDRDisplayNits();
	int GetAudioQualityLevel();
	int GetAntiAliasingQuality();
	void STATIC_EnableHDRDisplayOutput(bool bEnable, int DisplayNits);
	void STATIC_ConfirmVideoMode();
	void STATIC_ApplySettings(bool bCheckForCommandLineOverrides);
	void STATIC_ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
	void STATIC_ApplyNonResolutionSettings();
	void STATIC_ApplyHardwareBenchmarkResults();
};


// Class Engine.Engine
// 0x0DA0 (0x0DD0 - 0x0030)
class UEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0xDA0];                                     // 0x0030(0x0DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Engine");
		return ptr;
	}

};


// Class Engine.ScriptViewportClient
// 0x0010 (0x0040 - 0x0030)
class UScriptViewportClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ScriptViewportClient");
		return ptr;
	}

};


// Class Engine.GameViewportClient
// 0x02C0 (0x0300 - 0x0040)
class UGameViewportClient : public UScriptViewportClient
{
public:
	unsigned char                                      UnknownData00[0x2C0];                                     // 0x0040(0x02C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameViewportClient");
		return ptr;
	}


	void STATIC_SSSwapControllers();
	void STATIC_ShowTitleSafeArea();
	void STATIC_SetConsoleTarget(int PlayerIndex);
};


// Class Engine.NavigationSystemBase
// 0x0000 (0x0030 - 0x0030)
class UNavigationSystemBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystemBase");
		return ptr;
	}

};


// Class Engine.PlayerInput
// 0x0388 (0x03B8 - 0x0030)
class UPlayerInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x388];                                     // 0x0030(0x0388) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerInput");
		return ptr;
	}


	void STATIC_SetMouseSensitivity(float SensitivityX, float SensitivityY);
	void STATIC_SetBind(const struct FName& BindName, const class FString& Command);
	void STATIC_InvertAxisKey(const struct FKey& AxisKey);
	void STATIC_InvertAxis(const struct FName& AxisName);
	void STATIC_ClearSmoothing();
};


// Class Engine.NavigationObjectBase
// 0x0028 (0x03B0 - 0x0388)
class ANavigationObjectBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0388(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationObjectBase");
		return ptr;
	}

};


// Class Engine.PlayerStart
// 0x0008 (0x03B8 - 0x03B0)
class APlayerStart : public ANavigationObjectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStart");
		return ptr;
	}

};


// Class Engine.ProjectileMovementComponent
// 0x00D8 (0x0230 - 0x0158)
class UProjectileMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0158(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProjectileMovementComponent");
		return ptr;
	}


	void STATIC_StopSimulating(const struct FHitResult& HitResult);
	void STATIC_SetVelocityInLocalSpace(const struct FVector& NewVelocity);
	void STATIC_SetInterpolatedComponent(class USceneComponent* Component);
	void STATIC_ResetInterpolation();
	void STATIC_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void STATIC_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void STATIC_MoveInterpolationTarget(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	struct FVector LimitVelocity(const struct FVector& NewVelocity);
	bool IsVelocityUnderSimulationThreshold();
	bool IsInterpolationComplete();
};


// Class Engine.TargetPoint
// 0x0000 (0x0388 - 0x0388)
class ATargetPoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TargetPoint");
		return ptr;
	}

};


// Class Engine.HUD
// 0x00F0 (0x0478 - 0x0388)
class AHUD : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0388(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HUD");
		return ptr;
	}


	void STATIC_ShowHUD();
	void STATIC_ShowDebugToggleSubCategory(const struct FName& Category);
	void STATIC_ShowDebugForReticleTargetToggle(class UClass* DesiredClass);
	void STATIC_ShowDebug(const struct FName& DebugType);
	void STATIC_RemoveDebugText(class AActor* SrcActor, bool bLeaveDurationText);
	void STATIC_RemoveAllDebugStrings();
	void STATIC_ReceiveHitBoxRelease(const struct FName& BoxName);
	void STATIC_ReceiveHitBoxEndCursorOver(const struct FName& BoxName);
	void STATIC_ReceiveHitBoxClick(const struct FName& BoxName);
	void STATIC_ReceiveHitBoxBeginCursorOver(const struct FName& BoxName);
	void STATIC_ReceiveDrawHUD(int SizeX, int SizeY);
	struct FVector Project(const struct FVector& Location);
	void STATIC_PreviousDebugTarget();
	void STATIC_NextDebugTarget();
	void STATIC_GetTextSize(const class FString& Text, class UFont* Font, float Scale, float* OutWidth, float* OutHeight);
	class APlayerController* GetOwningPlayerController();
	class APawn* GetOwningPawn();
	void STATIC_GetActorsInSelectionRectangle(class UClass* ClassFilter, const struct FVector2D& FirstPoint, const struct FVector2D& SecondPoint, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed, TArray<class AActor*>* OutActors);
	void STATIC_DrawTextureSimple(class UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
	void STATIC_DrawTexture(class UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void STATIC_DrawText(const class FString& Text, const struct FLinearColor& TextColor, float ScreenX, float ScreenY, class UFont* Font, float Scale, bool bScalePosition);
	void STATIC_DrawRect(const struct FLinearColor& RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
	void STATIC_DrawMaterialTriangle(class UMaterialInterface* Material, const struct FVector2D& V0_Pos, const struct FVector2D& V1_Pos, const struct FVector2D& V2_Pos, const struct FVector2D& V0_UV, const struct FVector2D& V1_UV, const struct FVector2D& V2_UV, const struct FLinearColor& V0_Color, const struct FLinearColor& V1_Color, const struct FLinearColor& V2_Color);
	void STATIC_DrawMaterialSimple(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
	void STATIC_DrawMaterial(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	void STATIC_DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const struct FLinearColor& LineColor, float LineThickness);
	void STATIC_Deproject(float ScreenX, float ScreenY, struct FVector* WorldPosition, struct FVector* WorldDirection);
	void STATIC_AddHitBox(const struct FVector2D& Position, const struct FVector2D& Size, const struct FName& InName, bool bConsumesInput, int Priority);
	void STATIC_AddDebugText(const class FString& DebugText, class AActor* SrcActor, float Duration, const struct FVector& Offset, const struct FVector& DesiredOffset, const struct FColor& TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UFont* InFont, float FontScale, bool bDrawShadow);
};


// Class Engine.WorldSettings
// 0x0230 (0x05B8 - 0x0388)
class AWorldSettings : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0388(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldSettings");
		return ptr;
	}


	void STATIC_OnRep_WorldGravityZ();
};


// Class Engine.NavAreaBase
// 0x0008 (0x0038 - 0x0030)
class UNavAreaBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAreaBase");
		return ptr;
	}

};


// Class Engine.ParticleSystemComponent
// 0x0250 (0x0860 - 0x0610)
class UParticleSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0610(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemComponent");
		return ptr;
	}


	void STATIC_SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void STATIC_SetTrailSourceData(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
	void STATIC_SetTemplate(class UParticleSystem* NewTemplate);
	void STATIC_SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	void STATIC_SetFloatParameter(const struct FName& ParameterName, float Param);
	void STATIC_SetEmitterEnable(const struct FName& EmitterName, bool bNewEnableState);
	void STATIC_SetEmitterBatchEnable(TArray<struct FName> EmitterNames, bool bNewEnableState);
	void STATIC_SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	void STATIC_SetBeamTargetTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int TargetIndex);
	void STATIC_SetBeamTargetStrength(int EmitterIndex, float NewTargetStrength, int TargetIndex);
	void STATIC_SetBeamTargetPoint(int EmitterIndex, const struct FVector& NewTargetPoint, int TargetIndex);
	void STATIC_SetBeamSourceTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int SourceIndex);
	void STATIC_SetBeamSourceStrength(int EmitterIndex, float NewSourceStrength, int SourceIndex);
	void STATIC_SetBeamSourcePoint(int EmitterIndex, const struct FVector& NewSourcePoint, int SourceIndex);
	void STATIC_SetBeamEndPoint(int EmitterIndex, const struct FVector& NewEndPoint);
	void STATIC_SetAutoAttachParams(class USceneComponent* Parent, const struct FName& SocketName, TEnumAsByte<EAttachLocation> LocationType);
	void STATIC_SetAutoAttachmentParameters(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
	void STATIC_SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	void STATIC_ReleaseToPool();
	int GetNumActiveParticles();
	class UMaterialInterface* GetNamedMaterial(const struct FName& InName);
	bool GetBeamTargetTangent(int EmitterIndex, int TargetIndex, struct FVector* OutTangentPoint);
	bool GetBeamTargetStrength(int EmitterIndex, int TargetIndex, float* OutTargetStrength);
	bool GetBeamTargetPoint(int EmitterIndex, int TargetIndex, struct FVector* OutTargetPoint);
	bool GetBeamSourceTangent(int EmitterIndex, int SourceIndex, struct FVector* OutTangentPoint);
	bool GetBeamSourceStrength(int EmitterIndex, int SourceIndex, float* OutSourceStrength);
	bool GetBeamSourcePoint(int EmitterIndex, int SourceIndex, struct FVector* OutSourcePoint);
	bool GetBeamEndPoint(int EmitterIndex, struct FVector* OutEndPoint);
	void STATIC_GenerateParticleEvent(const struct FName& InEventName, float InEmitterTime, const struct FVector& InLocation, const struct FVector& InDirection, const struct FVector& InVelocity);
	void STATIC_EndTrails();
	class UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(const struct FName& InName, class UMaterialInterface* SourceMaterial);
	void STATIC_BeginTrails(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
};


// Class Engine.StasisLogicBaseDataAsset
// 0x0000 (0x0038 - 0x0038)
class UStasisLogicBaseDataAsset : public ULogicalExpressionBaseDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StasisLogicBaseDataAsset");
		return ptr;
	}

};


// Class Engine.AnimMetaData
// 0x0000 (0x0030 - 0x0030)
class UAnimMetaData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMetaData");
		return ptr;
	}

};


// Class Engine.InstancedStaticMeshComponent
// 0x0090 (0x0730 - 0x06A0)
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x06A0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InstancedStaticMeshComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	void STATIC_SetCullDistances(int StartCullDistance, int EndCullDistance);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	TArray<int> GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace);
	TArray<int> GetInstancesOverlappingBox(const struct FBox& Box, bool bBoxInWorldSpace);
	int GetInstanceCount();
	void STATIC_ClearInstances();
	int AddInstanceWorldSpace(const struct FTransform& WorldTransform);
	int AddInstance(const struct FTransform& InstanceTransform);
};


// Class Engine.HierarchicalInstancedStaticMeshComponent
// 0x0120 (0x0850 - 0x0730)
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0730(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalInstancedStaticMeshComponent");
		return ptr;
	}


	bool RemoveInstances(TArray<int> InstancesToRemove);
};


// Class Engine.StaticMeshActor
// 0x0010 (0x0398 - 0x0388)
class AStaticMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshActor");
		return ptr;
	}


	void STATIC_SetMobility(TEnumAsByte<EComponentMobility> InMobility);
};


// Class Engine.MaterialInterface
// 0x0060 (0x0090 - 0x0030)
class UMaterialInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInterface");
		return ptr;
	}


	void STATIC_SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int CinematicTextureGroups);
	class UPhysicalMaterial* GetPhysicalMaterial();
	class UMaterial* GetBaseMaterial();
};


// Class Engine.MaterialInstance
// 0x0160 (0x01F0 - 0x0090)
class UMaterialInstance : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0090(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceConstant
// 0x0000 (0x01F0 - 0x01F0)
class UMaterialInstanceConstant : public UMaterialInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceConstant");
		return ptr;
	}


	struct FLinearColor K2_GetVectorParameterValue(const struct FName& ParameterName);
	class UTexture* K2_GetTextureParameterValue(const struct FName& ParameterName);
	float K2_GetScalarParameterValue(const struct FName& ParameterName);
};


// Class Engine.MaterialExpression
// 0x0018 (0x0048 - 0x0030)
class UMaterialExpression : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpression");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustomOutput
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionCustomOutput : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustomOutput");
		return ptr;
	}

};


// Class Engine.EngineCustomTimeStep
// 0x0000 (0x0030 - 0x0030)
class UEngineCustomTimeStep : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineCustomTimeStep");
		return ptr;
	}

};


// Class Engine.BlueprintGeneratedClass
// 0x00D8 (0x02E8 - 0x0210)
class UBlueprintGeneratedClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0210(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.CameraActor
// 0x0528 (0x08B0 - 0x0388)
class ACameraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x528];                                     // 0x0388(0x0528) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraActor");
		return ptr;
	}


	int GetAutoActivatePlayerIndex();
};


// Class Engine.SoundEffectPreset
// 0x0018 (0x0048 - 0x0030)
class USoundEffectPreset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectPreset");
		return ptr;
	}

};


// Class Engine.SoundEffectSubmixPreset
// 0x0000 (0x0048 - 0x0048)
class USoundEffectSubmixPreset : public USoundEffectPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSubmixPreset");
		return ptr;
	}

};


// Class Engine.SoundBase
// 0x0080 (0x00B0 - 0x0030)
class USoundBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundBase");
		return ptr;
	}

};


// Class Engine.SoundWave
// 0x0160 (0x0210 - 0x00B0)
class USoundWave : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x00B0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWave");
		return ptr;
	}

};


// Class Engine.SoundWaveProcedural
// 0x0050 (0x0260 - 0x0210)
class USoundWaveProcedural : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0210(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundWaveProcedural");
		return ptr;
	}

};


// Class Engine.BlueprintCore
// 0x0028 (0x0058 - 0x0030)
class UBlueprintCore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintCore");
		return ptr;
	}

};


// Class Engine.Blueprint
// 0x0090 (0x00E8 - 0x0058)
class UBlueprint : public UBlueprintCore
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0058(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Blueprint");
		return ptr;
	}

};


// Class Engine.Model
// 0x02A0 (0x02D0 - 0x0030)
class UModel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0030(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Model");
		return ptr;
	}

};


// Class Engine.Channel
// 0x0040 (0x0070 - 0x0030)
class UChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Channel");
		return ptr;
	}

};


// Class Engine.ActorChannel
// 0x01D0 (0x0240 - 0x0070)
class UActorChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0070(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ActorChannel");
		return ptr;
	}

};


// Class Engine.AnimationAsset
// 0x0058 (0x0088 - 0x0030)
class UAnimationAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationAsset");
		return ptr;
	}

};


// Class Engine.BlendSpaceBase
// 0x00C8 (0x0150 - 0x0088)
class UBlendSpaceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0088(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpaceBase");
		return ptr;
	}

};


// Class Engine.BlendSpace
// 0x0008 (0x0158 - 0x0150)
class UBlendSpace : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace
// 0x0000 (0x0158 - 0x0158)
class UAimOffsetBlendSpace : public UBlendSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace");
		return ptr;
	}

};


// Class Engine.BlendSpace1D
// 0x0008 (0x0158 - 0x0150)
class UBlendSpace1D : public UBlendSpaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendSpace1D");
		return ptr;
	}

};


// Class Engine.AimOffsetBlendSpace1D
// 0x0000 (0x0158 - 0x0158)
class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AimOffsetBlendSpace1D");
		return ptr;
	}

};


// Class Engine.AmbientSound
// 0x0008 (0x0390 - 0x0388)
class AAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbientSound");
		return ptr;
	}


	void STATIC_Stop();
	void STATIC_Play(float StartTime);
	void STATIC_FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void STATIC_FadeIn(float FadeInDuration, float FadeVolumeLevel);
	void STATIC_AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};


// Class Engine.AnimationSettings
// 0x0038 (0x0078 - 0x0040)
class UAnimationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimationSettings");
		return ptr;
	}

};


// Class Engine.AnimBlueprint
// 0x0028 (0x0110 - 0x00E8)
class UAnimBlueprint : public UBlueprint
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprint");
		return ptr;
	}

};


// Class Engine.AnimBlueprintGeneratedClass
// 0x0070 (0x0358 - 0x02E8)
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02E8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimBlueprintGeneratedClass");
		return ptr;
	}

};


// Class Engine.AnimClassData
// 0x0070 (0x00A0 - 0x0030)
class UAnimClassData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassData");
		return ptr;
	}

};


// Class Engine.AnimClassInterface
// 0x0000 (0x0030 - 0x0030)
class UAnimClassInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimClassInterface");
		return ptr;
	}

};


// Class Engine.AnimSequenceBase
// 0x0028 (0x00B0 - 0x0088)
class UAnimSequenceBase : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0088(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequenceBase");
		return ptr;
	}


	float GetPlayLength();
};


// Class Engine.AnimCompositeBase
// 0x0000 (0x00B0 - 0x00B0)
class UAnimCompositeBase : public UAnimSequenceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompositeBase");
		return ptr;
	}

};


// Class Engine.AnimComposite
// 0x0010 (0x00C0 - 0x00B0)
class UAnimComposite : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimComposite");
		return ptr;
	}

};


// Class Engine.AnimCompress
// 0x0028 (0x0058 - 0x0030)
class UAnimCompress : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress");
		return ptr;
	}

};


// Class Engine.AnimCompress_Automatic
// 0x0008 (0x0060 - 0x0058)
class UAnimCompress_Automatic : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_Automatic");
		return ptr;
	}

};


// Class Engine.AnimCompress_BitwiseCompressOnly
// 0x0000 (0x0058 - 0x0058)
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_BitwiseCompressOnly");
		return ptr;
	}

};


// Class Engine.AnimCompress_LeastDestructive
// 0x0000 (0x0058 - 0x0058)
class UAnimCompress_LeastDestructive : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_LeastDestructive");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveLinearKeys
// 0x0020 (0x0078 - 0x0058)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveLinearKeys");
		return ptr;
	}

};


// Class Engine.AnimCompress_PerTrackCompression
// 0x0080 (0x00F8 - 0x0078)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_PerTrackCompression");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x0008 (0x0060 - 0x0058)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveEverySecondKey");
		return ptr;
	}

};


// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x0010 (0x0068 - 0x0058)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimCompress_RemoveTrivialKeys");
		return ptr;
	}

};


// Class Engine.AnimMontage
// 0x0138 (0x01E8 - 0x00B0)
class UAnimMontage : public UAnimCompositeBase
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x00B0(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimMontage");
		return ptr;
	}


	float GetDefaultBlendOutTime();
};


// Class Engine.AnimNotify_PauseClothingSimulation
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_PauseClothingSimulation : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PauseClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlayParticleEffect
// 0x0050 (0x0090 - 0x0040)
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotify_PlaySound
// 0x0020 (0x0060 - 0x0040)
class UAnimNotify_PlaySound : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_PlaySound");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResetClothingSimulation
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_ResetClothingSimulation : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResetDynamics
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_ResetDynamics : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResetDynamics");
		return ptr;
	}

};


// Class Engine.AnimNotify_ResumeClothingSimulation
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_ResumeClothingSimulation : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotify_ResumeClothingSimulation");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_DisableRootMotion
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_DisableRootMotion : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_DisableRootMotion");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x0030 (0x0068 - 0x0038)
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_TimedParticleEffect");
		return ptr;
	}

};


// Class Engine.AnimNotifyState_Trail
// 0x0030 (0x0068 - 0x0038)
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimNotifyState_Trail");
		return ptr;
	}


	class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


// Class Engine.AnimSequence
// 0x0108 (0x01B8 - 0x00B0)
class UAnimSequence : public UAnimSequenceBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x00B0(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSequence");
		return ptr;
	}

};


// Class Engine.AnimSet
// 0x00C8 (0x00F8 - 0x0030)
class UAnimSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSet");
		return ptr;
	}

};


// Class Engine.AnimSingleNodeInstance
// 0x0010 (0x0380 - 0x0370)
class UAnimSingleNodeInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimSingleNodeInstance");
		return ptr;
	}


	void STATIC_StopAnim();
	void STATIC_SetReverse(bool bInReverse);
	void STATIC_SetPreviewCurveOverride(const struct FName& PoseName, float Value, bool bRemoveIfZero);
	void STATIC_SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
	void STATIC_SetPosition(float InPosition, bool bFireNotifies);
	void STATIC_SetPlayRate(float InPlayRate);
	void STATIC_SetPlaying(bool bIsPlaying);
	void STATIC_SetLooping(bool bIsLooping);
	void STATIC_SetBlendSpaceInput(const struct FVector& InBlendInput);
	void STATIC_SetAnimationAsset(class UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
	void STATIC_PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
	float GetLength();
	class UAnimationAsset* GetAnimationAsset();
};


// Class Engine.AnimStateMachineTypes
// 0x0000 (0x0030 - 0x0030)
class UAnimStateMachineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AnimStateMachineTypes");
		return ptr;
	}

};


// Class Engine.ApplicationLifecycleComponent
// 0x0090 (0x01A8 - 0x0118)
class UApplicationLifecycleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0118(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ApplicationLifecycleComponent");
		return ptr;
	}

};


// Class Engine.ArrowComponent
// 0x0010 (0x0620 - 0x0610)
class UArrowComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0610(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ArrowComponent");
		return ptr;
	}


	void STATIC_SetArrowColor(const struct FLinearColor& NewColor);
};


// Class Engine.AssetExportTask
// 0x0050 (0x0080 - 0x0030)
class UAssetExportTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetExportTask");
		return ptr;
	}

};


// Class Engine.AssetManager
// 0x03B0 (0x03E0 - 0x0030)
class UAssetManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x0030(0x03B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManager");
		return ptr;
	}

};


// Class Engine.AssetManagerSettings
// 0x00B8 (0x00F8 - 0x0040)
class UAssetManagerSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0040(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetManagerSettings");
		return ptr;
	}

};


// Class Engine.AssetMappingTable
// 0x0010 (0x0040 - 0x0030)
class UAssetMappingTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AssetMappingTable");
		return ptr;
	}

};


// Class Engine.AsyncActionLoadPrimaryAssetBase
// 0x0048 (0x0080 - 0x0038)
class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetBase");
		return ptr;
	}

};


// Class Engine.AsyncActionLoadPrimaryAsset
// 0x0010 (0x0090 - 0x0080)
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAsset");
		return ptr;
	}


	class UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(class UObject* WorldContextObject, const struct FPrimaryAssetId& PrimaryAsset, TArray<struct FName> LoadBundles);
};


// Class Engine.AsyncActionLoadPrimaryAssetClass
// 0x0010 (0x0090 - 0x0080)
class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetClass");
		return ptr;
	}


	class UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(class UObject* WorldContextObject, const struct FPrimaryAssetId& PrimaryAsset, TArray<struct FName> LoadBundles);
};


// Class Engine.AsyncActionLoadPrimaryAssetList
// 0x0010 (0x0090 - 0x0080)
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetList");
		return ptr;
	}


	class UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(class UObject* WorldContextObject, TArray<struct FPrimaryAssetId> PrimaryAssetList, TArray<struct FName> LoadBundles);
};


// Class Engine.AsyncActionLoadPrimaryAssetClassList
// 0x0010 (0x0090 - 0x0080)
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionLoadPrimaryAssetClassList");
		return ptr;
	}


	class UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(class UObject* WorldContextObject, TArray<struct FPrimaryAssetId> PrimaryAssetList, TArray<struct FName> LoadBundles);
};


// Class Engine.AsyncActionChangePrimaryAssetBundles
// 0x0010 (0x0090 - 0x0080)
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AsyncActionChangePrimaryAssetBundles");
		return ptr;
	}


	class UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(class UObject* WorldContextObject, TArray<struct FPrimaryAssetId> PrimaryAssetList, TArray<struct FName> AddBundles, TArray<struct FName> RemoveBundles);
	class UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(class UObject* WorldContextObject, TArray<struct FName> NewBundles, TArray<struct FName> OldBundles);
};


// Class Engine.AtmosphericFog
// 0x0008 (0x0390 - 0x0388)
class AAtmosphericFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFog");
		return ptr;
	}

};


// Class Engine.AtmosphericFogComponent
// 0x0200 (0x04B0 - 0x02B0)
class UAtmosphericFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x02B0(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AtmosphericFogComponent");
		return ptr;
	}


	void STATIC_StartPrecompute();
	void STATIC_SetSunMultiplier(float NewSunMultiplier);
	void STATIC_SetStartDistance(float NewStartDistance);
	void STATIC_SetPrecomputeParams(float DensityHeight, int MaxScatteringOrder, int InscatterAltitudeSampleNum);
	void STATIC_SetFogMultiplier(float NewFogMultiplier);
	void STATIC_SetDistanceScale(float NewDistanceScale);
	void STATIC_SetDistanceOffset(float NewDistanceOffset);
	void STATIC_SetDensityOffset(float NewDensityOffset);
	void STATIC_SetDensityMultiplier(float NewDensityMultiplier);
	void STATIC_SetDefaultLightColor(const struct FLinearColor& NewLightColor);
	void STATIC_SetDefaultBrightness(float NewBrightness);
	void STATIC_SetAltitudeScale(float NewAltitudeScale);
	void STATIC_DisableSunDisk(bool NewSunDisk);
	void STATIC_DisableGroundScattering(bool NewGroundScattering);
};


// Class Engine.AudioSettings
// 0x00C0 (0x0100 - 0x0040)
class UAudioSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0040(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioSettings");
		return ptr;
	}

};


// Class Engine.AudioVolume
// 0x0050 (0x0430 - 0x03E0)
class AAudioVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AudioVolume");
		return ptr;
	}


	void STATIC_SetReverbSettings(const struct FReverbSettings& NewReverbSettings);
	void STATIC_SetPriority(float NewPriority);
	void STATIC_SetInteriorSettings(const struct FInteriorSettings& NewInteriorSettings);
	void STATIC_SetEnabled(bool bNewEnabled);
	void STATIC_OnRep_bEnabled();
};


// Class Engine.AutomationTestSettings
// 0x0300 (0x0330 - 0x0030)
class UAutomationTestSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x0030(0x0300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AutomationTestSettings");
		return ptr;
	}

};


// Class Engine.BillboardComponent
// 0x0020 (0x0630 - 0x0610)
class UBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0610(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BillboardComponent");
		return ptr;
	}


	void STATIC_SetUV(int NewU, int NewUL, int NewV, int NewVL);
	void STATIC_SetSpriteAndUV(class UTexture2D* NewSprite, int NewU, int NewUL, int NewV, int NewVL);
	void STATIC_SetSprite(class UTexture2D* NewSprite);
};


// Class Engine.BlendableInterface
// 0x0000 (0x0030 - 0x0030)
class UBlendableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendableInterface");
		return ptr;
	}

};


// Class Engine.Skeleton
// 0x0338 (0x0368 - 0x0030)
class USkeleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x338];                                     // 0x0030(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Skeleton");
		return ptr;
	}

};


// Class Engine.BlendProfile
// 0x0020 (0x0050 - 0x0030)
class UBlendProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlendProfile");
		return ptr;
	}

};


// Class Engine.BlockingVolume
// 0x0000 (0x03E0 - 0x03E0)
class ABlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlockingVolume");
		return ptr;
	}

};


// Class Engine.BlueprintMapLibrary
// 0x0000 (0x0030 - 0x0030)
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintMapLibrary");
		return ptr;
	}


	void STATIC_SetMapPropertyByName(class UObject* Object, const struct FName& PropertyName, TMap<int, int> Value);
	void STATIC_Map_Values(TMap<int, int> TargetMap, TArray<int>* Values);
	bool Map_Remove(TMap<int, int> TargetMap, int Key);
	int Map_Length(TMap<int, int> TargetMap);
	void STATIC_Map_Keys(TMap<int, int> TargetMap, TArray<int>* Keys);
	bool Map_Find(TMap<int, int> TargetMap, int Key, int* Value);
	bool Map_Contains(TMap<int, int> TargetMap, int Key);
	void STATIC_Map_Clear(TMap<int, int> TargetMap);
	void STATIC_Map_Add(TMap<int, int> TargetMap, int Key, int Value);
};


// Class Engine.PlatformGameInstance
// 0x00D0 (0x0178 - 0x00A8)
class UPlatformGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00A8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformGameInstance");
		return ptr;
	}

};


// Class Engine.BlueprintPlatformLibrary
// 0x0000 (0x0030 - 0x0030)
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintPlatformLibrary");
		return ptr;
	}


	void STATIC_ScheduleLocalNotificationFromNow(int inSecondsFromNow, const struct FText& Title, const struct FText& Body, const struct FText& Action, const class FString& ActivationEvent);
	void STATIC_ScheduleLocalNotificationBadgeFromNow(int inSecondsFromNow, const class FString& ActivationEvent);
	void STATIC_ScheduleLocalNotificationBadgeAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const class FString& ActivationEvent);
	void STATIC_ScheduleLocalNotificationAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const struct FText& Title, const struct FText& Body, const struct FText& Action, const class FString& ActivationEvent);
	void STATIC_GetLaunchNotification(bool* NotificationLaunchedApp, class FString* ActivationEvent, int* FireDate);
	TEnumAsByte<EScreenOrientation> GetDeviceOrientation();
	void STATIC_ClearAllLocalNotifications();
	void STATIC_CancelLocalNotification(const class FString& ActivationEvent);
};


// Class Engine.BlueprintSetLibrary
// 0x0000 (0x0030 - 0x0030)
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BlueprintSetLibrary");
		return ptr;
	}


	void STATIC_SetSetPropertyByName(class UObject* Object, const struct FName& PropertyName);
	void STATIC_Set_Union();
	void STATIC_Set_ToArray(TArray<int>* Result);
	void STATIC_Set_RemoveItems(TArray<int> Items);
	bool Set_Remove(int Item);
	int Set_Length();
	void STATIC_Set_Intersection();
	void STATIC_Set_Difference();
	bool Set_Contains(int ItemToFind);
	void STATIC_Set_Clear();
	void STATIC_Set_AddItems(TArray<int> NewItems);
	void STATIC_Set_Add(int NewItem);
};


// Class Engine.BodySetup
// 0x0258 (0x0288 - 0x0030)
class UBodySetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x258];                                     // 0x0030(0x0258) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BodySetup");
		return ptr;
	}

};


// Class Engine.BoneMaskFilter
// 0x0010 (0x0040 - 0x0030)
class UBoneMaskFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoneMaskFilter");
		return ptr;
	}

};


// Class Engine.BookmarkBase
// 0x0000 (0x0030 - 0x0030)
class UBookmarkBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookmarkBase");
		return ptr;
	}

};


// Class Engine.BookMark
// 0x0028 (0x0058 - 0x0030)
class UBookMark : public UBookmarkBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark");
		return ptr;
	}

};


// Class Engine.BookMark2D
// 0x0010 (0x0040 - 0x0030)
class UBookMark2D : public UBookmarkBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BookMark2D");
		return ptr;
	}

};


// Class Engine.ReflectionCapture
// 0x0008 (0x0390 - 0x0388)
class AReflectionCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCapture");
		return ptr;
	}

};


// Class Engine.BoxReflectionCapture
// 0x0000 (0x0390 - 0x0390)
class ABoxReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCapture");
		return ptr;
	}

};


// Class Engine.ReflectionCaptureComponent
// 0x0070 (0x0320 - 0x02B0)
class UReflectionCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.BoxReflectionCaptureComponent
// 0x0010 (0x0330 - 0x0320)
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BoxReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.Breakpoint
// 0x0018 (0x0048 - 0x0030)
class UBreakpoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Breakpoint");
		return ptr;
	}

};


// Class Engine.BrushBuilder
// 0x0058 (0x0088 - 0x0030)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushBuilder");
		return ptr;
	}

};


// Class Engine.BrushComponent
// 0x0010 (0x0620 - 0x0610)
class UBrushComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0610(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushComponent");
		return ptr;
	}

};


// Class Engine.BrushShape
// 0x0000 (0x03C0 - 0x03C0)
class ABrushShape : public ABrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.BrushShape");
		return ptr;
	}

};


// Class Engine.ButtonStyleAsset
// 0x0278 (0x02A8 - 0x0030)
class UButtonStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x278];                                     // 0x0030(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ButtonStyleAsset");
		return ptr;
	}

};


// Class Engine.CameraAnim
// 0x0530 (0x0560 - 0x0030)
class UCameraAnim : public UObject
{
public:
	unsigned char                                      UnknownData00[0x530];                                     // 0x0030(0x0530) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnim");
		return ptr;
	}

};


// Class Engine.CameraAnimInst
// 0x00F0 (0x0120 - 0x0030)
class UCameraAnimInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraAnimInst");
		return ptr;
	}


	void STATIC_Stop(bool bImmediate);
	void STATIC_SetScale(float NewDuration);
	void STATIC_SetDuration(float NewDuration);
};


// Class Engine.CameraBlockingVolume
// 0x0000 (0x03E0 - 0x03E0)
class ACameraBlockingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraBlockingVolume");
		return ptr;
	}

};


// Class Engine.CameraModifier
// 0x0020 (0x0050 - 0x0030)
class UCameraModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier");
		return ptr;
	}


	bool IsDisabled();
	class AActor* GetViewTarget();
	void STATIC_EnableModifier();
	void STATIC_DisableModifier(bool bImmediate);
	void STATIC_BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);
	void STATIC_BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
};


// Class Engine.CameraModifier_CameraShake
// 0x0018 (0x0068 - 0x0050)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraModifier_CameraShake");
		return ptr;
	}

};


// Class Engine.CameraShake
// 0x0140 (0x0170 - 0x0030)
class UCameraShake : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0030(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CameraShake");
		return ptr;
	}


	void STATIC_ReceiveStopShake(bool bImmediately);
	void STATIC_ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void STATIC_BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
};


// Class Engine.Canvas
// 0x02A0 (0x02D0 - 0x0030)
class UCanvas : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0030(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Canvas");
		return ptr;
	}


	struct FVector2D K2_TextSize(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& Scale);
	struct FVector2D K2_StrLen(class UFont* RenderFont, const class FString& RenderText);
	struct FVector K2_Project(const struct FVector& WorldLocation);
	void STATIC_K2_DrawTriangle(class UTexture* RenderTexture, TArray<struct FCanvasUVTri> Triangles);
	void STATIC_K2_DrawTexture(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, const struct FVector2D& PivotPoint);
	void STATIC_K2_DrawText(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	void STATIC_K2_DrawPolygon(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& Radius, int NumberOfSides, const struct FLinearColor& RenderColor);
	void STATIC_K2_DrawMaterialTriangle(class UMaterialInterface* RenderMaterial, TArray<struct FCanvasUVTri> Triangles);
	void STATIC_K2_DrawMaterial(class UMaterialInterface* RenderMaterial, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, float Rotation, const struct FVector2D& PivotPoint);
	void STATIC_K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
	void STATIC_K2_DrawBox(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness, const struct FLinearColor& RenderColor);
	void STATIC_K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, const struct FVector2D& BorderScale, const struct FVector2D& BackgroundScale, float Rotation, const struct FVector2D& PivotPoint, const struct FVector2D& CornerSize);
	void STATIC_K2_Deproject(const struct FVector2D& ScreenPosition, struct FVector* WorldOrigin, struct FVector* WorldDirection);
};


// Class Engine.Texture
// 0x0088 (0x00B8 - 0x0030)
class UTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget
// 0x0008 (0x00C0 - 0x00B8)
class UTextureRenderTarget : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget");
		return ptr;
	}

};


// Class Engine.TextureRenderTarget2D
// 0x0028 (0x00E8 - 0x00C0)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTarget2D");
		return ptr;
	}

};


// Class Engine.CanvasRenderTarget2D
// 0x0020 (0x0108 - 0x00E8)
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00E8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CanvasRenderTarget2D");
		return ptr;
	}


	void STATIC_UpdateResource();
	void STATIC_ReceiveUpdate(class UCanvas* Canvas, int Width, int Height);
	void STATIC_GetSize(int* Width, int* Height);
	class UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(class UObject* WorldContextObject, class UClass* CanvasRenderTarget2DClass, int Width, int Height);
};


// Class Engine.CapsuleComponent
// 0x0010 (0x0630 - 0x0620)
class UCapsuleComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0620(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CapsuleComponent");
		return ptr;
	}


	void STATIC_SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
	void STATIC_SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
	void STATIC_SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
	void STATIC_GetUnscaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere);
	void STATIC_GetUnscaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetUnscaledCapsuleRadius();
	float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	float GetUnscaledCapsuleHalfHeight();
	float GetShapeScale();
	void STATIC_GetScaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere);
	void STATIC_GetScaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	float GetScaledCapsuleRadius();
	float GetScaledCapsuleHalfHeight_WithoutHemisphere();
	float GetScaledCapsuleHalfHeight();
};


// Class Engine.CheckBoxStyleAsset
// 0x0580 (0x05B0 - 0x0030)
class UCheckBoxStyleAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x580];                                     // 0x0030(0x0580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CheckBoxStyleAsset");
		return ptr;
	}

};


// Class Engine.ChildActorComponent
// 0x0040 (0x02F0 - 0x02B0)
class UChildActorComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildActorComponent");
		return ptr;
	}


	void STATIC_SetChildActorClass(class UClass* InClass);
};


// Class Engine.ChildConnection
// 0x0008 (0x1928 - 0x1920)
class UChildConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1920(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ChildConnection");
		return ptr;
	}

};


// Class Engine.Cloud
// 0x0008 (0x0390 - 0x0388)
class ACloud : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Cloud");
		return ptr;
	}

};


// Class Engine.CloudComponent
// 0x0430 (0x06E0 - 0x02B0)
class UCloudComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x430];                                     // 0x02B0(0x0430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudComponent");
		return ptr;
	}


	void STATIC_SetWindSettings(float WindSpeed, float WindDirection, float HighAltitudeWindSpeed, float HighAltitudeWindDirection);
	void STATIC_SetHighCloudMaps(class UTexture* StartHighCloudMap, class UTexture* EndHighCloudMap, float HighCloudErosion, float HighCloudScattering, float HighCloudOpacity);
	void STATIC_SetCloudMaps(class UTexture* StartCloudMapForWeather1, class UTexture* TargetCloudMapForWeather1, class UTexture* StartCloudMapForWeather2, class UTexture* TargetCloudMapForWeather2, float TimeOfDayAlpha, float WeatherAlpha, float Density, float Scattering, float Extinction);
	void STATIC_SetAmbientSettings(float AmbientScale, float HighAmbientScale, float HighCloudsBrightness);
};


// Class Engine.PlatformInterfaceBase
// 0x0010 (0x0040 - 0x0030)
class UPlatformInterfaceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceBase");
		return ptr;
	}

};


// Class Engine.CloudStorageBase
// 0x0018 (0x0058 - 0x0040)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CloudStorageBase");
		return ptr;
	}

};


// Class Engine.CollisionProfile
// 0x0120 (0x0160 - 0x0040)
class UCollisionProfile : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0040(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CollisionProfile");
		return ptr;
	}

};


// Class Engine.Commandlet
// 0x0058 (0x0088 - 0x0030)
class UCommandlet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Commandlet");
		return ptr;
	}

};


// Class Engine.DynamicBlueprintBinding
// 0x0000 (0x0030 - 0x0030)
class UDynamicBlueprintBinding : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DynamicBlueprintBinding");
		return ptr;
	}

};


// Class Engine.ComponentDelegateBinding
// 0x0010 (0x0040 - 0x0030)
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ComponentDelegateBinding");
		return ptr;
	}

};


// Class Engine.CurveTable
// 0x0070 (0x00A0 - 0x0030)
class UCurveTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveTable");
		return ptr;
	}

};


// Class Engine.CompositeCurveTable
// 0x0020 (0x00C0 - 0x00A0)
class UCompositeCurveTable : public UCurveTable
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CompositeCurveTable");
		return ptr;
	}

};


// Class Engine.DataTable
// 0x0078 (0x00A8 - 0x0030)
class UDataTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTable");
		return ptr;
	}

};


// Class Engine.CompositeDataTable
// 0x0028 (0x00D0 - 0x00A8)
class UCompositeDataTable : public UDataTable
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CompositeDataTable");
		return ptr;
	}

};


// Class Engine.Console
// 0x0108 (0x0138 - 0x0030)
class UConsole : public UObject
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0030(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Console");
		return ptr;
	}

};


// Class Engine.ControlChannel
// 0x0018 (0x0088 - 0x0070)
class UControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlChannel");
		return ptr;
	}

};


// Class Engine.ControlRigInterface
// 0x0000 (0x0030 - 0x0030)
class UControlRigInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ControlRigInterface");
		return ptr;
	}

};


// Class Engine.StreamingSettings
// 0x0038 (0x0078 - 0x0040)
class UStreamingSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StreamingSettings");
		return ptr;
	}

};


// Class Engine.GarbageCollectionSettings
// 0x0020 (0x0060 - 0x0040)
class UGarbageCollectionSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GarbageCollectionSettings");
		return ptr;
	}

};


// Class Engine.CullDistanceVolume
// 0x0018 (0x03F8 - 0x03E0)
class ACullDistanceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullDistanceVolume");
		return ptr;
	}

};


// Class Engine.CullPortalVolume
// 0x0018 (0x03F8 - 0x03E0)
class ACullPortalVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CullPortalVolume");
		return ptr;
	}

};


// Class Engine.CurveBase
// 0x0008 (0x0038 - 0x0030)
class UCurveBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveBase");
		return ptr;
	}


	void STATIC_GetValueRange(float* MinValue, float* MaxValue);
	void STATIC_GetTimeRange(float* MinTime, float* MaxTime);
};


// Class Engine.CurveEdPresetCurve
// 0x0000 (0x0030 - 0x0030)
class UCurveEdPresetCurve : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveEdPresetCurve");
		return ptr;
	}

};


// Class Engine.CurveFloat
// 0x0078 (0x00B0 - 0x0038)
class UCurveFloat : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveFloat");
		return ptr;
	}


	float GetFloatValue(float InTime);
};


// Class Engine.CurveLinearColor
// 0x01E0 (0x0218 - 0x0038)
class UCurveLinearColor : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0038(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColor");
		return ptr;
	}


	struct FLinearColor GetLinearColorValue(float InTime);
	struct FLinearColor GetClampedLinearColorValue(float InTime);
};


// Class Engine.Texture2D
// 0x0040 (0x00F8 - 0x00B8)
class UTexture2D : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00B8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2D");
		return ptr;
	}


	int Blueprint_GetSizeY();
	int Blueprint_GetSizeX();
};


// Class Engine.CurveLinearColorAtlas
// 0x0018 (0x0110 - 0x00F8)
class UCurveLinearColorAtlas : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveLinearColorAtlas");
		return ptr;
	}


	bool GetCurvePosition(class UCurveLinearColor* InCurve, float* Position);
};


// Class Engine.CurveSourceInterface
// 0x0000 (0x0030 - 0x0030)
class UCurveSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveSourceInterface");
		return ptr;
	}


	float GetCurveValue(const struct FName& CurveName);
	void STATIC_GetCurves(TArray<struct FNamedCurveValue>* OutValues);
	struct FName GetBindingName();
};


// Class Engine.CurveVector
// 0x0150 (0x0188 - 0x0038)
class UCurveVector : public UCurveBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0038(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.CurveVector");
		return ptr;
	}


	struct FVector GetVectorValue(float InTime);
};


// Class Engine.DataTableFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DataTableFunctionLibrary");
		return ptr;
	}


	void STATIC_GetDataTableRowNames(class UDataTable* Table, TArray<struct FName>* OutRowNames);
	bool GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow);
	TArray<class FString> GetDataTableColumnAsString(class UDataTable* DataTable, const struct FName& PropertyName);
	void STATIC_EvaluateCurveTableRow(class UCurveTable* CurveTable, const struct FName& RowName, float InXY, const class FString& ContextString, TEnumAsByte<EEvaluateCurveTableResult>* OutResult, float* OutXY);
	bool DoesDataTableRowExist(class UDataTable* Table, const struct FName& RowName);
};


// Class Engine.DebugCameraHUD
// 0x0000 (0x0478 - 0x0478)
class ADebugCameraHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugCameraHUD");
		return ptr;
	}

};


// Class Engine.DebugDrawService
// 0x0000 (0x0030 - 0x0030)
class UDebugDrawService : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DebugDrawService");
		return ptr;
	}

};


// Class Engine.DecalActor
// 0x0008 (0x0390 - 0x0388)
class ADecalActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalActor");
		return ptr;
	}


	void STATIC_SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


// Class Engine.DecalComponent
// 0x0040 (0x0300 - 0x02C0)
class UDecalComponent : public UStreamableComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02C0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DecalComponent");
		return ptr;
	}


	void STATIC_SetSortOrder(int Value);
	void STATIC_SetFadeScreenSize(float NewFadeScreenSize);
	void STATIC_SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
	void STATIC_SetFadeIn(float StartDelay, float Duaration);
	void STATIC_SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	float GetFadeStartDelay();
	float GetFadeInStartDelay();
	float GetFadeInDuration();
	float GetFadeDuration();
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


// Class Engine.DefaultPawn
// 0x0028 (0x0418 - 0x03F0)
class ADefaultPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPawn");
		return ptr;
	}


	void STATIC_TurnAtRate(float Rate);
	void STATIC_MoveUp_World(float Val);
	void STATIC_MoveRight(float Val);
	void STATIC_MoveForward(float Val);
	void STATIC_LookUpAtRate(float Rate);
};


// Class Engine.PhysicsVolume
// 0x0010 (0x03F0 - 0x03E0)
class APhysicsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsVolume");
		return ptr;
	}

};


// Class Engine.DefaultPhysicsVolume
// 0x0000 (0x03F0 - 0x03F0)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DefaultPhysicsVolume");
		return ptr;
	}

};


// Class Engine.DemoNetConnection
// 0x0020 (0x1940 - 0x1920)
class UDemoNetConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x1920(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetConnection");
		return ptr;
	}

};


// Class Engine.DemoNetDriver
// 0x06A0 (0x0D40 - 0x06A0)
class UDemoNetDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0x6A0];                                     // 0x06A0(0x06A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoNetDriver");
		return ptr;
	}

};


// Class Engine.PendingNetGame
// 0x00A0 (0x00D0 - 0x0030)
class UPendingNetGame : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PendingNetGame");
		return ptr;
	}

};


// Class Engine.DemoPendingNetGame
// 0x0000 (0x00D0 - 0x00D0)
class UDemoPendingNetGame : public UPendingNetGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DemoPendingNetGame");
		return ptr;
	}

};


// Class Engine.DestructibleInterface
// 0x0000 (0x0030 - 0x0030)
class UDestructibleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DestructibleInterface");
		return ptr;
	}

};


// Class Engine.TextureLODSettings
// 0x0010 (0x0040 - 0x0030)
class UTextureLODSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLODSettings");
		return ptr;
	}

};


// Class Engine.DeviceProfile
// 0x0060 (0x00A0 - 0x0040)
class UDeviceProfile : public UTextureLODSettings
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfile");
		return ptr;
	}

};


// Class Engine.DeviceProfileManager
// 0x0080 (0x00B0 - 0x0030)
class UDeviceProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DeviceProfileManager");
		return ptr;
	}

};


// Class Engine.DialogueSoundWaveProxy
// 0x0020 (0x00D0 - 0x00B0)
class UDialogueSoundWaveProxy : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueSoundWaveProxy");
		return ptr;
	}

};


// Class Engine.DialogueVoice
// 0x0018 (0x0048 - 0x0030)
class UDialogueVoice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueVoice");
		return ptr;
	}

};


// Class Engine.DialogueWave
// 0x0048 (0x0078 - 0x0030)
class UDialogueWave : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DialogueWave");
		return ptr;
	}

};


// Class Engine.Light
// 0x0010 (0x0398 - 0x0388)
class ALight : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Light");
		return ptr;
	}


	void STATIC_ToggleEnabled();
	void STATIC_SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	void STATIC_SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	void STATIC_SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	void STATIC_SetLightColor(const struct FLinearColor& NewLightColor);
	void STATIC_SetEnabled(bool bSetEnabled);
	void STATIC_SetCastShadows(bool bNewValue);
	void STATIC_SetBrightness(float NewBrightness);
	void STATIC_SetAffectTranslucentLighting(bool bNewValue);
	void STATIC_OnRep_bEnabled();
	bool IsEnabled();
	struct FLinearColor GetLightColor();
	float GetBrightness();
};


// Class Engine.DirectionalLight
// 0x0000 (0x0398 - 0x0398)
class ADirectionalLight : public ALight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLight");
		return ptr;
	}

};


// Class Engine.LightComponentBase
// 0x0030 (0x02E0 - 0x02B0)
class ULightComponentBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponentBase");
		return ptr;
	}


	void STATIC_SetCastVolumetricShadow(bool bNewValue);
	void STATIC_SetCastShadows(bool bNewValue);
	struct FLinearColor GetLightColor();
};


// Class Engine.LightComponent
// 0x0100 (0x03E0 - 0x02E0)
class ULightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x02E0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightComponent");
		return ptr;
	}


	void STATIC_SetVolumetricScatteringIntensity(float NewIntensity);
	void STATIC_SetTransmission(bool bNewValue);
	void STATIC_SetTemperature(float NewTemperature);
	void STATIC_SetShadowBias(float NewValue);
	void STATIC_SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	void STATIC_SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	void STATIC_SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	void STATIC_SetLightFunctionDisabledBrightness(float NewValue);
	void STATIC_SetLightColor(const struct FLinearColor& NewLightColor, bool bSRGB);
	void STATIC_SetIntensity(float NewIntensity);
	void STATIC_SetIndirectLightingIntensity(float NewIntensity);
	void STATIC_SetIESTexture(class UTextureLightProfile* NewValue);
	void STATIC_SetForceCachedShadowsForMovablePrimitives(bool bNewValue);
	void STATIC_SetEnableLightShaftBloom(bool bNewValue);
	void STATIC_SetBloomTint(const struct FColor& NewValue);
	void STATIC_SetBloomThreshold(float NewValue);
	void STATIC_SetBloomScale(float NewValue);
	void STATIC_SetAffectTranslucentLighting(bool bNewValue);
	void STATIC_SetAffectDynamicIndirectLighting(bool bNewValue);
};


// Class Engine.DirectionalLightComponent
// 0x0070 (0x0450 - 0x03E0)
class UDirectionalLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x03E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DirectionalLightComponent");
		return ptr;
	}


	void STATIC_SetShadowDistanceFadeoutFraction(float NewValue);
	void STATIC_SetOcclusionMaskDarkness(float NewValue);
	void STATIC_SetLightShaftOverrideDirection(const struct FVector& NewValue);
	void STATIC_SetEnableLightShaftOcclusion(bool bNewValue);
	void STATIC_SetDynamicShadowDistanceStationaryLight(float NewValue);
	void STATIC_SetDynamicShadowDistanceMovableLight(float NewValue);
	void STATIC_SetDynamicShadowCascades(int NewValue);
	void STATIC_SetCascadeTransitionFraction(float NewValue);
	void STATIC_SetCascadeDistributionExponent(float NewValue);
};


// Class Engine.Distribution
// 0x0008 (0x0038 - 0x0030)
class UDistribution : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Distribution");
		return ptr;
	}

};


// Class Engine.DistributionFloat
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloat : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloat");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstant
// 0x0008 (0x0048 - 0x0040)
class UDistributionFloatConstant : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstant");
		return ptr;
	}

};


// Class Engine.DistributionFloatConstantCurve
// 0x0018 (0x0058 - 0x0040)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionFloatParameterBase
// 0x0020 (0x0068 - 0x0048)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionFloatParticleParameter
// 0x0000 (0x0068 - 0x0068)
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniform
// 0x0008 (0x0048 - 0x0040)
class UDistributionFloatUniform : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniform");
		return ptr;
	}

};


// Class Engine.DistributionFloatUniformCurve
// 0x0018 (0x0058 - 0x0040)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionFloatUniformCurve");
		return ptr;
	}

};


// Class Engine.DistributionVector
// 0x0008 (0x0040 - 0x0038)
class UDistributionVector : public UDistribution
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVector");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstant
// 0x0018 (0x0058 - 0x0040)
class UDistributionVectorConstant : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstant");
		return ptr;
	}

};


// Class Engine.DistributionVectorConstantCurve
// 0x0020 (0x0060 - 0x0040)
class UDistributionVectorConstantCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorConstantCurve");
		return ptr;
	}

};


// Class Engine.DistributionVectorParameterBase
// 0x0040 (0x0098 - 0x0058)
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0058(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParameterBase");
		return ptr;
	}

};


// Class Engine.DistributionVectorParticleParameter
// 0x0000 (0x0098 - 0x0098)
class UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorParticleParameter");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniform
// 0x0028 (0x0068 - 0x0040)
class UDistributionVectorUniform : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniform");
		return ptr;
	}

};


// Class Engine.DistributionVectorUniformCurve
// 0x0028 (0x0068 - 0x0040)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DistributionVectorUniformCurve");
		return ptr;
	}

};


// Class Engine.DocumentationActor
// 0x0008 (0x0390 - 0x0388)
class ADocumentationActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DocumentationActor");
		return ptr;
	}

};


// Class Engine.DPICustomScalingRule
// 0x0000 (0x0030 - 0x0030)
class UDPICustomScalingRule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DPICustomScalingRule");
		return ptr;
	}

};


// Class Engine.DrawFrustumComponent
// 0x0020 (0x0630 - 0x0610)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0610(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawFrustumComponent");
		return ptr;
	}

};


// Class Engine.SphereComponent
// 0x0010 (0x0630 - 0x0620)
class USphereComponent : public UShapeComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0620(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereComponent");
		return ptr;
	}


	void STATIC_SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
	float GetUnscaledSphereRadius();
	float GetShapeScale();
	float GetScaledSphereRadius();
};


// Class Engine.DrawSphereComponent
// 0x0000 (0x0630 - 0x0630)
class UDrawSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.DrawSphereComponent");
		return ptr;
	}

};


// Class Engine.EdGraph
// 0x0038 (0x0068 - 0x0030)
class UEdGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraph");
		return ptr;
	}

};


// Class Engine.EdGraphNode
// 0x0070 (0x00A0 - 0x0030)
class UEdGraphNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode");
		return ptr;
	}

};


// Class Engine.EdGraphNode_Documentation
// 0x0020 (0x00C0 - 0x00A0)
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphNode_Documentation");
		return ptr;
	}

};


// Class Engine.EdGraphPin_Deprecated
// 0x00F8 (0x0128 - 0x0030)
class UEdGraphPin_Deprecated : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0030(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphPin_Deprecated");
		return ptr;
	}

};


// Class Engine.EdGraphSchema
// 0x0000 (0x0030 - 0x0030)
class UEdGraphSchema : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EdGraphSchema");
		return ptr;
	}

};


// Class Engine.Emitter
// 0x0050 (0x03D8 - 0x0388)
class AEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Emitter");
		return ptr;
	}


	void STATIC_ToggleActive();
	void STATIC_SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void STATIC_SetTemplate(class UParticleSystem* NewTemplate);
	void STATIC_SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	void STATIC_SetFloatParameter(const struct FName& ParameterName, float Param);
	void STATIC_SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	void STATIC_SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	void STATIC_OnRep_bCurrentlyActive();
	void STATIC_OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
	bool IsActive();
	void STATIC_Deactivate();
	void STATIC_Activate();
};


// Class Engine.EmitterCameraLensEffectBase
// 0x0068 (0x0440 - 0x03D8)
class AEmitterCameraLensEffectBase : public AEmitter
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03D8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EmitterCameraLensEffectBase");
		return ptr;
	}

};


// Class Engine.EngineBaseTypes
// 0x0000 (0x0030 - 0x0030)
class UEngineBaseTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineBaseTypes");
		return ptr;
	}

};


// Class Engine.EngineHandlerComponentFactory
// 0x0000 (0x0030 - 0x0030)
class UEngineHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineHandlerComponentFactory");
		return ptr;
	}

};


// Class Engine.LocalMessage
// 0x0000 (0x0030 - 0x0030)
class ULocalMessage : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalMessage");
		return ptr;
	}

};


// Class Engine.EngineMessage
// 0x0080 (0x00B0 - 0x0030)
class UEngineMessage : public ULocalMessage
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineMessage");
		return ptr;
	}

};


// Class Engine.EngineTypes
// 0x0000 (0x0030 - 0x0030)
class UEngineTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.EngineTypes");
		return ptr;
	}

};


// Class Engine.ExponentialHeightFog
// 0x0010 (0x0398 - 0x0388)
class AExponentialHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFog");
		return ptr;
	}


	void STATIC_OnRep_bEnabled();
};


// Class Engine.ExponentialHeightFogComponent
// 0x0090 (0x0340 - 0x02B0)
class UExponentialHeightFogComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x02B0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ExponentialHeightFogComponent");
		return ptr;
	}


	void STATIC_SetVolumetricFogScatteringDistribution(float NewValue);
	void STATIC_SetVolumetricFogExtinctionScale(float NewValue);
	void STATIC_SetVolumetricFogEmissive(const struct FLinearColor& NewValue);
	void STATIC_SetVolumetricFogDistance(float NewValue);
	void STATIC_SetVolumetricFogAlbedo(const struct FColor& NewValue);
	void STATIC_SetVolumetricFog(bool bNewValue);
	void STATIC_SetStartDistance(float Value);
	void STATIC_SetNonDirectionalInscatteringColorDistance(float Value);
	void STATIC_SetInscatteringTextureTint(const struct FLinearColor& Value);
	void STATIC_SetInscatteringColorCubemapAngle(float Value);
	void STATIC_SetInscatteringColorCubemap(class UTextureCube* Value);
	void STATIC_SetFullyDirectionalInscatteringColorDistance(float Value);
	void STATIC_SetFogMaxOpacity(float Value);
	void STATIC_SetFogInscatteringColor(const struct FLinearColor& Value);
	void STATIC_SetFogHeightFalloff(float Value);
	void STATIC_SetFogDensity(float Value);
	void STATIC_SetFogCutoffDistance(float Value);
	void STATIC_SetDirectionalInscatteringStartDistance(float Value);
	void STATIC_SetDirectionalInscatteringExponent(float Value);
	void STATIC_SetDirectionalInscatteringColor(const struct FLinearColor& Value);
};


// Class Engine.Exporter
// 0x0050 (0x0080 - 0x0030)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Exporter");
		return ptr;
	}


	bool ScriptRunAssetExportTask(class UAssetExportTask* Task);
	bool RunAssetExportTasks(TArray<class UAssetExportTask*> ExportTasks);
	bool RunAssetExportTask(class UAssetExportTask* Task);
};


// Class Engine.FloatingPawnMovement
// 0x0018 (0x01D0 - 0x01B8)
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FloatingPawnMovement");
		return ptr;
	}

};


// Class Engine.Font
// 0x01A8 (0x01D8 - 0x0030)
class UFont : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0030(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Font");
		return ptr;
	}

};


// Class Engine.FontFace
// 0x0030 (0x0060 - 0x0030)
class UFontFace : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontFace");
		return ptr;
	}

};


// Class Engine.FontImportOptions
// 0x00B0 (0x00E0 - 0x0030)
class UFontImportOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.FontImportOptions");
		return ptr;
	}

};


// Class Engine.ForceFeedbackAttenuation
// 0x00A0 (0x00D0 - 0x0030)
class UForceFeedbackAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackAttenuation");
		return ptr;
	}

};


// Class Engine.ForceFeedbackComponent
// 0x00D0 (0x0380 - 0x02B0)
class UForceFeedbackComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x02B0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackComponent");
		return ptr;
	}


	void STATIC_Stop();
	void STATIC_SetIntensityMultiplier(float NewIntensityMultiplier);
	void STATIC_SetForceFeedbackEffect(class UForceFeedbackEffect* NewForceFeedbackEffect);
	void STATIC_Play(float StartTime);
	bool BP_GetAttenuationSettingsToApply(struct FForceFeedbackAttenuationSettings* OutAttenuationSettings);
	void STATIC_AdjustAttenuation(const struct FForceFeedbackAttenuationSettings& InAttenuationSettings);
};


// Class Engine.ForceFeedbackEffect
// 0x0018 (0x0048 - 0x0030)
class UForceFeedbackEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ForceFeedbackEffect");
		return ptr;
	}

};


// Class Engine.GameEngine
// 0x0050 (0x0E20 - 0x0DD0)
class UGameEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0DD0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameEngine");
		return ptr;
	}

};


// Class Engine.GameNetworkManager
// 0x0090 (0x0418 - 0x0388)
class AGameNetworkManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0388(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameNetworkManager");
		return ptr;
	}

};


// Class Engine.GameplayStatics
// 0x0000 (0x0030 - 0x0030)
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameplayStatics");
		return ptr;
	}


	void STATIC_UnloadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, const struct FLatentActionInfo& LatentInfo, bool bShouldBlockOnUnload);
	bool SuggestProjectileVelocity_CustomArc(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& EndPos, float OverrideGravityZ, float ArcParam, struct FVector* OutLaunchVelocity);
	class UAudioComponent* SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAudioComponent* SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAudioComponent* SpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	class UObject* SpawnObject(class UClass* ObjectClass, class UObject* Outer);
	class UForceFeedbackComponent* SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
	class UForceFeedbackComponent* SpawnForceFeedbackAtLocation(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, const struct FVector& Location, const struct FRotator& Rotation, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
	class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
	class UParticleSystemComponent* SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
	class UAudioComponent* SpawnDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
	class UAudioComponent* SpawnDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
	class UAudioComponent* SpawnDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
	class UDecalComponent* SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan);
	class UDecalComponent* SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
	void STATIC_SetWorldOriginLocation(class UObject* WorldContextObject, const struct FIntVector& NewLocation);
	void STATIC_SetSubtitlesEnabled(bool bEnabled);
	void STATIC_SetSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
	void STATIC_SetPlayerControllerID(class APlayerController* Player, int ControllerId);
	void STATIC_SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation);
	void STATIC_SetGlobalPitchModulation(class UObject* WorldContextObject, float PitchModulation, float TimeSec);
	void STATIC_SetGlobalListenerFocusParameters(class UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
	bool SetGamePaused(class UObject* WorldContextObject, bool bPaused);
	void STATIC_SetEnableWorldRendering(class UObject* WorldContextObject, bool bEnable);
	void STATIC_SetBaseSoundMix(class UObject* WorldContextObject, class USoundMix* InSoundMix);
	bool SaveGameToSlot(class USaveGame* SaveGameObject, const class FString& SlotName, int UserIndex);
	void STATIC_RemovePlayer(class APlayerController* Player, bool bDestroyPawn);
	struct FVector RebaseZeroOriginOntoLocal(class UObject* WorldContextObject, const struct FVector& WorldLocation);
	struct FVector RebaseLocalOriginOntoZero(class UObject* WorldContextObject, const struct FVector& WorldLocation);
	void STATIC_PushSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	bool ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, bool bPlayerViewportRelative, struct FVector2D* ScreenPosition);
	void STATIC_PopSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	void STATIC_PlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
	void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
	void STATIC_PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
	void STATIC_PlayDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void STATIC_PlayDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	class FString ParseOption(const class FString& Options, const class FString& Key);
	void STATIC_OpenLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const class FString& Options);
	struct FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, const struct FVector& Location, const struct FVector& ImpactPoint, const struct FVector& Normal, const struct FVector& ImpactNormal, class UPhysicalMaterial* PhysMat, class AActor* HitActor, class UPrimitiveComponent* HitComponent, const struct FName& HitBoneName, int HitItem, int FaceIndex, const struct FVector& TraceStart, const struct FVector& TraceEnd);
	void STATIC_LoadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo);
	class USaveGame* LoadGameFromSlot(const class FString& SlotName, int UserIndex);
	bool IsGamePaused(class UObject* WorldContextObject);
	bool HasOption(const class FString& Options, const class FString& InKey);
	bool HasLaunchOption(const class FString& OptionToCheck);
	int GrassOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	struct FIntVector GetWorldOriginLocation(class UObject* WorldContextObject);
	float GetWorldDeltaSeconds(class UObject* WorldContextObject);
	float GetUnpausedTimeSeconds(class UObject* WorldContextObject);
	float GetTimeSeconds(class UObject* WorldContextObject);
	TEnumAsByte<EPhysicalSurface> GetSurfaceType(const struct FHitResult& Hit);
	class ULevelStreaming* GetStreamingLevel(class UObject* WorldContextObject, const struct FName& PackageName);
	float GetRealTimeSeconds(class UObject* WorldContextObject);
	class APawn* GetPlayerPawn(class UObject* WorldContextObject, int PlayerIndex);
	int GetPlayerControllerID(class APlayerController* Player);
	class APlayerController* GetPlayerController(class UObject* WorldContextObject, int PlayerIndex);
	class ACharacter* GetPlayerCharacter(class UObject* WorldContextObject, int PlayerIndex);
	class APlayerCameraManager* GetPlayerCameraManager(class UObject* WorldContextObject, int PlayerIndex);
	class FString GetPlatformName();
	class UClass* GetObjectClass(class UObject* Object);
	void STATIC_GetKeyValue(const class FString& Pair, class FString* Key, class FString* Value);
	int GetIntOption(const class FString& Options, const class FString& Key, int DefaultValue);
	float GetGlobalTimeDilation(class UObject* WorldContextObject);
	class AGameStateBase* GetGameState(class UObject* WorldContextObject);
	class AGameModeBase* GetGameMode(class UObject* WorldContextObject);
	class UGameInstance* GetGameInstance(class UObject* WorldContextObject);
	bool GetEnableWorldRendering(class UObject* WorldContextObject);
	class UReverbEffect* GetCurrentReverbEffect(class UObject* WorldContextObject);
	class FString GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString);
	float GetAudioTimeSeconds(class UObject* WorldContextObject);
	void STATIC_GetAllActorsWithTag(class UObject* WorldContextObject, const struct FName& Tag, TArray<class AActor*>* OutActors);
	void STATIC_GetAllActorsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class AActor*>* OutActors);
	void STATIC_GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	void STATIC_GetActorArrayBounds(TArray<class AActor*> Actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent);
	struct FVector GetActorArrayAverageLocation(TArray<class AActor*> Actors);
	void STATIC_GetAccurateRealTime(class UObject* WorldContextObject, int* Seconds, float* PartialSeconds);
	void STATIC_FlushLevelStreaming(class UObject* WorldContextObject);
	class AActor* FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform);
	bool FindCollisionUV(const struct FHitResult& Hit, int UVChannel, struct FVector2D* UV);
	void STATIC_EnableLiveStreaming(bool Enable);
	bool DoesSaveGameExist(const class FString& SlotName, int UserIndex);
	bool DeprojectScreenToWorld(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);
	bool DeleteGameInSlot(const class FString& SlotName, int UserIndex);
	void STATIC_DeactivateReverbEffect(class UObject* WorldContextObject, const struct FName& TagName);
	class UAudioComponent* CreateSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	class USaveGame* CreateSaveGameObjectFromBlueprint(class UBlueprint* SaveGameBlueprint);
	class USaveGame* CreateSaveGameObject(class UClass* SaveGameClass);
	class APlayerController* CreatePlayer(class UObject* WorldContextObject, int ControllerId, bool bSpawnPawn);
	void STATIC_ClearSoundMixModifiers(class UObject* WorldContextObject);
	void STATIC_ClearSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float FadeOutTime);
	void STATIC_CancelAsyncLoading();
	void STATIC_BreakHitResult(const struct FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, struct FVector* Location, struct FVector* ImpactPoint, struct FVector* Normal, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FName* HitBoneName, int* HitItem, int* FaceIndex, struct FVector* TraceStart, struct FVector* TraceEnd);
	bool BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, struct FVector* TossVelocity);
	bool Blueprint_PredictProjectilePath_ByTraceChannel(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination);
	bool Blueprint_PredictProjectilePath_ByObjectType(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination);
	bool Blueprint_PredictProjectilePath_Advanced(class UObject* WorldContextObject, const struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult* PredictResult);
	class AActor* BeginSpawningActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner);
	class AActor* BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail);
	class AActor* BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
	bool AreSubtitlesEnabled();
	bool AreAnyListenersWithinRange(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange);
	void STATIC_ActivateReverbEffect(class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, const struct FName& TagName, float Priority, float Volume, float FadeTime);
};


// Class Engine.GameSession
// 0x0018 (0x03A0 - 0x0388)
class AGameSession : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0388(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameSession");
		return ptr;
	}

};


// Class Engine.GameStateBase
// 0x0040 (0x03C8 - 0x0388)
class AGameStateBase : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0388(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameStateBase");
		return ptr;
	}


	void STATIC_OnRep_SpectatorClass();
	void STATIC_OnRep_ReplicatedWorldTimeSeconds();
	void STATIC_OnRep_ReplicatedHasBegunPlay();
	void STATIC_OnRep_GameModeClass();
	bool HasMatchStarted();
	bool HasBegunPlay();
	float GetServerWorldTimeSeconds();
	float GetPlayerStartTime(class AController* Controller);
	float GetPlayerRespawnDelay(class AController* Controller);
};


// Class Engine.GameState
// 0x0020 (0x03E8 - 0x03C8)
class AGameState : public AGameStateBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GameState");
		return ptr;
	}


	void STATIC_OnRep_MatchState();
	void STATIC_OnRep_ElapsedTime();
};


// Class Engine.SpotLight
// 0x0008 (0x03A0 - 0x0398)
class ASpotLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLight");
		return ptr;
	}


	void STATIC_SetOuterConeAngle(float NewOuterConeAngle);
	void STATIC_SetInnerConeAngle(float NewInnerConeAngle);
};


// Class Engine.GeneratedMeshAreaLight
// 0x0000 (0x03A0 - 0x03A0)
class AGeneratedMeshAreaLight : public ASpotLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.GeneratedMeshAreaLight");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Base
// 0x0000 (0x0030 - 0x0030)
class UHapticFeedbackEffect_Base : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Base");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Buffer
// 0x0040 (0x0070 - 0x0030)
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Buffer");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_Curve
// 0x00F0 (0x0120 - 0x0030)
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_Curve");
		return ptr;
	}

};


// Class Engine.HapticFeedbackEffect_SoundWave
// 0x0038 (0x0068 - 0x0030)
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HapticFeedbackEffect_SoundWave");
		return ptr;
	}

};


// Class Engine.HealthSnapshotBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HealthSnapshotBlueprintLibrary");
		return ptr;
	}


	void STATIC_StopPerformanceSnapshots();
	void STATIC_StartPerformanceSnapshots();
	void STATIC_LogPerformanceSnapshot(const class FString& SnapshotTitle, bool bResetStats);
};


// Class Engine.HeightmapData
// 0x00B0 (0x00E0 - 0x0030)
class UHeightmapData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HeightmapData");
		return ptr;
	}

};


// Class Engine.HLODProxy
// 0x0010 (0x0040 - 0x0030)
class UHLODProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HLODProxy");
		return ptr;
	}

};


// Class Engine.AmbisonicsSubmixSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UAmbisonicsSubmixSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.AmbisonicsSubmixSettingsBase");
		return ptr;
	}

};


// Class Engine.SpatializationPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpatializationPluginSourceSettingsBase");
		return ptr;
	}

};


// Class Engine.OcclusionPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.OcclusionPluginSourceSettingsBase");
		return ptr;
	}

};


// Class Engine.ReverbPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbPluginSourceSettingsBase");
		return ptr;
	}

};


// Class Engine.ImportanceSamplingLibrary
// 0x0000 (0x0030 - 0x0030)
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportanceSamplingLibrary");
		return ptr;
	}


	float RandomSobolFloat(int Index, int Dimension, float Seed);
	struct FVector RandomSobolCell3D(int Index, int NumCells, const struct FVector& Cell, const struct FVector& Seed);
	struct FVector2D RandomSobolCell2D(int Index, int NumCells, const struct FVector2D& Cell, const struct FVector2D& Seed);
	float NextSobolFloat(int Index, int Dimension, float PreviousValue);
	struct FVector NextSobolCell3D(int Index, int NumCells, const struct FVector& PreviousValue);
	struct FVector2D NextSobolCell2D(int Index, int NumCells, const struct FVector2D& PreviousValue);
	struct FImportanceTexture MakeImportanceTexture(class UTexture2D* Texture, TEnumAsByte<EImportanceWeight> WeightingFunc);
	void STATIC_ImportanceSample(const struct FImportanceTexture& Texture, const struct FVector2D& Rand, int Samples, float Intensity, struct FVector2D* SamplePosition, struct FLinearColor* SampleColor, float* SampleIntensity, float* SampleSize);
	void STATIC_BreakImportanceTexture(const struct FImportanceTexture& ImportanceTexture, class UTexture2D** Texture, TEnumAsByte<EImportanceWeight>* WeightingFunc);
};


// Class Engine.ImportantToggleSettingInterface
// 0x0000 (0x0030 - 0x0030)
class UImportantToggleSettingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ImportantToggleSettingInterface");
		return ptr;
	}

};


// Class Engine.InGameAdManager
// 0x0028 (0x0068 - 0x0040)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InGameAdManager");
		return ptr;
	}

};


// Class Engine.InheritableComponentHandler
// 0x0020 (0x0050 - 0x0030)
class UInheritableComponentHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InheritableComponentHandler");
		return ptr;
	}

};


// Class Engine.InputDelegateBinding
// 0x0000 (0x0030 - 0x0030)
class UInputDelegateBinding : public UDynamicBlueprintBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputActionDelegateBinding
// 0x0010 (0x0040 - 0x0030)
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputActionDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisDelegateBinding
// 0x0010 (0x0040 - 0x0030)
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputAxisKeyDelegateBinding
// 0x0010 (0x0040 - 0x0030)
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputAxisKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputKeyDelegateBinding
// 0x0010 (0x0040 - 0x0030)
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputKeyDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputSettings
// 0x00B8 (0x00E8 - 0x0030)
class UInputSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputSettings");
		return ptr;
	}


	void STATIC_SaveKeyMappings();
	void STATIC_RemoveAxisMapping(const struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	void STATIC_RemoveActionMapping(const struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	class UInputSettings* GetInputSettings();
	void STATIC_GetAxisNames(TArray<struct FName>* AxisNames);
	void STATIC_GetAxisMappingByName(const struct FName& InAxisName, TArray<struct FInputAxisKeyMapping>* OutMappings);
	void STATIC_GetActionNames(TArray<struct FName>* ActionNames);
	void STATIC_GetActionMappingByName(const struct FName& InActionName, TArray<struct FInputActionKeyMapping>* OutMappings);
	void STATIC_ForceRebuildKeymaps();
	void STATIC_AddAxisMapping(const struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	void STATIC_AddActionMapping(const struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
};


// Class Engine.InputTouchDelegateBinding
// 0x0010 (0x0040 - 0x0030)
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputTouchDelegateBinding");
		return ptr;
	}

};


// Class Engine.InputVectorAxisDelegateBinding
// 0x0000 (0x0040 - 0x0040)
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InputVectorAxisDelegateBinding");
		return ptr;
	}

};


// Class Engine.Interface_AssetUserData
// 0x0000 (0x0030 - 0x0030)
class UInterface_AssetUserData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_AssetUserData");
		return ptr;
	}

};


// Class Engine.Interface_CollisionDataProvider
// 0x0000 (0x0030 - 0x0030)
class UInterface_CollisionDataProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_CollisionDataProvider");
		return ptr;
	}

};


// Class Engine.Interface_PostProcessVolume
// 0x0000 (0x0030 - 0x0030)
class UInterface_PostProcessVolume : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PostProcessVolume");
		return ptr;
	}

};


// Class Engine.Interface_PreviewMeshProvider
// 0x0000 (0x0030 - 0x0030)
class UInterface_PreviewMeshProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Interface_PreviewMeshProvider");
		return ptr;
	}

};


// Class Engine.InterpCurveEdSetup
// 0x0018 (0x0048 - 0x0030)
class UInterpCurveEdSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpCurveEdSetup");
		return ptr;
	}

};


// Class Engine.InterpData
// 0x0048 (0x0078 - 0x0030)
class UInterpData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpData");
		return ptr;
	}

};


// Class Engine.InterpFilter
// 0x0010 (0x0040 - 0x0030)
class UInterpFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter");
		return ptr;
	}

};


// Class Engine.InterpFilter_Classes
// 0x0000 (0x0040 - 0x0040)
class UInterpFilter_Classes : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Classes");
		return ptr;
	}

};


// Class Engine.InterpFilter_Custom
// 0x0000 (0x0040 - 0x0040)
class UInterpFilter_Custom : public UInterpFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpFilter_Custom");
		return ptr;
	}

};


// Class Engine.InterpGroup
// 0x0028 (0x0058 - 0x0030)
class UInterpGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroup");
		return ptr;
	}

};


// Class Engine.InterpGroupCamera
// 0x0010 (0x0068 - 0x0058)
class UInterpGroupCamera : public UInterpGroup
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupDirector
// 0x0000 (0x0058 - 0x0058)
class UInterpGroupDirector : public UInterpGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupDirector");
		return ptr;
	}

};


// Class Engine.InterpGroupInst
// 0x0020 (0x0050 - 0x0030)
class UInterpGroupInst : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInst");
		return ptr;
	}

};


// Class Engine.InterpGroupInstCamera
// 0x0000 (0x0050 - 0x0050)
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstCamera");
		return ptr;
	}

};


// Class Engine.InterpGroupInstDirector
// 0x0000 (0x0050 - 0x0050)
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpGroupInstDirector");
		return ptr;
	}

};


// Class Engine.InterpToMovementComponent
// 0x00A0 (0x01F8 - 0x0158)
class UInterpToMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0158(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpToMovementComponent");
		return ptr;
	}


	void STATIC_StopSimulating(const struct FHitResult& HitResult);
	void STATIC_RestartMovement(float InitialDirection);
	void STATIC_OnInterpToWaitEndDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void STATIC_OnInterpToWaitBeginDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void STATIC_OnInterpToStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void STATIC_OnInterpToReverseDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void STATIC_OnInterpToResetDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	void STATIC_FinaliseControlPoints();
};


// Class Engine.InterpTrackAnimControl
// 0x0020 (0x00B8 - 0x0098)
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackAudioMaster
// 0x0000 (0x0098 - 0x0098)
class UInterpTrackAudioMaster : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackBoolProp
// 0x0018 (0x0090 - 0x0078)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorProp
// 0x0008 (0x00A0 - 0x0098)
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackColorScale
// 0x0000 (0x0098 - 0x0098)
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackDirector
// 0x0018 (0x0090 - 0x0078)
class UInterpTrackDirector : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackEvent
// 0x0018 (0x0090 - 0x0078)
class UInterpTrackEvent : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackFade
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFade");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatAnimBPParam
// 0x0020 (0x00B8 - 0x0098)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatMaterialParam
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatParticleParam
// 0x0008 (0x00A0 - 0x0098)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackFloatProp
// 0x0008 (0x00A0 - 0x0098)
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAnimControl
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAnimControl");
		return ptr;
	}

};


// Class Engine.InterpTrackInstAudioMaster
// 0x0000 (0x0030 - 0x0030)
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstAudioMaster");
		return ptr;
	}

};


// Class Engine.InterpTrackInstProperty
// 0x0010 (0x0040 - 0x0030)
class UInterpTrackInstProperty : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstProperty");
		return ptr;
	}

};


// Class Engine.InterpTrackInstBoolProp
// 0x0018 (0x0058 - 0x0040)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstBoolProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorProp
// 0x0010 (0x0050 - 0x0040)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstColorScale
// 0x0000 (0x0030 - 0x0030)
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstColorScale");
		return ptr;
	}

};


// Class Engine.InterpTrackInstDirector
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstDirector");
		return ptr;
	}

};


// Class Engine.InterpTrackInstEvent
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstEvent");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFade
// 0x0000 (0x0030 - 0x0030)
class UInterpTrackInstFade : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFade");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatAnimBPParam
// 0x0018 (0x0048 - 0x0030)
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatAnimBPParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatMaterialParam
// 0x0038 (0x0068 - 0x0030)
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatParticleParam
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatParticleParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstFloatProp
// 0x0010 (0x0050 - 0x0040)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstFloatProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstLinearColorProp
// 0x0018 (0x0058 - 0x0040)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstMove
// 0x0018 (0x0048 - 0x0030)
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstMove");
		return ptr;
	}

};


// Class Engine.InterpTrackInstParticleReplay
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSlomo
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstSlomo : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackInstSound
// 0x0010 (0x0040 - 0x0030)
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstSound");
		return ptr;
	}

};


// Class Engine.InterpTrackInstToggle
// 0x0010 (0x0040 - 0x0030)
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0038 (0x0068 - 0x0030)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVectorProp
// 0x0018 (0x0058 - 0x0040)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackInstVisibility
// 0x0008 (0x0038 - 0x0030)
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackInstVisibility");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorBase
// 0x0020 (0x0098 - 0x0078)
class UInterpTrackLinearColorBase : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorBase");
		return ptr;
	}

};


// Class Engine.InterpTrackLinearColorProp
// 0x0008 (0x00A0 - 0x0098)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackLinearColorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackMove
// 0x0058 (0x00D0 - 0x0078)
class UInterpTrackMove : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0078(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMove");
		return ptr;
	}

};


// Class Engine.InterpTrackMoveAxis
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackMoveAxis");
		return ptr;
	}

};


// Class Engine.InterpTrackParticleReplay
// 0x0010 (0x0088 - 0x0078)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackParticleReplay");
		return ptr;
	}

};


// Class Engine.InterpTrackSlomo
// 0x0000 (0x0098 - 0x0098)
class UInterpTrackSlomo : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSlomo");
		return ptr;
	}

};


// Class Engine.InterpTrackSound
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackSound");
		return ptr;
	}

};


// Class Engine.InterpTrackToggle
// 0x0018 (0x0090 - 0x0078)
class UInterpTrackToggle : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackToggle");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorMaterialParam
// 0x0018 (0x00B0 - 0x0098)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorMaterialParam");
		return ptr;
	}

};


// Class Engine.InterpTrackVectorProp
// 0x0008 (0x00A0 - 0x0098)
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVectorProp");
		return ptr;
	}

};


// Class Engine.InterpTrackVisibility
// 0x0018 (0x0090 - 0x0078)
class UInterpTrackVisibility : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.InterpTrackVisibility");
		return ptr;
	}

};


// Class Engine.IntSerialization
// 0x0028 (0x0058 - 0x0030)
class UIntSerialization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.IntSerialization");
		return ptr;
	}

};


// Class Engine.KillZVolume
// 0x0000 (0x03F0 - 0x03F0)
class AKillZVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KillZVolume");
		return ptr;
	}

};


// Class Engine.KismetArrayLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetArrayLibrary");
		return ptr;
	}


	void STATIC_SetArrayPropertyByName(class UObject* Object, const struct FName& PropertyName, TArray<int> Value);
	void STATIC_FilterArray(TArray<class AActor*> TargetArray, class UClass* FilterClass, TArray<class AActor*>* FilteredArray);
	void STATIC_Array_Swap(TArray<int> TargetArray, int FirstIndex, int SecondIndex);
	void STATIC_Array_Shuffle(TArray<int> TargetArray);
	void STATIC_Array_Set(TArray<int> TargetArray, int Index, int Item, bool bSizeToFit);
	void STATIC_Array_Resize(TArray<int> TargetArray, int Size);
	bool Array_RemoveItem(TArray<int> TargetArray, int Item);
	void STATIC_Array_Remove(TArray<int> TargetArray, int IndexToRemove);
	int Array_Length(TArray<int> TargetArray);
	int Array_LastIndex(TArray<int> TargetArray);
	bool Array_IsValidIndex(TArray<int> TargetArray, int IndexToTest);
	void STATIC_Array_Insert(TArray<int> TargetArray, int NewItem, int Index);
	void STATIC_Array_Get(TArray<int> TargetArray, int Index, int* Item);
	int Array_Find(TArray<int> TargetArray, int ItemToFind);
	bool Array_Contains(TArray<int> TargetArray, int ItemToFind);
	void STATIC_Array_Clear(TArray<int> TargetArray);
	void STATIC_Array_Append(TArray<int> TargetArray, TArray<int> SourceArray);
	int Array_AddUnique(TArray<int> TargetArray, int NewItem);
	int Array_Add(TArray<int> TargetArray, int NewItem);
};


// Class Engine.KismetGuidLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetGuidLibrary");
		return ptr;
	}


	void STATIC_Parse_StringToGuid(const class FString& GuidString, struct FGuid* OutGuid, bool* Success);
	bool NotEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	struct FGuid NewGuid();
	bool IsValid_Guid(const struct FGuid& InGuid);
	void STATIC_Invalidate_Guid(struct FGuid* InGuid);
	bool EqualEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	class FString Conv_GuidToString(const struct FGuid& InGuid);
};


// Class Engine.KismetInputLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInputLibrary");
		return ptr;
	}


	bool PointerEvent_IsTouchEvent(const struct FPointerEvent& Input);
	bool PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input, const struct FKey& MouseButton);
	float PointerEvent_GetWheelDelta(const struct FPointerEvent& Input);
	int PointerEvent_GetUserIndex(const struct FPointerEvent& Input);
	int PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input);
	struct FVector2D PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input);
	int PointerEvent_GetPointerIndex(const struct FPointerEvent& Input);
	struct FVector2D PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input);
	ESlateGesture PointerEvent_GetGestureType(const struct FPointerEvent& Input);
	struct FVector2D PointerEvent_GetGestureDelta(const struct FPointerEvent& Input);
	struct FKey PointerEvent_GetEffectingButton(const struct FPointerEvent& Input);
	struct FVector2D PointerEvent_GetCursorDelta(const struct FPointerEvent& Input);
	bool Key_IsVectorAxis(const struct FKey& Key);
	bool Key_IsValid(const struct FKey& Key);
	bool Key_IsMouseButton(const struct FKey& Key);
	bool Key_IsModifierKey(const struct FKey& Key);
	bool Key_IsKeyboardKey(const struct FKey& Key);
	bool Key_IsGamepadKey(const struct FKey& Key);
	bool Key_IsFloatAxis(const struct FKey& Key);
	struct FText Key_GetDisplayName(const struct FKey& Key);
	bool InputEvent_IsShiftDown(const struct FInputEvent& Input);
	bool InputEvent_IsRightShiftDown(const struct FInputEvent& Input);
	bool InputEvent_IsRightControlDown(const struct FInputEvent& Input);
	bool InputEvent_IsRightCommandDown(const struct FInputEvent& Input);
	bool InputEvent_IsRightAltDown(const struct FInputEvent& Input);
	bool InputEvent_IsRepeat(const struct FInputEvent& Input);
	bool InputEvent_IsLeftShiftDown(const struct FInputEvent& Input);
	bool InputEvent_IsLeftControlDown(const struct FInputEvent& Input);
	bool InputEvent_IsLeftCommandDown(const struct FInputEvent& Input);
	bool InputEvent_IsLeftAltDown(const struct FInputEvent& Input);
	bool InputEvent_IsControlDown(const struct FInputEvent& Input);
	bool InputEvent_IsCommandDown(const struct FInputEvent& Input);
	bool InputEvent_IsAltDown(const struct FInputEvent& Input);
	int GetUserIndex(const struct FKeyEvent& Input);
	struct FKey GetKey(const struct FKeyEvent& Input);
	float GetAnalogValue(const struct FAnalogInputEvent& Input);
	bool EqualEqual_KeyKey(const struct FKey& A, const struct FKey& B);
	bool EqualEqual_InputChordInputChord(const struct FInputChord& A, const struct FInputChord& B);
	void STATIC_CalibrateTilt();
};


// Class Engine.KismetInternationalizationLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetInternationalizationLibrary");
		return ptr;
	}


	bool SetCurrentLocale(const class FString& Culture, bool SaveToConfig);
	bool SetCurrentLanguageAndLocale(const class FString& Culture, bool SaveToConfig);
	bool SetCurrentLanguage(const class FString& Culture, bool SaveToConfig);
	bool SetCurrentCulture(const class FString& Culture, bool SaveToConfig);
	bool SetCurrentAssetGroupCulture(const struct FName& AssetGroup, const class FString& Culture, bool SaveToConfig);
	class FString GetCurrentLocale();
	class FString GetCurrentLanguage();
	class FString GetCurrentCulture();
	class FString GetCurrentAssetGroupCulture(const struct FName& AssetGroup);
	void STATIC_ClearCurrentAssetGroupCulture(const struct FName& AssetGroup, bool SaveToConfig);
};


// Class Engine.KismetMaterialLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMaterialLibrary");
		return ptr;
	}


	void STATIC_SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	void STATIC_SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, float ParameterValue);
	struct FLinearColor GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	float GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent, const struct FName& OptionalName);
};


// Class Engine.KismetMathLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetMathLibrary");
		return ptr;
	}


	int Xor_IntInt(int A, int B);
	float VSizeXY(const struct FVector& A);
	float VSizeSquared(const struct FVector& A);
	float VSize2DSquared(const struct FVector2D& A);
	float VSize2D(const struct FVector2D& A);
	float VSize(const struct FVector& A);
	struct FVector VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector VInterpTo_Constant(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector VectorSpringInterp(const struct FVector& Current, const struct FVector& Target, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, struct FVectorSpringState* SpringState);
	struct FVector2D Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	struct FVector2D Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	struct FVector VEase(const struct FVector& A, const struct FVector& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	struct FDateTime UtcNow();
	struct FRotator TransformRotation(const struct FTransform& T, const struct FRotator& Rotation);
	struct FVector TransformLocation(const struct FTransform& T, const struct FVector& Location);
	struct FVector TransformDirection(const struct FTransform& T, const struct FVector& Direction);
	float Transform_Determinant(const struct FTransform& Transform);
	struct FDateTime Today();
	struct FTransform TLerp(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<ELerpInterpolationMode> InterpMode);
	struct FTransform TInterpTo(const struct FTransform& Current, const struct FTransform& Target, float DeltaTime, float InterpSpeed);
	struct FTimespan TimespanZeroValue();
	float TimespanRatio(const struct FTimespan& A, const struct FTimespan& B);
	struct FTimespan TimespanMinValue();
	struct FTimespan TimespanMaxValue();
	bool TimespanFromString(const class FString& TimespanString, struct FTimespan* Result);
	struct FTransform TEase(const struct FTransform& A, const struct FTransform& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	float Tan(float A);
	struct FVector Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Subtract_VectorInt(const struct FVector& A, int B);
	struct FVector Subtract_VectorFloat(const struct FVector& A, float B);
	struct FVector2D Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Subtract_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan Subtract_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	int Subtract_IntInt(int A, int B);
	float Subtract_FloatFloat(float A, float B);
	struct FDateTime Subtract_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	struct FTimespan Subtract_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	unsigned char Subtract_ByteByte(unsigned char A, unsigned char B);
	float Square(float A);
	float Sqrt(float A);
	float Sin(float A);
	int SignOfInteger(int A);
	float SignOfFloat(float A);
	void STATIC_SetRandomStreamSeed(int NewSeed, struct FRandomStream* Stream);
	struct FVector SelectVector(const struct FVector& A, const struct FVector& B, bool bPickA);
	struct FTransform SelectTransform(const struct FTransform& A, const struct FTransform& B, bool bPickA);
	class FString SelectString(const class FString& A, const class FString& B, bool bPickA);
	struct FRotator SelectRotator(const struct FRotator& A, const struct FRotator& B, bool bPickA);
	class UObject* SelectObject(class UObject* A, class UObject* B, bool bSelectA);
	int SelectInt(int A, int B, bool bPickA);
	float SelectFloat(float A, float B, bool bPickA);
	struct FLinearColor SelectColor(const struct FLinearColor& A, const struct FLinearColor& B, bool bPickA);
	class UClass* SelectClass(class UClass* A, class UClass* B, bool bSelectA);
	void STATIC_SeedRandomStream(struct FRandomStream* Stream);
	int Round(float A);
	struct FRotator RotatorFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FVector RotateAngleAxis(const struct FVector& InVect, float AngleDeg, const struct FVector& Axis);
	struct FRotator RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator RInterpTo_Constant(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);
	void STATIC_RGBToHSV_Vector(const struct FLinearColor& RGB, struct FLinearColor* HSV);
	void STATIC_RGBToHSV(const struct FLinearColor& InColor, float* H, float* S, float* V, float* A);
	void STATIC_ResetVectorSpringState(struct FVectorSpringState* SpringState);
	void STATIC_ResetRandomStream(const struct FRandomStream& Stream);
	void STATIC_ResetFloatSpringState(struct FFloatSpringState* SpringState);
	struct FRotator REase(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	struct FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(const struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const struct FRandomStream& Stream);
	struct FVector RandomUnitVectorInEllipticalConeInRadians(const struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians);
	struct FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const struct FRandomStream& Stream);
	struct FVector RandomUnitVectorInEllipticalConeInDegrees(const struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
	struct FVector RandomUnitVectorInConeInRadiansFromStream(const struct FVector& ConeDir, float ConeHalfAngleInRadians, const struct FRandomStream& Stream);
	struct FVector RandomUnitVectorInConeInRadians(const struct FVector& ConeDir, float ConeHalfAngleInRadians);
	struct FVector RandomUnitVectorInConeInDegreesFromStream(const struct FVector& ConeDir, float ConeHalfAngleInDegrees, const struct FRandomStream& Stream);
	struct FVector RandomUnitVectorInConeInDegrees(const struct FVector& ConeDir, float ConeHalfAngleInDegrees);
	struct FVector RandomUnitVectorFromStream(const struct FRandomStream& Stream);
	struct FVector RandomUnitVector();
	struct FRotator RandomRotatorFromStream(bool bRoll, const struct FRandomStream& Stream);
	struct FRotator RandomRotator(bool bRoll);
	struct FVector RandomPointInBoundingBox(const struct FVector& Origin, const struct FVector& BoxExtent);
	int RandomIntegerInRangeFromStream(int Min, int Max, const struct FRandomStream& Stream);
	int RandomIntegerInRange(int Min, int Max);
	int RandomIntegerFromStream(int Max, const struct FRandomStream& Stream);
	int RandomInteger(int Max);
	float RandomFloatInRangeFromStream(float Min, float Max, const struct FRandomStream& Stream);
	float RandomFloatInRange(float Min, float Max);
	float RandomFloatFromStream(const struct FRandomStream& Stream);
	float RandomFloat();
	bool RandomBoolWithWeightFromStream(float Weight, const struct FRandomStream& RandomStream);
	bool RandomBoolWithWeight(float Weight);
	bool RandomBoolFromStream(const struct FRandomStream& Stream);
	bool RandomBool();
	float RadiansToDegrees(float A);
	struct FVector ProjectVectorOnToVector(const struct FVector& V, const struct FVector& Target);
	struct FVector ProjectVectorOnToPlane(const struct FVector& V, const struct FVector& PlaneNormal);
	struct FVector ProjectPointOnToPlane(const struct FVector& Point, const struct FVector& PlaneBase, const struct FVector& PlaneNormal);
	bool PointsAreCoplanar(TArray<struct FVector> Points, float Tolerance);
	float PerlinNoise1D(float Value);
	int Percent_IntInt(int A, int B);
	float Percent_FloatFloat(float A, float B);
	unsigned char Percent_ByteByte(unsigned char A, unsigned char B);
	int Or_IntInt(int A, int B);
	struct FDateTime Now();
	bool NotEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance);
	bool NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	bool NotEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance);
	bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool NotEqual_IntInt(int A, int B);
	bool NotEqual_FloatFloat(float A, float B);
	bool NotEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool NotEqual_ClassClass(class UClass* A, class UClass* B);
	bool NotEqual_ByteByte(unsigned char A, unsigned char B);
	bool NotEqual_BoolBool(bool A, bool B);
	bool Not_PreBool(bool A);
	int Not_Int(int A);
	float NormalizeToRange(float Value, float RangeMin, float RangeMax);
	struct FRotator NormalizedDeltaRotator(const struct FRotator& A, const struct FRotator& B);
	float NormalizeAxis(float Angle);
	struct FVector2D Normal2D(const struct FVector2D& A);
	struct FVector Normal(const struct FVector& A);
	struct FVector NegateVector(const struct FVector& A);
	struct FRotator NegateRotator(const struct FRotator& A);
	bool NearlyEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
	bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
	float MultiplyMultiply_FloatFloat(float Base, float Exp);
	float MultiplyByPi(float Value);
	struct FVector Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Multiply_VectorInt(const struct FVector& A, int B);
	struct FVector Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector2D Multiply_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan Multiply_TimespanFloat(const struct FTimespan& A, float Scalar);
	struct FRotator Multiply_RotatorInt(const struct FRotator& A, int B);
	struct FRotator Multiply_RotatorFloat(const struct FRotator& A, float B);
	struct FLinearColor Multiply_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor Multiply_LinearColorFloat(const struct FLinearColor& A, float B);
	int Multiply_IntInt(int A, int B);
	float Multiply_IntFloat(int A, float B);
	float Multiply_FloatFloat(float A, float B);
	unsigned char Multiply_ByteByte(unsigned char A, unsigned char B);
	struct FVector MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	void STATIC_MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue);
	void STATIC_MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue);
	void STATIC_MinOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMinValue, unsigned char* MinValue);
	void STATIC_MinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY);
	int Min(int A, int B);
	void STATIC_MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue);
	void STATIC_MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue);
	void STATIC_MaxOfByteArray(TArray<unsigned char> ByteArray, int* IndexOfMaxValue, unsigned char* MaxValue);
	int Max(int A, int B);
	struct FVector Matrix_GetOrigin(const struct FMatrix& InMatrix);
	float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	struct FVector2D MakeVector2D(float X, float Y);
	struct FVector MakeVector(float X, float Y, float Z);
	struct FTransform MakeTransform(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	struct FTimespan MakeTimespan2(int Days, int Hours, int Minutes, int Seconds, int FractionNano);
	struct FTimespan MakeTimespan(int Days, int Hours, int Minutes, int Seconds, int Milliseconds);
	struct FRotator MakeRotFromZY(const struct FVector& Z, const struct FVector& Y);
	struct FRotator MakeRotFromZX(const struct FVector& Z, const struct FVector& X);
	struct FRotator MakeRotFromZ(const struct FVector& Z);
	struct FRotator MakeRotFromYZ(const struct FVector& Y, const struct FVector& Z);
	struct FRotator MakeRotFromYX(const struct FVector& Y, const struct FVector& X);
	struct FRotator MakeRotFromY(const struct FVector& Y);
	struct FRotator MakeRotFromXZ(const struct FVector& X, const struct FVector& Z);
	struct FRotator MakeRotFromXY(const struct FVector& X, const struct FVector& Y);
	struct FRotator MakeRotFromX(const struct FVector& X);
	struct FRotator MakeRotator(float Roll, float Pitch, float Yaw);
	struct FRotator MakeRotationFromAxes(const struct FVector& Forward, const struct FVector& Right, const struct FVector& Up);
	struct FRandomStream MakeRandomStream(int InitialSeed);
	struct FQualifiedFrameTime MakeQualifiedFrameTime(const struct FFrameNumber& Frame, const struct FFrameRate& FrameRate, float SubFrame);
	float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
	struct FPlane MakePlaneFromPointAndNormal(const struct FVector& Point, const struct FVector& Normal);
	struct FFrameRate MakeFrameRate(int Numerator, int Denominator);
	struct FDateTime MakeDateTime(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	struct FLinearColor MakeColor(float R, float G, float B, float A);
	struct FBox2D MakeBox2D(const struct FVector2D& Min, const struct FVector2D& Max);
	struct FBox MakeBox(const struct FVector& Min, const struct FVector& Max);
	float Loge(float A);
	float Log(float A, float Base);
	bool LinePlaneIntersection_OriginNormal(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, float* T, struct FVector* Intersection);
	bool LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FPlane& APlane, float* T, struct FVector* Intersection);
	struct FLinearColor LinearColorLerpUsingHSV(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	struct FLinearColor LinearColorLerp(const struct FLinearColor& A, const struct FLinearColor& B, float Alpha);
	struct FVector LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	bool LessEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool LessEqual_IntInt(int A, int B);
	bool LessEqual_FloatFloat(float A, float B);
	bool LessEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool LessEqual_ByteByte(unsigned char A, unsigned char B);
	bool Less_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool Less_IntInt(int A, int B);
	bool Less_FloatFloat(float A, float B);
	bool Less_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool Less_ByteByte(unsigned char A, unsigned char B);
	float Lerp(float A, float B, float Alpha);
	bool IsPointInBoxWithTransform(const struct FVector& Point, const struct FTransform& BoxWorldTransform, const struct FVector& BoxExtent);
	bool IsPointInBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
	bool IsMorning(const struct FDateTime& A);
	bool IsLeapYear(int Year);
	bool IsAfternoon(const struct FDateTime& A);
	struct FTransform InvertTransform(const struct FTransform& T);
	struct FRotator InverseTransformRotation(const struct FTransform& T, const struct FRotator& Rotation);
	struct FVector InverseTransformLocation(const struct FTransform& T, const struct FVector& Location);
	struct FVector InverseTransformDirection(const struct FTransform& T, const struct FVector& Direction);
	bool InRange_IntInt(int Value, int Min, int Max, bool InclusiveMin, bool InclusiveMax);
	bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
	float Hypotenuse(float Width, float Height);
	void STATIC_HSVToRGB_Vector(const struct FLinearColor& HSV, struct FLinearColor* RGB);
	struct FLinearColor HSVToRGB(float H, float S, float V, float A);
	float GridSnap_Float(float Location, float GridSize);
	struct FVector GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	bool GreaterEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool GreaterEqual_IntInt(int A, int B);
	bool GreaterEqual_FloatFloat(float A, float B);
	bool GreaterEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool GreaterEqual_ByteByte(unsigned char A, unsigned char B);
	bool Greater_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool Greater_IntInt(int A, int B);
	bool Greater_FloatFloat(float A, float B);
	bool Greater_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool Greater_ByteByte(unsigned char A, unsigned char B);
	int GetYear(const struct FDateTime& A);
	void STATIC_GetYawPitchFromVector(const struct FVector& InVec, float* Yaw, float* Pitch);
	struct FVector GetVectorArrayAverage(TArray<struct FVector> Vectors);
	struct FVector GetUpVector(const struct FRotator& InRot);
	float GetTotalSeconds(const struct FTimespan& A);
	float GetTotalMinutes(const struct FTimespan& A);
	float GetTotalMilliseconds(const struct FTimespan& A);
	float GetTotalHours(const struct FTimespan& A);
	float GetTotalDays(const struct FTimespan& A);
	struct FTimespan GetTimeOfDay(const struct FDateTime& A);
	float GetTAU();
	void STATIC_GetSlopeDegreeAngles(const struct FVector& MyRightYAxis, const struct FVector& FloorNormal, const struct FVector& UpVector, float* OutSlopePitchDegreeAngle, float* OutSlopeRollDegreeAngle);
	int GetSeconds(const struct FTimespan& A);
	int GetSecond(const struct FDateTime& A);
	struct FVector GetRightVector(const struct FRotator& InRot);
	struct FVector GetReflectionVector(const struct FVector& Direction, const struct FVector& SurfaceNormal);
	float GetPointDistanceToSegment(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd);
	float GetPointDistanceToLine(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection);
	float GetPI();
	int GetMonth(const struct FDateTime& A);
	int GetMinutes(const struct FTimespan& A);
	int GetMinute(const struct FDateTime& A);
	float GetMinElement(const struct FVector& A);
	int GetMilliseconds(const struct FTimespan& A);
	int GetMillisecond(const struct FDateTime& A);
	float GetMaxElement(const struct FVector& A);
	int GetHours(const struct FTimespan& A);
	int GetHour12(const struct FDateTime& A);
	int GetHour(const struct FDateTime& A);
	struct FVector GetForwardVector(const struct FRotator& InRot);
	struct FTimespan GetDuration(const struct FTimespan& A);
	struct FVector GetDirectionUnitVector(const struct FVector& From, const struct FVector& To);
	int GetDays(const struct FTimespan& A);
	int GetDayOfYear(const struct FDateTime& A);
	int GetDay(const struct FDateTime& A);
	struct FDateTime GetDate(const struct FDateTime& A);
	void STATIC_GetAzimuthAndElevation(const struct FVector& InDirection, const struct FTransform& ReferenceFrame, float* Azimuth, float* Elevation);
	void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	struct FIntVector FTruncVector(const struct FVector& InVector);
	int FTrunc(float A);
	struct FTimespan FromSeconds(float Seconds);
	struct FTimespan FromMinutes(float Minutes);
	struct FTimespan FromMilliseconds(float Milliseconds);
	struct FTimespan FromHours(float Hours);
	struct FTimespan FromDays(float Days);
	float Fraction(float A);
	int FMod(float Dividend, float Divisor, float* Remainder);
	float FMin(float A, float B);
	float FMax(float A, float B);
	float FloatSpringInterp(float Current, float Target, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass, struct FFloatSpringState* SpringState);
	float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
	float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpEaseInOut(float A, float B, float Alpha, float Exponent);
	void STATIC_FindNearestPointsOnLineSegments(const struct FVector& Segment1Start, const struct FVector& Segment1End, const struct FVector& Segment2Start, const struct FVector& Segment2End, struct FVector* Segment1Point, struct FVector* Segment2Point);
	struct FRotator FindLookAtRotation(const struct FVector& Start, const struct FVector& Target);
	struct FVector FindClosestPointOnSegment(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd);
	struct FVector FindClosestPointOnLine(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection);
	int FFloor(float A);
	float FClamp(float Value, float Min, float Max);
	int FCeil(float A);
	float Exp(float A);
	bool EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B, float ErrorTolerance);
	bool EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	bool EqualEqual_TransformTransform(const struct FTransform& A, const struct FTransform& B);
	bool EqualEqual_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	bool EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B, float ErrorTolerance);
	bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	bool EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool EqualEqual_IntInt(int A, int B);
	bool EqualEqual_FloatFloat(float A, float B);
	bool EqualEqual_DateTimeDateTime(const struct FDateTime& A, const struct FDateTime& B);
	bool EqualEqual_ClassClass(class UClass* A, class UClass* B);
	bool EqualEqual_ByteByte(unsigned char A, unsigned char B);
	bool EqualEqual_BoolBool(bool A, bool B);
	float Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int Steps);
	float DotProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	float Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Divide_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Divide_VectorInt(const struct FVector& A, int B);
	struct FVector Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector2D Divide_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Divide_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan Divide_TimespanFloat(const struct FTimespan& A, float Scalar);
	int Divide_IntInt(int A, int B);
	float Divide_FloatFloat(float A, float B);
	unsigned char Divide_ByteByte(unsigned char A, unsigned char B);
	float DegTan(float A);
	float DegSin(float A);
	float DegreesToRadians(float A);
	float DegCos(float A);
	float DegAtan2(float A, float B);
	float DegAtan(float A);
	float DegAsin(float A);
	float DegAcos(float A);
	int DaysInYear(int Year);
	int DaysInMonth(int Year, int Month);
	struct FDateTime DateTimeMinValue();
	struct FDateTime DateTimeMaxValue();
	bool DateTimeFromString(const class FString& DateTimeString, struct FDateTime* Result);
	bool DateTimeFromIsoString(const class FString& IsoString, struct FDateTime* Result);
	float CrossProduct2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
	float Cos(float A);
	struct FTransform ConvertTransformToRelative(const struct FTransform& Transform, const struct FTransform& ParentTransform);
	struct FVector2D Conv_VectorToVector2D(const struct FVector& InVector);
	struct FTransform Conv_VectorToTransform(const struct FVector& InLocation);
	struct FRotator Conv_VectorToRotator(const struct FVector& InVec);
	struct FLinearColor Conv_VectorToLinearColor(const struct FVector& InVec);
	struct FVector Conv_Vector2DToVector(const struct FVector2D& InVector2D, float Z);
	struct FVector Conv_RotatorToVector(const struct FRotator& InRot);
	struct FTransform Conv_RotatorToTransform(const struct FRotator& InRotator);
	struct FTransform Conv_MatrixToTransform(const struct FMatrix& InMatrix);
	struct FRotator Conv_MatrixToRotator(const struct FMatrix& InMatrix);
	struct FVector Conv_LinearColorToVector(const struct FLinearColor& InLinearColor);
	struct FColor Conv_LinearColorToColor(const struct FLinearColor& InLinearColor);
	struct FVector Conv_IntVectorToVector(const struct FIntVector& InIntVector);
	struct FIntVector Conv_IntToIntVector(int inInt);
	float Conv_IntToFloat(int inInt);
	unsigned char Conv_IntToByte(int inInt);
	bool Conv_IntToBool(int inInt);
	struct FVector Conv_FloatToVector(float InFloat);
	struct FLinearColor Conv_FloatToLinearColor(float InFloat);
	struct FLinearColor Conv_ColorToLinearColor(const struct FColor& InColor);
	int Conv_ByteToInt(unsigned char InByte);
	float Conv_ByteToFloat(unsigned char InByte);
	int Conv_BoolToInt(bool InBool);
	float Conv_BoolToFloat(bool InBool);
	unsigned char Conv_BoolToByte(bool InBool);
	struct FTransform ComposeTransforms(const struct FTransform& A, const struct FTransform& B);
	struct FRotator ComposeRotators(const struct FRotator& A, const struct FRotator& B);
	bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	struct FVector ClampVectorSize(const struct FVector& A, float Min, float Max);
	float ClampAxis(float Angle);
	float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
	int Clamp(int Value, int Min, int Max);
	struct FLinearColor CInterpTo(const struct FLinearColor& Current, const struct FLinearColor& Target, float DeltaTime, float InterpSpeed);
	void STATIC_BreakVector2D(const struct FVector2D& InVec, float* X, float* Y);
	void STATIC_BreakVector(const struct FVector& InVec, float* X, float* Y, float* Z);
	void STATIC_BreakTransform(const struct FTransform& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	void STATIC_BreakTimespan2(const struct FTimespan& InTimespan, int* Days, int* Hours, int* Minutes, int* Seconds, int* FractionNano);
	void STATIC_BreakTimespan(const struct FTimespan& InTimespan, int* Days, int* Hours, int* Minutes, int* Seconds, int* Milliseconds);
	void STATIC_BreakRotIntoAxes(const struct FRotator& InRot, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void STATIC_BreakRotator(const struct FRotator& InRot, float* Roll, float* Pitch, float* Yaw);
	void STATIC_BreakRandomStream(const struct FRandomStream& InRandomStream, int* InitialSeed);
	void STATIC_BreakQualifiedFrameTime(const struct FQualifiedFrameTime& InFrameTime, struct FFrameNumber* Frame, struct FFrameRate* FrameRate, float* SubFrame);
	void STATIC_BreakFrameRate(const struct FFrameRate& InFrameRate, int* Numerator, int* Denominator);
	void STATIC_BreakDateTime(const struct FDateTime& InDateTime, int* Year, int* Month, int* Day, int* Hour, int* Minute, int* Second, int* Millisecond);
	void STATIC_BreakColor(const struct FLinearColor& InColor, float* R, float* G, float* B, float* A);
	bool BooleanXOR(bool A, bool B);
	bool BooleanOR(bool A, bool B);
	bool BooleanNOR(bool A, bool B);
	bool BooleanNAND(bool A, bool B);
	bool BooleanAND(bool A, bool B);
	unsigned char BMin(unsigned char A, unsigned char B);
	unsigned char BMax(unsigned char A, unsigned char B);
	float Atan2(float A, float B);
	float Atan(float A);
	float Asin(float A);
	int And_IntInt(int A, int B);
	struct FVector Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector Add_VectorInt(const struct FVector& A, int B);
	struct FVector Add_VectorFloat(const struct FVector& A, float B);
	struct FVector2D Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D Add_Vector2DFloat(const struct FVector2D& A, float B);
	struct FTimespan Add_TimespanTimespan(const struct FTimespan& A, const struct FTimespan& B);
	int Add_IntInt(int A, int B);
	float Add_FloatFloat(float A, float B);
	struct FDateTime Add_DateTimeTimespan(const struct FDateTime& A, const struct FTimespan& B);
	unsigned char Add_ByteByte(unsigned char A, unsigned char B);
	float Acos(float A);
	int Abs_Int(int A);
	float Abs(float A);
};


// Class Engine.KismetNodeHelperLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetNodeHelperLibrary");
		return ptr;
	}


	void STATIC_MarkBit(int Index, int* Data);
	bool HasUnmarkedBit(int Data, int NumBits);
	bool HasMarkedBit(int Data, int NumBits);
	unsigned char GetValidValue(class UEnum* Enum, unsigned char EnumeratorValue);
	int GetUnmarkedBit(int Data, int StartIdx, int NumBits, bool bRandom);
	int GetRandomUnmarkedBit(int Data, int StartIdx, int NumBits);
	int GetFirstUnmarkedBit(int Data, int StartIdx, int NumBits);
	unsigned char GetEnumeratorValueFromIndex(class UEnum* Enum, unsigned char EnumeratorIndex);
	class FString GetEnumeratorUserFriendlyName(class UEnum* Enum, unsigned char EnumeratorValue);
	struct FName GetEnumeratorName(class UEnum* Enum, unsigned char EnumeratorValue);
	void STATIC_ClearBit(int Index, int* Data);
	void STATIC_ClearAllBits(int* Data);
	bool BitIsMarked(int Data, int Index);
};


// Class Engine.KismetRenderingLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetRenderingLibrary");
		return ptr;
	}


	class UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(class UTextureRenderTarget2D* RenderTarget, const class FString& Name, TEnumAsByte<ETextureCompressionSettings> CompressionSettings, TEnumAsByte<ETextureMipGenSettings> MipSettings);
	void STATIC_ReleaseRenderTarget2D(class UTextureRenderTarget2D* TextureRenderTarget);
	struct FColor ReadRenderTargetUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
	struct FLinearColor ReadRenderTargetRawUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
	struct FLinearColor ReadRenderTargetRawPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int X, int Y);
	struct FColor ReadRenderTargetPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int X, int Y);
	struct FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int Bone0, unsigned char Weight0, int Bone1, unsigned char Weight1, int Bone2, unsigned char Weight2, int Bone3, unsigned char Weight3);
	class UTexture2D* ImportFileAsTexture2D(class UObject* WorldContextObject, const class FString& Filename);
	class UTexture2D* ImportBufferAsTexture2D(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	void STATIC_ExportTexture2D(class UObject* WorldContextObject, class UTexture2D* Texture, const class FString& FilePath, const class FString& Filename);
	void STATIC_ExportRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const class FString& FilePath, const class FString& Filename);
	void STATIC_EndRenderDocCapture();
	void STATIC_EndDrawCanvasToRenderTarget(class UObject* WorldContextObject, const struct FDrawToRenderTargetContext& Context);
	void STATIC_DrawMaterialToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material);
	class UTextureRenderTarget2D* CreateRenderTarget2D(class UObject* WorldContextObject, int Width, int Height, TEnumAsByte<ETextureRenderTargetFormat> Format);
	void STATIC_ConvertRenderTargetToTexture2DEditorOnly(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture2D* Texture);
	void STATIC_ClearRenderTarget2D(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const struct FLinearColor& ClearColor);
	void STATIC_BreakSkinWeightInfo(const struct FSkelMeshSkinWeightInfo& InWeight, int* Bone0, unsigned char* Weight0, int* Bone1, unsigned char* Weight1, int* Bone2, unsigned char* Weight2, int* Bone3, unsigned char* Weight3);
	void STATIC_BeginRenderDocCapture();
	void STATIC_BeginDrawCanvasToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas** Canvas, struct FVector2D* Size, struct FDrawToRenderTargetContext* Context);
};


// Class Engine.KismetStringLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringLibrary");
		return ptr;
	}


	class FString TrimTrailing(const class FString& SourceString);
	class FString Trim(const class FString& SourceString);
	class FString ToUpper(const class FString& SourceString);
	class FString ToLower(const class FString& SourceString);
	class FString TimeSecondsToString(float InSeconds);
	bool StartsWith(const class FString& SourceString, const class FString& InPrefix, TEnumAsByte<ESearchCase> SearchCase);
	bool Split(const class FString& SourceString, const class FString& InStr, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir, class FString* LeftS, class FString* RightS);
	class FString RightPad(const class FString& SourceString, int ChCount);
	class FString RightChop(const class FString& SourceString, int Count);
	class FString Right(const class FString& SourceString, int Count);
	class FString Reverse(const class FString& SourceString);
	int ReplaceInline(const class FString& SearchText, const class FString& ReplacementText, TEnumAsByte<ESearchCase> SearchCase, class FString* SourceString);
	class FString Replace(const class FString& SourceString, const class FString& From, const class FString& To, TEnumAsByte<ESearchCase> SearchCase);
	TArray<class FString> ParseIntoArray(const class FString& SourceString, const class FString& Delimiter, bool CullEmptyStrings);
	bool NotEqual_StrStr(const class FString& A, const class FString& B);
	bool NotEqual_StriStri(const class FString& A, const class FString& B);
	class FString Mid(const class FString& SourceString, int Start, int Count);
	bool MatchesWildcard(const class FString& SourceString, const class FString& Wildcard, TEnumAsByte<ESearchCase> SearchCase);
	int Len(const class FString& S);
	class FString LeftPad(const class FString& SourceString, int ChCount);
	class FString LeftChop(const class FString& SourceString, int Count);
	class FString Left(const class FString& SourceString, int Count);
	class FString JoinStringArray(TArray<class FString> SourceArray, const class FString& Separator);
	bool IsNumeric(const class FString& SourceString);
	class FString GetSubstring(const class FString& SourceString, int StartIndex, int Length);
	int GetCharacterAsNumber(const class FString& SourceString, int Index);
	TArray<class FString> GetCharacterArrayFromString(const class FString& SourceString);
	int FindSubstring(const class FString& SearchIn, const class FString& Substring, bool bUseCase, bool bSearchFromEnd, int StartPosition);
	bool EqualEqual_StrStr(const class FString& A, const class FString& B);
	bool EqualEqual_StriStri(const class FString& A, const class FString& B);
	bool EndsWith(const class FString& SourceString, const class FString& InSuffix, TEnumAsByte<ESearchCase> SearchCase);
	int CullArray(const class FString& SourceString, TArray<class FString>* inArray);
	class FString Conv_VectorToString(const struct FVector& InVec);
	class FString Conv_Vector2dToString(const struct FVector2D& InVec);
	class FString Conv_TransformToString(const struct FTransform& InTrans);
	void STATIC_Conv_StringToVector2D(const class FString& inString, struct FVector2D* OutConvertedVector2D, bool* OutIsValid);
	void STATIC_Conv_StringToVector(const class FString& inString, struct FVector* OutConvertedVector, bool* OutIsValid);
	void STATIC_Conv_StringToRotator(const class FString& inString, struct FRotator* OutConvertedRotator, bool* OutIsValid);
	struct FName Conv_StringToName(const class FString& inString);
	int Conv_StringToInt(const class FString& inString);
	float Conv_StringToFloat(const class FString& inString);
	void STATIC_Conv_StringToColor(const class FString& inString, struct FLinearColor* OutConvertedColor, bool* OutIsValid);
	class FString Conv_RotatorToString(const struct FRotator& InRot);
	class FString Conv_ObjectToString(class UObject* InObj);
	class FString Conv_NameToString(const struct FName& InName);
	class FString Conv_IntVectorToString(const struct FIntVector& InIntVec);
	class FString Conv_IntToString(int inInt);
	class FString Conv_FloatToString(float InFloat);
	class FString Conv_ColorToString(const struct FLinearColor& InColor);
	class FString Conv_ByteToString(unsigned char InByte);
	class FString Conv_BoolToString(bool InBool);
	bool Contains(const class FString& SearchIn, const class FString& Substring, bool bUseCase, bool bSearchFromEnd);
	class FString Concat_StrStr(const class FString& A, const class FString& B);
	class FString BuildString_Vector2d(const class FString& AppendTo, const class FString& Prefix, const struct FVector2D& InVector2D, const class FString& Suffix);
	class FString BuildString_Vector(const class FString& AppendTo, const class FString& Prefix, const struct FVector& InVector, const class FString& Suffix);
	class FString BuildString_Rotator(const class FString& AppendTo, const class FString& Prefix, const struct FRotator& InRot, const class FString& Suffix);
	class FString BuildString_Object(const class FString& AppendTo, const class FString& Prefix, class UObject* InObj, const class FString& Suffix);
	class FString BuildString_Name(const class FString& AppendTo, const class FString& Prefix, const struct FName& InName, const class FString& Suffix);
	class FString BuildString_IntVector(const class FString& AppendTo, const class FString& Prefix, const struct FIntVector& InIntVector, const class FString& Suffix);
	class FString BuildString_Int(const class FString& AppendTo, const class FString& Prefix, int inInt, const class FString& Suffix);
	class FString BuildString_Float(const class FString& AppendTo, const class FString& Prefix, float InFloat, const class FString& Suffix);
	class FString BuildString_Color(const class FString& AppendTo, const class FString& Prefix, const struct FLinearColor& InColor, const class FString& Suffix);
	class FString BuildString_Bool(const class FString& AppendTo, const class FString& Prefix, bool InBool, const class FString& Suffix);
};


// Class Engine.KismetStringTableLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetStringTableLibrary");
		return ptr;
	}


	bool IsRegisteredTableId(const struct FName& TableId);
	bool IsRegisteredTableEntry(const struct FName& TableId, const class FString& Key);
	class FString GetTableNamespace(const struct FName& TableId);
	class FString GetTableEntrySourceString(const struct FName& TableId, const class FString& Key);
	class FString GetTableEntryMetaData(const struct FName& TableId, const class FString& Key, const struct FName& MetaDataId);
	TArray<struct FName> GetRegisteredStringTables();
	TArray<struct FName> GetMetaDataIdsFromStringTableEntry(const struct FName& TableId, const class FString& Key);
	TArray<class FString> GetKeysFromStringTable(const struct FName& TableId);
};


// Class Engine.KismetSystemLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetSystemLibrary");
		return ptr;
	}


	void STATIC_UnregisterForRemoteNotifications();
	void STATIC_UnloadPrimaryAssetList(TArray<struct FPrimaryAssetId> PrimaryAssetIdList);
	void STATIC_UnloadPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId);
	void STATIC_TransactObject(class UObject* Object);
	void STATIC_StackTrace();
	bool SphereTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool SphereTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool SphereTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool SphereTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool SphereTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool SphereTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool SphereOverlapComponents(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool SphereOverlapActors(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void STATIC_ShowPlatformSpecificLeaderboardScreen(const class FString& CategoryName);
	void STATIC_ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer);
	void STATIC_ShowInterstitialAd();
	void STATIC_ShowAdBanner(int AdIdIndex, bool bShowOnBottomOfScreen);
	void STATIC_SetWindowTitle(const struct FText& Title);
	void STATIC_SetVolumeButtonsHandledBySystem(bool bEnabled);
	void STATIC_SetVectorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FVector& Value);
	void STATIC_SetUserActivity(const struct FUserActivity& UserActivity);
	void STATIC_SetTransformPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FTransform& Value);
	void STATIC_SetTextPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FText& Value);
	void STATIC_SetSuppressViewportTransitionMessage(class UObject* WorldContextObject, bool bState);
	void STATIC_SetStructurePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FGenericStruct& Value);
	void STATIC_SetStringPropertyByName(class UObject* Object, const struct FName& PropertyName, const class FString& Value);
	void STATIC_SetSoftObjectPropertyByName(class UObject* Object, const struct FName& PropertyName, TSoftObjectPtr<class UObject> Value);
	void STATIC_SetSoftClassPropertyByName(class UObject* Object, const struct FName& PropertyName, TSoftObjectPtr<class UClass> Value);
	void STATIC_SetRotatorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FRotator& Value);
	void STATIC_SetObjectPropertyByName(class UObject* Object, const struct FName& PropertyName, class UObject* Value);
	void STATIC_SetNamePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FName& Value);
	void STATIC_SetLinearColorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FLinearColor& Value);
	void STATIC_SetIntPropertyByName(class UObject* Object, const struct FName& PropertyName, int Value);
	void STATIC_SetInterfacePropertyByName(class UObject* Object, const struct FName& PropertyName, const TScriptInterface<class UInterface>& Value);
	void STATIC_SetFloatPropertyByName(class UObject* Object, const struct FName& PropertyName, float Value);
	void STATIC_SetCollisionProfileNameProperty(class UObject* Object, const struct FName& PropertyName, const struct FCollisionProfileName& Value);
	void STATIC_SetClassPropertyByName(class UObject* Object, const struct FName& PropertyName, class UClass* Value);
	void STATIC_SetBytePropertyByName(class UObject* Object, const struct FName& PropertyName, unsigned char Value);
	void STATIC_SetBoolPropertyByName(class UObject* Object, const struct FName& PropertyName, bool Value);
	void STATIC_RetriggerableDelay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	void STATIC_ResetGamepadAssignmentToController(int ControllerId);
	void STATIC_ResetGamepadAssignments();
	void STATIC_RegisterForRemoteNotifications();
	void STATIC_QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference, bool bIgnorePlatformRestrictions);
	void STATIC_PrintWarning(const class FString& inString);
	void STATIC_PrintText(class UObject* WorldContextObject, const struct FText& InText, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	void STATIC_PrintString(class UObject* WorldContextObject, const class FString& inString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	void STATIC_OnAssetLoaded__DelegateSignature(class UObject* Loaded);
	void STATIC_OnAssetClassLoaded__DelegateSignature(class UClass* Loaded);
	bool NotEqual_SoftObjectReference(TSoftObjectPtr<class UObject> A, TSoftObjectPtr<class UObject> B);
	bool NotEqual_SoftClassReference(TSoftObjectPtr<class UClass> A, TSoftObjectPtr<class UClass> B);
	bool NotEqual_PrimaryAssetType(const struct FPrimaryAssetType& A, const struct FPrimaryAssetType& B);
	bool NotEqual_PrimaryAssetId(const struct FPrimaryAssetId& A, const struct FPrimaryAssetId& B);
	class FString NormalizeFilename(const class FString& InFilename);
	void STATIC_MoveComponentTo(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction, const struct FLatentActionInfo& LatentInfo);
	struct FSoftObjectPath MakeSoftObjectPath(const class FString& PathString);
	struct FSoftClassPath MakeSoftClassPath(const class FString& PathString);
	struct FText MakeLiteralText(const struct FText& Value);
	class FString MakeLiteralString(const class FString& Value);
	struct FName MakeLiteralName(const struct FName& Value);
	int MakeLiteralInt(int Value);
	float MakeLiteralFloat(float Value);
	unsigned char MakeLiteralByte(unsigned char Value);
	bool MakeLiteralBool(bool Value);
	void STATIC_LoadInterstitialAd(int AdIdIndex);
	void STATIC_LoadAssetClass(class UObject* WorldContextObject, TSoftObjectPtr<class UClass> AssetClass, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	void STATIC_LoadAsset(class UObject* WorldContextObject, TSoftObjectPtr<class UObject> Asset, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	bool LineTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool LineTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool LineTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool LineTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool LineTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	void STATIC_LaunchURL(const class FString& URL);
	void STATIC_K2_UnPauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_UnPauseTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_UnPauseTimer(class UObject* Object, const class FString& FunctionName);
	bool K2_TimerExistsHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool K2_TimerExistsDelegate(const struct FScriptDelegate& Delegate);
	bool K2_TimerExists(class UObject* Object, const class FString& FunctionName);
	struct FTimerHandle K2_SetTimerDelegate(const struct FScriptDelegate& Delegate, float Time, bool bLooping);
	struct FTimerHandle K2_SetTimer(class UObject* Object, const class FString& FunctionName, float Time, bool bLooping);
	void STATIC_K2_PauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_PauseTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_PauseTimer(class UObject* Object, const class FString& FunctionName);
	bool K2_IsValidTimerHandle(const struct FTimerHandle& Handle);
	bool K2_IsTimerPausedHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool K2_IsTimerPausedDelegate(const struct FScriptDelegate& Delegate);
	bool K2_IsTimerPaused(class UObject* Object, const class FString& FunctionName);
	bool K2_IsTimerActiveHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	bool K2_IsTimerActiveDelegate(const struct FScriptDelegate& Delegate);
	bool K2_IsTimerActive(class UObject* Object, const class FString& FunctionName);
	struct FTimerHandle K2_InvalidateTimerHandle(struct FTimerHandle* Handle);
	float K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	float K2_GetTimerRemainingTimeDelegate(const struct FScriptDelegate& Delegate);
	float K2_GetTimerRemainingTime(class UObject* Object, const class FString& FunctionName);
	float K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	float K2_GetTimerElapsedTimeDelegate(const struct FScriptDelegate& Delegate);
	float K2_GetTimerElapsedTime(class UObject* Object, const class FString& FunctionName);
	void STATIC_K2_ClearTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	void STATIC_K2_ClearTimerDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_K2_ClearTimer(class UObject* Object, const class FString& FunctionName);
	void STATIC_K2_ClearAndInvalidateTimerHandle(class UObject* WorldContextObject, struct FTimerHandle* Handle);
	bool IsValidSoftObjectReference(TSoftObjectPtr<class UObject> SoftObjectReference);
	bool IsValidSoftClassReference(TSoftObjectPtr<class UClass> SoftClassReference);
	bool IsValidPrimaryAssetType(const struct FPrimaryAssetType& PrimaryAssetType);
	bool IsValidPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	bool IsValidClass(class UClass* Class);
	bool IsValid(class UObject* Object);
	bool IsUnattended();
	bool IsStandalone(class UObject* WorldContextObject);
	bool IsServer(class UObject* WorldContextObject);
	bool IsScreensaverEnabled();
	bool IsPackagedForDistribution();
	bool IsLoggedIn(class APlayerController* SpecificPlayer);
	bool IsInterstitialAdRequested();
	bool IsInterstitialAdAvailable();
	bool IsDedicatedServer(class UObject* WorldContextObject);
	bool IsControllerAssignedToGamepad(int ControllerId);
	void STATIC_HideAdBanner();
	bool GetVolumeButtonsHandledBySystem();
	class FString GetUniqueDeviceId();
	bool GetSupportedFullscreenResolutions(TArray<struct FIntPoint>* Resolutions);
	TSoftObjectPtr<class UObject> GetSoftObjectReferenceFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	TSoftObjectPtr<class UClass> GetSoftClassReferenceFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	int GetRenderingMaterialQualityLevel();
	int GetRenderingDetailMode();
	class FString GetProjectSavedDirectory();
	class FString GetProjectDirectory();
	class FString GetProjectContentDirectory();
	void STATIC_GetPrimaryAssetsWithBundleState(TArray<struct FName> RequiredBundles, TArray<struct FName> ExcludedBundles, TArray<struct FPrimaryAssetType> ValidTypes, bool bForceCurrentState, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);
	void STATIC_GetPrimaryAssetIdList(const struct FPrimaryAssetType& PrimaryAssetType, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);
	struct FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(TSoftObjectPtr<class UObject> SoftObjectReference);
	struct FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(TSoftObjectPtr<class UClass> SoftClassReference);
	struct FPrimaryAssetId GetPrimaryAssetIdFromObject(class UObject* Object);
	struct FPrimaryAssetId GetPrimaryAssetIdFromClass(class UClass* Class);
	TArray<class FString> GetPreferredLanguages();
	class FString GetPlatformUserName();
	class FString GetPathName(class UObject* Object);
	class FString GetObjectName(class UObject* Object);
	class UObject* GetObjectFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	int GetMinYResolutionForUI();
	int GetMinYResolutionFor3DView();
	class FString GetLocalCurrencySymbol();
	class FString GetLocalCurrencyCode();
	float GetGameTimeInSeconds(class UObject* WorldContextObject);
	class FString GetGameName();
	class FString GetGameBundleId();
	class FString GetEngineVersion();
	class FString GetDisplayName(class UObject* Object);
	class FString GetDeviceId();
	class FString GetDefaultLocale();
	class FString GetDefaultLanguage();
	bool GetCurrentBundleState(const struct FPrimaryAssetId& PrimaryAssetId, bool bForceCurrentState, TArray<struct FName>* OutBundles);
	bool GetConvenientWindowedResolutions(TArray<struct FIntPoint>* Resolutions);
	int GetConsoleVariableIntValue(class UObject* WorldContextObject, const class FString& VariableName);
	float GetConsoleVariableFloatValue(class UObject* WorldContextObject, const class FString& VariableName);
	void STATIC_GetComponentBounds(class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius);
	class FString GetCommandLine();
	class UClass* GetClassFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	class FString GetClassDisplayName(class UClass* Class);
	int GetAdIDCount();
	void STATIC_GetActorListFromComponentList(TArray<class UPrimitiveComponent*> ComponentList, class UClass* ActorClassFilter, TArray<class AActor*>* OutActorList);
	void STATIC_GetActorBounds(class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent);
	void STATIC_ForceCloseAdBanner();
	void STATIC_FlushPersistentDebugLines(class UObject* WorldContextObject);
	void STATIC_FlushDebugStrings(class UObject* WorldContextObject);
	void STATIC_ExecuteConsoleCommand(class UObject* WorldContextObject, const class FString& Command, class APlayerController* SpecificPlayer);
	bool EqualEqual_SoftObjectReference(TSoftObjectPtr<class UObject> A, TSoftObjectPtr<class UObject> B);
	bool EqualEqual_SoftClassReference(TSoftObjectPtr<class UClass> A, TSoftObjectPtr<class UClass> B);
	bool EqualEqual_PrimaryAssetType(const struct FPrimaryAssetType& A, const struct FPrimaryAssetType& B);
	bool EqualEqual_PrimaryAssetId(const struct FPrimaryAssetId& A, const struct FPrimaryAssetId& B);
	int EndTransaction();
	void STATIC_DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const class FString& Text, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration);
	void STATIC_DrawDebugSphere(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugPoint(class UObject* WorldContextObject, const struct FVector& Position, float Size, const struct FLinearColor& PointColor, float Duration);
	void STATIC_DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, const struct FVector& Location, float Size, const struct FLinearColor& PlaneColor, float Duration);
	void STATIC_DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, const struct FLinearColor& FrustumColor, float Duration, float Thickness);
	void STATIC_DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	void STATIC_DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FVector& DrawLocation, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	void STATIC_DrawDebugCylinder(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugCoordinateSystem(class UObject* WorldContextObject, const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, float Duration, float Thickness);
	void STATIC_DrawDebugConeInDegrees(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugCone(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumSegments, const struct FLinearColor& LineColor, float Duration, float Thickness, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis);
	void STATIC_DrawDebugCapsule(class UObject* WorldContextObject, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_DrawDebugCamera(class ACameraActor* CameraActor, const struct FLinearColor& CameraColor, float Duration);
	void STATIC_DrawDebugBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& LineColor, const struct FRotator& Rotation, float Duration, float Thickness);
	void STATIC_DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FLinearColor& LineColor, float Duration, float Thickness);
	bool DoesImplementInterface(class UObject* TestObject, class UClass* Interface);
	void STATIC_Delay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	void STATIC_CreateCopyForUndoBuffer(class UObject* ObjectToModify);
	class FString ConvertToRelativePath(const class FString& Filename);
	class FString ConvertToAbsolutePath(const class FString& Filename);
	class FString Conv_SoftObjectReferenceToString(TSoftObjectPtr<class UObject> SoftObjectReference);
	class UObject* Conv_SoftObjectReferenceToObject(TSoftObjectPtr<class UObject> SoftObject);
	class FString Conv_SoftClassReferenceToString(TSoftObjectPtr<class UClass> SoftClassReference);
	class UClass* Conv_SoftClassReferenceToClass(TSoftObjectPtr<class UClass> SoftClass);
	class FString Conv_PrimaryAssetTypeToString(const struct FPrimaryAssetType& PrimaryAssetType);
	class FString Conv_PrimaryAssetIdToString(const struct FPrimaryAssetId& PrimaryAssetId);
	TSoftObjectPtr<class UObject> Conv_ObjectToSoftObjectReference(class UObject* Object);
	class UObject* Conv_InterfaceToObject(const TScriptInterface<class UInterface>& Interface);
	TSoftObjectPtr<class UClass> Conv_ClassToSoftClassReference(class UClass* Class);
	void STATIC_ControlScreensaver(bool bAllowScreenSaver);
	bool ComponentOverlapComponents(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool ComponentOverlapActors(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	void STATIC_CollectGarbage();
	bool CapsuleTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool CapsuleTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool CapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool CapsuleTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool CapsuleTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool CapsuleTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool CapsuleOverlapComponents(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool CapsuleOverlapActors(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	bool CanLaunchURL(const class FString& URL);
	void STATIC_CancelTransaction(int Index);
	void STATIC_BreakSoftObjectPath(const struct FSoftObjectPath& InSoftObjectPath, class FString* PathString);
	void STATIC_BreakSoftClassPath(const struct FSoftClassPath& InSoftClassPath, class FString* PathString);
	bool BoxTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool BoxTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool BoxTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool BoxTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool BoxTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool BoxTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	bool BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	int BeginTransaction(const class FString& Context, const struct FText& Description, class UObject* PrimaryObject);
	struct FDebugFloatHistory AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory);
};


// Class Engine.KismetTextLibrary
// 0x0000 (0x0030 - 0x0030)
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.KismetTextLibrary");
		return ptr;
	}


	struct FText TextTrimTrailing(const struct FText& InText);
	struct FText TextTrimPrecedingAndTrailing(const struct FText& InText);
	struct FText TextTrimPreceding(const struct FText& InText);
	struct FText TextToUpper(const struct FText& InText);
	struct FText TextToLower(const struct FText& InText);
	bool TextIsTransient(const struct FText& InText);
	bool TextIsFromStringTable(const struct FText& Text);
	bool TextIsEmpty(const struct FText& InText);
	bool TextIsCultureInvariant(const struct FText& InText);
	struct FText TextFromStringTable(const struct FName& TableId, const class FString& Key);
	bool StringTableIdAndKeyFromText(const struct FText& Text, struct FName* OutTableId, class FString* OutKey);
	struct FText PolyglotDataToText(const struct FPolyglotTextData& PolyglotData);
	bool NotEqual_TextText(const struct FText& A, const struct FText& B);
	bool NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	void STATIC_IsPolyglotDataValid(const struct FPolyglotTextData& PolyglotData, bool* IsValid, struct FText* ErrorMessage);
	struct FText GetEmptyText();
	struct FText Format(const struct FText& InPattern, TArray<struct FFormatArgumentData> InArgs);
	bool FindTextInLocalizationTable(const class FString& Namespace, const class FString& Key, struct FText* OutText);
	bool EqualEqual_TextText(const struct FText& A, const struct FText& B);
	bool EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	struct FText Conv_VectorToText(const struct FVector& InVec);
	struct FText Conv_Vector2dToText(const struct FVector2D& InVec);
	struct FText Conv_TransformToText(const struct FTransform& InTrans);
	class FString Conv_TextToString(const struct FText& InText);
	struct FText Conv_StringToText(const class FString& inString);
	struct FText Conv_RotatorToText(const struct FRotator& InRot);
	struct FText Conv_ObjectToText(class UObject* InObj);
	struct FText Conv_NameToText(const struct FName& InName);
	struct FText Conv_IntToText(int Value, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits);
	struct FText Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	struct FText Conv_ColorToText(const struct FLinearColor& InColor);
	struct FText Conv_ByteToText(unsigned char Value);
	struct FText Conv_BoolToText(bool InBool);
	struct FText AsTimeZoneTime_DateTime(const struct FDateTime& InDateTime, const class FString& InTimeZone);
	struct FText AsTimeZoneDateTime_DateTime(const struct FDateTime& InDateTime, const class FString& InTimeZone);
	struct FText AsTimeZoneDate_DateTime(const struct FDateTime& InDateTime, const class FString& InTimeZone);
	struct FText AsTimespan_Timespan(const struct FTimespan& InTimespan);
	struct FText AsTime_DateTime(const struct FDateTime& In);
	struct FText AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	struct FText AsDateTime_DateTime(const struct FDateTime& In);
	struct FText AsDate_DateTime(const struct FDateTime& InDateTime);
	struct FText AsCurrencyBase(int BaseValue, const class FString& CurrencyCode);
	struct FText AsCurrency_Integer(int Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const class FString& CurrencyCode);
	struct FText AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const class FString& CurrencyCode);
};


// Class Engine.Layer
// 0x0020 (0x0050 - 0x0030)
class ULayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Layer");
		return ptr;
	}

};


// Class Engine.Level
// 0x0280 (0x02B0 - 0x0030)
class ULevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0030(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Level");
		return ptr;
	}

};


// Class Engine.LevelActorContainer
// 0x0010 (0x0040 - 0x0030)
class ULevelActorContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelActorContainer");
		return ptr;
	}

};


// Class Engine.LevelBounds
// 0x0008 (0x0390 - 0x0388)
class ALevelBounds : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelBounds");
		return ptr;
	}

};


// Class Engine.LevelScriptActor
// 0x0008 (0x0390 - 0x0388)
class ALevelScriptActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptActor");
		return ptr;
	}


	void STATIC_WorldOriginLocationChanged(const struct FIntVector& OldOriginLocation, const struct FIntVector& NewOriginLocation);
	void STATIC_SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	bool RemoteEvent(const struct FName& EventName);
	void STATIC_LevelReset();
};


// Class Engine.LevelScriptBlueprint
// 0x0000 (0x00E8 - 0x00E8)
class ULevelScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelScriptBlueprint");
		return ptr;
	}

};


// Class Engine.LevelStreaming
// 0x0120 (0x0150 - 0x0030)
class ULevelStreaming : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0030(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreaming");
		return ptr;
	}


	bool ShouldBeLoaded();
	void STATIC_SetShouldBeVisible(bool bInShouldBeVisible);
	void STATIC_SetShouldBeLoaded(bool bInShouldBeLoaded);
	void STATIC_SetLevelLODIndex(int LODIndex);
	bool IsStreamingStatePending();
	bool IsLevelVisible();
	bool IsLevelLoaded();
	struct FName GetWorldAssetPackageFName();
	class ALevelScriptActor* GetLevelScriptActor();
	class ULevelStreaming* CreateInstance(const class FString& UniqueInstanceName);
};


// Class Engine.LevelStreamingAlwaysLoaded
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingAlwaysLoaded");
		return ptr;
	}

};


// Class Engine.LevelStreamingDynamic
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingDynamic : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingDynamic");
		return ptr;
	}


	class ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(class UObject* WorldContextObject, TSoftObjectPtr<class UWorld> Level, const struct FVector& Location, const struct FRotator& Rotation, bool* bOutSuccess);
	class ULevelStreamingDynamic* LoadLevelInstance(class UObject* WorldContextObject, const class FString& LevelName, const struct FVector& Location, const struct FRotator& Rotation, bool* bOutSuccess);
};


// Class Engine.LevelStreamingPersistent
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingPersistent : public ULevelStreaming
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingPersistent");
		return ptr;
	}

};


// Class Engine.LevelStreamingVolume
// 0x0018 (0x03F8 - 0x03E0)
class ALevelStreamingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LevelStreamingVolume");
		return ptr;
	}

};


// Class Engine.LightmappedSurfaceCollection
// 0x0018 (0x0048 - 0x0030)
class ULightmappedSurfaceCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmappedSurfaceCollection");
		return ptr;
	}

};


// Class Engine.LightMapTexture2D
// 0x0008 (0x0100 - 0x00F8)
class ULightMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapTexture2D");
		return ptr;
	}

};


// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000 (0x03E0 - 0x03E0)
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassCharacterIndirectDetailVolume");
		return ptr;
	}

};


// Class Engine.LightmassImportanceComponent
// 0x0010 (0x02C0 - 0x02B0)
class ULightmassImportanceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceComponent");
		return ptr;
	}

};


// Class Engine.LightmassImportanceVolume
// 0x0008 (0x03E8 - 0x03E0)
class ALightmassImportanceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassImportanceVolume");
		return ptr;
	}

};


// Class Engine.LightmassPortal
// 0x0008 (0x0390 - 0x0388)
class ALightmassPortal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortal");
		return ptr;
	}

};


// Class Engine.LightmassPortalComponent
// 0x0000 (0x02B0 - 0x02B0)
class ULightmassPortalComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPortalComponent");
		return ptr;
	}

};


// Class Engine.LightmassPrimitiveSettingsObject
// 0x0018 (0x0048 - 0x0030)
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightmassPrimitiveSettingsObject");
		return ptr;
	}

};


// Class Engine.LightVolume
// 0x0008 (0x03E8 - 0x03E0)
class ALightVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightVolume");
		return ptr;
	}

};


// Class Engine.LightVolumeComponent
// 0x0040 (0x02F0 - 0x02B0)
class ULightVolumeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightVolumeComponent");
		return ptr;
	}


	void STATIC_UpdateRenderState();
};


// Class Engine.LineBatchComponent
// 0x0040 (0x0650 - 0x0610)
class ULineBatchComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0610(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LineBatchComponent");
		return ptr;
	}

};


// Class Engine.LocalLightComponent
// 0x0020 (0x0400 - 0x03E0)
class ULocalLightComponent : public ULightComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalLightComponent");
		return ptr;
	}


	void STATIC_SetAttenuationRadius(float NewRadius);
	float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);
};


// Class Engine.LocalPlayer
// 0x0180 (0x01D0 - 0x0050)
class ULocalPlayer : public UPlayer
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0050(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LocalPlayer");
		return ptr;
	}

};


// Class Engine.LODActor
// 0x0050 (0x03D8 - 0x0388)
class ALODActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActor");
		return ptr;
	}

};


// Class Engine.LODActorDummy
// 0x0018 (0x03A0 - 0x0388)
class ALODActorDummy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0388(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LODActorDummy");
		return ptr;
	}

};


// Class Engine.MapBuildDataRegistry
// 0x01A0 (0x01D0 - 0x0030)
class UMapBuildDataRegistry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0030(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MapBuildDataRegistry");
		return ptr;
	}

};


// Class Engine.Material
// 0x0238 (0x02C8 - 0x0090)
class UMaterial : public UMaterialInterface
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0090(0x0238) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Material");
		return ptr;
	}

};


// Class Engine.MaterialBillboardComponent
// 0x0010 (0x0620 - 0x0610)
class UMaterialBillboardComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0610(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialBillboardComponent");
		return ptr;
	}


	void STATIC_SetElements(TArray<struct FMaterialSpriteElement> NewElements);
	void STATIC_AddElement(class UMaterialInterface* Material, class UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, class UCurveFloat* DistanceToSizeCurve);
};


// Class Engine.MaterialExpressionAbs
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionAbs : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAbs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionActorPositionWS
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionActorPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionActorPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAdd
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionAdd : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAdd");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureBase
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionTextureBase : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureBase");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSample
// 0x00A8 (0x0100 - 0x0058)
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0058(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter
// 0x0020 (0x0120 - 0x0100)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameter2D
// 0x0000 (0x0120 - 0x0120)
class UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameter2D");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0008 (0x0128 - 0x0120)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAntialiasedTextureMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAppendVector
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAppendVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArccosine
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionArccosine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArccosineFast
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionArccosineFast : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArccosineFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArcsine
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionArcsine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArcsineFast
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionArcsineFast : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArcsineFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionArctangent : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent2
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionArctangent2 : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangent2Fast
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionArctangent2Fast : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangent2Fast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionArctangentFast
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionArctangentFast : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionArctangentFast");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericFogColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericLightColor
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionAtmosphericLightColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionAtmosphericLightVector
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionAtmosphericLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionAtmosphericLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBentNormalCustomOutput
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBentNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlackBody
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionBlackBody : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlackBody");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBlendMaterialAttributes
// 0x0060 (0x00A8 - 0x0048)
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBlendMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBreakMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionBumpOffset
// 0x0058 (0x00A0 - 0x0048)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionBumpOffset");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraPositionWS
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCameraVectorWS
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCameraVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCeil
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionCeil : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCeil");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParameter
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorParameter
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionChannelMaskParameter
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionChannelMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClamp
// 0x0058 (0x00A0 - 0x0048)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClamp");
		return ptr;
	}

};


// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionClearCoatNormalCustomOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCloudLayerInfo
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionCloudLayerInfo : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCloudLayerInfo");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCloudSunDirection
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionCloudSunDirection : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCloudSunDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCloudWeather
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionCloudWeather : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCloudWeather");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCloudWorldNoise
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionCloudWorldNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCloudWorldNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCollectionParameter
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCollectionParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComment
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComment");
		return ptr;
	}

};


// Class Engine.MaterialExpressionComponentMask
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionComponentMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant
// 0x0008 (0x0050 - 0x0048)
class UMaterialExpressionConstant : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant2Vector
// 0x0008 (0x0050 - 0x0048)
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant2Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant3Vector
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant3Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstant4Vector
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstant4Vector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionConstantBiasScale
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionConstantBiasScale");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCosine
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCosine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCoverClusterSphere
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionCoverClusterSphere : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCoverClusterSphere");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCrossProduct
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCrossProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScalarParameter
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScalarParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCurveAtlasRowParameter
// 0x0028 (0x0090 - 0x0068)
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCurveAtlasRowParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionCustom
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionCustom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDX
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionDDX : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDX");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDDY
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionDDY : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDDY");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalDerivative
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionDecalDerivative : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalDerivative");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalLifetimeOpacity
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionDecalLifetimeOpacity : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalLifetimeOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDecalMipmapLevel
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDecalMipmapLevel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthFade
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDepthOfFieldFunction");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDeriveNormalZ");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDesaturation
// 0x0040 (0x0088 - 0x0048)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDesaturation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistance
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionDistance : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistance");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceCullFade
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceCullFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceFieldGradient
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceFieldGradient");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDistanceToNearestSurface
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDistanceToNearestSurface");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDivide
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionDivide : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDivide");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDotProduct
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDotProduct");
		return ptr;
	}

};


// Class Engine.MaterialExpressionDynamicParameter
// 0x0028 (0x0070 - 0x0048)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionDynamicParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionEyeAdaptation
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionEyeAdaptation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x0078 (0x00C0 - 0x0048)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0048(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFeatureLevelSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFloor
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionFloor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFloor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFmod
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFmod");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSample
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSample");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFontSampleParameter
// 0x0020 (0x0078 - 0x0058)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFontSampleParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFrac
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionFrac : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFrac");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFresnel
// 0x0058 (0x00A0 - 0x0048)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFresnel");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionInput
// 0x0088 (0x00D0 - 0x0048)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionInput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionFunctionOutput
// 0x0050 (0x0098 - 0x0048)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionFunctionOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGetMaterialAttributes
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGetMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionGIReplace
// 0x0048 (0x0090 - 0x0048)
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionGIReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIf
// 0x0088 (0x00D0 - 0x0048)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIf");
		return ptr;
	}

};


// Class Engine.MaterialExpressionInteractableHighlightOcclusion
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionInteractableHighlightOcclusion : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionInteractableHighlightOcclusion");
		return ptr;
	}

};


// Class Engine.MaterialExpressionIsBakingMaterial
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionIsBakingMaterial : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionIsBakingMaterial");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmapUVs
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmapUVs");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightmassReplace
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightmassReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVector
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVector");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLightVolumeEffect
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionLightVolumeEffect : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLightVolumeEffect");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLinearInterpolate
// 0x0058 (0x00A0 - 0x0048)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLinearInterpolate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm10
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionLogarithm10 : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm10");
		return ptr;
	}

};


// Class Engine.MaterialExpressionLogarithm2
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionLogarithm2");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x0258 (0x02A0 - 0x0048)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x258];                                     // 0x0048(0x0258) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMakeMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialAttributeLayers
// 0x00B0 (0x00F8 - 0x0048)
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0048(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialAttributeLayers");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialFunctionCall");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialLayerOutput
// 0x0000 (0x0098 - 0x0098)
class UMaterialExpressionMaterialLayerOutput : public UMaterialExpressionFunctionOutput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialLayerOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMaterialProxyReplace
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMaterialProxyReplace");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMax
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionMax : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMax");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMin
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionMin : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMin");
		return ptr;
	}

};


// Class Engine.MaterialExpressionMultiply
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionMultiply");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNoise
// 0x0058 (0x00A0 - 0x0048)
class UMaterialExpressionNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionNormalize
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionNormalize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectBounds
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionObjectBounds : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectBounds");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectOrientation
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectOrientation");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectPositionWS
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectPositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionObjectRadius
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionObjectRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionOneMinus
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionOneMinus");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPanner
// 0x0058 (0x00A0 - 0x0048)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPanner");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleColor
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleDirection
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleDirection : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleDirection");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMacroUV
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMacroUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleMotionBlurFade");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticlePositionWS
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticlePositionWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRadius
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleRadius : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRadius");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRandom
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleRelativeTime
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleRelativeTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSize
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSpeed
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSpeed");
		return ptr;
	}

};


// Class Engine.MaterialExpressionParticleSubUV
// 0x0008 (0x0108 - 0x0100)
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionParticleSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceFadeAmount");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPerInstanceRandom");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelDepth
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionPixelDepth : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPixelNormalWS
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPixelNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPower
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPower");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPrecomputedAOMask
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPrecomputedAOMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedNormal
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionPreSkinnedNormal : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedNormal");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreSkinnedPosition
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionPreSkinnedPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreSkinnedPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionPreviousFrameSwitch
// 0x0030 (0x0078 - 0x0048)
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionPreviousFrameSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionQualitySwitch
// 0x0060 (0x00A8 - 0x0048)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionQualitySwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReflectionVectorWS
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReflectionVectorWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionReroute
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionReroute : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionReroute");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotateAboutAxis
// 0x0068 (0x00B0 - 0x0048)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotateAboutAxis");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRotator
// 0x0040 (0x0088 - 0x0048)
class UMaterialExpressionRotator : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRotator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionRound
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionRound : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionRound");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSaturate
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionSaturate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSaturate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneColor
// 0x0040 (0x0088 - 0x0048)
class UMaterialExpressionSceneColor : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneDepth
// 0x0040 (0x0088 - 0x0048)
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneDepth");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexelSize
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexelSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSceneTexture
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSceneTexture");
		return ptr;
	}

};


// Class Engine.MaterialExpressionScreenPosition
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionScreenPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSetMaterialAttributes
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSetMaterialAttributes");
		return ptr;
	}

};


// Class Engine.MaterialExpressionShadingPathSwitch
// 0x0060 (0x00A8 - 0x0048)
class UMaterialExpressionShadingPathSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionShadingPathSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSign
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionSign : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSine
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSine");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSobol
// 0x0058 (0x00A0 - 0x0048)
class UMaterialExpressionSobol : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSobol");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSpeedTree
// 0x0070 (0x00B8 - 0x0048)
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0048(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSpeedTree");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphereMask
// 0x0068 (0x00B0 - 0x0048)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphereMask");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSphericalParticleOpacity");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSquareRoot
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSquareRoot");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBool
// 0x0008 (0x0050 - 0x0048)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBool");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticBoolParameter
// 0x0008 (0x0068 - 0x0060)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticBoolParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticComponentMaskParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitch
// 0x0050 (0x0098 - 0x0048)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitch");
		return ptr;
	}

};


// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0030 (0x0098 - 0x0068)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionStaticSwitchParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionSubtract
// 0x0038 (0x0080 - 0x0048)
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionSubtract");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangent
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionTangent : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangent");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTangentOutput
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTangentOutput");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTemporalSobol
// 0x0040 (0x0088 - 0x0048)
class UMaterialExpressionTemporalSobol : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTemporalSobol");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureCoordinate
// 0x0010 (0x0058 - 0x0048)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureCoordinate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObject
// 0x0000 (0x0058 - 0x0058)
class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObject");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000 (0x0120 - 0x0120)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureObjectParameter");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureProperty
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionTextureProperty : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000 (0x0120 - 0x0120)
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterCube");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0008 (0x0128 - 0x0120)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterSubUV");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTextureSampleParameterVolume
// 0x0000 (0x0120 - 0x0120)
class UMaterialExpressionTextureSampleParameterVolume : public UMaterialExpressionTextureSampleParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTextureSampleParameterVolume");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTime
// 0x0008 (0x0050 - 0x0048)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTime");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransform
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransform");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTransformPosition
// 0x0020 (0x0068 - 0x0048)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTransformPosition");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTruncate
// 0x0018 (0x0060 - 0x0048)
class UMaterialExpressionTruncate : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTruncate");
		return ptr;
	}

};


// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionTwoSidedSign");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVectorNoise
// 0x0028 (0x0070 - 0x0048)
class UMaterialExpressionVectorNoise : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVectorNoise");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexColor
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexColor");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexInterpolator
// 0x0028 (0x0070 - 0x0048)
class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexInterpolator");
		return ptr;
	}

};


// Class Engine.MaterialExpressionVertexNormalWS
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionVertexNormalWS");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewProperty
// 0x0008 (0x0050 - 0x0048)
class UMaterialExpressionViewProperty : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewProperty");
		return ptr;
	}

};


// Class Engine.MaterialExpressionViewSize
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionViewSize : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionViewSize");
		return ptr;
	}

};


// Class Engine.MaterialExpressionWorldPosition
// 0x0008 (0x0050 - 0x0048)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialExpressionWorldPosition");
		return ptr;
	}

};


// Class Engine.MaterialFunctionInterface
// 0x0018 (0x0048 - 0x0030)
class UMaterialFunctionInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionInterface");
		return ptr;
	}

};


// Class Engine.MaterialFunction
// 0x0030 (0x0078 - 0x0048)
class UMaterialFunction : public UMaterialFunctionInterface
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunction");
		return ptr;
	}

};


// Class Engine.MaterialFunctionInstance
// 0x0070 (0x00B8 - 0x0048)
class UMaterialFunctionInstance : public UMaterialFunctionInterface
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0048(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionInstance");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayer
// 0x0000 (0x0078 - 0x0078)
class UMaterialFunctionMaterialLayer : public UMaterialFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayer");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerInstance
// 0x0000 (0x00B8 - 0x00B8)
class UMaterialFunctionMaterialLayerInstance : public UMaterialFunctionInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerInstance");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerBlend
// 0x0000 (0x0078 - 0x0078)
class UMaterialFunctionMaterialLayerBlend : public UMaterialFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerBlend");
		return ptr;
	}

};


// Class Engine.MaterialFunctionMaterialLayerBlendInstance
// 0x0000 (0x00B8 - 0x00B8)
class UMaterialFunctionMaterialLayerBlendInstance : public UMaterialFunctionInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialFunctionMaterialLayerBlendInstance");
		return ptr;
	}

};


// Class Engine.MaterialInstanceActor
// 0x0010 (0x0398 - 0x0388)
class AMaterialInstanceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceActor");
		return ptr;
	}

};


// Class Engine.MaterialInstanceDynamic
// 0x0050 (0x0240 - 0x01F0)
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x01F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialInstanceDynamic");
		return ptr;
	}


	void STATIC_SetVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void STATIC_SetTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	void STATIC_SetScalarParameterValue(const struct FName& ParameterName, float Value);
	void STATIC_K2_InterpolateMaterialInstanceParams(class UMaterialInstance* SourceA, class UMaterialInstance* SourceB, float Alpha);
	struct FLinearColor K2_GetVectorParameterValue(const struct FName& ParameterName);
	class UTexture* K2_GetTextureParameterValue(const struct FName& ParameterName);
	float K2_GetScalarParameterValue(const struct FName& ParameterName);
	void STATIC_K2_CopyMaterialInstanceParameters(class UMaterialInterface* Source, bool bQuickParametersOnly);
	void STATIC_CopyParameterOverrides(class UMaterialInstance* MaterialInstance);
	void STATIC_CopyInterpParameters(class UMaterialInstance* Source);
};


// Class Engine.MaterialParameterCollection
// 0x0040 (0x0070 - 0x0030)
class UMaterialParameterCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollection");
		return ptr;
	}

};


// Class Engine.MaterialParameterCollectionInstance
// 0x00C8 (0x00F8 - 0x0030)
class UMaterialParameterCollectionInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MaterialParameterCollectionInstance");
		return ptr;
	}

};


// Class Engine.MatineeActor
// 0x00A8 (0x0430 - 0x0388)
class AMatineeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0388(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActor");
		return ptr;
	}


	void STATIC_Stop();
	void STATIC_SetPosition(float NewPosition, bool bJump);
	void STATIC_SetLoopingState(bool bNewLooping);
	void STATIC_Reverse();
	void STATIC_Play();
	void STATIC_Pause();
	void STATIC_EnableGroupByName(const class FString& GroupName, bool bEnable);
	void STATIC_ChangePlaybackDirection();
};


// Class Engine.MatineeActorCameraAnim
// 0x0008 (0x0438 - 0x0430)
class AMatineeActorCameraAnim : public AMatineeActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeActorCameraAnim");
		return ptr;
	}

};


// Class Engine.MatineeAnimInterface
// 0x0000 (0x0030 - 0x0030)
class UMatineeAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeAnimInterface");
		return ptr;
	}

};


// Class Engine.MatineeInterface
// 0x0000 (0x0030 - 0x0030)
class UMatineeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MatineeInterface");
		return ptr;
	}

};


// Class Engine.MeshMergeCullingVolume
// 0x0000 (0x03E0 - 0x03E0)
class AMeshMergeCullingVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshMergeCullingVolume");
		return ptr;
	}

};


// Class Engine.MeshSimplificationSettings
// 0x0008 (0x0048 - 0x0040)
class UMeshSimplificationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshSimplificationSettings");
		return ptr;
	}

};


// Class Engine.MeshVertexPainterKismetLibrary
// 0x0000 (0x0030 - 0x0030)
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MeshVertexPainterKismetLibrary");
		return ptr;
	}


	void STATIC_RemovePaintedVertices(class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_PaintVerticesSingleColor(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& FillColor, bool bConvertToSRGB);
	void STATIC_PaintVerticesLerpAlongAxis(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& StartColor, const struct FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);
};


// Class Engine.MicroTransactionBase
// 0x0030 (0x0070 - 0x0040)
class UMicroTransactionBase : public UPlatformInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MicroTransactionBase");
		return ptr;
	}

};


// Class Engine.ModelComponent
// 0x0040 (0x0650 - 0x0610)
class UModelComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0610(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ModelComponent");
		return ptr;
	}

};


// Class Engine.MorphTarget
// 0x0018 (0x0048 - 0x0030)
class UMorphTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.MorphTarget");
		return ptr;
	}

};


// Class Engine.NavAgentInterface
// 0x0000 (0x0030 - 0x0030)
class UNavAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavAgentInterface");
		return ptr;
	}

};


// Class Engine.NavCollisionBase
// 0x0048 (0x0078 - 0x0030)
class UNavCollisionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavCollisionBase");
		return ptr;
	}

};


// Class Engine.NavEdgeProviderInterface
// 0x0000 (0x0030 - 0x0030)
class UNavEdgeProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavEdgeProviderInterface");
		return ptr;
	}

};


// Class Engine.NavigationDataChunk
// 0x0008 (0x0038 - 0x0030)
class UNavigationDataChunk : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataChunk");
		return ptr;
	}

};


// Class Engine.NavigationDataInterface
// 0x0000 (0x0030 - 0x0030)
class UNavigationDataInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationDataInterface");
		return ptr;
	}

};


// Class Engine.NavigationSystem
// 0x0010 (0x0040 - 0x0030)
class UNavigationSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystem");
		return ptr;
	}


	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
};


// Class Engine.NavigationSystemConfig
// 0x0020 (0x0050 - 0x0030)
class UNavigationSystemConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavigationSystemConfig");
		return ptr;
	}

};


// Class Engine.NullNavSysConfig
// 0x0000 (0x0050 - 0x0050)
class UNullNavSysConfig : public UNavigationSystemConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NullNavSysConfig");
		return ptr;
	}

};


// Class Engine.NavLinkDefinition
// 0x0028 (0x0058 - 0x0030)
class UNavLinkDefinition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavLinkDefinition");
		return ptr;
	}

};


// Class Engine.NavPathObserverInterface
// 0x0000 (0x0030 - 0x0030)
class UNavPathObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavPathObserverInterface");
		return ptr;
	}

};


// Class Engine.NavRelevantInterface
// 0x0000 (0x0030 - 0x0030)
class UNavRelevantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NavRelevantInterface");
		return ptr;
	}

};


// Class Engine.SimulatedClientNetConnection
// 0x0000 (0x1920 - 0x1920)
class USimulatedClientNetConnection : public UNetConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimulatedClientNetConnection");
		return ptr;
	}

};


// Class Engine.NetworkPredictionInterface
// 0x0000 (0x0030 - 0x0030)
class UNetworkPredictionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkPredictionInterface");
		return ptr;
	}

};


// Class Engine.NetworkSettings
// 0x0010 (0x0050 - 0x0040)
class UNetworkSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NetworkSettings");
		return ptr;
	}

};


// Class Engine.NodeMappingContainer
// 0x0140 (0x0170 - 0x0030)
class UNodeMappingContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0030(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NodeMappingContainer");
		return ptr;
	}

};


// Class Engine.NodeMappingProviderInterface
// 0x0000 (0x0030 - 0x0030)
class UNodeMappingProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.NodeMappingProviderInterface");
		return ptr;
	}

};


// Class Engine.Note
// 0x0000 (0x0388 - 0x0388)
class ANote : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Note");
		return ptr;
	}

};


// Class Engine.ObjectLibrary
// 0x0080 (0x00B0 - 0x0030)
class UObjectLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectLibrary");
		return ptr;
	}

};


// Class Engine.ObjectReferencer
// 0x0010 (0x0040 - 0x0030)
class UObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ObjectReferencer");
		return ptr;
	}

};


// Class Engine.PackageMapClient
// 0x02A0 (0x0388 - 0x00E8)
class UPackageMapClient : public UPackageMap
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x00E8(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PackageMapClient");
		return ptr;
	}

};


// Class Engine.PainCausingVolume
// 0x0028 (0x0418 - 0x03F0)
class APainCausingVolume : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PainCausingVolume");
		return ptr;
	}

};


// Class Engine.ParticleEmitter
// 0x0130 (0x0160 - 0x0030)
class UParticleEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0030(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEmitter");
		return ptr;
	}

};


// Class Engine.ParticleEventManager
// 0x0000 (0x0388 - 0x0388)
class AParticleEventManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleEventManager");
		return ptr;
	}

};


// Class Engine.ParticleLODLevel
// 0x0090 (0x00C0 - 0x0030)
class UParticleLODLevel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleLODLevel");
		return ptr;
	}

};


// Class Engine.ParticleModule
// 0x0008 (0x0038 - 0x0030)
class UParticleModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModule");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationBase
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleAccelerationBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAcceleration
// 0x0058 (0x0098 - 0x0040)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAcceleration");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationConstant
// 0x0010 (0x0050 - 0x0040)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationConstant");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDrag
// 0x0040 (0x0080 - 0x0040)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDrag");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0x0040 (0x0080 - 0x0040)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationDragScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0050 (0x0090 - 0x0040)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAccelerationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleAttractorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorLine
// 0x0088 (0x00C0 - 0x0038)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorLine");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorParticle
// 0x0090 (0x00C8 - 0x0038)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorParticle");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPoint
// 0x00C8 (0x0100 - 0x0038)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0038(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPoint");
		return ptr;
	}

};


// Class Engine.ParticleModuleAttractorPointGravity
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleAttractorPointGravity");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleBeamBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamModifier
// 0x00F0 (0x0128 - 0x0038)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0038(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamModifier");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamNoise
// 0x0188 (0x01C0 - 0x0038)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0038(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamNoise");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamSource
// 0x0108 (0x0140 - 0x0038)
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0038(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleBeamTarget
// 0x0108 (0x0140 - 0x0038)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0038(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleBeamTarget");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleCameraBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCameraOffset
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCameraOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleCollisionBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollision
// 0x0180 (0x01B8 - 0x0038)
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0038(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollision");
		return ptr;
	}

};


// Class Engine.ParticleModuleCollisionGPU
// 0x0088 (0x00C0 - 0x0038)
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleCollisionGPU");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleColorBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor
// 0x0090 (0x00C8 - 0x0038)
class UParticleModuleColor : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor");
		return ptr;
	}

};


// Class Engine.ParticleModuleColor_Seeded
// 0x0020 (0x00E8 - 0x00C8)
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColor_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorOverLife
// 0x0090 (0x00C8 - 0x0038)
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleColorScaleOverLife
// 0x0090 (0x00C8 - 0x0038)
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleColorScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleEventBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventGenerator
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventGenerator");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverBase
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0008 (0x0050 - 0x0048)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverKillParticles");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventReceiverSpawn
// 0x00A8 (0x00F0 - 0x0048)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0048(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventReceiverSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleEventSendToGame
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleEventSendToGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleEventSendToGame");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleKillBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillBox
// 0x00A8 (0x00E0 - 0x0038)
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0038(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillBox");
		return ptr;
	}

};


// Class Engine.ParticleModuleKillHeight
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleKillHeight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetimeBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleLifetimeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetimeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleLifetime_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLifetime_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLightBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleLightBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLightBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight
// 0x0110 (0x0148 - 0x0038)
class UParticleModuleLight : public UParticleModuleLightBase
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0038(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight");
		return ptr;
	}

};


// Class Engine.ParticleModuleLight_Seeded
// 0x0020 (0x0168 - 0x0148)
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0148(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLight_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleLocationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocation_Seeded
// 0x0020 (0x00B0 - 0x0090)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationBoneSocket
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationBoneSocket");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationDirect
// 0x0140 (0x0178 - 0x0038)
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0038(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitter
// 0x0020 (0x0058 - 0x0038)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitter");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationEmitterDirect");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveBase
// 0x0090 (0x00C8 - 0x0038)
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder
// 0x0080 (0x0148 - 0x00C8)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00C8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x0020 (0x0168 - 0x0148)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0148(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0038 (0x0100 - 0x00C8)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x0020 (0x0120 - 0x0100)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x00F8 (0x0130 - 0x0038)
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0038(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationPrimitiveTriangle");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0060 (0x0098 - 0x0038)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationSkelVertSurface");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000 (0x0090 - 0x0090)
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x0020 (0x00B0 - 0x0090)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleLocationWorldOffset_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMaterialBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleMaterialBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMaterialBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshMaterial
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshMaterial");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleRotationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x0020 (0x00B0 - 0x0090)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleRotationRateBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x0020 (0x00A8 - 0x0088)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleMeshRotationRateOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbitBase
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbitBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrbit
// 0x0110 (0x0150 - 0x0040)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0040(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrbit");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleOrientationBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleOrientationAxisLock
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleOrientationAxisLock");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleParameterBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic
// 0x0018 (0x0050 - 0x0038)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic");
		return ptr;
	}

};


// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x0020 (0x0070 - 0x0050)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleParameterDynamic_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModulePivotOffset
// 0x0008 (0x0040 - 0x0038)
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModulePivotOffset");
		return ptr;
	}

};


// Class Engine.ParticleModuleRequired
// 0x0140 (0x0178 - 0x0038)
class UParticleModuleRequired : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0038(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRequired");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotation_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotation_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationOverLifetime
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRate_Seeded
// 0x0020 (0x0090 - 0x0070)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRate_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleRotationRateMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleSizeBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize");
		return ptr;
	}

};


// Class Engine.ParticleModuleSize_Seeded
// 0x0020 (0x00A8 - 0x0088)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSize_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeMultiplyLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScale
// 0x0058 (0x0090 - 0x0038)
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSizeScaleBySpeed");
		return ptr;
	}

};


// Class Engine.ParticleModuleSourceMovement
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSourceMovement");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnBase
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleSpawnBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawn
// 0x00C8 (0x0108 - 0x0040)
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0040(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawn");
		return ptr;
	}

};


// Class Engine.ParticleModuleSpawnPerUnit
// 0x0050 (0x0090 - 0x0040)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSpawnPerUnit");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleSubUVBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUV
// 0x0048 (0x0080 - 0x0038)
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUV");
		return ptr;
	}

};


// Class Engine.ParticleModuleSubUVMovie
// 0x0048 (0x00C8 - 0x0080)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0080(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleSubUVMovie");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleTrailBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTrailSource
// 0x0068 (0x00A0 - 0x0038)
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTrailSource");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x0018 (0x0050 - 0x0038)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataAnimTrail");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataBeam2
// 0x0138 (0x0170 - 0x0038)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0038(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataBeam2");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataGpu
// 0x0438 (0x0470 - 0x0038)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x438];                                     // 0x0038(0x0438) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataGpu");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataMesh
// 0x0090 (0x00C8 - 0x0038)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataMesh");
		return ptr;
	}

};


// Class Engine.ParticleModuleTypeDataRibbon
// 0x0030 (0x0068 - 0x0038)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleTypeDataRibbon");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldBase
// 0x0000 (0x0038 - 0x0038)
class UParticleModuleVectorFieldBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldGlobal
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldGlobal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldLocal
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldLocal");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotation
// 0x0018 (0x0050 - 0x0038)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotation");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldRotationRate");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScale
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScale");
		return ptr;
	}

};


// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVectorFieldScaleOverLife");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityBase
// 0x0008 (0x0040 - 0x0038)
class UParticleModuleVelocityBase : public UParticleModule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityBase");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity
// 0x0088 (0x00C8 - 0x0040)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0040(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocity_Seeded
// 0x0020 (0x00E8 - 0x00C8)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocity_Seeded");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityCone
// 0x0080 (0x00C0 - 0x0040)
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityCone");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityInheritParent
// 0x0050 (0x0090 - 0x0040)
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityInheritParent");
		return ptr;
	}

};


// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0058 (0x0098 - 0x0040)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleModuleVelocityOverLifetime");
		return ptr;
	}

};


// Class Engine.ParticleSpriteEmitter
// 0x0000 (0x0160 - 0x0160)
class UParticleSpriteEmitter : public UParticleEmitter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSpriteEmitter");
		return ptr;
	}

};


// Class Engine.ParticleSystem
// 0x0118 (0x0148 - 0x0030)
class UParticleSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0030(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystem");
		return ptr;
	}


	bool ContainsEmitterType(class UClass* TypeData);
};


// Class Engine.ParticleSystemReplay
// 0x0018 (0x0048 - 0x0030)
class UParticleSystemReplay : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ParticleSystemReplay");
		return ptr;
	}

};


// Class Engine.PathFollowingAgentInterface
// 0x0000 (0x0030 - 0x0030)
class UPathFollowingAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PathFollowingAgentInterface");
		return ptr;
	}

};


// Class Engine.PawnNoiseEmitterComponent
// 0x0028 (0x0140 - 0x0118)
class UPawnNoiseEmitterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PawnNoiseEmitterComponent");
		return ptr;
	}


	void STATIC_MakeNoise(class AActor* NoiseMaker, float Loudness, const struct FVector& NoiseLocation);
};


// Class Engine.PhysicalAnimationComponent
// 0x0038 (0x0150 - 0x0118)
class UPhysicalAnimationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0118(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalAnimationComponent");
		return ptr;
	}


	void STATIC_SetStrengthMultiplyer(float InStrengthMultiplyer);
	void STATIC_SetSkeletalMeshComponent(class USkeletalMeshComponent* InSkeletalMeshComponent);
	struct FTransform GetBodyTargetTransform(const struct FName& BodyName);
	void STATIC_ApplyPhysicalAnimationSettingsBelow(const struct FName& BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
	void STATIC_ApplyPhysicalAnimationSettings(const struct FName& BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData);
	void STATIC_ApplyPhysicalAnimationProfileBelow(const struct FName& BodyName, const struct FName& ProfileName, bool bIncludeSelf, bool bClearNotFound);
};


// Class Engine.PhysicalMaterialPropertyBase
// 0x0000 (0x0030 - 0x0030)
class UPhysicalMaterialPropertyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicalMaterialPropertyBase");
		return ptr;
	}

};


// Class Engine.PhysicsAsset
// 0x00F8 (0x0128 - 0x0030)
class UPhysicsAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0030(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsAsset");
		return ptr;
	}

};


// Class Engine.SkeletalBodySetup
// 0x0018 (0x02A0 - 0x0288)
class USkeletalBodySetup : public UBodySetup
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0288(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalBodySetup");
		return ptr;
	}

};


// Class Engine.PhysicsCollisionHandler
// 0x0018 (0x0048 - 0x0030)
class UPhysicsCollisionHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsCollisionHandler");
		return ptr;
	}

};


// Class Engine.RigidBodyBase
// 0x0000 (0x0388 - 0x0388)
class ARigidBodyBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RigidBodyBase");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintActor
// 0x0020 (0x03A8 - 0x0388)
class APhysicsConstraintActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintActor");
		return ptr;
	}

};


// Class Engine.PhysicsConstraintComponent
// 0x0200 (0x04B0 - 0x02B0)
class UPhysicsConstraintComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x02B0(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintComponent");
		return ptr;
	}


	void STATIC_SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
	void STATIC_SetOrientationDriveSLERP(bool bEnableSLERP);
	void STATIC_SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void STATIC_SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void STATIC_SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	void STATIC_SetLinearVelocityTarget(const struct FVector& InVelTarget);
	void STATIC_SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void STATIC_SetLinearPositionTarget(const struct FVector& InPosTarget);
	void STATIC_SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void STATIC_SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
	void STATIC_SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
	void STATIC_SetDisableCollision(bool bDisableCollision);
	void STATIC_SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& RefPosition);
	void STATIC_SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& PriAxis, const struct FVector& SecAxis);
	void STATIC_SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame> Frame, const struct FTransform& RefFrame);
	void STATIC_SetConstrainedComponents(class UPrimitiveComponent* Component1, const struct FName& BoneName1, class UPrimitiveComponent* Component2, const struct FName& BoneName2);
	void STATIC_SetAngularVelocityTarget(const struct FVector& InVelTarget);
	void STATIC_SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
	void STATIC_SetAngularVelocityDriveSLERP(bool bEnableSLERP);
	void STATIC_SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void STATIC_SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);
	void STATIC_SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);
	void STATIC_SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);
	void STATIC_SetAngularOrientationTarget(const struct FRotator& InPosTarget);
	void STATIC_SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void STATIC_SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
	void STATIC_SetAngularDriveMode(TEnumAsByte<EAngularDriveMode> DriveMode);
	void STATIC_SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
	bool IsBroken();
	float GetCurrentTwist();
	float GetCurrentSwing2();
	float GetCurrentSwing1();
	void STATIC_GetConstraintForce(struct FVector* OutLinearForce, struct FVector* OutAngularForce);
	void STATIC_BreakConstraint();
};


// Class Engine.PhysicsConstraintTemplate
// 0x02D0 (0x0300 - 0x0030)
class UPhysicsConstraintTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0030(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsConstraintTemplate");
		return ptr;
	}

};


// Class Engine.PhysicsHandleComponent
// 0x00A8 (0x01C0 - 0x0118)
class UPhysicsHandleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0118(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsHandleComponent");
		return ptr;
	}


	void STATIC_SetTargetRotation(const struct FRotator& NewRotation);
	void STATIC_SetTargetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void STATIC_SetTargetLocation(const struct FVector& NewLocation);
	void STATIC_SetLinearStiffness(float NewLinearStiffness);
	void STATIC_SetLinearDamping(float NewLinearDamping);
	void STATIC_SetInterpolationSpeed(float NewInterpolationSpeed);
	void STATIC_SetAngularStiffness(float NewAngularStiffness);
	void STATIC_SetAngularDamping(float NewAngularDamping);
	void STATIC_ReleaseComponent();
	void STATIC_GrabComponentAtLocationWithRotation(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& Location, const struct FRotator& Rotation);
	void STATIC_GrabComponentAtLocation(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation);
	void STATIC_GrabComponent(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation, bool bConstrainRotation);
	void STATIC_GetTargetLocationAndRotation(struct FVector* TargetLocation, struct FRotator* TargetRotation);
	class UPrimitiveComponent* GetGrabbedComponent();
};


// Class Engine.PhysicsSettings
// 0x00D8 (0x0118 - 0x0040)
class UPhysicsSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0040(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSettings");
		return ptr;
	}

};


// Class Engine.PhysicsSpringComponent
// 0x0020 (0x02D0 - 0x02B0)
class UPhysicsSpringComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsSpringComponent");
		return ptr;
	}


	struct FVector GetSpringRestingPoint();
	struct FVector GetSpringDirection();
	struct FVector GetSpringCurrentEndPoint();
	float GetNormalizedCompressionScalar();
};


// Class Engine.PhysicsThruster
// 0x0008 (0x0390 - 0x0388)
class APhysicsThruster : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThruster");
		return ptr;
	}

};


// Class Engine.PhysicsThrusterComponent
// 0x0000 (0x02B0 - 0x02B0)
class UPhysicsThrusterComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PhysicsThrusterComponent");
		return ptr;
	}

};


// Class Engine.SceneCapture
// 0x0008 (0x0390 - 0x0388)
class ASceneCapture : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture");
		return ptr;
	}

};


// Class Engine.PlanarReflection
// 0x0010 (0x03A0 - 0x0390)
class APlanarReflection : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflection");
		return ptr;
	}


	void STATIC_OnInterpToggle(bool bEnable);
};


// Class Engine.SceneCaptureComponent
// 0x00A0 (0x0350 - 0x02B0)
class USceneCaptureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent");
		return ptr;
	}


	void STATIC_ShowOnlyComponent(class UPrimitiveComponent* InComponent);
	void STATIC_ShowOnlyActorComponents(class AActor* InActor);
	void STATIC_SetCaptureSortPriority(int NewCaptureSortPriority);
	void STATIC_RemoveShowOnlyComponent(class UPrimitiveComponent* InComponent);
	void STATIC_RemoveShowOnlyActorComponents(class AActor* InActor);
	void STATIC_HideComponent(class UPrimitiveComponent* InComponent);
	void STATIC_HideActorComponents(class AActor* InActor);
	void STATIC_ClearShowOnlyComponents(class UPrimitiveComponent* InComponent);
	void STATIC_ClearHiddenComponents();
};


// Class Engine.PlanarReflectionComponent
// 0x00E0 (0x0430 - 0x0350)
class UPlanarReflectionComponent : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0350(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlanarReflectionComponent");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCapture
// 0x0000 (0x0390 - 0x0390)
class APlaneReflectionCapture : public AReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCapture");
		return ptr;
	}

};


// Class Engine.PlaneReflectionCaptureComponent
// 0x0010 (0x0330 - 0x0320)
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlaneReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.PlatformEventsComponent
// 0x0020 (0x0138 - 0x0118)
class UPlatformEventsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformEventsComponent");
		return ptr;
	}


	bool SupportsConvertibleLaptops();
	void STATIC_PlatformEventDelegate__DelegateSignature();
	bool IsInTabletMode();
	bool IsInLaptopMode();
};


// Class Engine.PlatformInterfaceWebResponse
// 0x0088 (0x00B8 - 0x0030)
class UPlatformInterfaceWebResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlatformInterfaceWebResponse");
		return ptr;
	}


	int GetNumHeaders();
	class FString GetHeaderValue(const class FString& HeaderName);
	void STATIC_GetHeader(int HeaderIndex, class FString* Header, class FString* Value);
};


// Class Engine.PlayerCameraManager
// 0x21A8 (0x2530 - 0x0388)
class APlayerCameraManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x21A8];                                    // 0x0388(0x21A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerCameraManager");
		return ptr;
	}


	void STATIC_StopCameraShake(class UCameraShake* ShakeInstance, bool bImmediately);
	void STATIC_StopCameraFade();
	void STATIC_StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate);
	void STATIC_StopAllInstancesOfCameraShake(class UClass* Shake, bool bImmediately);
	void STATIC_StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate);
	void STATIC_StopAllCameraShakes(bool bImmediately);
	void STATIC_StopAllCameraAnims(bool bImmediate);
	void STATIC_StartCameraFade(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
	void STATIC_SetManualCameraFade(float InFadeAmount, const struct FLinearColor& Color, bool bInFadeAudio);
	bool RemoveCameraModifier(class UCameraModifier* ModifierToRemove);
	void STATIC_RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter);
	class UCameraShake* PlayCameraShake(class UClass* ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class UCameraAnimInst* PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void STATIC_PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation);
	void STATIC_OnPhotographySessionStart();
	void STATIC_OnPhotographySessionEnd();
	void STATIC_OnPhotographyMultiPartCaptureStart();
	void STATIC_OnPhotographyMultiPartCaptureEnd();
	class APlayerController* GetOwningPlayerController();
	float GetFOVAngle();
	struct FRotator GetCameraRotation();
	struct FVector GetCameraLocation();
	class UCameraModifier* FindCameraModifierByClass(class UClass* ModifierClass);
	void STATIC_ClearCameraLensEffects();
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);
	class UCameraModifier* AddNewCameraModifier(class UClass* ModifierClass);
	class AEmitterCameraLensEffectBase* AddCameraLensEffect(class UClass* LensEffectEmitterClass);
};


// Class Engine.PlayerStartPIE
// 0x0000 (0x03B8 - 0x03B8)
class APlayerStartPIE : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerStartPIE");
		return ptr;
	}

};


// Class Engine.PlayerState
// 0x00C8 (0x0450 - 0x0388)
class APlayerState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0388(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PlayerState");
		return ptr;
	}


	void STATIC_ReceiveOverrideWith(class APlayerState* OldPlayerState);
	void STATIC_ReceiveCopyProperties(class APlayerState* NewPlayerState);
	void STATIC_OnRep_UniqueId();
	void STATIC_OnRep_Score();
	void STATIC_OnRep_PlayerName();
	void STATIC_OnRep_PlayerId();
	void STATIC_OnRep_bIsInactive();
	class FString GetPlayerName();
};


// Class Engine.PluginCommandlet
// 0x0020 (0x00A8 - 0x0088)
class UPluginCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PluginCommandlet");
		return ptr;
	}

};


// Class Engine.PointLight
// 0x0008 (0x03A0 - 0x0398)
class APointLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLight");
		return ptr;
	}


	void STATIC_SetRadius(float NewRadius);
	void STATIC_SetLightFalloffExponent(float NewLightFalloffExponent);
};


// Class Engine.PointLightComponent
// 0x0010 (0x0410 - 0x0400)
class UPointLightComponent : public ULocalLightComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0400(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PointLightComponent");
		return ptr;
	}


	void STATIC_SetSourceRadius(float bNewValue);
	void STATIC_SetSourceLength(float NewValue);
	void STATIC_SetSoftSourceRadius(float bNewValue);
	void STATIC_SetLightFalloffExponent(float NewLightFalloffExponent);
};


// Class Engine.Polys
// 0x0010 (0x0040 - 0x0030)
class UPolys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Polys");
		return ptr;
	}

};


// Class Engine.PoseableMeshComponent
// 0x0140 (0x08D0 - 0x0790)
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0790(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseableMeshComponent");
		return ptr;
	}


	void STATIC_SetBoneTransformByName(const struct FName& BoneName, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace);
	void STATIC_SetBoneScaleByName(const struct FName& BoneName, const struct FVector& InScale3D, TEnumAsByte<EBoneSpaces> BoneSpace);
	void STATIC_SetBoneRotationByName(const struct FName& BoneName, const struct FRotator& InRotation, TEnumAsByte<EBoneSpaces> BoneSpace);
	void STATIC_SetBoneLocationByName(const struct FName& BoneName, const struct FVector& InLocation, TEnumAsByte<EBoneSpaces> BoneSpace);
	void STATIC_ResetBoneTransformByName(const struct FName& BoneName);
	struct FTransform GetBoneTransformByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FVector GetBoneScaleByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FRotator GetBoneRotationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	struct FVector GetBoneLocationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	void STATIC_CopyPoseFromSkeletalComponent(class USkeletalMeshComponent* InComponentToCopy);
};


// Class Engine.PoseAsset
// 0x00A0 (0x0128 - 0x0088)
class UPoseAsset : public UAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0088(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseAsset");
		return ptr;
	}

};


// Class Engine.PoseWatch
// 0x0010 (0x0040 - 0x0030)
class UPoseWatch : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PoseWatch");
		return ptr;
	}

};


// Class Engine.PostProcessComponent
// 0x0500 (0x07B0 - 0x02B0)
class UPostProcessComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x500];                                     // 0x02B0(0x0500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessComponent");
		return ptr;
	}


	void STATIC_RemoveBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject);
	void STATIC_AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.PostProcessVolume
// 0x0510 (0x08F0 - 0x03E0)
class APostProcessVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x510];                                     // 0x03E0(0x0510) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PostProcessVolume");
		return ptr;
	}


	void STATIC_AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0030 (0x0410 - 0x03E0)
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityOverrideVolume");
		return ptr;
	}

};


// Class Engine.PrecomputedVisibilityVolume
// 0x0000 (0x03E0 - 0x03E0)
class APrecomputedVisibilityVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrecomputedVisibilityVolume");
		return ptr;
	}

};


// Class Engine.PreviewCollectionInterface
// 0x0000 (0x0030 - 0x0030)
class UPreviewCollectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewCollectionInterface");
		return ptr;
	}

};


// Class Engine.PreviewMeshCollection
// 0x0020 (0x0058 - 0x0038)
class UPreviewMeshCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PreviewMeshCollection");
		return ptr;
	}

};


// Class Engine.PrimaryAssetLabel
// 0x0040 (0x0078 - 0x0038)
class UPrimaryAssetLabel : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.PrimaryAssetLabel");
		return ptr;
	}

};


// Class Engine.ProxyLODMeshSimplificationSettings
// 0x0008 (0x0048 - 0x0040)
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ProxyLODMeshSimplificationSettings");
		return ptr;
	}

};


// Class Engine.RadialForceActor
// 0x0008 (0x0390 - 0x0388)
class ARadialForceActor : public ARigidBodyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceActor");
		return ptr;
	}


	void STATIC_ToggleForce();
	void STATIC_FireImpulse();
	void STATIC_EnableForce();
	void STATIC_DisableForce();
};


// Class Engine.RadialForceComponent
// 0x0030 (0x02E0 - 0x02B0)
class URadialForceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RadialForceComponent");
		return ptr;
	}


	void STATIC_RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
	void STATIC_FireImpulse();
	void STATIC_AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
};


// Class Engine.RectLight
// 0x0008 (0x03A0 - 0x0398)
class ARectLight : public ALight
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RectLight");
		return ptr;
	}

};


// Class Engine.RectLightComponent
// 0x0010 (0x0410 - 0x0400)
class URectLightComponent : public ULocalLightComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0400(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RectLightComponent");
		return ptr;
	}


	void STATIC_SetSourceWidth(float bNewValue);
	void STATIC_SetSourceHeight(float NewValue);
};


// Class Engine.RendererSettings
// 0x00A0 (0x00E0 - 0x0040)
class URendererSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0040(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererSettings");
		return ptr;
	}

};


// Class Engine.RendererOverrideSettings
// 0x0008 (0x0048 - 0x0040)
class URendererOverrideSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RendererOverrideSettings");
		return ptr;
	}

};


// Class Engine.ReplicationDriver
// 0x0000 (0x0030 - 0x0030)
class UReplicationDriver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationDriver");
		return ptr;
	}

};


// Class Engine.ReplicationConnectionDriver
// 0x0000 (0x0030 - 0x0030)
class UReplicationConnectionDriver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReplicationConnectionDriver");
		return ptr;
	}

};


// Class Engine.ReporterBase
// 0x0008 (0x0038 - 0x0030)
class UReporterBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterBase");
		return ptr;
	}

};


// Class Engine.ReporterGraph
// 0x0078 (0x00B0 - 0x0038)
class UReporterGraph : public UReporterBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReporterGraph");
		return ptr;
	}

};


// Class Engine.ReverbEffect
// 0x0030 (0x0060 - 0x0030)
class UReverbEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ReverbEffect");
		return ptr;
	}

};


// Class Engine.Rig
// 0x0028 (0x0058 - 0x0030)
class URig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Rig");
		return ptr;
	}

};


// Class Engine.RotatingMovementComponent
// 0x0020 (0x0178 - 0x0158)
class URotatingMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0158(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RotatingMovementComponent");
		return ptr;
	}

};


// Class Engine.RVOAvoidanceInterface
// 0x0000 (0x0030 - 0x0030)
class URVOAvoidanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.RVOAvoidanceInterface");
		return ptr;
	}

};


// Class Engine.SaveGame
// 0x0000 (0x0030 - 0x0030)
class USaveGame : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SaveGame");
		return ptr;
	}

};


// Class Engine.Scene
// 0x0000 (0x0030 - 0x0030)
class UScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Scene");
		return ptr;
	}

};


// Class Engine.SceneCapture2D
// 0x0008 (0x0398 - 0x0390)
class ASceneCapture2D : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCapture2D");
		return ptr;
	}


	void STATIC_OnInterpToggle(bool bEnable);
};


// Class Engine.SceneCaptureComponent2D
// 0x0580 (0x08D0 - 0x0350)
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x580];                                     // 0x0350(0x0580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponent2D");
		return ptr;
	}


	void STATIC_CaptureScene();
	void STATIC_AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);
};


// Class Engine.SceneCaptureComponentCube
// 0x0020 (0x0370 - 0x0350)
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0350(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureComponentCube");
		return ptr;
	}


	void STATIC_CaptureScene();
};


// Class Engine.SceneCaptureCube
// 0x0008 (0x0398 - 0x0390)
class ASceneCaptureCube : public ASceneCapture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SceneCaptureCube");
		return ptr;
	}


	void STATIC_OnInterpToggle(bool bEnable);
};


// Class Engine.SCS_Node
// 0x00B8 (0x00E8 - 0x0030)
class USCS_Node : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SCS_Node");
		return ptr;
	}

};


// Class Engine.Selection
// 0x0078 (0x00A8 - 0x0030)
class USelection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Selection");
		return ptr;
	}

};


// Class Engine.ServerStatReplicator
// 0x00C8 (0x0450 - 0x0388)
class AServerStatReplicator : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0388(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ServerStatReplicator");
		return ptr;
	}

};


// Class Engine.ShadowMapTexture2D
// 0x0008 (0x0100 - 0x00F8)
class UShadowMapTexture2D : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ShadowMapTexture2D");
		return ptr;
	}

};


// Class Engine.SimpleConstructionScript
// 0x0080 (0x00B0 - 0x0030)
class USimpleConstructionScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SimpleConstructionScript");
		return ptr;
	}

};


// Class Engine.SkeletalMesh
// 0x02D0 (0x0300 - 0x0030)
class USkeletalMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0030(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMesh");
		return ptr;
	}


	void STATIC_SetLODSettings(class USkeletalMeshLODSettings* InLODSettings);
	int NumSockets();
	bool IsSectionUsingCloth(int InSectionIndex, bool bCheckCorrespondingSections);
	class USkeletalMeshSocket* GetSocketByIndex(int Index);
	class UNodeMappingContainer* GetNodeMappingContainer(class UBlueprint* SourceAsset);
	struct FBoxSphereBounds GetImportedBounds();
	struct FBoxSphereBounds GetBounds();
	class USkeletalMeshSocket* FindSocketAndIndex(const struct FName& InSocketName, int* OutIndex);
	class USkeletalMeshSocket* FindSocket(const struct FName& InSocketName);
};


// Class Engine.SkeletalMeshActor
// 0x0088 (0x0410 - 0x0388)
class ASkeletalMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0388(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshActor");
		return ptr;
	}


	void STATIC_OnRep_ReplicatedPhysAsset();
	void STATIC_OnRep_ReplicatedMesh();
	void STATIC_OnRep_ReplicatedMaterial1();
	void STATIC_OnRep_ReplicatedMaterial0();
};


// Class Engine.SkeletalMeshLODSettings
// 0x0018 (0x0050 - 0x0038)
class USkeletalMeshLODSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshLODSettings");
		return ptr;
	}

};


// Class Engine.SkeletalMeshSocket
// 0x0038 (0x0068 - 0x0030)
class USkeletalMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkeletalMeshSocket");
		return ptr;
	}


	void STATIC_InitializeSocketFromLocation(class USkeletalMeshComponent* SkelComp, const struct FVector& WorldLocation, const struct FVector& WorldNormal);
	struct FVector GetSocketLocation(class USkeletalMeshComponent* SkelComp);
};


// Class Engine.SkyLight
// 0x0010 (0x0398 - 0x0388)
class ASkyLight : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLight");
		return ptr;
	}


	void STATIC_OnRep_bEnabled();
};


// Class Engine.SkyLightComponent
// 0x01C0 (0x04A0 - 0x02E0)
class USkyLightComponent : public ULightComponentBase
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x02E0(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SkyLightComponent");
		return ptr;
	}


	void STATIC_SetVolumetricScatteringIntensity(float NewIntensity);
	void STATIC_SetOcclusionTint(const struct FColor& InTint);
	void STATIC_SetOcclusionExponent(float InOcclusionExponent);
	void STATIC_SetOcclusionContrast(float InOcclusionContrast);
	void STATIC_SetMipBrightness(const struct FVector& NewMipBrightness);
	void STATIC_SetMinOcclusion(float InMinOcclusion);
	void STATIC_SetLowerHemisphereColor(const struct FLinearColor& InLowerHemisphereColor);
	void STATIC_SetLightColor(const struct FLinearColor& NewLightColor);
	void STATIC_SetIntensity(float NewIntensity);
	void STATIC_SetIndirectLightingIntensity(float NewIntensity);
	void STATIC_SetCubemapBlend(class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float InBlendFraction);
	void STATIC_SetCubemap(class UTextureCube* NewCubemap);
	void STATIC_RecaptureSky();
};


// Class Engine.SlateBrushAsset
// 0x0088 (0x00B8 - 0x0030)
class USlateBrushAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateBrushAsset");
		return ptr;
	}

};


// Class Engine.SlateTextureAtlasInterface
// 0x0000 (0x0030 - 0x0030)
class USlateTextureAtlasInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SlateTextureAtlasInterface");
		return ptr;
	}

};


// Class Engine.SmokeTestCommandlet
// 0x0000 (0x0088 - 0x0088)
class USmokeTestCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SmokeTestCommandlet");
		return ptr;
	}

};


// Class Engine.SoundAttenuation
// 0x02A8 (0x02D8 - 0x0030)
class USoundAttenuation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0030(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundAttenuation");
		return ptr;
	}

};


// Class Engine.SoundClass
// 0x0058 (0x0088 - 0x0030)
class USoundClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundClass");
		return ptr;
	}

};


// Class Engine.SoundConcurrency
// 0x0010 (0x0040 - 0x0030)
class USoundConcurrency : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundConcurrency");
		return ptr;
	}

};


// Class Engine.SoundCue
// 0x02D8 (0x0388 - 0x00B0)
class USoundCue : public USoundBase
{
public:
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x00B0(0x02D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundCue");
		return ptr;
	}

};


// Class Engine.SoundEffectSourcePreset
// 0x0000 (0x0048 - 0x0048)
class USoundEffectSourcePreset : public USoundEffectPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePreset");
		return ptr;
	}

};


// Class Engine.SoundEffectSourcePresetChain
// 0x0018 (0x0048 - 0x0030)
class USoundEffectSourcePresetChain : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundEffectSourcePresetChain");
		return ptr;
	}

};


// Class Engine.SoundGroups
// 0x0060 (0x0090 - 0x0030)
class USoundGroups : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundGroups");
		return ptr;
	}

};


// Class Engine.SoundMix
// 0x0060 (0x0090 - 0x0030)
class USoundMix : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundMix");
		return ptr;
	}

};


// Class Engine.SoundNode
// 0x0010 (0x0040 - 0x0030)
class USoundNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNode");
		return ptr;
	}

};


// Class Engine.SoundNodeAssetReferencer
// 0x0000 (0x0040 - 0x0040)
class USoundNodeAssetReferencer : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAssetReferencer");
		return ptr;
	}

};


// Class Engine.SoundNodeAttenuation
// 0x02B8 (0x02F8 - 0x0040)
class USoundNodeAttenuation : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x0040(0x02B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeAttenuation");
		return ptr;
	}

};


// Class Engine.SoundNodeBranch
// 0x0008 (0x0048 - 0x0040)
class USoundNodeBranch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeBranch");
		return ptr;
	}

};


// Class Engine.SoundNodeConcatenator
// 0x0010 (0x0050 - 0x0040)
class USoundNodeConcatenator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeConcatenator");
		return ptr;
	}

};


// Class Engine.SoundNodeDelay
// 0x0008 (0x0048 - 0x0040)
class USoundNodeDelay : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDelay");
		return ptr;
	}

};


// Class Engine.SoundNodeDialoguePlayer
// 0x0028 (0x0068 - 0x0040)
class USoundNodeDialoguePlayer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDialoguePlayer");
		return ptr;
	}

};


// Class Engine.SoundNodeDistanceCrossFade
// 0x0010 (0x0050 - 0x0040)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDistanceCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeDoppler
// 0x0008 (0x0048 - 0x0040)
class USoundNodeDoppler : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeDoppler");
		return ptr;
	}

};


// Class Engine.SoundNodeEnveloper
// 0x0128 (0x0168 - 0x0040)
class USoundNodeEnveloper : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0040(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeEnveloper");
		return ptr;
	}

};


// Class Engine.SoundNodeGroupControl
// 0x0010 (0x0050 - 0x0040)
class USoundNodeGroupControl : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeGroupControl");
		return ptr;
	}

};


// Class Engine.SoundNodeLooping
// 0x0008 (0x0048 - 0x0040)
class USoundNodeLooping : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeLooping");
		return ptr;
	}

};


// Class Engine.SoundNodeMature
// 0x0000 (0x0040 - 0x0040)
class USoundNodeMature : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMature");
		return ptr;
	}

};


// Class Engine.SoundNodeMixer
// 0x0010 (0x0050 - 0x0040)
class USoundNodeMixer : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeMixer");
		return ptr;
	}

};


// Class Engine.SoundNodeModulator
// 0x0010 (0x0050 - 0x0040)
class USoundNodeModulator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulator");
		return ptr;
	}

};


// Class Engine.SoundNodeModulatorContinuous
// 0x0040 (0x0080 - 0x0040)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeModulatorContinuous");
		return ptr;
	}

};


// Class Engine.SoundNodeOscillator
// 0x0028 (0x0068 - 0x0040)
class USoundNodeOscillator : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeOscillator");
		return ptr;
	}

};


// Class Engine.SoundNodeParamCrossFade
// 0x0008 (0x0058 - 0x0050)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeParamCrossFade");
		return ptr;
	}

};


// Class Engine.SoundNodeQualityLevel
// 0x0000 (0x0040 - 0x0040)
class USoundNodeQualityLevel : public USoundNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeQualityLevel");
		return ptr;
	}

};


// Class Engine.SoundNodeRandom
// 0x0038 (0x0078 - 0x0040)
class USoundNodeRandom : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeRandom");
		return ptr;
	}

};


// Class Engine.SoundNodeSoundClass
// 0x0008 (0x0048 - 0x0040)
class USoundNodeSoundClass : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSoundClass");
		return ptr;
	}

};


// Class Engine.SoundNodeSwitch
// 0x0008 (0x0048 - 0x0040)
class USoundNodeSwitch : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeSwitch");
		return ptr;
	}

};


// Class Engine.SoundNodeWaveParam
// 0x0008 (0x0048 - 0x0040)
class USoundNodeWaveParam : public USoundNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWaveParam");
		return ptr;
	}

};


// Class Engine.SoundNodeWavePlayer
// 0x0038 (0x0078 - 0x0040)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundNodeWavePlayer");
		return ptr;
	}

};


// Class Engine.SoundSourceBus
// 0x0018 (0x0228 - 0x0210)
class USoundSourceBus : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0210(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSourceBus");
		return ptr;
	}

};


// Class Engine.SoundSubmix
// 0x0058 (0x0088 - 0x0030)
class USoundSubmix : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SoundSubmix");
		return ptr;
	}


	void STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundWave* ExistingSoundWaveToOverwrite);
	void STATIC_StopEnvelopeFollowing(class UObject* WorldContextObject);
	void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration);
	void STATIC_StartEnvelopeFollowing(class UObject* WorldContextObject);
	void STATIC_AddEnvelopeFollowerDelegate(class UObject* WorldContextObject, const struct FScriptDelegate& OnSubmixEnvelopeBP);
};


// Class Engine.SpectatorPawn
// 0x0000 (0x0418 - 0x0418)
class ASpectatorPawn : public ADefaultPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawn");
		return ptr;
	}

};


// Class Engine.SpectatorPawnMovement
// 0x0008 (0x01D8 - 0x01D0)
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpectatorPawnMovement");
		return ptr;
	}

};


// Class Engine.SphereReflectionCapture
// 0x0008 (0x0398 - 0x0390)
class ASphereReflectionCapture : public AReflectionCapture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCapture");
		return ptr;
	}

};


// Class Engine.SphereReflectionCaptureComponent
// 0x0010 (0x0330 - 0x0320)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SphereReflectionCaptureComponent");
		return ptr;
	}

};


// Class Engine.SplineComponent
// 0x00E0 (0x06F0 - 0x0610)
class USplineComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0610(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineComponent");
		return ptr;
	}


	void STATIC_UpdateSpline();
	void STATIC_SetWorldLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation);
	void STATIC_SetUpVectorAtSplinePoint(int PointIndex, const struct FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetUnselectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	void STATIC_SetTangentsAtSplinePoint(int PointIndex, const struct FVector& InArriveTangent, const struct FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetTangentAtSplinePoint(int PointIndex, const struct FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetSplineWorldPoints(TArray<struct FVector> Points);
	void STATIC_SetSplinePointType(int PointIndex, TEnumAsByte<ESplinePointType> Type, bool bUpdateSpline);
	void STATIC_SetSplinePoints(TArray<struct FVector> Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetSplineLocalPoints(TArray<struct FVector> Points);
	void STATIC_SetSelectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	void STATIC_SetLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetDrawDebug(bool bShow);
	void STATIC_SetDefaultUpVector(const struct FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void STATIC_SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
	void STATIC_SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
	void STATIC_RemoveSplinePoint(int Index, bool bUpdateSpline);
	bool IsClosedLoop();
	struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
	struct FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
	struct FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
	struct FVector GetWorldLocationAtSplinePoint(int PointIndex);
	struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
	struct FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
	struct FVector GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetUpVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FTransform GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
	struct FTransform GetTransformAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FTransform GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FVector GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	TEnumAsByte<ESplinePointType> GetSplinePointType(int PointIndex);
	float GetSplineLength();
	struct FVector GetScaleAtTime(float Time, bool bUseConstantVelocity);
	struct FVector GetScaleAtSplinePoint(int PointIndex);
	struct FVector GetScaleAtDistanceAlongSpline(float Distance);
	struct FRotator GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FRotator GetRotationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	float GetRollAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetRightVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	int GetNumberOfSplinePoints();
	struct FVector GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetLocationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void STATIC_GetLocationAndTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, struct FVector* Location, struct FVector* Tangent);
	void STATIC_GetLocalLocationAndTangentAtSplinePoint(int PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent);
	struct FVector GetLeaveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float GetInputKeyAtDistanceAlongSpline(float Distance);
	float GetDistanceAlongSplineAtSplinePoint(int PointIndex);
	struct FVector GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector GetDirectionAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector GetArriveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector FindUpVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FTransform FindTransformClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FVector FindTangentClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector FindScaleClosestToWorldLocation(const struct FVector& WorldLocation);
	struct FRotator FindRotationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float FindRollClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector FindRightVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector FindLocationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float FindInputKeyClosestToWorldLocation(const struct FVector& WorldLocation);
	struct FVector FindDirectionClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void STATIC_ClearSplinePoints(bool bUpdateSpline);
	void STATIC_AddSplineWorldPoint(const struct FVector& Position);
	void STATIC_AddSplinePointAtIndex(const struct FVector& Position, int Index, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_AddSplinePoint(const struct FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_AddSplineLocalPoint(const struct FVector& Position);
	void STATIC_AddPoints(TArray<struct FSplinePoint> Points, bool bUpdateSpline);
	void STATIC_AddPoint(const struct FSplinePoint& Point, bool bUpdateSpline);
};


// Class Engine.SplineMeshActor
// 0x0008 (0x0390 - 0x0388)
class ASplineMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshActor");
		return ptr;
	}

};


// Class Engine.SplineMeshComponent
// 0x00A0 (0x0740 - 0x06A0)
class USplineMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x06A0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SplineMeshComponent");
		return ptr;
	}


	void STATIC_UpdateMesh();
	void STATIC_SetStartTangent(const struct FVector& StartTangent, bool bUpdateMesh);
	void STATIC_SetStartScale(const struct FVector2D& StartScale, bool bUpdateMesh);
	void STATIC_SetStartRoll(float StartRoll, bool bUpdateMesh);
	void STATIC_SetStartPosition(const struct FVector& StartPos, bool bUpdateMesh);
	void STATIC_SetStartOffset(const struct FVector2D& StartOffset, bool bUpdateMesh);
	void STATIC_SetStartAndEnd(const struct FVector& StartPos, const struct FVector& StartTangent, const struct FVector& EndPos, const struct FVector& EndTangent, bool bUpdateMesh);
	void STATIC_SetSplineUpDir(const struct FVector& InSplineUpDir, bool bUpdateMesh);
	void STATIC_SetForwardAxis(TEnumAsByte<ESplineMeshAxis> InForwardAxis, bool bUpdateMesh);
	void STATIC_SetEndTangent(const struct FVector& EndTangent, bool bUpdateMesh);
	void STATIC_SetEndScale(const struct FVector2D& EndScale, bool bUpdateMesh);
	void STATIC_SetEndRoll(float EndRoll, bool bUpdateMesh);
	void STATIC_SetEndPosition(const struct FVector& EndPos, bool bUpdateMesh);
	void STATIC_SetEndOffset(const struct FVector2D& EndOffset, bool bUpdateMesh);
	void STATIC_SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
	void STATIC_SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
	struct FVector GetStartTangent();
	struct FVector2D GetStartScale();
	float GetStartRoll();
	struct FVector GetStartPosition();
	struct FVector2D GetStartOffset();
	struct FVector GetSplineUpDir();
	TEnumAsByte<ESplineMeshAxis> GetForwardAxis();
	struct FVector GetEndTangent();
	struct FVector2D GetEndScale();
	float GetEndRoll();
	struct FVector GetEndPosition();
	struct FVector2D GetEndOffset();
	float GetBoundaryMin();
	float GetBoundaryMax();
};


// Class Engine.SpotLightComponent
// 0x0010 (0x0420 - 0x0410)
class USpotLightComponent : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SpotLightComponent");
		return ptr;
	}


	void STATIC_SetOuterConeAngle(float NewOuterConeAngle);
	void STATIC_SetInnerConeAngle(float NewInnerConeAngle);
};


// Class Engine.StaticMeshDescriptions
// 0x0010 (0x0040 - 0x0030)
class UStaticMeshDescriptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshDescriptions");
		return ptr;
	}

};


// Class Engine.StaticMesh
// 0x00F0 (0x0120 - 0x0030)
class UStaticMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMesh");
		return ptr;
	}


	int GetNumSections(int InLOD);
	int GetNumLODs();
	int GetMaterialIndex(const struct FName& MaterialSlotName);
	class UMaterialInterface* GetMaterial(int MaterialIndex);
	struct FBoxSphereBounds GetBounds();
	struct FBox GetBoundingBox();
};


// Class Engine.StaticMeshSocket
// 0x0040 (0x0070 - 0x0030)
class UStaticMeshSocket : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StaticMeshSocket");
		return ptr;
	}

};


// Class Engine.StereoLayerComponent
// 0x0090 (0x0340 - 0x02B0)
class UStereoLayerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x02B0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerComponent");
		return ptr;
	}


	void STATIC_SetUVRect(const struct FBox2D& InUVRect);
	void STATIC_SetTexture(class UTexture* InTexture);
	void STATIC_SetQuadSize(const struct FVector2D& InQuadSize);
	void STATIC_SetPriority(int InPriority);
	void STATIC_MarkTextureForUpdate();
	struct FBox2D GetUVRect();
	class UTexture* GetTexture();
	struct FVector2D GetQuadSize();
	int GetPriority();
};


// Class Engine.StereoLayerFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StereoLayerFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowSplashScreen();
	void STATIC_SetSplashScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector2D& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void STATIC_HideSplashScreen();
	void STATIC_EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
};


// Class Engine.StringTable
// 0x0018 (0x0048 - 0x0030)
class UStringTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.StringTable");
		return ptr;
	}

};


// Class Engine.SubsurfaceProfile
// 0x0050 (0x0080 - 0x0030)
class USubsurfaceProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubsurfaceProfile");
		return ptr;
	}

};


// Class Engine.SubUVAnimation
// 0x0038 (0x0068 - 0x0030)
class USubUVAnimation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SubUVAnimation");
		return ptr;
	}

};


// Class Engine.TimecodeProvider
// 0x0000 (0x0030 - 0x0030)
class UTimecodeProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimecodeProvider");
		return ptr;
	}


	struct FTimecode GetTimecode();
	ETimecodeProviderSynchronizationState GetSynchronizationState();
	struct FFrameRate GetFrameRate();
};


// Class Engine.SystemTimeTimecodeProvider
// 0x0010 (0x0040 - 0x0030)
class USystemTimeTimecodeProvider : public UTimecodeProvider
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.SystemTimeTimecodeProvider");
		return ptr;
	}


	void STATIC_SetFrameRate(const struct FFrameRate& InFrameRate);
};


// Class Engine.TextPropertyTestObject
// 0x0048 (0x0078 - 0x0030)
class UTextPropertyTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextPropertyTestObject");
		return ptr;
	}

};


// Class Engine.TextRenderActor
// 0x0008 (0x0390 - 0x0388)
class ATextRenderActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderActor");
		return ptr;
	}

};


// Class Engine.TextRenderComponent
// 0x0050 (0x0660 - 0x0610)
class UTextRenderComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0610(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextRenderComponent");
		return ptr;
	}


	void STATIC_SetYScale(float Value);
	void STATIC_SetXScale(float Value);
	void STATIC_SetWorldSize(float Value);
	void STATIC_SetVertSpacingAdjust(float Value);
	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);
	void STATIC_SetTextRenderColor(const struct FColor& Value);
	void STATIC_SetTextMaterial(class UMaterialInterface* Material);
	void STATIC_SetText(const class FString& Value);
	void STATIC_SetHorizSpacingAdjust(float Value);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
	void STATIC_SetFont(class UFont* Value);
	void STATIC_K2_SetText(const struct FText& Value);
	struct FVector GetTextWorldSize();
	struct FVector GetTextLocalSize();
};


// Class Engine.Texture2DDynamic
// 0x0018 (0x00D0 - 0x00B8)
class UTexture2DDynamic : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.Texture2DDynamic");
		return ptr;
	}

};


// Class Engine.TextureCube
// 0x0058 (0x0110 - 0x00B8)
class UTextureCube : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00B8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureCube");
		return ptr;
	}

};


// Class Engine.TextureLightProfile
// 0x0008 (0x0100 - 0x00F8)
class UTextureLightProfile : public UTexture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureLightProfile");
		return ptr;
	}

};


// Class Engine.TextureRenderTargetCube
// 0x0018 (0x00D8 - 0x00C0)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TextureRenderTargetCube");
		return ptr;
	}

};


// Class Engine.ThumbnailInfo
// 0x0000 (0x0030 - 0x0030)
class UThumbnailInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.ThumbnailInfo");
		return ptr;
	}

};


// Class Engine.TimelineComponent
// 0x00A0 (0x01B8 - 0x0118)
class UTimelineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0118(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineComponent");
		return ptr;
	}


	void STATIC_Stop();
	void STATIC_SetVectorCurve(class UCurveVector* NewVectorCurve, const struct FName& VectorTrackName);
	void STATIC_SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);
	void STATIC_SetTimelineLength(float NewLength);
	void STATIC_SetPlayRate(float NewRate);
	void STATIC_SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
	void STATIC_SetNewTime(float NewTime);
	void STATIC_SetLooping(bool bNewLooping);
	void STATIC_SetLinearColorCurve(class UCurveLinearColor* NewLinearColorCurve, const struct FName& LinearColorTrackName);
	void STATIC_SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
	void STATIC_SetFloatCurve(class UCurveFloat* NewFloatCurve, const struct FName& FloatTrackName);
	void STATIC_ReverseFromEnd();
	void STATIC_Reverse();
	void STATIC_PlayFromStart();
	void STATIC_Play();
	void STATIC_OnRep_Timeline();
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetTimelineLength();
	float GetPlayRate();
	float GetPlaybackPosition();
	bool GetIgnoreTimeDilation();
};


// Class Engine.TimelineTemplate
// 0x0070 (0x00A0 - 0x0030)
class UTimelineTemplate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TimelineTemplate");
		return ptr;
	}

};


// Class Engine.TireType
// 0x0008 (0x0040 - 0x0038)
class UTireType : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TireType");
		return ptr;
	}

};


// Class Engine.TouchInterface
// 0x0030 (0x0060 - 0x0030)
class UTouchInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TouchInterface");
		return ptr;
	}

};


// Class Engine.TriggerBase
// 0x0050 (0x03D8 - 0x0388)
class ATriggerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBase");
		return ptr;
	}


	void STATIC_SetTriggerEnabled(bool bEnable);
	bool IsTriggerEnabled();
};


// Class Engine.TriggerBox
// 0x0000 (0x03D8 - 0x03D8)
class ATriggerBox : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerBox");
		return ptr;
	}

};


// Class Engine.TriggerCapsule
// 0x0000 (0x03D8 - 0x03D8)
class ATriggerCapsule : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerCapsule");
		return ptr;
	}

};


// Class Engine.TriggerSphere
// 0x0000 (0x03D8 - 0x03D8)
class ATriggerSphere : public ATriggerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TriggerSphere");
		return ptr;
	}

};


// Class Engine.TwitterIntegrationBase
// 0x0000 (0x0040 - 0x0040)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.TwitterIntegrationBase");
		return ptr;
	}


	bool TwitterRequest(const class FString& URL, TArray<class FString> ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int AccountIndex);
	bool ShowTweetUI(const class FString& InitialMessage, const class FString& URL, const class FString& Picture);
	void STATIC_Init();
	int GetNumAccounts();
	class FString GetAccountName(int AccountIndex);
	bool CanShowTweetUI();
	bool AuthorizeAccounts();
};


// Class Engine.UserDefinedEnum
// 0x0050 (0x00B8 - 0x0068)
class UUserDefinedEnum : public UEnum
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedEnum");
		return ptr;
	}

};


// Class Engine.UserDefinedStruct
// 0x0048 (0x00E8 - 0x00A0)
class UUserDefinedStruct : public UScriptStruct
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00A0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserDefinedStruct");
		return ptr;
	}

};


// Class Engine.UserInterfaceSettings
// 0x0220 (0x0260 - 0x0040)
class UUserInterfaceSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0040(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.UserInterfaceSettings");
		return ptr;
	}

};


// Class Engine.VectorField
// 0x0020 (0x0050 - 0x0030)
class UVectorField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorField");
		return ptr;
	}

};


// Class Engine.VectorFieldAnimated
// 0x0040 (0x0090 - 0x0050)
class UVectorFieldAnimated : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldAnimated");
		return ptr;
	}

};


// Class Engine.VectorFieldComponent
// 0x0020 (0x0630 - 0x0610)
class UVectorFieldComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0610(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldComponent");
		return ptr;
	}


	void STATIC_SetIntensity(float NewIntensity);
};


// Class Engine.VectorFieldStatic
// 0x0088 (0x00D8 - 0x0050)
class UVectorFieldStatic : public UVectorField
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0050(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldStatic");
		return ptr;
	}

};


// Class Engine.VectorFieldVolume
// 0x0008 (0x0390 - 0x0388)
class AVectorFieldVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VectorFieldVolume");
		return ptr;
	}

};


// Class Engine.VirtualTexture
// 0x0028 (0x0058 - 0x0030)
class UVirtualTexture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VirtualTexture");
		return ptr;
	}

};


// Class Engine.LightMapVirtualTexture
// 0x0008 (0x0060 - 0x0058)
class ULightMapVirtualTexture : public UVirtualTexture
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapVirtualTexture");
		return ptr;
	}

};


// Class Engine.VirtualTextureSpace
// 0x0048 (0x0078 - 0x0030)
class UVirtualTextureSpace : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VirtualTextureSpace");
		return ptr;
	}

};


// Class Engine.LightMapVirtualTextureSpace
// 0x0000 (0x0078 - 0x0078)
class ULightMapVirtualTextureSpace : public UVirtualTextureSpace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.LightMapVirtualTextureSpace");
		return ptr;
	}

};


// Class Engine.VisualLoggerAutomationTests
// 0x0000 (0x0030 - 0x0030)
class UVisualLoggerAutomationTests : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerAutomationTests");
		return ptr;
	}

};


// Class Engine.VisualLoggerDebugSnapshotInterface
// 0x0000 (0x0030 - 0x0030)
class UVisualLoggerDebugSnapshotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerDebugSnapshotInterface");
		return ptr;
	}

};


// Class Engine.VisualLoggerKismetLibrary
// 0x0000 (0x0030 - 0x0030)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VisualLoggerKismetLibrary");
		return ptr;
	}


	void STATIC_RedirectVislog(class UObject* SourceOwner, class UObject* DestinationOwner);
	void STATIC_LogText(class UObject* WorldContextObject, const class FString& Text, const struct FName& LogCategory, bool bAddToMessageLog);
	void STATIC_LogSegment(class UObject* WorldContextObject, const struct FVector& SegmentStart, const struct FVector& SegmentEnd, const class FString& Text, const struct FLinearColor& ObjectColor, float Thickness, const struct FName& CategoryName, bool bAddToMessageLog);
	void STATIC_LogLocation(class UObject* WorldContextObject, const struct FVector& Location, const class FString& Text, const struct FLinearColor& ObjectColor, float Radius, const struct FName& LogCategory, bool bAddToMessageLog);
	void STATIC_LogBox(class UObject* WorldContextObject, const struct FBox& BoxShape, const class FString& Text, const struct FLinearColor& ObjectColor, const struct FName& LogCategory, bool bAddToMessageLog);
	void STATIC_EnableRecording(bool bEnabled);
};


// Class Engine.VoiceChannel
// 0x0010 (0x0080 - 0x0070)
class UVoiceChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VoiceChannel");
		return ptr;
	}

};


// Class Engine.VOIPTalker
// 0x0038 (0x0150 - 0x0118)
class UVOIPTalker : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0118(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VOIPTalker");
		return ptr;
	}


	void STATIC_RegisterWithPlayerState(class APlayerState* OwningState);
	float GetVoiceLevel();
	class UVOIPTalker* CreateTalkerForPlayer(class APlayerState* OwningState);
	void STATIC_BPOnTalkingEnd();
	void STATIC_BPOnTalkingBegin(class UAudioComponent* AudioComponent);
};


// Class Engine.VOIPStatics
// 0x0000 (0x0030 - 0x0030)
class UVOIPStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VOIPStatics");
		return ptr;
	}


	void STATIC_SetMicThreshold(float InThreshold);
};


// Class Engine.VolumeTexture
// 0x0058 (0x0110 - 0x00B8)
class UVolumeTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00B8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumeTexture");
		return ptr;
	}

};


// Class Engine.VolumetricLightmapDensityVolume
// 0x0008 (0x03E8 - 0x03E0)
class AVolumetricLightmapDensityVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.VolumetricLightmapDensityVolume");
		return ptr;
	}

};


// Class Engine.WindDirectionalSource
// 0x0008 (0x0390 - 0x0388)
class AWindDirectionalSource : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSource");
		return ptr;
	}

};


// Class Engine.WindDirectionalSourceComponent
// 0x0020 (0x02D0 - 0x02B0)
class UWindDirectionalSourceComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WindDirectionalSourceComponent");
		return ptr;
	}


	void STATIC_SetWindType(EWindSourceType InNewType);
	void STATIC_SetStrength(float InNewStrength);
	void STATIC_SetSpeed(float InNewSpeed);
	void STATIC_SetRadius(float InNewRadius);
	void STATIC_SetMinimumGustAmount(float InNewMinGust);
	void STATIC_SetMaximumGustAmount(float InNewMaxGust);
};


// Class Engine.WorldComposition
// 0x0040 (0x0070 - 0x0030)
class UWorldComposition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.WorldComposition");
		return ptr;
	}

};


// Class Engine.HierarchicalLODSetup
// 0x0038 (0x0068 - 0x0030)
class UHierarchicalLODSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Engine.HierarchicalLODSetup");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
