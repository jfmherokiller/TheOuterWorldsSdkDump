#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Indiana_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Indiana.IndianaUserWidget
// 0x0088 (0x02A8 - 0x0220)
class UIndianaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0220(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaUserWidget");
		return ptr;
	}


	void STATIC_StartMinimize();
	void STATIC_StartMaximize();
	void STATIC_StartIntro();
	void STATIC_SetDefaultUserFocus();
	void STATIC_RestoreOrSetDefaultUserFocus();
	void STATIC_OnStartOutroCb();
	void STATIC_OnStartMinimizeCb();
	void STATIC_OnStartMaximizeCb();
	void STATIC_OnStartIntroCb();
	bool OnOutro(const struct FScriptDelegate& AnimationCompleteCallback);
	bool OnMinimize(const struct FScriptDelegate& AnimationCompleteCallback);
	bool OnMaximize(const struct FScriptDelegate& AnimationCompleteCallback);
	bool OnIntro(const struct FScriptDelegate& AnimationCompleteCallback);
	void STATIC_OnInputDeviceChanged(bool bUsingGamepad);
	void STATIC_OnFinalizeOutroCb();
	void STATIC_OnFinalizeMinimizeCb();
	void STATIC_OnFinalizeMinimize();
	void STATIC_OnFinalizeMaximizeCb();
	void STATIC_OnFinalizeMaximize();
	void STATIC_OnFinalizeIntroCb();
	void STATIC_OnCounterZero();
	void STATIC_OnCounterNonZero();
	void STATIC_OnCancelShutdown();
	void STATIC_OnCancelMinimize();
	bool ObjectRefHasReferencers();
	bool IsShuttingDown(bool bIncludeTransitioning);
	bool IsMinimized(bool bIncludeTransitioning);
	bool IsMaximized(bool bIncludeTransitioning);
	EWidgetOpenState GetOpenState();
	class AIndianaUI* GetIndianaUI();
};


// Class Indiana.AbilityOverviewChildWidget
// 0x0070 (0x0318 - 0x02A8)
class UAbilityOverviewChildWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AbilityOverviewChildWidget");
		return ptr;
	}


	void STATIC_OnAbilityCooldownComplete();
	void STATIC_ModifyPulseScale(float PulseScale);
};


// Class Indiana.AbilityOverviewDetailWidget
// 0x0090 (0x03A8 - 0x0318)
class UAbilityOverviewDetailWidget : public UAbilityOverviewChildWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0318(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AbilityOverviewDetailWidget");
		return ptr;
	}


	void STATIC_OnAbilityUnlockChange(EUnlockAbility Ability);
};


// Class Indiana.AbilityOverviewWidget
// 0x02A0 (0x0548 - 0x02A8)
class UAbilityOverviewWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x02A8(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AbilityOverviewWidget");
		return ptr;
	}


	void STATIC_OnPlayerCombatStateChange(bool IsPlayerInCombat, bool bRestoring);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnHUDModeChanged(int ModeIn);
	void STATIC_OnCompanionAbilityModeChanged(int ModeIn);
	void STATIC_OnCompanionAbilityBindingModeChanged(int ModeIn);
	void STATIC_OnCommandButtonPressed(EAbilityPosition AbillityPosition);
	void STATIC_OnAbilityUsed(class UAbilityOverviewDetailWidget* Widget, EAbilityPosition AbilityPosition);
	void STATIC_OnAbilityCooldownTriggered(EAbilityPosition AbilityPosition);
	void STATIC_OnAbilityCooldownStarted(EAbilityPosition AbilityPosition);
	void STATIC_OnAbilityCooldownFinished(EAbilityPosition AbillityPosition);
	void STATIC_OnAbilityCooldownEnded(EAbilityPosition AbilityPosition);
};


// Class Indiana.AchievementDataAsset
// 0x0028 (0x0060 - 0x0038)
class UAchievementDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AchievementDataAsset");
		return ptr;
	}

};


// Class Indiana.AchievementsManager
// 0x0130 (0x0160 - 0x0030)
class UAchievementsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0030(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AchievementsManager");
		return ptr;
	}


	void STATIC_ResetAchievements();
	void STATIC_OnWeaponSlotted(class UItem* Item);
	void STATIC_OnKillPreDeath(class AActor* Victim);
	void STATIC_OnItemEquipped(class UItem* Item);
	void STATIC_OnActiveUserChanged(EActiveUserChangeType ChangeType);
	void STATIC_IncrementAchievement(const struct FName& AchievementBPName, int Count);
	void STATIC_GameOver();
	void STATIC_CompleteAchievementBP(class UAchievementDataAsset* Achievement);
	void STATIC_CompleteAchievement(const struct FName& AchievementBPName);
};


// Class Indiana.AIAction
// 0x0008 (0x0038 - 0x0030)
class UAIAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIAction");
		return ptr;
	}

};


// Class Indiana.ActionSequence
// 0x0020 (0x0058 - 0x0038)
class UActionSequence : public UAIAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ActionSequence");
		return ptr;
	}

};


// Class Indiana.BehaviorStateInfo
// 0x00F0 (0x0120 - 0x0030)
class UBehaviorStateInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.Empty_BehaviorStateInfo
// 0x0000 (0x0120 - 0x0120)
class UEmpty_BehaviorStateInfo : public UBehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Empty_BehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.ActivatedBehaviorStateInfo
// 0x0000 (0x0120 - 0x0120)
class UActivatedBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ActivatedBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.DecisionTreeRequestData
// 0x0000 (0x0038 - 0x0038)
class UDecisionTreeRequestData : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTreeRequestData");
		return ptr;
	}

};


// Class Indiana.BehaviorStateRequestData
// 0x0028 (0x0060 - 0x0038)
class UBehaviorStateRequestData : public UDecisionTreeRequestData
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BehaviorStateRequestData");
		return ptr;
	}

};


// Class Indiana.DecisionTreeEmptyRequestData
// 0x0008 (0x0068 - 0x0060)
class UDecisionTreeEmptyRequestData : public UBehaviorStateRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTreeEmptyRequestData");
		return ptr;
	}

};


// Class Indiana.ActivatedRequestData
// 0x0000 (0x0068 - 0x0068)
class UActivatedRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ActivatedRequestData");
		return ptr;
	}

};


// Class Indiana.PooledActor
// 0x0008 (0x0390 - 0x0388)
class APooledActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PooledActor");
		return ptr;
	}

};


// Class Indiana.ActorPool
// 0x0050 (0x0080 - 0x0030)
class UActorPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ActorPool");
		return ptr;
	}

};


// Class Indiana.ActorRenderWidget
// 0x0090 (0x0338 - 0x02A8)
class UActorRenderWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x02A8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ActorRenderWidget");
		return ptr;
	}


	void STATIC_OnMouseZoomOut();
	void STATIC_OnMouseZoomIn();
	void STATIC_OnGamepadToggleFullZoom();
	struct FEventReply OnBorderMouseDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool CanZoom();
};


// Class Indiana.ActorStage
// 0x00C8 (0x0450 - 0x0388)
class AActorStage : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0388(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ActorStage");
		return ptr;
	}

};


// Class Indiana.StatusEffect
// 0x0158 (0x0188 - 0x0030)
class UStatusEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0030(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffect");
		return ptr;
	}


	void STATIC_ReceiveClearEffect(class AActor* Target);
	void STATIC_ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave);
	class AActor* GetStatusEffectOriginActor();
};


// Class Indiana.AdjustCCCooldownStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UAdjustCCCooldownStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AdjustCCCooldownStatusEffect");
		return ptr;
	}

};


// Class Indiana.AdjustDurationStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UAdjustDurationStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AdjustDurationStatusEffect");
		return ptr;
	}

};


// Class Indiana.AICastSpell_AnimNotify
// 0x0008 (0x0048 - 0x0040)
class UAICastSpell_AnimNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AICastSpell_AnimNotify");
		return ptr;
	}

};


// Class Indiana.AICastSpell_AnimNotifyState
// 0x0008 (0x0040 - 0x0038)
class UAICastSpell_AnimNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AICastSpell_AnimNotifyState");
		return ptr;
	}

};


// Class Indiana.SpawnBehavior_AnimNotify
// 0x0000 (0x0040 - 0x0040)
class USpawnBehavior_AnimNotify : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnBehavior_AnimNotify");
		return ptr;
	}

};


// Class Indiana.AIDecisionUpdate
// 0x0000 (0x0030 - 0x0030)
class UAIDecisionUpdate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIDecisionUpdate");
		return ptr;
	}

};


// Class Indiana.AIDecisionUpdate_Mantisaur
// 0x0008 (0x0038 - 0x0030)
class UAIDecisionUpdate_Mantisaur : public UAIDecisionUpdate
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIDecisionUpdate_Mantisaur");
		return ptr;
	}

};


// Class Indiana.AIDecisionUpdate_Mantiqueen
// 0x0008 (0x0038 - 0x0030)
class UAIDecisionUpdate_Mantiqueen : public UAIDecisionUpdate
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIDecisionUpdate_Mantiqueen");
		return ptr;
	}

};


// Class Indiana.AIDecisionUpdate_HealDrone
// 0x0008 (0x0038 - 0x0030)
class UAIDecisionUpdate_HealDrone : public UAIDecisionUpdate
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIDecisionUpdate_HealDrone");
		return ptr;
	}

};


// Class Indiana.AIDecisionUpdate_CanidHowl
// 0x0018 (0x0048 - 0x0030)
class UAIDecisionUpdate_CanidHowl : public UAIDecisionUpdate
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIDecisionUpdate_CanidHowl");
		return ptr;
	}

};


// Class Indiana.AIDecisionUpdate_ShieldBot
// 0x0010 (0x0040 - 0x0030)
class UAIDecisionUpdate_ShieldBot : public UAIDecisionUpdate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIDecisionUpdate_ShieldBot");
		return ptr;
	}

};


// Class Indiana.AIDefensiveActionsComponent
// 0x0040 (0x0158 - 0x0118)
class UAIDefensiveActionsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0118(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIDefensiveActionsComponent");
		return ptr;
	}


	void STATIC_OnTakeDamage(const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.AIDetectionComponent
// 0x0138 (0x0250 - 0x0118)
class UAIDetectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0118(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIDetectionComponent");
		return ptr;
	}


	void STATIC_OnPlayerKill(class AActor* Victim, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnPerceptionUpdate(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void STATIC_OnDetectedNonHostileCombatStateChange(bool bIsInCombat, bool bRestoring);
};


// Class Indiana.AIEventInfo
// 0x0000 (0x0030 - 0x0030)
class UAIEventInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_Location
// 0x0010 (0x0040 - 0x0030)
class UAIEventInfo_Location : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_Location");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_Direction
// 0x0010 (0x0040 - 0x0030)
class UAIEventInfo_Direction : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_Direction");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_Actor
// 0x0008 (0x0038 - 0x0030)
class UAIEventInfo_Actor : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_Actor");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_StatusEffect
// 0x0008 (0x0038 - 0x0030)
class UAIEventInfo_StatusEffect : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_StatusEffect");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_Spell
// 0x0018 (0x0048 - 0x0030)
class UAIEventInfo_Spell : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_Spell");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_CalledShot
// 0x0018 (0x0048 - 0x0030)
class UAIEventInfo_CalledShot : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_CalledShot");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_Behavior
// 0x0010 (0x0040 - 0x0030)
class UAIEventInfo_Behavior : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_Behavior");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_Float
// 0x0008 (0x0038 - 0x0030)
class UAIEventInfo_Float : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_Float");
		return ptr;
	}

};


// Class Indiana.AIEventInfo_Transform
// 0x0030 (0x0060 - 0x0030)
class UAIEventInfo_Transform : public UAIEventInfo
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEventInfo_Transform");
		return ptr;
	}

};


// Class Indiana.InteractionComponent
// 0x0010 (0x0128 - 0x0118)
class UInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InteractionComponent");
		return ptr;
	}

};


// Class Indiana.AIInteractionComponent
// 0x0050 (0x0178 - 0x0128)
class UAIInteractionComponent : public UInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0128(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIInteractionComponent");
		return ptr;
	}


	void STATIC_OnNavigationPathUpdate();
};


// Class Indiana.AimAssistComponent
// 0x04A8 (0x05C0 - 0x0118)
class UAimAssistComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4A8];                                     // 0x0118(0x04A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AimAssistComponent");
		return ptr;
	}


	void STATIC_ToggleTrackQuickTarget();
	void STATIC_ToggleTargetStrafeLock();
	void STATIC_ToggleFriction();
	void STATIC_ToggleBulletMagnetism();
	void STATIC_ToggleAimAssist();
	void STATIC_OnDifficultyChanged(EGameDifficulty NewDifficulty);
	void STATIC_EnableAimAssist(bool Enabled);
	void STATIC_AimAssistVisualSpread(bool bEnable);
	void STATIC_AimAssistVisualFriction(bool bEnable);
	void STATIC_AimAssistVisualBulletMagnetism(bool bEnable);
	void STATIC_AimAssistVisualAdhesion(bool bEnable);
};


// Class Indiana.AimAssistData
// 0x0030 (0x0068 - 0x0038)
class UAimAssistData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AimAssistData");
		return ptr;
	}

};


// Class Indiana.IndianaCharMovementComponent
// 0x02A0 (0x0A10 - 0x0770)
class UIndianaCharMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0770(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaCharMovementComponent");
		return ptr;
	}


	void STATIC_OnBumped(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Indiana.AIMovementComponent
// 0x0150 (0x0B60 - 0x0A10)
class UAIMovementComponent : public UIndianaCharMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0A10(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIMovementComponent");
		return ptr;
	}


	void STATIC_OnRestoredStateOfBeing(EStateOfBeing RestoredStateOfBeing);
	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnExtremaEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_OnExtremaBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Indiana.AIPossessable
// 0x0000 (0x0030 - 0x0030)
class UAIPossessable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIPossessable");
		return ptr;
	}

};


// Class Indiana.AI_AIAction
// 0x0000 (0x0030 - 0x0030)
class UAI_AIAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_AIAction");
		return ptr;
	}

};


// Class Indiana.Patrol_PatrolNodeAction
// 0x0000 (0x0030 - 0x0030)
class UPatrol_PatrolNodeAction : public UAI_AIAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Patrol_PatrolNodeAction");
		return ptr;
	}

};


// Class Indiana.AIActor
// 0x0000 (0x0030 - 0x0030)
class UAIActor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIActor");
		return ptr;
	}

};


// Class Indiana.AIActorWritable
// 0x0000 (0x0030 - 0x0030)
class UAIActorWritable : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIActorWritable");
		return ptr;
	}

};


// Class Indiana.General_Player
// 0x0000 (0x0030 - 0x0030)
class UGeneral_Player : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_Player");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTarget
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTarget : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTarget");
		return ptr;
	}

};


// Class Indiana.General_DecisionTreeActor
// 0x0000 (0x0030 - 0x0030)
class UGeneral_DecisionTreeActor : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_DecisionTreeActor");
		return ptr;
	}

};


// Class Indiana.General_Self
// 0x0000 (0x0030 - 0x0030)
class UGeneral_Self : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_Self");
		return ptr;
	}

};


// Class Indiana.Patrol_PatrolNode
// 0x0000 (0x0030 - 0x0030)
class UPatrol_PatrolNode : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Patrol_PatrolNode");
		return ptr;
	}

};


// Class Indiana.Cover_CurrentCoverNode
// 0x0000 (0x0030 - 0x0030)
class UCover_CurrentCoverNode : public UAIActorWritable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Cover_CurrentCoverNode");
		return ptr;
	}

};


// Class Indiana.CompanionFollow_Target
// 0x0000 (0x0030 - 0x0030)
class UCompanionFollow_Target : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollow_Target");
		return ptr;
	}

};


// Class Indiana.CompanionFollow_Position
// 0x0000 (0x0030 - 0x0030)
class UCompanionFollow_Position : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollow_Position");
		return ptr;
	}

};


// Class Indiana.Follow_Target
// 0x0000 (0x0030 - 0x0030)
class UFollow_Target : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_Target");
		return ptr;
	}

};


// Class Indiana.General_HealTarget
// 0x0000 (0x0030 - 0x0030)
class UGeneral_HealTarget : public UAIActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_HealTarget");
		return ptr;
	}

};


// Class Indiana.AIBool
// 0x0000 (0x0030 - 0x0030)
class UAIBool : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIBool");
		return ptr;
	}

};


// Class Indiana.AIBoolWriteable
// 0x0000 (0x0030 - 0x0030)
class UAIBoolWriteable : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIBoolWriteable");
		return ptr;
	}

};


// Class Indiana.General_True
// 0x0000 (0x0030 - 0x0030)
class UGeneral_True : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_True");
		return ptr;
	}

};


// Class Indiana.Settings_MovingFireEnabled
// 0x0000 (0x0030 - 0x0030)
class USettings_MovingFireEnabled : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MovingFireEnabled");
		return ptr;
	}

};


// Class Indiana.Settings_WalkingFireEnabled
// 0x0000 (0x0030 - 0x0030)
class USettings_WalkingFireEnabled : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_WalkingFireEnabled");
		return ptr;
	}

};


// Class Indiana.General_ShouldServiceExitTask
// 0x0000 (0x0030 - 0x0030)
class UGeneral_ShouldServiceExitTask : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_ShouldServiceExitTask");
		return ptr;
	}

};


// Class Indiana.General_ShouldFaceTargetWhileMoving
// 0x0000 (0x0030 - 0x0030)
class UGeneral_ShouldFaceTargetWhileMoving : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_ShouldFaceTargetWhileMoving");
		return ptr;
	}

};


// Class Indiana.General_IsWeaponRanged
// 0x0000 (0x0030 - 0x0030)
class UGeneral_IsWeaponRanged : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_IsWeaponRanged");
		return ptr;
	}

};


// Class Indiana.General_ShouldScope
// 0x0000 (0x0030 - 0x0030)
class UGeneral_ShouldScope : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_ShouldScope");
		return ptr;
	}

};


// Class Indiana.General_IsFullyCrouched
// 0x0000 (0x0030 - 0x0030)
class UGeneral_IsFullyCrouched : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_IsFullyCrouched");
		return ptr;
	}

};


// Class Indiana.General_IsFullyUncrouched
// 0x0000 (0x0030 - 0x0030)
class UGeneral_IsFullyUncrouched : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_IsFullyUncrouched");
		return ptr;
	}

};


// Class Indiana.General_IsMoveToSuccessful
// 0x0000 (0x0030 - 0x0030)
class UGeneral_IsMoveToSuccessful : public UAIBoolWriteable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_IsMoveToSuccessful");
		return ptr;
	}

};


// Class Indiana.Patrol_PatrolNodeOrientOnArrival
// 0x0000 (0x0030 - 0x0030)
class UPatrol_PatrolNodeOrientOnArrival : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Patrol_PatrolNodeOrientOnArrival");
		return ptr;
	}

};


// Class Indiana.Patrol_PatrolRunMovementStateEnabled
// 0x0000 (0x0030 - 0x0030)
class UPatrol_PatrolRunMovementStateEnabled : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Patrol_PatrolRunMovementStateEnabled");
		return ptr;
	}

};


// Class Indiana.Patrol_PatrolNodeActionInfiniteDuration
// 0x0000 (0x0030 - 0x0030)
class UPatrol_PatrolNodeActionInfiniteDuration : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Patrol_PatrolNodeActionInfiniteDuration");
		return ptr;
	}

};


// Class Indiana.Follow_ClearTargetDetection
// 0x0000 (0x0030 - 0x0030)
class UFollow_ClearTargetDetection : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_ClearTargetDetection");
		return ptr;
	}

};


// Class Indiana.Follow_Retreating
// 0x0000 (0x0030 - 0x0030)
class UFollow_Retreating : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_Retreating");
		return ptr;
	}

};


// Class Indiana.Follow_IsCompanionCommandOrClearTargetDetection
// 0x0000 (0x0030 - 0x0030)
class UFollow_IsCompanionCommandOrClearTargetDetection : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_IsCompanionCommandOrClearTargetDetection");
		return ptr;
	}

};


// Class Indiana.CalledShot_IsTargetReactionComplete
// 0x0000 (0x0030 - 0x0030)
class UCalledShot_IsTargetReactionComplete : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CalledShot_IsTargetReactionComplete");
		return ptr;
	}

};


// Class Indiana.CalledShot_IsAttackAnimationComplete
// 0x0000 (0x0030 - 0x0030)
class UCalledShot_IsAttackAnimationComplete : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CalledShot_IsAttackAnimationComplete");
		return ptr;
	}

};


// Class Indiana.SwitchWeapon_IsInstant
// 0x0000 (0x0030 - 0x0030)
class USwitchWeapon_IsInstant : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SwitchWeapon_IsInstant");
		return ptr;
	}

};


// Class Indiana.Jump_ShouldRotateToFaceTargetMidAir
// 0x0000 (0x0030 - 0x0030)
class UJump_ShouldRotateToFaceTargetMidAir : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Jump_ShouldRotateToFaceTargetMidAir");
		return ptr;
	}

};


// Class Indiana.Search_ShouldFire
// 0x0000 (0x0030 - 0x0030)
class USearch_ShouldFire : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_ShouldFire");
		return ptr;
	}

};


// Class Indiana.Search_ShouldStationaryFire
// 0x0000 (0x0030 - 0x0030)
class USearch_ShouldStationaryFire : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_ShouldStationaryFire");
		return ptr;
	}

};


// Class Indiana.Search_HasNoQueuedDecisionTreeRequest
// 0x0000 (0x0030 - 0x0030)
class USearch_HasNoQueuedDecisionTreeRequest : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_HasNoQueuedDecisionTreeRequest");
		return ptr;
	}

};


// Class Indiana.Search_RequiresReachable
// 0x0000 (0x0030 - 0x0030)
class USearch_RequiresReachable : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_RequiresReachable");
		return ptr;
	}

};


// Class Indiana.Search_ShouldIgnoreCollisionDuringTargetApproach
// 0x0000 (0x0030 - 0x0030)
class USearch_ShouldIgnoreCollisionDuringTargetApproach : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_ShouldIgnoreCollisionDuringTargetApproach");
		return ptr;
	}

};


// Class Indiana.Search_ShouldBumpDuringTargetApproach
// 0x0000 (0x0030 - 0x0030)
class USearch_ShouldBumpDuringTargetApproach : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_ShouldBumpDuringTargetApproach");
		return ptr;
	}

};


// Class Indiana.Search_ShouldSprintDuringTargetApproach
// 0x0000 (0x0030 - 0x0030)
class USearch_ShouldSprintDuringTargetApproach : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_ShouldSprintDuringTargetApproach");
		return ptr;
	}

};


// Class Indiana.OnRails_ShouldChase
// 0x0000 (0x0030 - 0x0030)
class UOnRails_ShouldChase : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRails_ShouldChase");
		return ptr;
	}

};


// Class Indiana.OnRails_IsOnRails
// 0x0000 (0x0030 - 0x0030)
class UOnRails_IsOnRails : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRails_IsOnRails");
		return ptr;
	}

};


// Class Indiana.Melee_UseAdaptiveRootMotion
// 0x0000 (0x0030 - 0x0030)
class UMelee_UseAdaptiveRootMotion : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Melee_UseAdaptiveRootMotion");
		return ptr;
	}

};


// Class Indiana.Melee_IsPatternComplete
// 0x0000 (0x0030 - 0x0030)
class UMelee_IsPatternComplete : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Melee_IsPatternComplete");
		return ptr;
	}

};


// Class Indiana.Melee_ShouldLookAtTargetDuringRecovery
// 0x0000 (0x0030 - 0x0030)
class UMelee_ShouldLookAtTargetDuringRecovery : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Melee_ShouldLookAtTargetDuringRecovery");
		return ptr;
	}

};


// Class Indiana.Melee_ShouldIgnoreCollisionDuringApproach
// 0x0000 (0x0030 - 0x0030)
class UMelee_ShouldIgnoreCollisionDuringApproach : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Melee_ShouldIgnoreCollisionDuringApproach");
		return ptr;
	}

};


// Class Indiana.Melee_ShouldBumpDuringApproach
// 0x0000 (0x0030 - 0x0030)
class UMelee_ShouldBumpDuringApproach : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Melee_ShouldBumpDuringApproach");
		return ptr;
	}

};


// Class Indiana.Melee_ShouldSprintDuringApproach
// 0x0000 (0x0030 - 0x0030)
class UMelee_ShouldSprintDuringApproach : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Melee_ShouldSprintDuringApproach");
		return ptr;
	}

};


// Class Indiana.Furniture_ShouldComplete
// 0x0000 (0x0030 - 0x0030)
class UFurniture_ShouldComplete : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Furniture_ShouldComplete");
		return ptr;
	}

};


// Class Indiana.CompanionCommandMoveTo_StationaryAttackEnabled
// 0x0000 (0x0030 - 0x0030)
class UCompanionCommandMoveTo_StationaryAttackEnabled : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandMoveTo_StationaryAttackEnabled");
		return ptr;
	}

};


// Class Indiana.CompanionCommandMoveTo_MovingAttackEnabled
// 0x0000 (0x0030 - 0x0030)
class UCompanionCommandMoveTo_MovingAttackEnabled : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandMoveTo_MovingAttackEnabled");
		return ptr;
	}

};


// Class Indiana.Cower_ShouldCower
// 0x0000 (0x0030 - 0x0030)
class UCower_ShouldCower : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Cower_ShouldCower");
		return ptr;
	}

};


// Class Indiana.MoveTo_ShouldFaceTargetWhileWaiting
// 0x0000 (0x0030 - 0x0030)
class UMoveTo_ShouldFaceTargetWhileWaiting : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MoveTo_ShouldFaceTargetWhileWaiting");
		return ptr;
	}

};


// Class Indiana.Spawn_IsFinishedSpawning
// 0x0000 (0x0030 - 0x0030)
class USpawn_IsFinishedSpawning : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Spawn_IsFinishedSpawning");
		return ptr;
	}

};


// Class Indiana.Conversation_ShouldTeleport
// 0x0000 (0x0030 - 0x0030)
class UConversation_ShouldTeleport : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Conversation_ShouldTeleport");
		return ptr;
	}

};


// Class Indiana.General_CanSeeHealTarget
// 0x0000 (0x0030 - 0x0030)
class UGeneral_CanSeeHealTarget : public UAIBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_CanSeeHealTarget");
		return ptr;
	}

};


// Class Indiana.AIEQSParameter
// 0x0000 (0x0030 - 0x0030)
class UAIEQSParameter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIEQSParameter");
		return ptr;
	}

};


// Class Indiana.CompanionFollow_DefaultRadius
// 0x0000 (0x0030 - 0x0030)
class UCompanionFollow_DefaultRadius : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollow_DefaultRadius");
		return ptr;
	}

};


// Class Indiana.CompanionFollow_InnerRadius
// 0x0000 (0x0030 - 0x0030)
class UCompanionFollow_InnerRadius : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollow_InnerRadius");
		return ptr;
	}

};


// Class Indiana.CompanionFollow_InnerPointAmount
// 0x0000 (0x0030 - 0x0030)
class UCompanionFollow_InnerPointAmount : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollow_InnerPointAmount");
		return ptr;
	}

};


// Class Indiana.CompanionFollow_DefaultIdealAngle
// 0x0000 (0x0030 - 0x0030)
class UCompanionFollow_DefaultIdealAngle : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollow_DefaultIdealAngle");
		return ptr;
	}

};


// Class Indiana.CompanionFollow_DefaultMinAngle
// 0x0000 (0x0030 - 0x0030)
class UCompanionFollow_DefaultMinAngle : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollow_DefaultMinAngle");
		return ptr;
	}

};


// Class Indiana.CompanionMoveTo_DefaultRadius
// 0x0000 (0x0030 - 0x0030)
class UCompanionMoveTo_DefaultRadius : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionMoveTo_DefaultRadius");
		return ptr;
	}

};


// Class Indiana.CompanionMoveTo_DefaultIdealAngle
// 0x0000 (0x0030 - 0x0030)
class UCompanionMoveTo_DefaultIdealAngle : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionMoveTo_DefaultIdealAngle");
		return ptr;
	}

};


// Class Indiana.CompanionMoveTo_DefaultMinAngle
// 0x0000 (0x0030 - 0x0030)
class UCompanionMoveTo_DefaultMinAngle : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionMoveTo_DefaultMinAngle");
		return ptr;
	}

};


// Class Indiana.Settings_MinMoveDistance
// 0x0000 (0x0030 - 0x0030)
class USettings_MinMoveDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MinMoveDistance");
		return ptr;
	}

};


// Class Indiana.Settings_MaxMoveDistance
// 0x0000 (0x0030 - 0x0030)
class USettings_MaxMoveDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MaxMoveDistance");
		return ptr;
	}

};


// Class Indiana.Settings_MaxMoveDistanceThreshold
// 0x0000 (0x0030 - 0x0030)
class USettings_MaxMoveDistanceThreshold : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MaxMoveDistanceThreshold");
		return ptr;
	}

};


// Class Indiana.Settings_MinPreferredRange
// 0x0000 (0x0030 - 0x0030)
class USettings_MinPreferredRange : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MinPreferredRange");
		return ptr;
	}

};


// Class Indiana.Settings_MaxPreferredRange
// 0x0000 (0x0030 - 0x0030)
class USettings_MaxPreferredRange : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MaxPreferredRange");
		return ptr;
	}

};


// Class Indiana.Settings_AllowedCoverTypes
// 0x0000 (0x0030 - 0x0030)
class USettings_AllowedCoverTypes : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_AllowedCoverTypes");
		return ptr;
	}

};


// Class Indiana.Settings_FullHeight
// 0x0000 (0x0030 - 0x0030)
class USettings_FullHeight : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_FullHeight");
		return ptr;
	}

};


// Class Indiana.Settings_RepositionType
// 0x0000 (0x0030 - 0x0030)
class USettings_RepositionType : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_RepositionType");
		return ptr;
	}

};


// Class Indiana.Settings_MeleeRecoveryMoveMinDistance
// 0x0000 (0x0030 - 0x0030)
class USettings_MeleeRecoveryMoveMinDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MeleeRecoveryMoveMinDistance");
		return ptr;
	}

};


// Class Indiana.Settings_MeleeRecoveryMoveMaxDistance
// 0x0000 (0x0030 - 0x0030)
class USettings_MeleeRecoveryMoveMaxDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MeleeRecoveryMoveMaxDistance");
		return ptr;
	}

};


// Class Indiana.MeleeSlot_NumRings
// 0x0000 (0x0030 - 0x0030)
class UMeleeSlot_NumRings : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeSlot_NumRings");
		return ptr;
	}

};


// Class Indiana.MeleeSlot_PointsPerRing
// 0x0000 (0x0030 - 0x0030)
class UMeleeSlot_PointsPerRing : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeSlot_PointsPerRing");
		return ptr;
	}

};


// Class Indiana.Wander_Radius
// 0x0000 (0x0030 - 0x0030)
class UWander_Radius : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Wander_Radius");
		return ptr;
	}

};


// Class Indiana.Wander_MinMoveDistance
// 0x0000 (0x0030 - 0x0030)
class UWander_MinMoveDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Wander_MinMoveDistance");
		return ptr;
	}

};


// Class Indiana.Wander_MaxMoveDistance
// 0x0000 (0x0030 - 0x0030)
class UWander_MaxMoveDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Wander_MaxMoveDistance");
		return ptr;
	}

};


// Class Indiana.Wander_MaxPathDistance
// 0x0000 (0x0030 - 0x0030)
class UWander_MaxPathDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Wander_MaxPathDistance");
		return ptr;
	}

};


// Class Indiana.RangedRepositionType_Stationary
// 0x0000 (0x0030 - 0x0030)
class URangedRepositionType_Stationary : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangedRepositionType_Stationary");
		return ptr;
	}

};


// Class Indiana.RangedRepositionType_Strafe
// 0x0000 (0x0030 - 0x0030)
class URangedRepositionType_Strafe : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangedRepositionType_Strafe");
		return ptr;
	}

};


// Class Indiana.RangedRepositionType_Forward
// 0x0000 (0x0030 - 0x0030)
class URangedRepositionType_Forward : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangedRepositionType_Forward");
		return ptr;
	}

};


// Class Indiana.CompanionCalledShot_MinMeleeRange
// 0x0000 (0x0030 - 0x0030)
class UCompanionCalledShot_MinMeleeRange : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCalledShot_MinMeleeRange");
		return ptr;
	}

};


// Class Indiana.CompanionCalledShot_MaxMeleeRange
// 0x0000 (0x0030 - 0x0030)
class UCompanionCalledShot_MaxMeleeRange : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCalledShot_MaxMeleeRange");
		return ptr;
	}

};


// Class Indiana.CompanionCalledShot_MinLimitedRange
// 0x0000 (0x0030 - 0x0030)
class UCompanionCalledShot_MinLimitedRange : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCalledShot_MinLimitedRange");
		return ptr;
	}

};


// Class Indiana.CompanionCalledShot_MaxLimitedRange
// 0x0000 (0x0030 - 0x0030)
class UCompanionCalledShot_MaxLimitedRange : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCalledShot_MaxLimitedRange");
		return ptr;
	}

};


// Class Indiana.Townie_MaxFleeDistance
// 0x0000 (0x0030 - 0x0030)
class UTownie_MaxFleeDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Townie_MaxFleeDistance");
		return ptr;
	}

};


// Class Indiana.Settings_MaxUnmarkedFleeDistance
// 0x0000 (0x0030 - 0x0030)
class USettings_MaxUnmarkedFleeDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MaxUnmarkedFleeDistance");
		return ptr;
	}

};


// Class Indiana.Settings_MaxUnmarkedFleePathDistance
// 0x0000 (0x0030 - 0x0030)
class USettings_MaxUnmarkedFleePathDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MaxUnmarkedFleePathDistance");
		return ptr;
	}

};


// Class Indiana.Investigate_DeadBodyWanderRadius
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_DeadBodyWanderRadius : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_DeadBodyWanderRadius");
		return ptr;
	}

};


// Class Indiana.Investigate_DeadBodyWanderMinMoveDistance
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_DeadBodyWanderMinMoveDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_DeadBodyWanderMinMoveDistance");
		return ptr;
	}

};


// Class Indiana.Investigate_DeadBodyWanderMaxMoveDistance
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_DeadBodyWanderMaxMoveDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_DeadBodyWanderMaxMoveDistance");
		return ptr;
	}

};


// Class Indiana.Investigate_DeadBodyWanderMaxPathDistance
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_DeadBodyWanderMaxPathDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_DeadBodyWanderMaxPathDistance");
		return ptr;
	}

};


// Class Indiana.Search_WanderRadius
// 0x0000 (0x0030 - 0x0030)
class USearch_WanderRadius : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_WanderRadius");
		return ptr;
	}

};


// Class Indiana.Search_WanderMinMoveDistance
// 0x0000 (0x0030 - 0x0030)
class USearch_WanderMinMoveDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_WanderMinMoveDistance");
		return ptr;
	}

};


// Class Indiana.Search_WanderMaxMoveDistance
// 0x0000 (0x0030 - 0x0030)
class USearch_WanderMaxMoveDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_WanderMaxMoveDistance");
		return ptr;
	}

};


// Class Indiana.Search_WanderMaxPathDistance
// 0x0000 (0x0030 - 0x0030)
class USearch_WanderMaxPathDistance : public UAIEQSParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_WanderMaxPathDistance");
		return ptr;
	}

};


// Class Indiana.AIFiringPattern
// 0x0000 (0x0030 - 0x0030)
class UAIFiringPattern : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIFiringPattern");
		return ptr;
	}

};


// Class Indiana.Settings_StationaryFiringPattern
// 0x0000 (0x0030 - 0x0030)
class USettings_StationaryFiringPattern : public UAIFiringPattern
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_StationaryFiringPattern");
		return ptr;
	}

};


// Class Indiana.Settings_CoverFiringPattern
// 0x0000 (0x0030 - 0x0030)
class USettings_CoverFiringPattern : public UAIFiringPattern
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_CoverFiringPattern");
		return ptr;
	}

};


// Class Indiana.Settings_MovingFiringPattern
// 0x0000 (0x0030 - 0x0030)
class USettings_MovingFiringPattern : public UAIFiringPattern
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MovingFiringPattern");
		return ptr;
	}

};


// Class Indiana.Settings_CalledShotRangeFiringPattern
// 0x0000 (0x0030 - 0x0030)
class USettings_CalledShotRangeFiringPattern : public UAIFiringPattern
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_CalledShotRangeFiringPattern");
		return ptr;
	}

};


// Class Indiana.AIFValue
// 0x0000 (0x0030 - 0x0030)
class UAIFValue : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIFValue");
		return ptr;
	}

};


// Class Indiana.Weapon_MinMeleeRange
// 0x0000 (0x0030 - 0x0030)
class UWeapon_MinMeleeRange : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon_MinMeleeRange");
		return ptr;
	}

};


// Class Indiana.Weapon_MaxMeleeRange
// 0x0000 (0x0030 - 0x0030)
class UWeapon_MaxMeleeRange : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon_MaxMeleeRange");
		return ptr;
	}

};


// Class Indiana.Weapon_MaxMeleeRangeWithPadding
// 0x0000 (0x0030 - 0x0030)
class UWeapon_MaxMeleeRangeWithPadding : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon_MaxMeleeRangeWithPadding");
		return ptr;
	}

};


// Class Indiana.Weapon_MeleeRecoveryMoveRandomChance
// 0x0000 (0x0030 - 0x0030)
class UWeapon_MeleeRecoveryMoveRandomChance : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon_MeleeRecoveryMoveRandomChance");
		return ptr;
	}

};


// Class Indiana.Weapon_MeleeRecoveryDodgeRandomChance
// 0x0000 (0x0030 - 0x0030)
class UWeapon_MeleeRecoveryDodgeRandomChance : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon_MeleeRecoveryDodgeRandomChance");
		return ptr;
	}

};


// Class Indiana.Weapon_MeleeRecoveryMaxTargetDistance
// 0x0000 (0x0030 - 0x0030)
class UWeapon_MeleeRecoveryMaxTargetDistance : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon_MeleeRecoveryMaxTargetDistance");
		return ptr;
	}

};


// Class Indiana.Weapon_MeleeAdapativeRootmotionStopDistance
// 0x0000 (0x0030 - 0x0030)
class UWeapon_MeleeAdapativeRootmotionStopDistance : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon_MeleeAdapativeRootmotionStopDistance");
		return ptr;
	}

};


// Class Indiana.Weapon_CalledShotMeleeAdapativeRootmotionStopDistance
// 0x0000 (0x0030 - 0x0030)
class UWeapon_CalledShotMeleeAdapativeRootmotionStopDistance : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon_CalledShotMeleeAdapativeRootmotionStopDistance");
		return ptr;
	}

};


// Class Indiana.Settings_MovingFirePrePauseTime
// 0x0000 (0x0030 - 0x0030)
class USettings_MovingFirePrePauseTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MovingFirePrePauseTime");
		return ptr;
	}

};


// Class Indiana.Settings_MaxPreferredRangeF
// 0x0000 (0x0030 - 0x0030)
class USettings_MaxPreferredRangeF : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MaxPreferredRangeF");
		return ptr;
	}

};


// Class Indiana.Settings_MaxAbsoluteRange
// 0x0000 (0x0030 - 0x0030)
class USettings_MaxAbsoluteRange : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MaxAbsoluteRange");
		return ptr;
	}

};


// Class Indiana.Settings_PreferredRange
// 0x0000 (0x0030 - 0x0030)
class USettings_PreferredRange : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_PreferredRange");
		return ptr;
	}

};


// Class Indiana.Settings_CoverWalkingDistanceThreshold
// 0x0000 (0x0030 - 0x0030)
class USettings_CoverWalkingDistanceThreshold : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_CoverWalkingDistanceThreshold");
		return ptr;
	}

};


// Class Indiana.Settings_RangedRepositionWalkingDistanceThreshold
// 0x0000 (0x0030 - 0x0030)
class USettings_RangedRepositionWalkingDistanceThreshold : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_RangedRepositionWalkingDistanceThreshold");
		return ptr;
	}

};


// Class Indiana.Settings_TargetLostTimeInitiallySeenRanged
// 0x0000 (0x0030 - 0x0030)
class USettings_TargetLostTimeInitiallySeenRanged : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_TargetLostTimeInitiallySeenRanged");
		return ptr;
	}

};


// Class Indiana.Settings_TargetLostTimeInitiallyUnseenRanged
// 0x0000 (0x0030 - 0x0030)
class USettings_TargetLostTimeInitiallyUnseenRanged : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_TargetLostTimeInitiallyUnseenRanged");
		return ptr;
	}

};


// Class Indiana.Settings_TargetLostTimeInitiallySeenCover
// 0x0000 (0x0030 - 0x0030)
class USettings_TargetLostTimeInitiallySeenCover : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_TargetLostTimeInitiallySeenCover");
		return ptr;
	}

};


// Class Indiana.Settings_TargetLostTimeInitiallyUnseenCover
// 0x0000 (0x0030 - 0x0030)
class USettings_TargetLostTimeInitiallyUnseenCover : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_TargetLostTimeInitiallyUnseenCover");
		return ptr;
	}

};


// Class Indiana.Settings_SuppressingFireTime
// 0x0000 (0x0030 - 0x0030)
class USettings_SuppressingFireTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_SuppressingFireTime");
		return ptr;
	}

};


// Class Indiana.Settings_MinMeleeActionDelay
// 0x0000 (0x0030 - 0x0030)
class USettings_MinMeleeActionDelay : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MinMeleeActionDelay");
		return ptr;
	}

};


// Class Indiana.Settings_MeleeRecoveryDelay
// 0x0000 (0x0030 - 0x0030)
class USettings_MeleeRecoveryDelay : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MeleeRecoveryDelay");
		return ptr;
	}

};


// Class Indiana.Settings_MeleeWaitDistance
// 0x0000 (0x0030 - 0x0030)
class USettings_MeleeWaitDistance : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_MeleeWaitDistance");
		return ptr;
	}

};


// Class Indiana.Settings_WanderIdleTime
// 0x0000 (0x0030 - 0x0030)
class USettings_WanderIdleTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_WanderIdleTime");
		return ptr;
	}

};


// Class Indiana.Settings_WeaponPauseTimeFuzz
// 0x0000 (0x0030 - 0x0030)
class USettings_WeaponPauseTimeFuzz : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_WeaponPauseTimeFuzz");
		return ptr;
	}

};


// Class Indiana.Settings_CompanionCommandHunkerDownDuration
// 0x0000 (0x0030 - 0x0030)
class USettings_CompanionCommandHunkerDownDuration : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_CompanionCommandHunkerDownDuration");
		return ptr;
	}

};


// Class Indiana.Settings_CompanionCommandFlankDuration
// 0x0000 (0x0030 - 0x0030)
class USettings_CompanionCommandFlankDuration : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_CompanionCommandFlankDuration");
		return ptr;
	}

};


// Class Indiana.Settings_CompanionCommandSuppressDuration
// 0x0000 (0x0030 - 0x0030)
class USettings_CompanionCommandSuppressDuration : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_CompanionCommandSuppressDuration");
		return ptr;
	}

};


// Class Indiana.Settings_DelayDodge
// 0x0000 (0x0030 - 0x0030)
class USettings_DelayDodge : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_DelayDodge");
		return ptr;
	}

};


// Class Indiana.Settings_DelayMeleeBlock
// 0x0000 (0x0030 - 0x0030)
class USettings_DelayMeleeBlock : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_DelayMeleeBlock");
		return ptr;
	}

};


// Class Indiana.Settings_CompanionCommandSuppressLostTargetTime
// 0x0000 (0x0030 - 0x0030)
class USettings_CompanionCommandSuppressLostTargetTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_CompanionCommandSuppressLostTargetTime");
		return ptr;
	}

};


// Class Indiana.Settings_CompanionCommandFlankLostTargetTime
// 0x0000 (0x0030 - 0x0030)
class USettings_CompanionCommandFlankLostTargetTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Settings_CompanionCommandFlankLostTargetTime");
		return ptr;
	}

};


// Class Indiana.Follow_TeleportRotation
// 0x0000 (0x0030 - 0x0030)
class UFollow_TeleportRotation : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_TeleportRotation");
		return ptr;
	}

};


// Class Indiana.Conversation_TeleportRotation
// 0x0000 (0x0030 - 0x0030)
class UConversation_TeleportRotation : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Conversation_TeleportRotation");
		return ptr;
	}

};


// Class Indiana.Wander_WanderRadius
// 0x0000 (0x0030 - 0x0030)
class UWander_WanderRadius : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Wander_WanderRadius");
		return ptr;
	}

};


// Class Indiana.Search_UnreachableWaitTime
// 0x0000 (0x0030 - 0x0030)
class USearch_UnreachableWaitTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_UnreachableWaitTime");
		return ptr;
	}

};


// Class Indiana.Search_WanderIdleTime
// 0x0000 (0x0030 - 0x0030)
class USearch_WanderIdleTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Search_WanderIdleTime");
		return ptr;
	}

};


// Class Indiana.Teleport_TeleportDuration
// 0x0000 (0x0030 - 0x0030)
class UTeleport_TeleportDuration : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Teleport_TeleportDuration");
		return ptr;
	}

};


// Class Indiana.Teleport_TeleportTargetRotation
// 0x0000 (0x0030 - 0x0030)
class UTeleport_TeleportTargetRotation : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Teleport_TeleportTargetRotation");
		return ptr;
	}

};


// Class Indiana.Follow_MinRange
// 0x0000 (0x0030 - 0x0030)
class UFollow_MinRange : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_MinRange");
		return ptr;
	}

};


// Class Indiana.Follow_MaxRange
// 0x0000 (0x0030 - 0x0030)
class UFollow_MaxRange : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_MaxRange");
		return ptr;
	}

};


// Class Indiana.SpellTarget_MaxRange
// 0x0000 (0x0030 - 0x0030)
class USpellTarget_MaxRange : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellTarget_MaxRange");
		return ptr;
	}

};


// Class Indiana.SpellTarget_MinRange
// 0x0000 (0x0030 - 0x0030)
class USpellTarget_MinRange : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellTarget_MinRange");
		return ptr;
	}

};


// Class Indiana.Investigate_PreMoveWaitTime
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_PreMoveWaitTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_PreMoveWaitTime");
		return ptr;
	}

};


// Class Indiana.Investigate_ArrivalRadius
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_ArrivalRadius : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_ArrivalRadius");
		return ptr;
	}

};


// Class Indiana.Investigate_DeadBodyWanderIdleTime
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_DeadBodyWanderIdleTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_DeadBodyWanderIdleTime");
		return ptr;
	}

};


// Class Indiana.Investigate_EndWaitTime
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_EndWaitTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_EndWaitTime");
		return ptr;
	}

};


// Class Indiana.Investigate_StimulusUpdateMinDuration
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_StimulusUpdateMinDuration : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_StimulusUpdateMinDuration");
		return ptr;
	}

};


// Class Indiana.Investigate_ExitChatterTriggerTime
// 0x0000 (0x0030 - 0x0030)
class UInvestigate_ExitChatterTriggerTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Investigate_ExitChatterTriggerTime");
		return ptr;
	}

};


// Class Indiana.Furniture_EntryAcceptanceRadius
// 0x0000 (0x0030 - 0x0030)
class UFurniture_EntryAcceptanceRadius : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Furniture_EntryAcceptanceRadius");
		return ptr;
	}

};


// Class Indiana.MoveTo_ArrivalWaitTime
// 0x0000 (0x0030 - 0x0030)
class UMoveTo_ArrivalWaitTime : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MoveTo_ArrivalWaitTime");
		return ptr;
	}

};


// Class Indiana.CalledShot_CameraCutDelay
// 0x0000 (0x0030 - 0x0030)
class UCalledShot_CameraCutDelay : public UAIFValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CalledShot_CameraCutDelay");
		return ptr;
	}

};


// Class Indiana.AIInt
// 0x0000 (0x0030 - 0x0030)
class UAIInt : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AIInt");
		return ptr;
	}

};


// Class Indiana.CalledShot_FireIndex
// 0x0000 (0x0030 - 0x0030)
class UCalledShot_FireIndex : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CalledShot_FireIndex");
		return ptr;
	}

};


// Class Indiana.FiringPatternComplete_FinishBehavior
// 0x0000 (0x0030 - 0x0030)
class UFiringPatternComplete_FinishBehavior : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FiringPatternComplete_FinishBehavior");
		return ptr;
	}

};


// Class Indiana.FiringPatternComplete_FinishTask
// 0x0000 (0x0030 - 0x0030)
class UFiringPatternComplete_FinishTask : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FiringPatternComplete_FinishTask");
		return ptr;
	}

};


// Class Indiana.FiringPatternComplete_Repeat
// 0x0000 (0x0030 - 0x0030)
class UFiringPatternComplete_Repeat : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FiringPatternComplete_Repeat");
		return ptr;
	}

};


// Class Indiana.FiringPatternComplete_Cover
// 0x0000 (0x0030 - 0x0030)
class UFiringPatternComplete_Cover : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FiringPatternComplete_Cover");
		return ptr;
	}

};


// Class Indiana.MeleeAction_CurrentRequest
// 0x0000 (0x0030 - 0x0030)
class UMeleeAction_CurrentRequest : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeAction_CurrentRequest");
		return ptr;
	}

};


// Class Indiana.MeleeAction_RecoveryDodgeDirection
// 0x0000 (0x0030 - 0x0030)
class UMeleeAction_RecoveryDodgeDirection : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeAction_RecoveryDodgeDirection");
		return ptr;
	}

};


// Class Indiana.WeaponSlot_CurrentRequest
// 0x0000 (0x0030 - 0x0030)
class UWeaponSlot_CurrentRequest : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponSlot_CurrentRequest");
		return ptr;
	}

};


// Class Indiana.Context_CurrentRequest
// 0x0000 (0x0030 - 0x0030)
class UContext_CurrentRequest : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Context_CurrentRequest");
		return ptr;
	}

};


// Class Indiana.Dodge_Direction
// 0x0000 (0x0030 - 0x0030)
class UDodge_Direction : public UAIInt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Dodge_Direction");
		return ptr;
	}

};


// Class Indiana.AILocation
// 0x0000 (0x0030 - 0x0030)
class UAILocation : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AILocation");
		return ptr;
	}

};


// Class Indiana.AILocationWritable
// 0x0000 (0x0030 - 0x0030)
class UAILocationWritable : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AILocationWritable");
		return ptr;
	}

};


// Class Indiana.General_MoveLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_MoveLocation : public UAILocationWritable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_MoveLocation");
		return ptr;
	}

};


// Class Indiana.General_DecisionTreeLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_DecisionTreeLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_DecisionTreeLocation");
		return ptr;
	}

};


// Class Indiana.General_DecisionTreeActorLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_DecisionTreeActorLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_DecisionTreeActorLocation");
		return ptr;
	}

};


// Class Indiana.General_CurrentLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_CurrentLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_CurrentLocation");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetStimulusLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetStimulusLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetStimulusLocation");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetAimLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetAimLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetAimLocation");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetHeadLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetHeadLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetHeadLocation");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetCheatAimLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetCheatAimLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetCheatAimLocation");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetCheatHeadLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetCheatHeadLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetCheatHeadLocation");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetMovingAimLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetMovingAimLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetMovingAimLocation");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetMovingHeadLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetMovingHeadLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetMovingHeadLocation");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetSphereCheatLocaiton
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetSphereCheatLocaiton : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetSphereCheatLocaiton");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetStimulusSourceActorLocaiton
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetStimulusSourceActorLocaiton : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetStimulusSourceActorLocaiton");
		return ptr;
	}

};


// Class Indiana.General_PrimaryTargetProjectedStimulusLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_PrimaryTargetProjectedStimulusLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_PrimaryTargetProjectedStimulusLocation");
		return ptr;
	}

};


// Class Indiana.General_RandomNearbyLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_RandomNearbyLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_RandomNearbyLocation");
		return ptr;
	}

};


// Class Indiana.General_VantageLocationForPrimaryTarget
// 0x0000 (0x0030 - 0x0030)
class UGeneral_VantageLocationForPrimaryTarget : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_VantageLocationForPrimaryTarget");
		return ptr;
	}

};


// Class Indiana.General_FurthestLocationOnSpline
// 0x0000 (0x0030 - 0x0030)
class UGeneral_FurthestLocationOnSpline : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_FurthestLocationOnSpline");
		return ptr;
	}

};


// Class Indiana.Cover_CoverFiringLocation
// 0x0000 (0x0030 - 0x0030)
class UCover_CoverFiringLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Cover_CoverFiringLocation");
		return ptr;
	}

};


// Class Indiana.Cover_CoverFiringAimLocation
// 0x0000 (0x0030 - 0x0030)
class UCover_CoverFiringAimLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Cover_CoverFiringAimLocation");
		return ptr;
	}

};


// Class Indiana.Cover_CoverIntoCoverFiringAim
// 0x0000 (0x0030 - 0x0030)
class UCover_CoverIntoCoverFiringAim : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Cover_CoverIntoCoverFiringAim");
		return ptr;
	}

};


// Class Indiana.Cover_CoverLocation
// 0x0000 (0x0030 - 0x0030)
class UCover_CoverLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Cover_CoverLocation");
		return ptr;
	}

};


// Class Indiana.Cover_CoverWallLocation
// 0x0000 (0x0030 - 0x0030)
class UCover_CoverWallLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Cover_CoverWallLocation");
		return ptr;
	}

};


// Class Indiana.Melee_BodyAttackingTargetLocation
// 0x0000 (0x0030 - 0x0030)
class UMelee_BodyAttackingTargetLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Melee_BodyAttackingTargetLocation");
		return ptr;
	}

};


// Class Indiana.Patrol_PatrolNodeOrientationLocation
// 0x0000 (0x0030 - 0x0030)
class UPatrol_PatrolNodeOrientationLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Patrol_PatrolNodeOrientationLocation");
		return ptr;
	}

};


// Class Indiana.Follow_TeleportLocation
// 0x0000 (0x0030 - 0x0030)
class UFollow_TeleportLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_TeleportLocation");
		return ptr;
	}

};


// Class Indiana.Conversation_TeleportLocation
// 0x0000 (0x0030 - 0x0030)
class UConversation_TeleportLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Conversation_TeleportLocation");
		return ptr;
	}

};


// Class Indiana.Follow_FollowTarget
// 0x0000 (0x0030 - 0x0030)
class UFollow_FollowTarget : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Follow_FollowTarget");
		return ptr;
	}

};


// Class Indiana.Wander_Origin
// 0x0000 (0x0030 - 0x0030)
class UWander_Origin : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Wander_Origin");
		return ptr;
	}

};


// Class Indiana.Idle_Origin
// 0x0000 (0x0030 - 0x0030)
class UIdle_Origin : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Idle_Origin");
		return ptr;
	}

};


// Class Indiana.Idle_OrientationLocation
// 0x0000 (0x0030 - 0x0030)
class UIdle_OrientationLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Idle_OrientationLocation");
		return ptr;
	}

};


// Class Indiana.Furniture_EntryLocation
// 0x0000 (0x0030 - 0x0030)
class UFurniture_EntryLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Furniture_EntryLocation");
		return ptr;
	}

};


// Class Indiana.Furniture_ProjectedEntryLocation
// 0x0000 (0x0030 - 0x0030)
class UFurniture_ProjectedEntryLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Furniture_ProjectedEntryLocation");
		return ptr;
	}

};


// Class Indiana.Furniture_ExitLocation
// 0x0000 (0x0030 - 0x0030)
class UFurniture_ExitLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Furniture_ExitLocation");
		return ptr;
	}

};


// Class Indiana.Furniture_RotationLocation
// 0x0000 (0x0030 - 0x0030)
class UFurniture_RotationLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Furniture_RotationLocation");
		return ptr;
	}

};


// Class Indiana.Jump_StartLocation
// 0x0000 (0x0030 - 0x0030)
class UJump_StartLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Jump_StartLocation");
		return ptr;
	}

};


// Class Indiana.Jump_EndLocation
// 0x0000 (0x0030 - 0x0030)
class UJump_EndLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Jump_EndLocation");
		return ptr;
	}

};


// Class Indiana.Crouch_StartLocation
// 0x0000 (0x0030 - 0x0030)
class UCrouch_StartLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Crouch_StartLocation");
		return ptr;
	}

};


// Class Indiana.Crouch_EndLocation
// 0x0000 (0x0030 - 0x0030)
class UCrouch_EndLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Crouch_EndLocation");
		return ptr;
	}

};


// Class Indiana.Walk_StartLocation
// 0x0000 (0x0030 - 0x0030)
class UWalk_StartLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Walk_StartLocation");
		return ptr;
	}

};


// Class Indiana.Walk_EndLocation
// 0x0000 (0x0030 - 0x0030)
class UWalk_EndLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Walk_EndLocation");
		return ptr;
	}

};


// Class Indiana.CompanionCommand_MoveTo
// 0x0000 (0x0030 - 0x0030)
class UCompanionCommand_MoveTo : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommand_MoveTo");
		return ptr;
	}

};


// Class Indiana.General_HealTargetLocation
// 0x0000 (0x0030 - 0x0030)
class UGeneral_HealTargetLocation : public UAILocation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.General_HealTargetLocation");
		return ptr;
	}

};


// Class Indiana.AI_UObject
// 0x0000 (0x0030 - 0x0030)
class UAI_UObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_UObject");
		return ptr;
	}

};


// Class Indiana.AI_DisableStatusEffect
// 0x0000 (0x0030 - 0x0030)
class UAI_DisableStatusEffect : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_DisableStatusEffect");
		return ptr;
	}

};


// Class Indiana.AI_FleeStatusEffect
// 0x0000 (0x0030 - 0x0030)
class UAI_FleeStatusEffect : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_FleeStatusEffect");
		return ptr;
	}

};


// Class Indiana.AI_PersuadeStatusEffect
// 0x0000 (0x0030 - 0x0030)
class UAI_PersuadeStatusEffect : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_PersuadeStatusEffect");
		return ptr;
	}

};


// Class Indiana.AI_TeleportStartAnimation
// 0x0000 (0x0030 - 0x0030)
class UAI_TeleportStartAnimation : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_TeleportStartAnimation");
		return ptr;
	}

};


// Class Indiana.AI_TeleportEmergingAnimation
// 0x0000 (0x0030 - 0x0030)
class UAI_TeleportEmergingAnimation : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_TeleportEmergingAnimation");
		return ptr;
	}

};


// Class Indiana.AI_TeleportExitAnimation
// 0x0000 (0x0030 - 0x0030)
class UAI_TeleportExitAnimation : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_TeleportExitAnimation");
		return ptr;
	}

};


// Class Indiana.AI_TeleportEQS
// 0x0000 (0x0030 - 0x0030)
class UAI_TeleportEQS : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_TeleportEQS");
		return ptr;
	}

};


// Class Indiana.AI_SpawnActorAnimation
// 0x0000 (0x0030 - 0x0030)
class UAI_SpawnActorAnimation : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_SpawnActorAnimation");
		return ptr;
	}

};


// Class Indiana.AI_CowerAnimation
// 0x0000 (0x0030 - 0x0030)
class UAI_CowerAnimation : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_CowerAnimation");
		return ptr;
	}

};


// Class Indiana.AI_AnimationStateAnimation
// 0x0000 (0x0030 - 0x0030)
class UAI_AnimationStateAnimation : public UAI_UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AI_AnimationStateAnimation");
		return ptr;
	}

};


// Class Indiana.AISettings_Behavior
// 0x0000 (0x0030 - 0x0030)
class UAISettings_Behavior : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_Behavior");
		return ptr;
	}

};


// Class Indiana.AISettings_DefensiveAction
// 0x0078 (0x00B0 - 0x0038)
class UAISettings_DefensiveAction : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_DefensiveAction");
		return ptr;
	}

};


// Class Indiana.AISettings_Follow
// 0x0058 (0x0088 - 0x0030)
class UAISettings_Follow : public UAISettings_Behavior
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_Follow");
		return ptr;
	}

};


// Class Indiana.AISettings_FollowPlayer
// 0x0000 (0x0030 - 0x0030)
class UAISettings_FollowPlayer : public UAISettings_Behavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_FollowPlayer");
		return ptr;
	}

};


// Class Indiana.AISettings_Furniture
// 0x0028 (0x0058 - 0x0030)
class UAISettings_Furniture : public UAISettings_Behavior
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_Furniture");
		return ptr;
	}

};


// Class Indiana.AISettings_Idle
// 0x0000 (0x0030 - 0x0030)
class UAISettings_Idle : public UAISettings_Behavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_Idle");
		return ptr;
	}

};


// Class Indiana.AISettings_Patrol
// 0x0010 (0x0040 - 0x0030)
class UAISettings_Patrol : public UAISettings_Behavior
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_Patrol");
		return ptr;
	}

};


// Class Indiana.AISettings_Traverse
// 0x0020 (0x0050 - 0x0030)
class UAISettings_Traverse : public UAISettings_Behavior
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_Traverse");
		return ptr;
	}

};


// Class Indiana.AISettings_Wander
// 0x0018 (0x0048 - 0x0030)
class UAISettings_Wander : public UAISettings_Behavior
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_Wander");
		return ptr;
	}

};


// Class Indiana.AISettings_Weapon
// 0x0228 (0x0260 - 0x0038)
class UAISettings_Weapon : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x0038(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettings_Weapon");
		return ptr;
	}

};


// Class Indiana.AISettingsComponent
// 0x02C8 (0x03E0 - 0x0118)
class UAISettingsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0118(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AISettingsComponent");
		return ptr;
	}


	void STATIC_OnUnequipWeapon(class UWeapon* Weapon);
	void STATIC_OnEquipWeapon(class UWeapon* Weapon);
};


// Class Indiana.TargetingComponent
// 0x0008 (0x0120 - 0x0118)
class UTargetingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TargetingComponent");
		return ptr;
	}

};


// Class Indiana.AiTargetingComponent
// 0x0010 (0x0130 - 0x0120)
class UAiTargetingComponent : public UTargetingComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AiTargetingComponent");
		return ptr;
	}

};


// Class Indiana.Alarm
// 0x0010 (0x0398 - 0x0388)
class AAlarm : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Alarm");
		return ptr;
	}

};


// Class Indiana.AlarmComponent
// 0x0018 (0x0130 - 0x0118)
class UAlarmComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AlarmComponent");
		return ptr;
	}


	EAlarmState GetAlarmState();
};


// Class Indiana.Item
// 0x00E8 (0x0118 - 0x0030)
class UItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0030(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Item");
		return ptr;
	}


	void STATIC_SetPlayerOwnership(bool bRemoveNonPlayerOwnership);
	void STATIC_SetOwnership(class UClass* Faction, bool bInPlayerOwned);
	void STATIC_SetNonPlayerOwnership(class UClass* Faction, bool bRemovePlayerOwnership);
	bool IsPlayerOwned();
	class UClass* GetOwningFaction();
	void GetOwningActor();
	void STATIC_ClearPlayerOwnership();
	void STATIC_ClearNonPlayerOwnership();
	void STATIC_ClearAllOwnership();
	bool CanPlayerSafelyTake();
};


// Class Indiana.Ammo
// 0x0088 (0x01A0 - 0x0118)
class UAmmo : public UItem
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0118(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Ammo");
		return ptr;
	}

};


// Class Indiana.AmmoPoolBase
// 0x0050 (0x0080 - 0x0030)
class UAmmoPoolBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AmmoPoolBase");
		return ptr;
	}


	bool UsesConsumables();
	bool UsesAmmo();
	void STATIC_OnTacticalTimeDilationEnd(float Duration);
	bool IsReloading();
	int GetCurrentPoolSize();
	class UClass* GetCurrentConsumableClass();
	class UClass* GetCurrentAmmoClass();
	float GetBaseReloadTime();
};


// Class Indiana.RadialSectionWidget
// 0x0010 (0x0230 - 0x0220)
class URadialSectionWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RadialSectionWidget");
		return ptr;
	}

};


// Class Indiana.AmmoRadialSectionWidget
// 0x0020 (0x0250 - 0x0230)
class UAmmoRadialSectionWidget : public URadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0230(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AmmoRadialSectionWidget");
		return ptr;
	}

};


// Class Indiana.AmmoReadoutWidget
// 0x00B0 (0x0358 - 0x02A8)
class UAmmoReadoutWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x02A8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AmmoReadoutWidget");
		return ptr;
	}


	void STATIC_OnWeaponSwitch(class UWeapon* EquippedWeapon);
	void STATIC_OnReloadComplete(class UWeapon* EquippedWeapon);
	void STATIC_OnPlayerCombatStateChange(bool bCombatIn, bool bRestoring);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnHeldWeaponTextDisplayModeChanged(int ModeIn);
	void STATIC_OnHeldWeaponDisplayModeChanged(int ModeIn);
	void STATIC_EvaluateLowAmmoWarning(int MaxClipSize, int CurrentClipSize, int RemainingAmmo);
};


// Class Indiana.AnimationAudioSet
// 0x0050 (0x0088 - 0x0038)
class UAnimationAudioSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimationAudioSet");
		return ptr;
	}

};


// Class Indiana.AnimationBehaviorStateInfo
// 0x0000 (0x0120 - 0x0120)
class UAnimationBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimationBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.AnimationRequestData
// 0x0010 (0x0078 - 0x0068)
class UAnimationRequestData : public UDecisionTreeEmptyRequestData
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimationRequestData");
		return ptr;
	}

};


// Class Indiana.AnimationCurveUtils
// 0x0000 (0x0030 - 0x0030)
class UAnimationCurveUtils : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimationCurveUtils");
		return ptr;
	}

};


// Class Indiana.DisableStatusEffect
// 0x0010 (0x0198 - 0x0188)
class UDisableStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DisableStatusEffect");
		return ptr;
	}

};


// Class Indiana.AnimDisableStatusEffect
// 0x0008 (0x01A0 - 0x0198)
class UAnimDisableStatusEffect : public UDisableStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimDisableStatusEffect");
		return ptr;
	}

};


// Class Indiana.BoneModifications
// 0x0068 (0x00A0 - 0x0038)
class UBoneModifications : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BoneModifications");
		return ptr;
	}

};


// Class Indiana.BoneModificationsPreset
// 0x0050 (0x0088 - 0x0038)
class UBoneModificationsPreset : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BoneModificationsPreset");
		return ptr;
	}

};


// Class Indiana.AnimNotify_AttachWeapon
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_AttachWeapon : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_AttachWeapon");
		return ptr;
	}

};


// Class Indiana.AnimNotify_AudioEvent
// 0x0010 (0x0050 - 0x0040)
class UAnimNotify_AudioEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_AudioEvent");
		return ptr;
	}

};


// Class Indiana.AnimNotify_Despawn
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_Despawn : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_Despawn");
		return ptr;
	}

};


// Class Indiana.AnimNotify_DetachWeapon
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_DetachWeapon : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_DetachWeapon");
		return ptr;
	}

};


// Class Indiana.AnimNotify_EventEffects
// 0x0008 (0x0048 - 0x0040)
class UAnimNotify_EventEffects : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_EventEffects");
		return ptr;
	}

};


// Class Indiana.AnimNotify_Finished
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_Finished : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_Finished");
		return ptr;
	}

};


// Class Indiana.AnimNotify_FootStep
// 0x0008 (0x0048 - 0x0040)
class UAnimNotify_FootStep : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_FootStep");
		return ptr;
	}

};


// Class Indiana.AnimNotify_IndianaAkEvent
// 0x0010 (0x0050 - 0x0040)
class UAnimNotify_IndianaAkEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_IndianaAkEvent");
		return ptr;
	}

};


// Class Indiana.AnimNotify_MedkitEnd
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_MedkitEnd : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_MedkitEnd");
		return ptr;
	}

};


// Class Indiana.AnimNotify_MeleeActionFinished
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_MeleeActionFinished : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_MeleeActionFinished");
		return ptr;
	}

};


// Class Indiana.AnimNotify_MeleeAllowInput
// 0x0008 (0x0048 - 0x0040)
class UAnimNotify_MeleeAllowInput : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_MeleeAllowInput");
		return ptr;
	}

};


// Class Indiana.AnimNotify_MeleeCanSwing
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_MeleeCanSwing : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_MeleeCanSwing");
		return ptr;
	}

};


// Class Indiana.AnimNotify_MeleeCheckInput
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_MeleeCheckInput : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_MeleeCheckInput");
		return ptr;
	}

};


// Class Indiana.AnimNotify_MeleeRecoil
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_MeleeRecoil : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_MeleeRecoil");
		return ptr;
	}

};


// Class Indiana.AnimNotify_ParamsEvent
// 0x0008 (0x0048 - 0x0040)
class UAnimNotify_ParamsEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_ParamsEvent");
		return ptr;
	}

};


// Class Indiana.AnimNotify_PlayChatter
// 0x0008 (0x0048 - 0x0040)
class UAnimNotify_PlayChatter : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_PlayChatter");
		return ptr;
	}

};


// Class Indiana.AnimNotify_PropDespawn
// 0x0010 (0x0050 - 0x0040)
class UAnimNotify_PropDespawn : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_PropDespawn");
		return ptr;
	}

};


// Class Indiana.PropData
// 0x0010 (0x0048 - 0x0038)
class UPropData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PropData");
		return ptr;
	}

};


// Class Indiana.NewPropData
// 0x0068 (0x00A0 - 0x0038)
class UNewPropData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NewPropData");
		return ptr;
	}

};


// Class Indiana.AnimNotify_PropSpawn
// 0x0010 (0x0050 - 0x0040)
class UAnimNotify_PropSpawn : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_PropSpawn");
		return ptr;
	}

};


// Class Indiana.AnimNotify_RagDoll
// 0x0020 (0x0060 - 0x0040)
class UAnimNotify_RagDoll : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_RagDoll");
		return ptr;
	}

};


// Class Indiana.AnimNotify_UpdateCanisterVisual
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_UpdateCanisterVisual : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_UpdateCanisterVisual");
		return ptr;
	}

};


// Class Indiana.AnimNotify_UseMedKit
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_UseMedKit : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_UseMedKit");
		return ptr;
	}

};


// Class Indiana.AnimNotify_WeaponFire
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_WeaponFire : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_WeaponFire");
		return ptr;
	}

};


// Class Indiana.AnimNotify_WeaponVisualEvent
// 0x0010 (0x0050 - 0x0040)
class UAnimNotify_WeaponVisualEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotify_WeaponVisualEvent");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_AltIKToggle
// 0x0008 (0x0040 - 0x0038)
class UAnimNotifyState_AltIKToggle : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_AltIKToggle");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_AudioEventLoop
// 0x0008 (0x0040 - 0x0038)
class UAnimNotifyState_AudioEventLoop : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_AudioEventLoop");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_DisableAutoStep
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_DisableAutoStep : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_DisableAutoStep");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_DisableDetection
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_DisableDetection : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_DisableDetection");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_DisableHipPoses
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_DisableHipPoses : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_DisableHipPoses");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_DisableVision
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_DisableVision : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_DisableVision");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_HideWeapon
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_HideWeapon : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_HideWeapon");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_InspectEnd
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_InspectEnd : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_InspectEnd");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_Invulnerable
// 0x0008 (0x0040 - 0x0038)
class UAnimNotifyState_Invulnerable : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_Invulnerable");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_PreventInterrupts
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_PreventInterrupts : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_PreventInterrupts");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_FurnitureInterrupt
// 0x0008 (0x0040 - 0x0038)
class UAnimNotifyState_FurnitureInterrupt : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_FurnitureInterrupt");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_MeleeAllowInput
// 0x0008 (0x0040 - 0x0038)
class UAnimNotifyState_MeleeAllowInput : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_MeleeAllowInput");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_MeleeCanSwing
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_MeleeCanSwing : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_MeleeCanSwing");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_MeleeCheckInput
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_MeleeCheckInput : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_MeleeCheckInput");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_MeleeDamage
// 0x0010 (0x0048 - 0x0038)
class UAnimNotifyState_MeleeDamage : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_MeleeDamage");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_Prop
// 0x0018 (0x0050 - 0x0038)
class UAnimNotifyState_Prop : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_Prop");
		return ptr;
	}


	void STATIC_OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted, class USkeletalMeshComponent* MeshComp);
};


// Class Indiana.AnimNotifyState_SuppressFire
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_SuppressFire : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_SuppressFire");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_ToggleArmPose
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyState_ToggleArmPose : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_ToggleArmPose");
		return ptr;
	}

};


// Class Indiana.AnimNotifyState_ToggleTracking
// 0x0008 (0x0040 - 0x0038)
class UAnimNotifyState_ToggleTracking : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AnimNotifyState_ToggleTracking");
		return ptr;
	}

};


// Class Indiana.AoEStatusEffect
// 0x0058 (0x01E0 - 0x0188)
class UAoEStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0188(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AoEStatusEffect");
		return ptr;
	}

};


// Class Indiana.AppearanceComponent
// 0x0380 (0x0498 - 0x0118)
class UAppearanceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x380];                                     // 0x0118(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AppearanceComponent");
		return ptr;
	}


	void STATIC_SetVectorParameter(const struct FName& Parameter, const struct FVector& Vector);
	void STATIC_SetSlotVectorParameter(const struct FName& SlotName, const struct FName& Parameter, const struct FVector& Vector);
	void STATIC_SetSlotTextureParameter(const struct FName& SlotName, const struct FName& Parameter, class UTexture* Texture);
	void STATIC_SetSlotScalarParameter(const struct FName& SlotName, const struct FName& Parameter, float Scalar);
	void STATIC_SetSkinTone(class USkinTone* NewSkinTone);
	void STATIC_SetScar(class UScar* NewScar);
	void STATIC_SetScalarParameter(const struct FName& Parameter, float Scalar);
	void STATIC_SetMakeup(class UMakeup* NewMakeup);
	void STATIC_SetHairColor(class UHairColor* NewColor);
	void STATIC_SetHair(class UHairAppearances* NewHair);
	void STATIC_SetGender(const struct FGameplayTag& Gender);
	void STATIC_SetEyeColor(class UEyeColor* NewColor);
	void STATIC_SetDirt(class UDirt* NewDirt);
	void STATIC_SetDefaultHead(class UHeadAppearances* Head);
	void STATIC_SetDefaultBody(class UBodyAppearances* Body);
	void STATIC_SetBrows(class UBrows* NewBrows);
	void STATIC_SetBoneModificationPresets(class UBoneModificationsPreset* Presets);
	void STATIC_SetBoneModification(class UBoneModifications* Modifications, float Value);
	void STATIC_SetBeardColor(class UBeardColor* NewColor);
	void STATIC_SetBeard(class UBeardAppearances* NewBeard);
	void STATIC_SetAge(float NewAge);
	void STATIC_RemoveBoneModification(class UBoneModifications* Modifications);
	void STATIC_RefreshFullAppearance();
	void STATIC_InvalidateOldBoneModifications();
	bool GetBreakBoneName(const struct FGameplayTag& BodyPartTag, struct FName* BoneName);
	bool GetBreakBoneAndSocketNames(const struct FGameplayTag& BodyPartTag, struct FName* BoneName, struct FName* AttachedSocket, struct FName* DetachedSocket);
	void GetBreakableBoneNames();
	void GetBodyPartTags();
	TArray<struct FBodyPart> GetBodyPartsArray();
	struct FGameplayTag GetBodyPart(const struct FName& BoneName, const struct FVector& ImpactLocation);
	void STATIC_DebugTargetVertexColors();
	void STATIC_ApplyAppearancePreset(class UAppearancePreset* Preset);
};


// Class Indiana.AppearancePreset
// 0x00D0 (0x0108 - 0x0038)
class UAppearancePreset : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0038(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AppearancePreset");
		return ptr;
	}

};


// Class Indiana.ApplyRosterSkillBonusesStatusEffect
// 0x0038 (0x01C0 - 0x0188)
class UApplyRosterSkillBonusesStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0188(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ApplyRosterSkillBonusesStatusEffect");
		return ptr;
	}

};


// Class Indiana.ApproachBehaviorStateInfo
// 0x0040 (0x0160 - 0x0120)
class UApproachBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0120(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ApproachBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.ApproachRequestData
// 0x0000 (0x0068 - 0x0068)
class UApproachRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ApproachRequestData");
		return ptr;
	}

};


// Class Indiana.Aptitude
// 0x00A0 (0x00D0 - 0x0030)
class UAptitude : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Aptitude");
		return ptr;
	}

};


// Class Indiana.AptitudeReadoutWidget
// 0x0020 (0x02C8 - 0x02A8)
class UAptitudeReadoutWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AptitudeReadoutWidget");
		return ptr;
	}

};


// Class Indiana.AptitudeSummaryWidget
// 0x0018 (0x0238 - 0x0220)
class UAptitudeSummaryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0220(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AptitudeSummaryWidget");
		return ptr;
	}

};


// Class Indiana.DegradableItem
// 0x0010 (0x0128 - 0x0118)
class UDegradableItem : public UItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DegradableItem");
		return ptr;
	}

};


// Class Indiana.ArmorBase
// 0x0090 (0x01B8 - 0x0128)
class UArmorBase : public UDegradableItem
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0128(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorBase");
		return ptr;
	}

};


// Class Indiana.ArmorComponent
// 0x0070 (0x0188 - 0x0118)
class UArmorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0118(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorComponent");
		return ptr;
	}


	void STATIC_TinkerAdvanceArmor(bool bIgnoreCost);
};


// Class Indiana.ArmorItem
// 0x0040 (0x01F8 - 0x01B8)
class UArmorItem : public UArmorBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01B8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorItem");
		return ptr;
	}

};


// Class Indiana.ArmorModItem
// 0x00A8 (0x0260 - 0x01B8)
class UArmorModItem : public UArmorBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x01B8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorModItem");
		return ptr;
	}

};


// Class Indiana.ArmorModArmoring
// 0x0000 (0x0260 - 0x0260)
class UArmorModArmoring : public UArmorModItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorModArmoring");
		return ptr;
	}

};


// Class Indiana.ArmorModUtility
// 0x0000 (0x0260 - 0x0260)
class UArmorModUtility : public UArmorModItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorModUtility");
		return ptr;
	}

};


// Class Indiana.ArmorModResistance
// 0x0000 (0x0260 - 0x0260)
class UArmorModResistance : public UArmorModItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorModResistance");
		return ptr;
	}

};


// Class Indiana.ArmorModDampening
// 0x0000 (0x0260 - 0x0260)
class UArmorModDampening : public UArmorModItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorModDampening");
		return ptr;
	}

};


// Class Indiana.ArmorSet
// 0x0178 (0x0370 - 0x01F8)
class UArmorSet : public UArmorItem
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x01F8(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorSet");
		return ptr;
	}

};


// Class Indiana.ArmorStatusEffect
// 0x0020 (0x01A8 - 0x0188)
class UArmorStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0188(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ArmorStatusEffect");
		return ptr;
	}

};


// Class Indiana.AssetCollection
// 0x00A8 (0x00D8 - 0x0030)
class UAssetCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0030(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AssetCollection");
		return ptr;
	}

};


// Class Indiana.AssetList
// 0x0050 (0x0088 - 0x0038)
class UAssetList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AssetList");
		return ptr;
	}

};


// Class Indiana.ModVisual
// 0x0038 (0x0068 - 0x0030)
class UModVisual : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ModVisual");
		return ptr;
	}

};


// Class Indiana.AttachFxModVisual
// 0x0038 (0x00A0 - 0x0068)
class UAttachFxModVisual : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AttachFxModVisual");
		return ptr;
	}

};


// Class Indiana.AttackInfo
// 0x0020 (0x0050 - 0x0030)
class UAttackInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AttackInfo");
		return ptr;
	}

};


// Class Indiana.MeleeAttackInfo
// 0x0008 (0x0058 - 0x0050)
class UMeleeAttackInfo : public UAttackInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeAttackInfo");
		return ptr;
	}

};


// Class Indiana.AttributeSliderGroupWidget
// 0x00D0 (0x0378 - 0x02A8)
class UAttributeSliderGroupWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x02A8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AttributeSliderGroupWidget");
		return ptr;
	}

};


// Class Indiana.AttributeSliderPageWidget
// 0x0088 (0x0330 - 0x02A8)
class UAttributeSliderPageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x02A8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AttributeSliderPageWidget");
		return ptr;
	}

};


// Class Indiana.AttributeSummaryEntryWidget
// 0x0038 (0x0258 - 0x0220)
class UAttributeSummaryEntryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0220(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AttributeSummaryEntryWidget");
		return ptr;
	}

};


// Class Indiana.AttributeSummaryGroupWidget
// 0x0018 (0x0238 - 0x0220)
class UAttributeSummaryGroupWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0220(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AttributeSummaryGroupWidget");
		return ptr;
	}

};


// Class Indiana.AttributeSummaryWidget
// 0x0068 (0x0288 - 0x0220)
class UAttributeSummaryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0220(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AttributeSummaryWidget");
		return ptr;
	}

};


// Class Indiana.AudioHelpers
// 0x0000 (0x0030 - 0x0030)
class UAudioHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioHelpers");
		return ptr;
	}


	class UAkAudioEvent* LoadAkAudioEventReference(const class FString& Path);
};


// Class Indiana.InteractableActor
// 0x0050 (0x03D8 - 0x0388)
class AInteractableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InteractableActor");
		return ptr;
	}

};


// Class Indiana.AudioLogActor
// 0x0050 (0x0428 - 0x03D8)
class AAudioLogActor : public AInteractableActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioLogActor");
		return ptr;
	}

};


// Class Indiana.AudioLogDataAsset
// 0x0020 (0x0058 - 0x0038)
class UAudioLogDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioLogDataAsset");
		return ptr;
	}

};


// Class Indiana.AudioLogLibraryDataAsset
// 0x0040 (0x0078 - 0x0038)
class UAudioLogLibraryDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioLogLibraryDataAsset");
		return ptr;
	}

};


// Class Indiana.GenericCollapsableList
// 0x0058 (0x0300 - 0x02A8)
class UGenericCollapsableList : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GenericCollapsableList");
		return ptr;
	}


	void STATIC_ExpandableAreaExpansionChanged(class UExpandableAreaBase* Area, bool bIsExpanded);
};


// Class Indiana.AudioLogList
// 0x00A0 (0x03A0 - 0x0300)
class UAudioLogList : public UGenericCollapsableList
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0300(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioLogList");
		return ptr;
	}


	void STATIC_OnAudioLogViewedCB(class UGenericCollapsableListEntry* ListEntry);
	void STATIC_OnAudioLogSelectedCB(class UGenericCollapsableListEntry* ListEntry);
	void STATIC_OnAudioLogLibraryLoaded(class UAudioLogLibraryDataAsset* LoadedAudioLogLibrary);
	void STATIC_AddOldAudioLog(class UAudioLogDataAsset* AudioLogDataAsset);
	void STATIC_AddNewAudioLog(class UAudioLogDataAsset* AudioLogDataAsset);
};


// Class Indiana.GenericCollapsableListEntry
// 0x0028 (0x0248 - 0x0220)
class UGenericCollapsableListEntry : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0220(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GenericCollapsableListEntry");
		return ptr;
	}

};


// Class Indiana.AudioLogListEntryWidget
// 0x0000 (0x0248 - 0x0248)
class UAudioLogListEntryWidget : public UGenericCollapsableListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioLogListEntryWidget");
		return ptr;
	}

};


// Class Indiana.AudioLogManager
// 0x0148 (0x0178 - 0x0030)
class UAudioLogManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0030(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioLogManager");
		return ptr;
	}


	void STATIC_StopCurrentAudioLog(bool bForce);
	void STATIC_ResumeCurrentAudioLog(bool bForce, bool bFromPlay);
	void STATIC_PlayAudioLog(int AudioLogIndex);
	void STATIC_PauseCurrentAudioLog(bool bForce, bool bFromStop);
	void STATIC_OnPreMapLoad(const class FString& MapName);
	void STATIC_OnPostMapLoad(class UWorld* World);
	void STATIC_OnLoadComplete(const class FString& Filename, ELoadGameResult Result);
	void STATIC_OnConversationEnded(class UConversationInstance* ConversationInstance);
	void STATIC_OnCombatStateChanged(bool bInCombat, bool bRestoring);
	void STATIC_OnAudioLogLibraryLoaded();
	bool IsPlayingAudioLog();
	EAudioLogPlayState GetCurrentAudioLogPlayState();
	bool CanStopCurrentAudioLog(bool bExclusive);
	bool CanResumeCurrentAudioLog(bool bExclusive);
	bool CanPauseCurrentAudioLog(bool bExclusive);
};


// Class Indiana.IndianaInterfaceUserWidget
// 0x0008 (0x02B0 - 0x02A8)
class UIndianaInterfaceUserWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaInterfaceUserWidget");
		return ptr;
	}


	void STATIC_SetInterfaceUserFocus();
	void STATIC_SetCursorVisible(bool bVisible);
};


// Class Indiana.AudioLogWidget
// 0x0090 (0x0340 - 0x02B0)
class UAudioLogWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x02B0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioLogWidget");
		return ptr;
	}


	void STATIC_TacticalTimeDilationStart();
	void STATIC_TacticalTimeDilationEnd(float Delta);
	void STATIC_ShowAudioLog(bool bShow, float CurrentRenderOpacity);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnAudioLogPlayStateChanged(EAudioLogPlayState NewPlayState);
	bool CanStopAudioLog();
};


// Class Indiana.AudioParamModVisual
// 0x0020 (0x0088 - 0x0068)
class UAudioParamModVisual : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioParamModVisual");
		return ptr;
	}

};


// Class Indiana.AudioSwitchModVisual
// 0x0020 (0x0088 - 0x0068)
class UAudioSwitchModVisual : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AudioSwitchModVisual");
		return ptr;
	}

};


// Class Indiana.AutoSneakAttackStatusEffect
// 0x0000 (0x0188 - 0x0188)
class UAutoSneakAttackStatusEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AutoSneakAttackStatusEffect");
		return ptr;
	}

};


// Class Indiana.AutoStasisTriggerComponent
// 0x0000 (0x02B0 - 0x02B0)
class UAutoStasisTriggerComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AutoStasisTriggerComponent");
		return ptr;
	}

};


// Class Indiana.AutoStasisTrigger
// 0x0028 (0x0408 - 0x03E0)
class AAutoStasisTrigger : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AutoStasisTrigger");
		return ptr;
	}

};


// Class Indiana.BackgroundPanelWidget
// 0x0088 (0x02A8 - 0x0220)
class UBackgroundPanelWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0220(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BackgroundPanelWidget");
		return ptr;
	}


	void STATIC_SetBackgroundFocused(bool bFocused);
	void STATIC_RegisterButtons(TArray<class UButtonBase*> Buttons);
	void STATIC_OnOuterTextureLoaded(class UTexture2D* Texture);
	void STATIC_OnInnerTextureLoaded(class UTexture2D* Texture);
};


// Class Indiana.BackgroundSplitPanelWidget
// 0x00E8 (0x0308 - 0x0220)
class UBackgroundSplitPanelWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0220(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BackgroundSplitPanelWidget");
		return ptr;
	}


	void STATIC_OnOuterTopTextureLoaded(class UTexture2D* Texture);
	void STATIC_OnOuterBottomTextureLoaded(class UTexture2D* Texture);
	void STATIC_OnInnerTopTextureLoaded(class UTexture2D* Texture);
	void STATIC_OnInnerBottomTextureLoaded(class UTexture2D* Texture);
};


// Class Indiana.BaseInventoryItemManagement
// 0x0098 (0x0348 - 0x02B0)
class UBaseInventoryItemManagement : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x02B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BaseInventoryItemManagement");
		return ptr;
	}


	void STATIC_OnDragDrop_SetArmorSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_JunkItem(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_ClearWeaponSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_BreakDownItem(class UIndianaDragDropOperation* Operation);
};


// Class Indiana.BaseMapEntryWidget
// 0x0000 (0x02A8 - 0x02A8)
class UBaseMapEntryWidget : public UIndianaUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BaseMapEntryWidget");
		return ptr;
	}

};


// Class Indiana.EventEffect
// 0x0000 (0x0030 - 0x0030)
class UEventEffect : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EventEffect");
		return ptr;
	}

};


// Class Indiana.BasePlayAnimEventEffect
// 0x0010 (0x0040 - 0x0030)
class UBasePlayAnimEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BasePlayAnimEventEffect");
		return ptr;
	}

};


// Class Indiana.BaseTeamData
// 0x0050 (0x0080 - 0x0030)
class UBaseTeamData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BaseTeamData");
		return ptr;
	}

};


// Class Indiana.BasicMapFloorTrackedActor
// 0x0030 (0x03B8 - 0x0388)
class ABasicMapFloorTrackedActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0388(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BasicMapFloorTrackedActor");
		return ptr;
	}

};


// Class Indiana.NewBeacon
// 0x0080 (0x0408 - 0x0388)
class ANewBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0388(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NewBeacon");
		return ptr;
	}

};


// Class Indiana.BeaconComponent
// 0x0030 (0x02E0 - 0x02B0)
class UBeaconComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeaconComponent");
		return ptr;
	}


	void STATIC_Show();
	void STATIC_Hide();
};


// Class Indiana.BeaconManager
// 0x0118 (0x0148 - 0x0030)
class UBeaconManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0030(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeaconManager");
		return ptr;
	}


	void STATIC_OnShipChangedLocation(class UShipDestinationData* NewShipLocation);
};


// Class Indiana.BeaconMapEntryWidget
// 0x0058 (0x0300 - 0x02A8)
class UBeaconMapEntryWidget : public UBaseMapEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeaconMapEntryWidget");
		return ptr;
	}

};


// Class Indiana.BeaconTagWidget
// 0x0070 (0x0318 - 0x02A8)
class UBeaconTagWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeaconTagWidget");
		return ptr;
	}


	void STATIC_OnWaypointMarkerVisibilityChanged(bool bVisible);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
};


// Class Indiana.IndianaWidgetComponent
// 0x0030 (0x0780 - 0x0750)
class UIndianaWidgetComponent : public UWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0750(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaWidgetComponent");
		return ptr;
	}

};


// Class Indiana.BeaconTagWidgetComponent
// 0x0010 (0x0790 - 0x0780)
class UBeaconTagWidgetComponent : public UIndianaWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeaconTagWidgetComponent");
		return ptr;
	}

};


// Class Indiana.Destructible
// 0x01B0 (0x0538 - 0x0388)
class ADestructible : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0388(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Destructible");
		return ptr;
	}


	void STATIC_SetDestructibleState(EDestructibleState NewState);
	void STATIC_ReceiveTriggerUntripped();
	void STATIC_ReceiveTriggerTripped();
	void STATIC_ReceiveTriggerDisarmed();
	void STATIC_ReceiveTriggerArmed();
	void STATIC_ReceivePreDeploy();
	void STATIC_ReceiveDeployOrder();
	void STATIC_OnHealthChanged(float HealthChange, class AActor* InInstigator);
};


// Class Indiana.BeamLauncher
// 0x0120 (0x0658 - 0x0538)
class ABeamLauncher : public ADestructible
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0538(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeamLauncher");
		return ptr;
	}

};


// Class Indiana.WeaponMode
// 0x0100 (0x0130 - 0x0030)
class UWeaponMode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0030(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponMode");
		return ptr;
	}


	bool IsIdle();
	bool IsFullyAimed();
	bool IsCharging();
	class UClass* GetSecondaryDamageType();
	EIndianaDamageType GetPrimaryDamageTypeEnum();
	class UClass* GetPrimaryDamageType();
};


// Class Indiana.RangedMode
// 0x0450 (0x0580 - 0x0130)
class URangedMode : public UWeaponMode
{
public:
	unsigned char                                      UnknownData00[0x450];                                     // 0x0130(0x0450) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangedMode");
		return ptr;
	}


	void STATIC_OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	bool HasScope();
	float GetWeaponCurrentAmmoGaugeAlpha();
	struct FVector GetShotOrigin();
	struct FRotator GetMuzzleRotation();
	bool GetMuzzleLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
	struct FVector GetMuzzleLocation();
	struct FVector GetAimingUpDirection();
	struct FVector GetAimingDirection();
};


// Class Indiana.BeamMode
// 0x00F0 (0x0670 - 0x0580)
class UBeamMode : public URangedMode
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0580(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeamMode");
		return ptr;
	}


	bool IsTargetingPlayer();
	bool HasLockedTarget();
	struct FVector GetTargetLocation();
};


// Class Indiana.BeardAppearances
// 0x0010 (0x0048 - 0x0038)
class UBeardAppearances : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeardAppearances");
		return ptr;
	}

};


// Class Indiana.BeardColor
// 0x0020 (0x0058 - 0x0038)
class UBeardColor : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BeardColor");
		return ptr;
	}

};


// Class Indiana.FurnitureActor
// 0x0010 (0x0398 - 0x0388)
class AFurnitureActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FurnitureActor");
		return ptr;
	}

};


// Class Indiana.Bed
// 0x0038 (0x03D0 - 0x0398)
class ABed : public AFurnitureActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0398(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Bed");
		return ptr;
	}

};


// Class Indiana.BehaviorStackComponent
// 0x0150 (0x0268 - 0x0118)
class UBehaviorStackComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0118(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BehaviorStackComponent");
		return ptr;
	}

};


// Class Indiana.EQS_BehaviorStateInfo
// 0x0058 (0x0178 - 0x0120)
class UEQS_BehaviorStateInfo : public UBehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0120(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQS_BehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.BehaviorTreeGlobalParams
// 0x0018 (0x0048 - 0x0030)
class UBehaviorTreeGlobalParams : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BehaviorTreeGlobalParams");
		return ptr;
	}

};


// Class Indiana.IndianaAnimInstance
// 0x01D0 (0x0540 - 0x0370)
class UIndianaAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0370(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAnimInstance");
		return ptr;
	}


	float Montage_SkipToEnd(class UAnimMontage* MontageToPlay);
	void STATIC_AnimNotify_ToggleFootIK();
	void STATIC_AnimNotify_EnableFootIK();
	void STATIC_AnimNotify_DisableFootIK();
};


// Class Indiana.CharacterAnimInstance
// 0x00C0 (0x0600 - 0x0540)
class UCharacterAnimInstance : public UIndianaAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0540(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterAnimInstance");
		return ptr;
	}


	void STATIC_SetDisabledAnimation(const struct FAnimEventGameplayTagContainer& Container);
	void STATIC_OnRebuildAnimationSetData();
	void STATIC_OnNewWeaponAnimations(class UWeaponAnimations* NewWeaponAnimations);
	void STATIC_OnNewLocomotionAnimationSet(class ULocomotionAnimationSet* NewLocomtionAnimationSet);
	void STATIC_OnMovementLanded(float Distance);
	bool IsMontagePlayingOnSlot(const struct FName& SlotNodeName);
};


// Class Indiana.TPVAnimInstance
// 0x03F0 (0x09F0 - 0x0600)
class UTPVAnimInstance : public UCharacterAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x3F0];                                     // 0x0600(0x03F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TPVAnimInstance");
		return ptr;
	}


	void STATIC_UpdateAnimationSetUpdate();
	void STATIC_SetStateTransitioned(EAnimTreeState State, bool Transitioned);
	void STATIC_SetPersonality(class UTPVPersonalitySet* Personality);
	bool SetNextEmotion(EEmotion Emotion, float Duration, bool Persist, bool ForceNextEmotion);
	void STATIC_ResetEmotionToDefault();
	void STATIC_OnMontageStart(class UAnimMontage* Montage);
	void STATIC_OnMontageEnd(class UAnimMontage* Montage, bool bInterrupted);
	void STATIC_GetUpFromRagdoll(float GetUpSpeed);
	int GetAnimationSetUpdate();
	void STATIC_ClearCurrentEmotion();
	void STATIC_AnimNotify_ResetLocomotionState();
	void STATIC_AnimNotify_OnLandEnd();
	void STATIC_AnimNotify_OnJumpIntroEnd();
	void STATIC_AnimNotify_NCWalkStartEntered();
	void STATIC_AnimNotify_NCWalkEntered();
	void STATIC_AnimNotify_NCTurnEntered();
	void STATIC_AnimNotify_NCRunEntered();
	void STATIC_AnimNotify_NCIdleEntered();
	void STATIC_AnimNotify_JumpStateMachineComplete();
	void STATIC_AnimNotify_IdleStateLeft();
	void STATIC_AnimNotify_CTurnEntered();
	void STATIC_AnimNotify_CombatStateEntered();
	void STATIC_AnimNotify_ClearFurnitureFlag();
};


// Class Indiana.BipedAnimInstance
// 0x0990 (0x1380 - 0x09F0)
class UBipedAnimInstance : public UTPVAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x990];                                     // 0x09F0(0x0990) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BipedAnimInstance");
		return ptr;
	}


	void STATIC_UpdatePersonalityAnims();
	void STATIC_PickRandomIdle();
	void STATIC_AnimNotify_SafeToReevaluateTalking();
};


// Class Indiana.BlockComponent
// 0x0170 (0x0288 - 0x0118)
class UBlockComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0118(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BlockComponent");
		return ptr;
	}

};


// Class Indiana.BlockInventoryVolume
// 0x0000 (0x03E0 - 0x03E0)
class ABlockInventoryVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BlockInventoryVolume");
		return ptr;
	}

};


// Class Indiana.BodyAppearances
// 0x0020 (0x0058 - 0x0038)
class UBodyAppearances : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BodyAppearances");
		return ptr;
	}

};


// Class Indiana.BodyLocationSpellAsset
// 0x0040 (0x0078 - 0x0038)
class UBodyLocationSpellAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BodyLocationSpellAsset");
		return ptr;
	}

};


// Class Indiana.BodyPartData
// 0x0010 (0x0048 - 0x0038)
class UBodyPartData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BodyPartData");
		return ptr;
	}

};


// Class Indiana.BodyPartsComponent
// 0x0000 (0x0118 - 0x0118)
class UBodyPartsComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BodyPartsComponent");
		return ptr;
	}

};


// Class Indiana.BoneModStatusEffect
// 0x0010 (0x0198 - 0x0188)
class UBoneModStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BoneModStatusEffect");
		return ptr;
	}

};


// Class Indiana.BossComponent
// 0x0030 (0x0148 - 0x0118)
class UBossComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0118(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BossComponent");
		return ptr;
	}


	void STATIC_OnHealthChanged(float HealthChange, class AActor* InInstigator);
	void STATIC_OnCombatStateChanged(bool bIsInCombat, bool bRestoring);
};


// Class Indiana.BossFightManager
// 0x0030 (0x0060 - 0x0030)
class UBossFightManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BossFightManager");
		return ptr;
	}

};


// Class Indiana.BotAnimInstance
// 0x0140 (0x0B30 - 0x09F0)
class UBotAnimInstance : public UTPVAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x09F0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BotAnimInstance");
		return ptr;
	}

};


// Class Indiana.BrandDataAsset
// 0x00A8 (0x00E0 - 0x0038)
class UBrandDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0038(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BrandDataAsset");
		return ptr;
	}

};


// Class Indiana.BreakdownPopupWidget
// 0x0030 (0x02D8 - 0x02A8)
class UBreakdownPopupWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BreakdownPopupWidget");
		return ptr;
	}

};


// Class Indiana.Brows
// 0x0008 (0x0040 - 0x0038)
class UBrows : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Brows");
		return ptr;
	}

};


// Class Indiana.BTDecorator_IndianaConditional
// 0x0008 (0x0078 - 0x0070)
class UBTDecorator_IndianaConditional : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTDecorator_IndianaConditional");
		return ptr;
	}

};


// Class Indiana.BT_Con_Composite
// 0x0010 (0x0088 - 0x0078)
class UBT_Con_Composite : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Composite");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsLocationValid
// 0x0010 (0x0088 - 0x0078)
class UBT_Con_General_IsLocationValid : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsLocationValid");
		return ptr;
	}

};


// Class Indiana.BT_Con_Animation_ShouldFaceTargetBeforePlayback
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Animation_ShouldFaceTargetBeforePlayback : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Animation_ShouldFaceTargetBeforePlayback");
		return ptr;
	}

};


// Class Indiana.BT_Con_Approach_IsTargetInConversation
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Approach_IsTargetInConversation : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Approach_IsTargetInConversation");
		return ptr;
	}

};


// Class Indiana.BT_Con_Approach_IsInInterrogationRange
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Approach_IsInInterrogationRange : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Approach_IsInInterrogationRange");
		return ptr;
	}

};


// Class Indiana.BT_Con_CompanionFollow_ShouldWait
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_CompanionFollow_ShouldWait : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_CompanionFollow_ShouldWait");
		return ptr;
	}

};


// Class Indiana.BT_Con_CompanionFollow_IsFollowLocationValid
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_CompanionFollow_IsFollowLocationValid : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_CompanionFollow_IsFollowLocationValid");
		return ptr;
	}

};


// Class Indiana.BT_Con_Cover_IsCoverType
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_Cover_IsCoverType : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Cover_IsCoverType");
		return ptr;
	}

};


// Class Indiana.BT_Con_Cover_WasInterrupted
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Cover_WasInterrupted : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Cover_WasInterrupted");
		return ptr;
	}

};


// Class Indiana.BT_Con_Crouch_IsCrouchInPlace
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Crouch_IsCrouchInPlace : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Crouch_IsCrouchInPlace");
		return ptr;
	}

};


// Class Indiana.BT_Con_Furniture_IsCurrentBehaviorState
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_Furniture_IsCurrentBehaviorState : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Furniture_IsCurrentBehaviorState");
		return ptr;
	}

};


// Class Indiana.BT_Con_Furniture_ShouldOrientToFurniture
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Furniture_ShouldOrientToFurniture : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Furniture_ShouldOrientToFurniture");
		return ptr;
	}

};


// Class Indiana.BT_Con_Furniture_IsReserved
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Furniture_IsReserved : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Furniture_IsReserved");
		return ptr;
	}

};


// Class Indiana.BT_Con_Furniture_IsValid
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Furniture_IsValid : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Furniture_IsValid");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsSeen
// 0x0010 (0x0088 - 0x0078)
class UBT_Con_General_IsSeen : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsSeen");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsAimingPossible
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_IsAimingPossible : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsAimingPossible");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsFollowTargetValid
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_IsFollowTargetValid : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsFollowTargetValid");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsFollower
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_IsFollower : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsFollower");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsOnRails
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_IsOnRails : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsOnRails");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_HasEquippedWeapon
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_HasEquippedWeapon : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_HasEquippedWeapon");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsInRange
// 0x0038 (0x00B0 - 0x0078)
class UBT_Con_General_IsInRange : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsInRange");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_CanMoveCloserOnRails
// 0x0018 (0x0090 - 0x0078)
class UBT_Con_General_CanMoveCloserOnRails : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_CanMoveCloserOnRails");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_ClosestVantageIsInRange
// 0x0030 (0x00A8 - 0x0078)
class UBT_Con_General_ClosestVantageIsInRange : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_ClosestVantageIsInRange");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsFacingTarget
// 0x0018 (0x0090 - 0x0078)
class UBT_Con_General_IsFacingTarget : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsFacingTarget");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_CheckBooleanSelector
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_CheckBooleanSelector : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_CheckBooleanSelector");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsTimeSinceBehaviorState
// 0x0010 (0x0088 - 0x0078)
class UBT_Con_General_IsTimeSinceBehaviorState : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsTimeSinceBehaviorState");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_TestContinuousSeenTime
// 0x0010 (0x0088 - 0x0078)
class UBT_Con_General_TestContinuousSeenTime : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_TestContinuousSeenTime");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsBehaviorStateComplete
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_IsBehaviorStateComplete : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsBehaviorStateComplete");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_WithInDistance
// 0x0018 (0x0090 - 0x0078)
class UBT_Con_General_WithInDistance : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_WithInDistance");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsInPlayerConversation
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_General_IsInPlayerConversation : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsInPlayerConversation");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsValidHealTarget
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_IsValidHealTarget : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsValidHealTarget");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsPrimaryTargetStimulusType
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_IsPrimaryTargetStimulusType : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsPrimaryTargetStimulusType");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_Random
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_Random : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_Random");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsAlertStateTimeRemainingEstimateGreaterThan
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_IsAlertStateTimeRemainingEstimateGreaterThan : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsAlertStateTimeRemainingEstimateGreaterThan");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_WantsNonBehaviorCrouch
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_General_WantsNonBehaviorCrouch : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_WantsNonBehaviorCrouch");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_Dot
// 0x0028 (0x00A0 - 0x0078)
class UBT_Con_General_Dot : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_Dot");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_HasVantageOnActor
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_HasVantageOnActor : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_HasVantageOnActor");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_SimpleIsSeen
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_General_SimpleIsSeen : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_SimpleIsSeen");
		return ptr;
	}

};


// Class Indiana.BT_Con_General_IsCreatureType
// 0x0028 (0x00A0 - 0x0078)
class UBT_Con_General_IsCreatureType : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_General_IsCreatureType");
		return ptr;
	}

};


// Class Indiana.BT_Con_Jump_ShouldRotateToFaceJumpDirection
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Jump_ShouldRotateToFaceJumpDirection : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Jump_ShouldRotateToFaceJumpDirection");
		return ptr;
	}

};


// Class Indiana.BT_Con_Jump_IsJumpInPlace
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Jump_IsJumpInPlace : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Jump_IsJumpInPlace");
		return ptr;
	}

};


// Class Indiana.BT_Con_Jump_IsIntroAnimationComplete
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Jump_IsIntroAnimationComplete : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Jump_IsIntroAnimationComplete");
		return ptr;
	}

};


// Class Indiana.BT_Con_Jump_IsOutroAnimationComplete
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Jump_IsOutroAnimationComplete : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Jump_IsOutroAnimationComplete");
		return ptr;
	}

};


// Class Indiana.BT_Con_Melee_IsSlottingState
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_Melee_IsSlottingState : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Melee_IsSlottingState");
		return ptr;
	}

};


// Class Indiana.BT_Con_Melee_IsRecoveryType
// 0x0008 (0x0080 - 0x0078)
class UBT_Con_Melee_IsRecoveryType : public UBTDecorator_IndianaConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Melee_IsRecoveryType");
		return ptr;
	}

};


// Class Indiana.BT_Con_Melee_IsDodgeRecoveryPossible
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Melee_IsDodgeRecoveryPossible : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Melee_IsDodgeRecoveryPossible");
		return ptr;
	}

};


// Class Indiana.BT_Con_MoveTo_ShouldWaitAfterArrival
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_MoveTo_ShouldWaitAfterArrival : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_MoveTo_ShouldWaitAfterArrival");
		return ptr;
	}

};


// Class Indiana.BT_Con_Patrol_IsPatrolNodeValid
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Patrol_IsPatrolNodeValid : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Patrol_IsPatrolNodeValid");
		return ptr;
	}

};


// Class Indiana.BT_Con_Patrol_HasPatrolNodeAction
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Patrol_HasPatrolNodeAction : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Patrol_HasPatrolNodeAction");
		return ptr;
	}

};


// Class Indiana.BT_Con_Search_ShouldMoveDirectlyToTarget
// 0x0000 (0x0078 - 0x0078)
class UBT_Con_Search_ShouldMoveDirectlyToTarget : public UBTDecorator_IndianaConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Con_Search_ShouldMoveDirectlyToTarget");
		return ptr;
	}

};


// Class Indiana.BTDecorator_IndianaScript
// 0x0008 (0x0078 - 0x0070)
class UBTDecorator_IndianaScript : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTDecorator_IndianaScript");
		return ptr;
	}

};


// Class Indiana.BTDecorator_IndianaToggleScript
// 0x0000 (0x0070 - 0x0070)
class UBTDecorator_IndianaToggleScript : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTDecorator_IndianaToggleScript");
		return ptr;
	}

};


// Class Indiana.BT_Scr_SetMovementState
// 0x0010 (0x0080 - 0x0070)
class UBT_Scr_SetMovementState : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_SetMovementState");
		return ptr;
	}

};


// Class Indiana.BT_Scr_SetMovementState_Distance
// 0x0018 (0x0098 - 0x0080)
class UBT_Scr_SetMovementState_Distance : public UBT_Scr_SetMovementState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_SetMovementState_Distance");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Approach_Interrogate
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Approach_Interrogate : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Approach_Interrogate");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Approach_SetApproaching
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_Approach_SetApproaching : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Approach_SetApproaching");
		return ptr;
	}

};


// Class Indiana.BT_Scr_CalledShot_CameraStep
// 0x0008 (0x0080 - 0x0078)
class UBT_Scr_CalledShot_CameraStep : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_CalledShot_CameraStep");
		return ptr;
	}

};


// Class Indiana.BT_Scr_CalledShot_Teleport
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_CalledShot_Teleport : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_CalledShot_Teleport");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Cover_IncrementCoverUseCounter
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Cover_IncrementCoverUseCounter : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Cover_IncrementCoverUseCounter");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Cover_SetCoverType
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_Cover_SetCoverType : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Cover_SetCoverType");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Cover_ClearInterrupted
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Cover_ClearInterrupted : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Cover_ClearInterrupted");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Crouch_UpdatePrematureExit
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Crouch_UpdatePrematureExit : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Crouch_UpdatePrematureExit");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Flank_ForceTargetOverride
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Flank_ForceTargetOverride : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Flank_ForceTargetOverride");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Follow_ClearTeleportFlag
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Follow_ClearTeleportFlag : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Follow_ClearTeleportFlag");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Furniture_SetFurniture
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_Furniture_SetFurniture : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Furniture_SetFurniture");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Furniture_SetConversationWaitState
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_Furniture_SetConversationWaitState : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Furniture_SetConversationWaitState");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Furniture_TransitionState
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Furniture_TransitionState : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Furniture_TransitionState");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Furniture_AttemptToReserve
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Furniture_AttemptToReserve : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Furniture_AttemptToReserve");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Furniture_ForceInterest
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Furniture_ForceInterest : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Furniture_ForceInterest");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetAnimationParameter
// 0x0008 (0x0078 - 0x0070)
class UBT_Scr_General_SetAnimationParameter : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetAnimationParameter");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_LockAIState
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_LockAIState : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_LockAIState");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_RequestPrimaryTarget
// 0x0008 (0x0080 - 0x0078)
class UBT_Scr_General_RequestPrimaryTarget : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_RequestPrimaryTarget");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_PromoteQueuedToPrimaryTarget
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_General_PromoteQueuedToPrimaryTarget : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_PromoteQueuedToPrimaryTarget");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_ClearStimulus
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_General_ClearStimulus : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_ClearStimulus");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetBehaviorStateComplete
// 0x0010 (0x0088 - 0x0078)
class UBT_Scr_General_SetBehaviorStateComplete : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetBehaviorStateComplete");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_TriggerChatterEvent
// 0x0008 (0x0080 - 0x0078)
class UBT_Scr_General_TriggerChatterEvent : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_TriggerChatterEvent");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_ClearTargetDetection
// 0x0010 (0x0088 - 0x0078)
class UBT_Scr_General_ClearTargetDetection : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_ClearTargetDetection");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_CancelCompanionCommandAttack
// 0x0008 (0x0080 - 0x0078)
class UBT_Scr_General_CancelCompanionCommandAttack : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_CancelCompanionCommandAttack");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_ChangeCapsuleRadius
// 0x0008 (0x0078 - 0x0070)
class UBT_Scr_General_ChangeCapsuleRadius : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_ChangeCapsuleRadius");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetCanBump
// 0x0008 (0x0078 - 0x0070)
class UBT_Scr_General_SetCanBump : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetCanBump");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_LockAllRotations
// 0x0008 (0x0078 - 0x0070)
class UBT_Scr_General_LockAllRotations : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_LockAllRotations");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SwitchContext
// 0x0008 (0x0080 - 0x0078)
class UBT_Scr_General_SwitchContext : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SwitchContext");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_Crouch
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_Crouch : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_Crouch");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_StartBehaviorStateCountdown
// 0x0008 (0x0080 - 0x0078)
class UBT_Scr_General_StartBehaviorStateCountdown : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_StartBehaviorStateCountdown");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_TurnOffCharacterCollisionToggle
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_TurnOffCharacterCollisionToggle : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_TurnOffCharacterCollisionToggle");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_TurnOffMesh
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_TurnOffMesh : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_TurnOffMesh");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_EnableContinousMovement
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_EnableContinousMovement : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_EnableContinousMovement");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_Teleport
// 0x0010 (0x0088 - 0x0078)
class UBT_Scr_General_Teleport : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_Teleport");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_EnableGodVision
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_EnableGodVision : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_EnableGodVision");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetAlertStateMinDuration
// 0x0008 (0x0080 - 0x0078)
class UBT_Scr_General_SetAlertStateMinDuration : public UBTDecorator_IndianaScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetAlertStateMinDuration");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_RegisterAreaRange
// 0x0008 (0x0078 - 0x0070)
class UBT_Scr_General_RegisterAreaRange : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_RegisterAreaRange");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetBehaviorNavigationSettings
// 0x0010 (0x0080 - 0x0070)
class UBT_Scr_General_SetBehaviorNavigationSettings : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetBehaviorNavigationSettings");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetOverrideBehaviorAnimation
// 0x0008 (0x0078 - 0x0070)
class UBT_Scr_General_SetOverrideBehaviorAnimation : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetOverrideBehaviorAnimation");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetArcing
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_SetArcing : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetArcing");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetTogglableAction
// 0x0010 (0x0080 - 0x0070)
class UBT_Scr_General_SetTogglableAction : public UBTDecorator_IndianaToggleScript
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetTogglableAction");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_ToggleMovementOptimizations
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_ToggleMovementOptimizations : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_ToggleMovementOptimizations");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_DisableNavWalking
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_DisableNavWalking : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_DisableNavWalking");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_SetCowering
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_SetCowering : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_SetCowering");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_Mute
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_Mute : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_Mute");
		return ptr;
	}

};


// Class Indiana.BT_Scr_General_DisableRelavancy
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_General_DisableRelavancy : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_General_DisableRelavancy");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Investigate_NotifyPreMoveWaitCompleted
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Investigate_NotifyPreMoveWaitCompleted : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Investigate_NotifyPreMoveWaitCompleted");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Investigate_EndWaitExit
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Investigate_EndWaitExit : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Investigate_EndWaitExit");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Jump_SetAnimationJumpFlag
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_Jump_SetAnimationJumpFlag : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Jump_SetAnimationJumpFlag");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Jump_LaunchJump
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Jump_LaunchJump : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Jump_LaunchJump");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Jump_SetJumpGravity
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_Jump_SetJumpGravity : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Jump_SetJumpGravity");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Melee_IncrementPattern
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Melee_IncrementPattern : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Melee_IncrementPattern");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Melee_SetIsAttacking
// 0x0000 (0x0070 - 0x0070)
class UBT_Scr_Melee_SetIsAttacking : public UBTDecorator_IndianaToggleScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Melee_SetIsAttacking");
		return ptr;
	}

};


// Class Indiana.BT_Scr_Patrol_SetBehaviorStateComplete
// 0x0000 (0x0078 - 0x0078)
class UBT_Scr_Patrol_SetBehaviorStateComplete : public UBTDecorator_IndianaScript
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BT_Scr_Patrol_SetBehaviorStateComplete");
		return ptr;
	}

};


// Class Indiana.BTService_IndianaBase
// 0x0000 (0x0078 - 0x0078)
class UBTService_IndianaBase : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_IndianaBase");
		return ptr;
	}

};


// Class Indiana.BTService_Chatter
// 0x0008 (0x0080 - 0x0078)
class UBTService_Chatter : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_Chatter");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_TargetLostCover
// 0x0010 (0x0088 - 0x0078)
class UBTService_EventFirer_TargetLostCover : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_TargetLostCover");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_TargetLostRanged
// 0x0020 (0x0098 - 0x0078)
class UBTService_EventFirer_TargetLostRanged : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_TargetLostRanged");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_UnsafeCover
// 0x0020 (0x0098 - 0x0078)
class UBTService_EventFirer_UnsafeCover : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_UnsafeCover");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_UnsafeOccupiedCover
// 0x0008 (0x0080 - 0x0078)
class UBTService_EventFirer_UnsafeOccupiedCover : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_UnsafeOccupiedCover");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_SuspiciousComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_SuspiciousComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_SuspiciousComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_InvestigateComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_InvestigateComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_InvestigateComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_DeactivatedComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_DeactivatedComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_DeactivatedComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_ApproachComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_ApproachComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_ApproachComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_RetreatComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_RetreatComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_RetreatComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_CompanionFollowComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_CompanionFollowComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_CompanionFollowComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_SEComplete
// 0x0008 (0x0080 - 0x0078)
class UBTService_EventFirer_SEComplete : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_SEComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_InvalidSearch
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_InvalidSearch : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_InvalidSearch");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_SearchComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_SearchComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_SearchComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_SearchTargetLost
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_SearchTargetLost : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_SearchTargetLost");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_ConversationComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_ConversationComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_ConversationComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_InvalidMelee
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_InvalidMelee : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_InvalidMelee");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_MeleeWait
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_MeleeWait : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_MeleeWait");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_BlockedLOS
// 0x0008 (0x0080 - 0x0078)
class UBTService_EventFirer_BlockedLOS : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_BlockedLOS");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_IsNotSeen
// 0x0008 (0x0080 - 0x0078)
class UBTService_EventFirer_IsNotSeen : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_IsNotSeen");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_TargetOutsideMaxAbsoluteRange
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_TargetOutsideMaxAbsoluteRange : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_TargetOutsideMaxAbsoluteRange");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_CCMoveToEnterCombatMode
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_CCMoveToEnterCombatMode : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_CCMoveToEnterCombatMode");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_CowerComplete
// 0x0000 (0x0078 - 0x0078)
class UBTService_EventFirer_CowerComplete : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_CowerComplete");
		return ptr;
	}

};


// Class Indiana.BTService_EventFirer_Generic
// 0x0008 (0x0080 - 0x0078)
class UBTService_EventFirer_Generic : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_EventFirer_Generic");
		return ptr;
	}

};


// Class Indiana.BTService_General_FiringPattern
// 0x0048 (0x00C0 - 0x0078)
class UBTService_General_FiringPattern : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0078(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_General_FiringPattern");
		return ptr;
	}

};


// Class Indiana.BTService_General_FocusAt
// 0x0060 (0x00D8 - 0x0078)
class UBTService_General_FocusAt : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0078(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_General_FocusAt");
		return ptr;
	}

};


// Class Indiana.BTService_RequestPrimaryTarget
// 0x0010 (0x0088 - 0x0078)
class UBTService_RequestPrimaryTarget : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_RequestPrimaryTarget");
		return ptr;
	}

};


// Class Indiana.BTService_Search_Chatter
// 0x0000 (0x0080 - 0x0080)
class UBTService_Search_Chatter : public UBTService_Chatter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_Search_Chatter");
		return ptr;
	}

};


// Class Indiana.BTService_Search_UpdateFire
// 0x0000 (0x0078 - 0x0078)
class UBTService_Search_UpdateFire : public UBTService_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_Search_UpdateFire");
		return ptr;
	}

};


// Class Indiana.BTService_SpellTargetService
// 0x0008 (0x0080 - 0x0078)
class UBTService_SpellTargetService : public UBTService_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTService_SpellTargetService");
		return ptr;
	}

};


// Class Indiana.BTTask_IndianaBase
// 0x0018 (0x0090 - 0x0078)
class UBTTask_IndianaBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_IndianaBase");
		return ptr;
	}

};


// Class Indiana.BTTask_Block
// 0x0010 (0x00A0 - 0x0090)
class UBTTask_Block : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_Block");
		return ptr;
	}

};


// Class Indiana.BTTask_Death
// 0x0000 (0x0090 - 0x0090)
class UBTTask_Death : public UBTTask_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_Death");
		return ptr;
	}

};


// Class Indiana.BTTask_Disable
// 0x0078 (0x0108 - 0x0090)
class UBTTask_Disable : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0090(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_Disable");
		return ptr;
	}


	void STATIC_OnRagdollComplete(class UStatusEffect* StatusEffect);
	void STATIC_OnPushComplete(class UStatusEffect* StatusEffect);
	void STATIC_OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void STATIC_OnIdleFinished(class UStatusEffect* StatusEffect);
	void STATIC_OnFreezeComplete(class UStatusEffect* StatusEffect);
	void STATIC_OnDisableFinished(class UStatusEffect* StatusEffect);
};


// Class Indiana.BTTask_Dodge
// 0x0008 (0x0098 - 0x0090)
class UBTTask_Dodge : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_Dodge");
		return ptr;
	}

};


// Class Indiana.BTTask_Indiana_PlayAnimation
// 0x0028 (0x00B8 - 0x0090)
class UBTTask_Indiana_PlayAnimation : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0090(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_Indiana_PlayAnimation");
		return ptr;
	}

};


// Class Indiana.BTTask_IndianaMoveTo
// 0x0038 (0x00C8 - 0x0090)
class UBTTask_IndianaMoveTo : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0090(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_IndianaMoveTo");
		return ptr;
	}

};


// Class Indiana.BTTask_IndianaDirectMoveTo
// 0x0008 (0x00D0 - 0x00C8)
class UBTTask_IndianaDirectMoveTo : public UBTTask_IndianaMoveTo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_IndianaDirectMoveTo");
		return ptr;
	}

};


// Class Indiana.BTTask_IndianaRunEQSQuery
// 0x0030 (0x00C0 - 0x0090)
class UBTTask_IndianaRunEQSQuery : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_IndianaRunEQSQuery");
		return ptr;
	}

};


// Class Indiana.BTTask_IndianaWait
// 0x0018 (0x00A8 - 0x0090)
class UBTTask_IndianaWait : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_IndianaWait");
		return ptr;
	}

};


// Class Indiana.BTTask_MeleeAttack
// 0x0030 (0x00C0 - 0x0090)
class UBTTask_MeleeAttack : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_MeleeAttack");
		return ptr;
	}

};


// Class Indiana.BTTask_RunActions
// 0x0010 (0x00A0 - 0x0090)
class UBTTask_RunActions : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_RunActions");
		return ptr;
	}

};


// Class Indiana.BTTask_RunRandomEQSQuery
// 0x0008 (0x00C8 - 0x00C0)
class UBTTask_RunRandomEQSQuery : public UBTTask_IndianaRunEQSQuery
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_RunRandomEQSQuery");
		return ptr;
	}

};


// Class Indiana.BTTask_Script
// 0x0000 (0x0090 - 0x0090)
class UBTTask_Script : public UBTTask_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_Script");
		return ptr;
	}

};


// Class Indiana.BTTask_SwitchWeapon
// 0x0010 (0x00A0 - 0x0090)
class UBTTask_SwitchWeapon : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_SwitchWeapon");
		return ptr;
	}

};


// Class Indiana.BTTask_TriggerPatrolNodeEvent
// 0x0008 (0x0098 - 0x0090)
class UBTTask_TriggerPatrolNodeEvent : public UBTTask_IndianaBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_TriggerPatrolNodeEvent");
		return ptr;
	}

};


// Class Indiana.BTTask_UseCover
// 0x0000 (0x0090 - 0x0090)
class UBTTask_UseCover : public UBTTask_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_UseCover");
		return ptr;
	}

};


// Class Indiana.BTTask_UseFurniture
// 0x0000 (0x0090 - 0x0090)
class UBTTask_UseFurniture : public UBTTask_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BTTask_UseFurniture");
		return ptr;
	}

};


// Class Indiana.ButtonBase
// 0x09D8 (0x0B08 - 0x0130)
class UButtonBase : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x9D8];                                     // 0x0130(0x09D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ButtonBase");
		return ptr;
	}


	void STATIC_SetSelectedPressedBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetSelectedNormalBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetSelectedHoveredBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetSelectedFocusedBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetSelected(bool bSelected, EFocusCause Cause);
	void STATIC_SetPressedBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetNormalBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetHoveredBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetFocusedBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetFocusable(bool bFocused);
	void STATIC_SetEnabled(bool bInEnabled);
	void STATIC_SetContentColor(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetButtonType(EButtonType TypeIn);
	void STATIC_SetButtonColor(const struct FLinearColor& InBackgroundColor);
	void STATIC_SetAllowSelectionStateChange(bool bAllowChange);
	void STATIC_SetAdvancedHitTexture(class UTexture2D* InTexture);
	void STATIC_SetAdvancedHitAlpha(int InAlpha);
	bool IsSelected();
	bool IsPressed();
	struct FSlateBrush GetSelectedPressedBrush();
	struct FSlateBrush GetSelectedNormalBrush();
	struct FSlateBrush GetSelectedHoveredBrush();
	struct FSlateBrush GetSelectedFocusedBrush();
	struct FSlateBrush GetPressedBrush();
	struct FSlateBrush GetNormalBrush();
	struct FSlateBrush GetHoveredBrush();
	struct FSlateBrush GetFocusedBrush();
	EButtonType GetButtonType();
	bool AllowsSelectionStateChange();
};


// Class Indiana.ButtonBaseContainerWidget
// 0x0038 (0x0258 - 0x0220)
class UButtonBaseContainerWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0220(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ButtonBaseContainerWidget");
		return ptr;
	}


	void STATIC_OnActivatableChange(bool bActivatable);
};


// Class Indiana.ButtonBaseSlot
// 0x0028 (0x0068 - 0x0040)
class UButtonBaseSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ButtonBaseSlot");
		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class Indiana.ButtonLedgerHeader
// 0x0000 (0x0B08 - 0x0B08)
class UButtonLedgerHeader : public UButtonBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ButtonLedgerHeader");
		return ptr;
	}

};


// Class Indiana.IndianaButtonWidgetStyle
// 0x07A0 (0x07D8 - 0x0038)
class UIndianaButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x7A0];                                     // 0x0038(0x07A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaButtonWidgetStyle");
		return ptr;
	}

};


// Class Indiana.CalledShotBehaviorStateInfo
// 0x00C8 (0x0240 - 0x0178)
class UCalledShotBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0178(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CalledShotBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.DecisionTreeEQSRequestData
// 0x0020 (0x0080 - 0x0060)
class UDecisionTreeEQSRequestData : public UBehaviorStateRequestData
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTreeEQSRequestData");
		return ptr;
	}

};


// Class Indiana.CalledShotRequestData
// 0x0000 (0x0080 - 0x0080)
class UCalledShotRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CalledShotRequestData");
		return ptr;
	}

};


// Class Indiana.CombatCameraComponent
// 0x0040 (0x0158 - 0x0118)
class UCombatCameraComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0118(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CombatCameraComponent");
		return ptr;
	}


	void STATIC_EndCamera();
};


// Class Indiana.CalledShotCameraComponent
// 0x0098 (0x01F0 - 0x0158)
class UCalledShotCameraComponent : public UCombatCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0158(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CalledShotCameraComponent");
		return ptr;
	}

};


// Class Indiana.CalledShotData
// 0x0178 (0x01B0 - 0x0038)
class UCalledShotData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0038(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CalledShotData");
		return ptr;
	}

};


// Class Indiana.CartInfoWidget
// 0x00B0 (0x0358 - 0x02A8)
class UCartInfoWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x02A8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CartInfoWidget");
		return ptr;
	}

};


// Class Indiana.CastSpellEventEffect
// 0x0008 (0x0038 - 0x0030)
class UCastSpellEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CastSpellEventEffect");
		return ptr;
	}

};


// Class Indiana.CastSpellStatusEffect
// 0x0010 (0x0198 - 0x0188)
class UCastSpellStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CastSpellStatusEffect");
		return ptr;
	}

};


// Class Indiana.StatsSkillButtonEntryBase
// 0x0170 (0x0418 - 0x02A8)
class UStatsSkillButtonEntryBase : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x02A8(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatsSkillButtonEntryBase");
		return ptr;
	}


	void STATIC_UpdateButtonBrush();
};


// Class Indiana.CategoryButtonEntryWidget
// 0x0028 (0x0440 - 0x0418)
class UCategoryButtonEntryWidget : public UStatsSkillButtonEntryBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0418(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CategoryButtonEntryWidget");
		return ptr;
	}


	void STATIC_OnCategoryUnhoveredUnfocused();
};


// Class Indiana.CauseDamageReticleWidget
// 0x0038 (0x02E0 - 0x02A8)
class UCauseDamageReticleWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CauseDamageReticleWidget");
		return ptr;
	}


	void STATIC_ShowWeakAnim();
	void STATIC_ShowKillAnim();
	void STATIC_ShowHitAnim();
	void STATIC_OnCauseDamage(const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.CCAppearancePageWidget
// 0x0108 (0x03B0 - 0x02A8)
class UCCAppearancePageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x02A8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCAppearancePageWidget");
		return ptr;
	}


	void STATIC_SetCharacterDefaults();
	void STATIC_RandomizeCharacter();
	void STATIC_OnProgressToNextPage();
	void STATIC_OnExpandableAreaChanged(class UExpandableAreaBase* AreaBaseWidget, bool bIsExpanded);
	struct FEventReply OnBorderMouseDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
};


// Class Indiana.CCAptitudeListEntry
// 0x0040 (0x02E8 - 0x02A8)
class UCCAptitudeListEntry : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCAptitudeListEntry");
		return ptr;
	}

};


// Class Indiana.CCAptitudeListWidget
// 0x0028 (0x02D0 - 0x02A8)
class UCCAptitudeListWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCAptitudeListWidget");
		return ptr;
	}

};


// Class Indiana.CCAptitudePageWidget
// 0x0088 (0x0330 - 0x02A8)
class UCCAptitudePageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x02A8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCAptitudePageWidget");
		return ptr;
	}

};


// Class Indiana.CCAptitudeSummaryWidget
// 0x0018 (0x02C0 - 0x02A8)
class UCCAptitudeSummaryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCAptitudeSummaryWidget");
		return ptr;
	}

};


// Class Indiana.CCAttributeSummaryWidget
// 0x0018 (0x02C0 - 0x02A8)
class UCCAttributeSummaryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCAttributeSummaryWidget");
		return ptr;
	}

};


// Class Indiana.CCCharacterCustomizationBaseWdgt
// 0x0098 (0x0340 - 0x02A8)
class UCCCharacterCustomizationBaseWdgt : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x02A8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCCharacterCustomizationBaseWdgt");
		return ptr;
	}

};


// Class Indiana.CCCharacterSummaryPageWidget
// 0x0160 (0x0408 - 0x02A8)
class UCCCharacterSummaryPageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x02A8(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCCharacterSummaryPageWidget");
		return ptr;
	}

};


// Class Indiana.CCFacialCustomizationWidget
// 0x0060 (0x03A0 - 0x0340)
class UCCFacialCustomizationWidget : public UCCCharacterCustomizationBaseWdgt
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0340(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCFacialCustomizationWidget");
		return ptr;
	}

};


// Class Indiana.CCFeaturesCustomizationWidget
// 0x0000 (0x0340 - 0x0340)
class UCCFeaturesCustomizationWidget : public UCCCharacterCustomizationBaseWdgt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCFeaturesCustomizationWidget");
		return ptr;
	}

};


// Class Indiana.CCGenderSelectionWidget
// 0x0040 (0x02E8 - 0x02A8)
class UCCGenderSelectionWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCGenderSelectionWidget");
		return ptr;
	}

};


// Class Indiana.CCNameSelectionWidget
// 0x0050 (0x02F8 - 0x02A8)
class UCCNameSelectionWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCNameSelectionWidget");
		return ptr;
	}

};


// Class Indiana.CCPerksPageWidget
// 0x0178 (0x0420 - 0x02A8)
class UCCPerksPageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x02A8(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCPerksPageWidget");
		return ptr;
	}

};


// Class Indiana.CharacterSkillsBasePage
// 0x0130 (0x03D8 - 0x02A8)
class UCharacterSkillsBasePage : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x02A8(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterSkillsBasePage");
		return ptr;
	}

};


// Class Indiana.CCSkillsPageWidget
// 0x0080 (0x0458 - 0x03D8)
class UCCSkillsPageWidget : public UCharacterSkillsBasePage
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03D8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCSkillsPageWidget");
		return ptr;
	}


	void STATIC_OnUserScrolled(float ScrollAmount);
};


// Class Indiana.CCSkillsSummaryCategoryWidget
// 0x0018 (0x02C0 - 0x02A8)
class UCCSkillsSummaryCategoryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCSkillsSummaryCategoryWidget");
		return ptr;
	}

};


// Class Indiana.CCSkillsSummaryListWidget
// 0x0010 (0x02B8 - 0x02A8)
class UCCSkillsSummaryListWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCSkillsSummaryListWidget");
		return ptr;
	}

};


// Class Indiana.CCSkillSummaryDetailWidget
// 0x0020 (0x02C8 - 0x02A8)
class UCCSkillSummaryDetailWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCSkillSummaryDetailWidget");
		return ptr;
	}

};


// Class Indiana.CCSkillSummaryWidget
// 0x0008 (0x02B0 - 0x02A8)
class UCCSkillSummaryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CCSkillSummaryWidget");
		return ptr;
	}

};


// Class Indiana.Chair
// 0x0038 (0x03D0 - 0x0398)
class AChair : public AFurnitureActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0398(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Chair");
		return ptr;
	}

};


// Class Indiana.CharacterCreationData
// 0x0020 (0x0058 - 0x0038)
class UCharacterCreationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterCreationData");
		return ptr;
	}

};


// Class Indiana.CharacterCreationMasterWidget
// 0x0100 (0x03B0 - 0x02B0)
class UCharacterCreationMasterWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x02B0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterCreationMasterWidget");
		return ptr;
	}


	void STATIC_PlayPartTwoOutroMovie(bool bWasSkipped);
	void STATIC_OnPageBack();
	void STATIC_OnOutroMovieTwoComplete(bool bWasSkipped);
	void STATIC_OnOutroMovieStarted();
	void STATIC_OnOutroMoviePartTwoComplete(bool bWasSkipped);
	void STATIC_OnOutroMoviePartOneComplete(bool bWasSkipped);
	void STATIC_OnIntroMovieCompleteImpl(bool bWasSkipped);
	void STATIC_OnIntroMovieComplete(bool bWasSkipped);
	void STATIC_OnIntroAnimSequenceComplete();
	void STATIC_OnFadeOutContents();
	void STATIC_OnFadeInContents();
	void STATIC_OnCharacterCreationUIStart();
};


// Class Indiana.DeathClass
// 0x00F0 (0x0120 - 0x0030)
class UDeathClass : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathClass");
		return ptr;
	}


	void STATIC_Tick(float Delta);
	class UAkAudioEvent* FindAudioEvent(const struct FGameplayTag& DeathAudioEvent);
	void STATIC_FindAndPostAudioEvent(const struct FGameplayTag& DeathAudioEvent);
	void STATIC_ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent);
	void STATIC_Execute(class UCharacterDeathComponent* InDeathComponent);
};


// Class Indiana.DeathComponent
// 0x0018 (0x0130 - 0x0118)
class UDeathComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathComponent");
		return ptr;
	}


	void STATIC_DeathComplete();
};


// Class Indiana.CharacterDeathComponent
// 0x01C0 (0x02F0 - 0x0130)
class UCharacterDeathComponent : public UDeathComponent
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0130(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterDeathComponent");
		return ptr;
	}


	void STATIC_StoreDeathImpact(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName);
	class UMaterialInstanceDynamic* SpawnAshPile(class UStaticMesh* Mesh, class UMaterialInterface* LootablePileMaterial);
	void STATIC_RagdollCharacter(bool bIgnoreDeathMontages);
	void STATIC_OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void STATIC_HideProps();
	void STATIC_HideAppearanceMeshes();
	void STATIC_GibCharacter();
	void STATIC_DetachImpactFx();
	struct FVector CalcImpactVector();
	void STATIC_BreakBone();
	void STATIC_BreakAllBones();
	void STATIC_AttachGoreCaps();
	void STATIC_AttachAllGoreCaps();
};


// Class Indiana.CharacterDeathImpulse
// 0x0008 (0x0040 - 0x0038)
class UCharacterDeathImpulse : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterDeathImpulse");
		return ptr;
	}

};


// Class Indiana.CharacterDeathData
// 0x0030 (0x0068 - 0x0038)
class UCharacterDeathData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterDeathData");
		return ptr;
	}

};


// Class Indiana.CharacterDerivedStatsWidget
// 0x0078 (0x0320 - 0x02A8)
class UCharacterDerivedStatsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x02A8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterDerivedStatsWidget");
		return ptr;
	}

};


// Class Indiana.LedgerDescriptionPanel
// 0x0020 (0x02C8 - 0x02A8)
class ULedgerDescriptionPanel : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LedgerDescriptionPanel");
		return ptr;
	}

};


// Class Indiana.CharacterDescriptionPanel
// 0x0048 (0x0310 - 0x02C8)
class UCharacterDescriptionPanel : public ULedgerDescriptionPanel
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterDescriptionPanel");
		return ptr;
	}

};


// Class Indiana.CharacterDetailsWidget
// 0x0038 (0x02E0 - 0x02A8)
class UCharacterDetailsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterDetailsWidget");
		return ptr;
	}

};


// Class Indiana.CharacterInfoComponent
// 0x02C0 (0x03D8 - 0x0118)
class UCharacterInfoComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x2C0];                                     // 0x0118(0x02C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterInfoComponent");
		return ptr;
	}


	void STATIC_UnlockPerksWithRandomLevels_Debug();
	void STATIC_SetLevel(int NewLevel);
	void STATIC_PerkRemove(const class FString& PerkName);
	void STATIC_PerkPurchase(const class FString& PerkName);
	void STATIC_PerkPointsAdd(int Value);
	void STATIC_OnWeaponEndUnequip(class UWeapon* Weapon);
	void STATIC_OnWeaponEndEquip(class UWeapon* Weapon);
	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnCompanionRegistered(class AIndianaAiCharacter* Companion, bool bRegister);
	class FString GetName();
	int GetLevelScaledByWorld();
	int GetLevelScaledAtLocation(const struct FVector& Location);
	int GetLevel();
	EGender GetGender();
	ECreatureXPType GetCreatureXPType();
};


// Class Indiana.InventoryComponent
// 0x0120 (0x0238 - 0x0118)
class UInventoryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0118(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryComponent");
		return ptr;
	}


	bool TransferItemsBetweenActorsByTag(class AActor* SourceActor, class AActor* DestinationActor, const struct FGameplayTagContainer& MatchTags, int Count, bool bPotentialTheft);
	void STATIC_ShowItemRemovedNotification(class UClass* ItemType, int Count);
	void STATIC_ShowItemGainedNotification(class UClass* ItemType, int Count);
	bool RemoveItemsFromActorByTag(class AActor* Actor, const struct FGameplayTagContainer& MatchTags, int Count);
	bool RemoveItemFromActor(class AActor* Actor, class UClass* ItemType, int Count);
	void STATIC_RemoveCurrency(int Amount, bool bVendorInteraction);
	bool IsEmpty();
	bool HasItemCountOnActorByTag(class AActor* Actor, const struct FGameplayTagContainer& MatchTags, int Count);
	bool HasItemCountOnActor(class AActor* Actor, class UClass* ItemType, int Count);
	int GetItemCountOnActor(class AActor* Actor, class UClass* ItemType);
	void STATIC_DebugCreateInventory(int NumToAddPerItem, int Skip);
	bool ContainsLoot();
	void STATIC_AddLootFromTable(class ULootTableData* LootTable);
	void STATIC_AddItemToActor(class AActor* Actor, class UClass* ItemType, int Count, bool bLootable);
	void STATIC_AddItemDebug(const struct FName& ItemName, uint32_t Count);
	void STATIC_AddCurrency(int Amount, bool bLootable);
};


// Class Indiana.CharacterInventoryComponent
// 0x0038 (0x0270 - 0x0238)
class UCharacterInventoryComponent : public UInventoryComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0238(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterInventoryComponent");
		return ptr;
	}

};


// Class Indiana.CharacterMedKitWidget
// 0x00D0 (0x0378 - 0x02A8)
class UCharacterMedKitWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x02A8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterMedKitWidget");
		return ptr;
	}


	void STATIC_UpdateDrugSlots(int ConsumablesUsed);
	void STATIC_OnInventoryItemAddedRemoved(const struct FItemStack& ItemStack);
	void STATIC_OnHealthChanged(float HealthChange, class AActor* InInstigator);
	void STATIC_InhalerModeChanged(int NewSetting);
	void STATIC_AbilityControlModeChanged(int NewSetting);
};


// Class Indiana.CharacterNameplateWidget
// 0x0018 (0x02C0 - 0x02A8)
class UCharacterNameplateWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterNameplateWidget");
		return ptr;
	}


	void STATIC_OnLevelChanged(int NewLevel);
};


// Class Indiana.CharacterOverviewWidget
// 0x01F8 (0x04A0 - 0x02A8)
class UCharacterOverviewWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x02A8(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterOverviewWidget");
		return ptr;
	}


	void STATIC_OnTTDDisplayModeChanged(int TTDDisplayModeIn);
	void STATIC_OnSurvivalModeChanged(bool bSurvivalBarVisibilityIn);
	void STATIC_OnSkillUpdated(ESkill Skill, int NewValue);
	void STATIC_OnPreventTTDChanged(bool bPreventTTD);
	void STATIC_OnPlayerStatusBarModeChanged(int ModeIn);
	void STATIC_OnPlayerCombatStateChange(bool IsPlayerInCombat);
	void STATIC_OnInhalerModeChanged(int InhalerModeIn);
	void STATIC_OnHUDVisibilityChanged(bool bHUDVisibility);
	void STATIC_OnDodgeDisplayModeChanged(int DodgeDisplayModeIn);
	void STATIC_OnDodged(EDodgeDirection EDodgeDirection);
	void STATIC_OnDifficultyChanged(EGameDifficulty DifficultyIn);
	void STATIC_OnCombatStateChange(bool bCombatIn, bool bRestoring);
	void STATIC_OnAbilityControlModeChanged(int AbilityControlModeIn);
	void STATIC_HideTTDMeter(bool bHide);
};


// Class Indiana.CharacterLibrary
// 0x0000 (0x0030 - 0x0030)
class UCharacterLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterLibrary");
		return ptr;
	}


	int GetSkillValue(class AActor* Actor, ESkill Skill);
	int GetAttributeValue(class AActor* Actor, EAttribute Attribute);
};


// Class Indiana.CharacterScalingComponent
// 0x0000 (0x0118 - 0x0118)
class UCharacterScalingComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterScalingComponent");
		return ptr;
	}

};


// Class Indiana.ShoutComponent
// 0x0020 (0x0138 - 0x0118)
class UShoutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShoutComponent");
		return ptr;
	}

};


// Class Indiana.CharacterShoutComponent
// 0x0060 (0x0198 - 0x0138)
class UCharacterShoutComponent : public UShoutComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0138(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterShoutComponent");
		return ptr;
	}


	void STATIC_OnCombatStateChange(bool bIsInCombat, bool bRestoring);
	void STATIC_OnCharacterDeath(const struct FCauseDamageInfo& CDI);
	void STATIC_OnAlertStateChange(class AActor* TargetActor, EAlertState PreviousAlertState, EAlertState TargetAlertState, bool bRestoring);
};


// Class Indiana.CharacterSkillsDescriptionPanel
// 0x0010 (0x0320 - 0x0310)
class UCharacterSkillsDescriptionPanel : public UCharacterDescriptionPanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterSkillsDescriptionPanel");
		return ptr;
	}

};


// Class Indiana.CharacterStatusEffectsWidget
// 0x0038 (0x02E0 - 0x02A8)
class UCharacterStatusEffectsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharacterStatusEffectsWidget");
		return ptr;
	}


	void STATIC_OnRemoveStatusEffect(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
	void STATIC_OnAddStatusEffect(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
};


// Class Indiana.FlowChart
// 0x0088 (0x00B8 - 0x0030)
class UFlowChart : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FlowChart");
		return ptr;
	}

};


// Class Indiana.Chatter
// 0x0070 (0x0128 - 0x00B8)
class UChatter : public UFlowChart
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Chatter");
		return ptr;
	}

};


// Class Indiana.ChatterBundleSet
// 0x0018 (0x0050 - 0x0038)
class UChatterBundleSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ChatterBundleSet");
		return ptr;
	}

};


// Class Indiana.ChatterEventEffect
// 0x0008 (0x0038 - 0x0030)
class UChatterEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ChatterEventEffect");
		return ptr;
	}

};


// Class Indiana.GameDataReference
// 0x0018 (0x0050 - 0x0038)
class UGameDataReference : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GameDataReference");
		return ptr;
	}

};


// Class Indiana.ChatterEventsGameDataReference
// 0x0000 (0x0050 - 0x0050)
class UChatterEventsGameDataReference : public UGameDataReference
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ChatterEventsGameDataReference");
		return ptr;
	}

};


// Class Indiana.ChatterGameHelpers
// 0x0000 (0x0030 - 0x0030)
class UChatterGameHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ChatterGameHelpers");
		return ptr;
	}


	void STATIC_PlayChatterEvent(class AActor* Speaker, EChatterEventType ChatterEvent);
};


// Class Indiana.ChatterManager
// 0x6FD98 (0x6FDC8 - 0x0030)
class UChatterManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6FD98];                                   // 0x0030(0x6FD98) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ChatterManager");
		return ptr;
	}


	void STATIC_OnConversationBegin(class UConversationInstance* ConversationInstance);
};


// Class Indiana.FlowChartPlayer
// 0x0090 (0x00C0 - 0x0030)
class UFlowChartPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FlowChartPlayer");
		return ptr;
	}

};


// Class Indiana.ChatterPlayer
// 0x00A8 (0x0168 - 0x00C0)
class UChatterPlayer : public UFlowChartPlayer
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00C0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ChatterPlayer");
		return ptr;
	}

};


// Class Indiana.CheckBoxWidget
// 0x0030 (0x02D8 - 0x02A8)
class UCheckBoxWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CheckBoxWidget");
		return ptr;
	}


	void STATIC_UpdateCheckBoxSize(int FontSizeModifier);
};


// Class Indiana.CineCombatCameraParams
// 0x0140 (0x0170 - 0x0030)
class UCineCombatCameraParams : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0030(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CineCombatCameraParams");
		return ptr;
	}

};


// Class Indiana.CineCombatCamera
// 0x0050 (0x03D8 - 0x0388)
class ACineCombatCamera : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CineCombatCamera");
		return ptr;
	}

};


// Class Indiana.CineCombatSequenceActor
// 0x0010 (0x0440 - 0x0430)
class ACineCombatSequenceActor : public ALevelSequenceActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CineCombatSequenceActor");
		return ptr;
	}

};


// Class Indiana.CineCombatSequencePlayer
// 0x0040 (0x08B0 - 0x0870)
class UCineCombatSequencePlayer : public ULevelSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0870(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CineCombatSequencePlayer");
		return ptr;
	}

};


// Class Indiana.CinematicPlayerWidget
// 0x0040 (0x02F0 - 0x02B0)
class UCinematicPlayerWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CinematicPlayerWidget");
		return ptr;
	}


	void STATIC_SkipCinematic();
	void STATIC_PlayerInputDetected();
	void STATIC_PlayCinematic(class UMovieSceneSequencePlayer* Cinematic);
	void STATIC_PauseCinematic();
	void STATIC_InitiateFadeOut();
	void STATIC_InitiateFadeIn();
	void STATIC_FinishCinematic();
};


// Class Indiana.ClearThreatStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UClearThreatStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ClearThreatStatusEffect");
		return ptr;
	}

};


// Class Indiana.CodexDataAsset
// 0x0010 (0x0048 - 0x0038)
class UCodexDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CodexDataAsset");
		return ptr;
	}

};


// Class Indiana.CodexJournal
// 0x00C8 (0x0370 - 0x02A8)
class UCodexJournal : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x02A8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CodexJournal");
		return ptr;
	}


	void STATIC_OnAudioLogUnhoveredCB(class UButtonBase* ButtonUnhovered);
	void STATIC_OnAudioLogUnfocusedCB(class UButtonBase* ButtonUnfocused);
	void STATIC_OnAudioLogListEntryAdded(class UGenericCollapsableListEntry* ListEntry, class UAudioLogDataAsset* DataAsset);
	void STATIC_OnAudioLogHoveredCB(class UButtonBase* ButtonHovered);
	void STATIC_OnAudioLogFocusedCB(class UButtonBase* ButtonFocused);
};


// Class Indiana.ComboBoxStringBase
// 0x0A98 (0x0BB0 - 0x0118)
class UComboBoxStringBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xA98];                                     // 0x0118(0x0A98) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComboBoxStringBase");
		return ptr;
	}


	void STATIC_SetSelectedOption(const class FString& Option);
	bool RemoveOption(const class FString& Option);
	void STATIC_RefreshOptions();
	void STATIC_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void STATIC_OnOpeningEvent__DelegateSignature();
	int GetSelectedOptionIndex();
	class FString GetSelectedOption();
	int GetOptionCount();
	class FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const class FString& Option);
	void STATIC_ClearSelection();
	void STATIC_ClearOptions();
	void STATIC_AddOption(const class FString& Option);
};


// Class Indiana.IndianaComboBoxWidgetStyle
// 0x08E0 (0x0918 - 0x0038)
class UIndianaComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x8E0];                                     // 0x0038(0x08E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Indiana.CommandPointWidget
// 0x0030 (0x02D8 - 0x02A8)
class UCommandPointWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CommandPointWidget");
		return ptr;
	}

};


// Class Indiana.CompanionBehaviorOptionWidget
// 0x0030 (0x02D8 - 0x02A8)
class UCompanionBehaviorOptionWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionBehaviorOptionWidget");
		return ptr;
	}

};


// Class Indiana.CompanionBehaviorsWidget
// 0x0038 (0x02E0 - 0x02A8)
class UCompanionBehaviorsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionBehaviorsWidget");
		return ptr;
	}

};


// Class Indiana.CompanionCommandComponent
// 0x02D8 (0x03F0 - 0x0118)
class UCompanionCommandComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x0118(0x02D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandComponent");
		return ptr;
	}


	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnCalledShotCameraStep(class AActor* Attacker, ECalledShotCameraStep OldCameraStep, ECalledShotCameraStep NewCameraStep, bool bCloseRange);
	void STATIC_FillMeter();
	void STATIC_CompanionCommandInfinite();
};


// Class Indiana.TimedBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class UTimedBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TimedBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CompanionCommandTimedBehaviorStateInfo
// 0x0000 (0x0128 - 0x0128)
class UCompanionCommandTimedBehaviorStateInfo : public UTimedBehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandTimedBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CompanionCommandFlankBehaviorStateInfo
// 0x0000 (0x0128 - 0x0128)
class UCompanionCommandFlankBehaviorStateInfo : public UCompanionCommandTimedBehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandFlankBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CompanionCommandFlankRequestData
// 0x0000 (0x0068 - 0x0068)
class UCompanionCommandFlankRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandFlankRequestData");
		return ptr;
	}

};


// Class Indiana.CompanionCommandMoveToBehaviorStateInfo
// 0x0008 (0x0180 - 0x0178)
class UCompanionCommandMoveToBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandMoveToBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CompanionCommandMoveToRequestData
// 0x0000 (0x0080 - 0x0080)
class UCompanionCommandMoveToRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandMoveToRequestData");
		return ptr;
	}

};


// Class Indiana.CompanionCommandSuppressBehaviorStateInfo
// 0x0000 (0x0128 - 0x0128)
class UCompanionCommandSuppressBehaviorStateInfo : public UCompanionCommandTimedBehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandSuppressBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CompanionCommandSuppressRequestData
// 0x0000 (0x0068 - 0x0068)
class UCompanionCommandSuppressRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionCommandSuppressRequestData");
		return ptr;
	}

};


// Class Indiana.CompanionComponent
// 0x0150 (0x0268 - 0x0118)
class UCompanionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0118(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionComponent");
		return ptr;
	}


	void STATIC_UpdateCompanionState();
	void STATIC_SetOffering(class UClass* PickupClass);
	void STATIC_OnPlayerExitedAcknowledgeZone(class AActor* ZoneOwner);
	void STATIC_OnPlayerEnteredAcknowledgeZone(class AActor* ZoneOwner);
	void STATIC_OnCombatStateChange(bool bIsInCombat, bool bRestoring);
	void STATIC_DropOffering();
};


// Class Indiana.CompanionDetails
// 0x0018 (0x02C0 - 0x02A8)
class UCompanionDetails : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionDetails");
		return ptr;
	}

};


// Class Indiana.CompanionEntryWidget
// 0x0040 (0x02E8 - 0x02A8)
class UCompanionEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionEntryWidget");
		return ptr;
	}

};


// Class Indiana.CompanionEquipmentBarWidget
// 0x0170 (0x0418 - 0x02A8)
class UCompanionEquipmentBarWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x02A8(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionEquipmentBarWidget");
		return ptr;
	}

};


// Class Indiana.CompanionEquipmentWidget
// 0x01A8 (0x04F0 - 0x0348)
class UCompanionEquipmentWidget : public UBaseInventoryItemManagement
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0348(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionEquipmentWidget");
		return ptr;
	}


	void STATIC_OnItemRemovedFromPlayerInventory(const struct FItemStack& ItemStack);
	void STATIC_OnItemAddedToPlayerInventory(const struct FItemStack& ItemStack);
	void STATIC_OnDragDrop_EquipItem(class UIndianaDragDropOperation* Operation);
};


// Class Indiana.CompanionFollowBehaviorStateInfo
// 0x0018 (0x0138 - 0x0120)
class UCompanionFollowBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0120(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollowBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CompanionFollowRequestData
// 0x0008 (0x0070 - 0x0068)
class UCompanionFollowRequestData : public UDecisionTreeEmptyRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionFollowRequestData");
		return ptr;
	}

};


// Class Indiana.CompanionManager
// 0x0200 (0x0230 - 0x0030)
class UCompanionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0030(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionManager");
		return ptr;
	}


	void STATIC_SetCompanionWantsToTalk(ESpecialObsidianID Companion, bool bWantsToTalk);
	bool IsCompanionUnlocked(ESpecialObsidianID Companion);
	bool IsCompanionInRequestedParty(ESpecialObsidianID Companion);
	bool IsCompanionInActiveParty(ESpecialObsidianID Companion);
	bool IsCompanionDismissed(ESpecialObsidianID Companion);
	bool HasPlayerUnlockedCompanions();
	bool GetCompanionWantsToTalk(ESpecialObsidianID Companion);
	float GetCompanionMorale(ESpecialObsidianID Companion);
	struct FGuid GetCompanionGuid(ESpecialObsidianID SpecialID);
	void STATIC_DebugUnlockCompanion(ESpecialObsidianID Companion);
	void STATIC_DebugAddCompanionMorale(unsigned char Companion, float MoraleAmount, bool bPositiveMorale);
	void STATIC_ChangeCompanionMorale(ESpecialObsidianID Companion, EMoraleContribution Contribution, float MoraleAmount, bool bPositiveMorale, bool bOnlyActivePartyMembers);
};


// Class Indiana.CompanionManagerComponent
// 0x00B0 (0x01C8 - 0x0118)
class UCompanionManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0118(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionManagerComponent");
		return ptr;
	}


	void STATIC_SetCompanionOutlineMode(ECompanionOutlineMode OutlineMode);
	void STATIC_SendCharacterToShip(class AIndianaAiCharacter* Companion);
	void STATIC_ScriptRemoveCompanionFromParty(class AIndianaAiCharacter* Companion);
	void STATIC_ScriptAddCompanionToParty(class AIndianaAiCharacter* Companion);
	void STATIC_OnRestartController(class AIndianaAiCharacter* Character);
	void STATIC_OnPlayerLevelChanged(int PlayerLevel);
	void STATIC_OnPlayerIndividualDetected(class AIndianaAiCharacter* Detector);
	void STATIC_OnPlayerCinematicModeChanged(bool bCinematicModeEnabled);
	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnKill(class AActor* Victim, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnDifficultyChanged(EGameDifficulty NewDifficulty);
	void STATIC_OnDeath(const struct FCauseDamageInfo& DamageInfo);
	void STATIC_OnCauseDamage(const struct FCauseDamageInfo& CauseDamageInfo);
	bool IsPartyFull();
	class AIndianaAiCharacter* GetCompanionFromSlot(ECompanionSlot Slot);
	class AIndianaAiCharacter* GetActiveCompanionWithSpecialID(ESpecialObsidianID SpecialID);
	void STATIC_DebugKillCompanions();
	void STATIC_AddPerkPointsToCompanions(int Points);
};


// Class Indiana.CompanionMeterStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UCompanionMeterStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionMeterStatusEffect");
		return ptr;
	}

};


// Class Indiana.CompanionMoraleEvent
// 0x0028 (0x0058 - 0x0030)
class UCompanionMoraleEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionMoraleEvent");
		return ptr;
	}

};


// Class Indiana.CompanionMoraleStatusEffect
// 0x0010 (0x0198 - 0x0188)
class UCompanionMoraleStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionMoraleStatusEffect");
		return ptr;
	}

};


// Class Indiana.CompanionMoveToWidget
// 0x0008 (0x02B0 - 0x02A8)
class UCompanionMoveToWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionMoveToWidget");
		return ptr;
	}


	void STATIC_OnNewLocation();
	void STATIC_OnMoveToCancelled();
};


// Class Indiana.CompanionMoveToWidgetComponent
// 0x0020 (0x07A0 - 0x0780)
class UCompanionMoveToWidgetComponent : public UIndianaWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0780(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionMoveToWidgetComponent");
		return ptr;
	}

};


// Class Indiana.CompanionOverviewWidget
// 0x00C0 (0x0368 - 0x02A8)
class UCompanionOverviewWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x02A8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionOverviewWidget");
		return ptr;
	}


	void STATIC_OnNoStatusEffect();
	void STATIC_OnMadeInactive();
	void STATIC_OnMadeActive();
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnFirstStatusEffect();
	void STATIC_OnCompanionStatusModeChanged(int ModeIn);
	void STATIC_OnCombatStateChanged(bool bCombatIn, bool bRestoring);
};


// Class Indiana.CompanionPerksWidget
// 0x00B8 (0x0360 - 0x02A8)
class UCompanionPerksWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x02A8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionPerksWidget");
		return ptr;
	}

};


// Class Indiana.CompanionPositionComponent
// 0x0178 (0x0290 - 0x0118)
class UCompanionPositionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0118(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionPositionComponent");
		return ptr;
	}


	void STATIC_RequestForceTeleportCompanions(const struct FVector& Position1, const struct FVector& Position2);
	void STATIC_OnStealthChange(bool bStealthed);
	void STATIC_OnPlayerConversationChange(class UConversationInstance* Instance, bool bEntered);
	void STATIC_OnOccupiedElevatorMove(class AElevator* Elevator);
	void STATIC_OnOccupiedElevatorChange(class AElevator* Elevator, bool bOccupied);
};


// Class Indiana.CompanionPositionData
// 0x0048 (0x0078 - 0x0030)
class UCompanionPositionData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionPositionData");
		return ptr;
	}

};


// Class Indiana.CompanionScreenWrapperWidget
// 0x0040 (0x02F0 - 0x02B0)
class UCompanionScreenWrapperWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionScreenWrapperWidget");
		return ptr;
	}


	void STATIC_FadeInSharedItemViewer();
	void STATIC_AddItemToItemViewer(const struct FItemStack& ItemStack);
};


// Class Indiana.CompanionSelectionWidget
// 0x00A8 (0x0358 - 0x02B0)
class UCompanionSelectionWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x02B0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionSelectionWidget");
		return ptr;
	}


	void STATIC_SetCharacterSelected(int CharacterIndex, bool bSelected);
	void STATIC_SetCharacterAvailable(int CharacterIndex, bool bUsable);
	void STATIC_SelectionFailed(int CharacterIndex);
};


// Class Indiana.CompanionSkillSummary
// 0x0058 (0x0300 - 0x02A8)
class UCompanionSkillSummary : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionSkillSummary");
		return ptr;
	}

};


// Class Indiana.CompanionStatSummary
// 0x0048 (0x02F0 - 0x02A8)
class UCompanionStatSummary : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionStatSummary");
		return ptr;
	}

};


// Class Indiana.CompanionStatsWidget
// 0x00B0 (0x0358 - 0x02A8)
class UCompanionStatsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x02A8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionStatsWidget");
		return ptr;
	}

};


// Class Indiana.CompanionsWidget
// 0x00B0 (0x0358 - 0x02A8)
class UCompanionsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x02A8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompanionsWidget");
		return ptr;
	}

};


// Class Indiana.CompassEntryData
// 0x0050 (0x0088 - 0x0038)
class UCompassEntryData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompassEntryData");
		return ptr;
	}

};


// Class Indiana.CompassEntryWidget
// 0x0028 (0x0248 - 0x0220)
class UCompassEntryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0220(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompassEntryWidget");
		return ptr;
	}


	void STATIC_InitProperties(const struct FEntryData& EntryData);
};


// Class Indiana.CompassWidget
// 0x0DF0 (0x1098 - 0x02A8)
class UCompassWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xDF0];                                     // 0x02A8(0x0DF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompassWidget");
		return ptr;
	}


	void STATIC_OnHUDVisibilityChanged(bool bHUDVisible);
	void STATIC_OnEnemyRemoved(class AIndianaAiCharacter* Detector);
	void STATIC_OnEnemyAdded(class AIndianaAiCharacter* Detector);
	void STATIC_OnCompassSettingChanged(int CompassVisibilityModeIn);
};


// Class Indiana.CompensateForTTDStatusEffect
// 0x0018 (0x01A0 - 0x0188)
class UCompensateForTTDStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0188(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CompensateForTTDStatusEffect");
		return ptr;
	}

};


// Class Indiana.ComponentDebugInterface
// 0x0000 (0x0030 - 0x0030)
class UComponentDebugInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComponentDebugInterface");
		return ptr;
	}

};


// Class Indiana.ComputerTerminal
// 0x0178 (0x0500 - 0x0388)
class AComputerTerminal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0388(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComputerTerminal");
		return ptr;
	}


	void STATIC_UnlockComputer(bool bFireComputerUnlockedEvent);
	void STATIC_LockComputer(bool bFireComputerLockedEvent);
	unsigned char GetExactHackDifficulty();
	EComputerLockState GetCurrentState();
	EComputerTerminalResult AttemptUse(class AActor* Initiator, bool bForce);
	EComputerTerminalResult AttemptUnlock(class AActor* Initiator);
};


// Class Indiana.InteractableAudioComponent
// 0x0070 (0x0188 - 0x0118)
class UInteractableAudioComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0118(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InteractableAudioComponent");
		return ptr;
	}


	void STATIC_StopCustomEventEffect(const struct FName& Name);
	void STATIC_PlayCustomEventEffect(const struct FName& Name);
};


// Class Indiana.ComputerTerminalAudioComponent
// 0x0050 (0x01D8 - 0x0188)
class UComputerTerminalAudioComponent : public UInteractableAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0188(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComputerTerminalAudioComponent");
		return ptr;
	}


	void STATIC_Stop(EComputerTerminalEventType Type);
	void STATIC_Play(EComputerTerminalEventType Type);
};


// Class Indiana.ComputerTerminalContainerWidget
// 0x0028 (0x02D0 - 0x02A8)
class UComputerTerminalContainerWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComputerTerminalContainerWidget");
		return ptr;
	}


	void STATIC_OnConversationStateChange(bool bHasStarted);
};


// Class Indiana.ComputerTerminalHeaderData
// 0x0080 (0x00B8 - 0x0038)
class UComputerTerminalHeaderData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0038(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComputerTerminalHeaderData");
		return ptr;
	}

};


// Class Indiana.ComputerTerminalHeaderWidget
// 0x00E0 (0x0388 - 0x02A8)
class UComputerTerminalHeaderWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x02A8(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComputerTerminalHeaderWidget");
		return ptr;
	}


	void STATIC_FadeInLogoImage();
};


// Class Indiana.ConversationBaseWidget
// 0x0058 (0x0308 - 0x02B0)
class UConversationBaseWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationBaseWidget");
		return ptr;
	}


	void STATIC_OnSkipInputAction();
	void STATIC_OnResponse9InputAction();
	void STATIC_OnResponse8InputAction();
	void STATIC_OnResponse7InputAction();
	void STATIC_OnResponse6InputAction();
	void STATIC_OnResponse5InputAction();
	void STATIC_OnResponse4InputAction();
	void STATIC_OnResponse3InputAction();
	void STATIC_OnResponse2InputAction();
	void STATIC_OnResponse1InputAction();
	void STATIC_OnPauseInputAction();
};


// Class Indiana.ComputerTerminalWidget
// 0x00A8 (0x03B0 - 0x0308)
class UComputerTerminalWidget : public UConversationBaseWidget
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0308(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComputerTerminalWidget");
		return ptr;
	}


	void STATIC_OnExitInputAction();
	void STATIC_OnConversationEnded();
};


// Class Indiana.ComputerTerminalWidgetComponent
// 0x0000 (0x0780 - 0x0780)
class UComputerTerminalWidgetComponent : public UIndianaWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ComputerTerminalWidgetComponent");
		return ptr;
	}


	void STATIC_OnOwnerStateChange(EComputerLockState PreviousState, EComputerLockState CurrentState);
};


// Class Indiana.Conditionals
// 0x0000 (0x0030 - 0x0030)
class UConditionals : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Conditionals");
		return ptr;
	}


	bool PlayerHasPerk(const class FString& Perk);
	bool PlayerHasFlaw(const class FString& Flaw);
	bool IsWeaponEquipped(const class FString& Weapon, bool bIncludeDerivedClasses);
	bool IsTrapStateEqual(const struct FGuid& TrapObjectID, ETrapTriggerState State);
	bool IsTimeSlice(int StartHour, int EndHour);
	bool IsSpeakerGender(EGender Gender);
	bool IsSpeaker(const struct FGuid& SpeakerID);
	bool IsRestrictedAreaEnabled(const struct FGuid& RestrictedAreaID);
	bool IsQuestTracked(const struct FGuid& QuestID);
	bool IsQuestStateVisited(const struct FGuid& QuestID, int NodeID);
	bool IsQuestStateActive(const struct FGuid& QuestID, int NodeID);
	bool IsQuestStarted(const struct FGuid& QuestID);
	bool IsQuestMentioned(const struct FGuid& QuestID);
	bool IsQuestionNodeOnResponseBranch(int QuestionNodeID, int PlayerResponseNodeID);
	bool IsQuestEventTriggered(const struct FGuid& QuestID, int QuestEventID);
	bool IsQuestEndStateTriggered(const struct FGuid& QuestID, int EndStateID);
	bool IsQuestComplete(const struct FGuid& QuestID);
	bool IsQuestAddendumTriggered(const struct FGuid& QuestID, int AddendumID);
	bool IsQuestActive(const struct FGuid& QuestID);
	bool IsPlayerTravelDestinationLocked(const class FString& TravelDestination);
	bool IsPlayerTravelDestinationHidden(const class FString& TravelDestination);
	bool IsPlayerSkillValue(ESkill Skill, EComparisonOperator Operator, int SkillValue, bool bUseCompanionInterjection, bool bPermanentOnly);
	bool IsPlayerSkillLevelScaled(ESkill Skill, EComparisonOperator Operator, ECharacterSkillRange SkillRange, int LevelOverride, bool bUseCompanionInterjection);
	bool IsPlayerSkill(ESkill Skill, EComparisonOperator Operator, ECharacterSkillRange SkillRange, bool bUseCompanionInterjection);
	bool IsPlayerShipCurrentAt(const class FString& ShipDestination);
	bool IsPlayerInStealth();
	bool IsPlayerInCombat();
	bool IsPlayerDisguisedAs(const class FString& Faction);
	bool IsPlayerAwareOfTravelDestination(const class FString& TravelDestination);
	bool IsPlayerAwareOfRegion(const class FString& TravelRegion);
	bool IsPlayerAwareOfPointOfInterest(const class FString& PointOfInterestData);
	bool IsPlayerAttribute(EAttribute Attribute, EComparisonOperator Operator, ECharacterAttributeRange AttributeRange);
	bool IsPhaseOfDay(EPhaseOfDay Phase);
	bool IsPartyFull();
	bool IsOCLStateEqual(const struct FGuid& OCLObjectID, EOCLState State);
	bool IsItemQuantity(const class FString& Item, EComparisonOperator Operator, int Quantity);
	bool IsInterrogationsPassedCount(EComparisonOperator Operator, int Count);
	bool IsInterrogationInRestrictedArea();
	bool IsInterrogationDisguised();
	bool IsInterrogationCrime(ECrimeType Crime);
	bool IsInMap(const class FString& MapID);
	bool IsGlobalValue(const class FString& VariableName, EComparisonOperator Operator, int Value);
	bool IsFactionReputationRankType(const class FString& Faction, EReputationRankType ReputationRankType, EComparisonOperator Operator);
	bool IsFactionReputationRank(const class FString& Faction, EReputationRankType ReputationRankType, int Rank, EComparisonOperator Operator);
	bool IsFactionRelationship(const class FString& Faction, TEnumAsByte<ETeamAttitude> AttitudeType);
	bool IsCurrentActiveCompanionAmount(EComparisonOperator Operator, int Quantity);
	bool IsCompanionUnlocked(ESpecialObsidianID CompanionID);
	bool IsCompanionMoral(ESpecialObsidianID CompanionID, EComparisonOperator Operator, float MoralAmount);
	bool IsCompanionDismissed(ESpecialObsidianID CompanionID);
	bool IsCompanionActiveInParty(const struct FGuid& CompanionID);
	bool IsCharacterGrouping(ECharacterGrouping CharacterGrouping);
	bool IsArmorEquipped(const class FString& ArmorItem, bool bIncludeDerivedClasses);
	bool IsAnyArmorEquipped();
	bool HaveMinutesElapsedSinceNamedTimestamp(const class FString& TimestampName, int Minutes);
	bool HaveHoursElapsedSinceNamedTimestamp(const class FString& TimestampName, int Hours);
	bool HaveDaysElapsedSinceNamedTimestamp(const class FString& TimestampName, int Days);
	bool HasQuestStateFailed(const struct FGuid& QuestID, int NodeID);
	bool HasQuestFailed(const struct FGuid& QuestID);
	bool HasPlayerVisitedTravelDestination(const class FString& TravelDestination);
	bool HasPlayerVisitedRegion(const class FString& TravelRegion);
	bool HasPlayerOnlyHeardAboutPointOfInterest(const class FString& PointOfInterestData);
	bool HasPlayerDiscoveredPointOfInterest(const class FString& PointOfInterestData);
	bool HasItemValue(const class FString& VariableName, const class FString& Item);
	bool HasItemsByTag(const class FString& GameplayTag, EComparisonOperator Operator, int Quantity);
	bool HasItem(const class FString& Item);
	bool HasDLC(EDownLoadableContent DLC);
	bool HasConversationNodeBeenVisited(const struct FGuid& ConversationID, int NodeID);
	void STATIC_GetOCLState(const struct FGuid& OCLObjectID, EOCLState* State, EBoolResult* Result);
	int GetGlobalValue(const class FString& VariableName);
	bool DoesConversationNodePass(const struct FGuid& ConversationID, int NodeID);
	bool CompareGlobals(const class FString& VariableName1, EComparisonOperator Operator, const class FString& VariableName2);
	bool CompanionWantsToTalk(ESpecialObsidianID CompanionID);
	bool CompanionHasPerk(const struct FGuid& CompanionID, const class FString& Perk);
	bool CanPlayerSafelyTakePickup(const struct FGuid& PickupID);
	bool CanPlayerSafelyTakeItemTypeInContainer(const struct FGuid& ContainerID, const class FString& Item);
	bool CanPlayerReadRedactions();
	bool CanPlayerDiscoverPointOfInterest(const class FString& PointOfInterestData);
	bool CanPlayerAccessTravelDestination(const class FString& TravelDestination);
	bool CanBribe(const class FString& VariableName, EBribeDifficulty BribeDifficulty, int LevelOverride);
	bool CallGlobalConditional(const struct FGuid& GlobalScriptID);
	bool AlwaysFalse();
};


// Class Indiana.ConsumableAmmoPool
// 0x0028 (0x00A8 - 0x0080)
class UConsumableAmmoPool : public UAmmoPoolBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConsumableAmmoPool");
		return ptr;
	}


	class UClass* GetNextConsumableClass();
};


// Class Indiana.ResourceItem
// 0x0028 (0x0140 - 0x0118)
class UResourceItem : public UItem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ResourceItem");
		return ptr;
	}

};


// Class Indiana.ConsumableItem
// 0x00F0 (0x0230 - 0x0140)
class UConsumableItem : public UResourceItem
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0140(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConsumableItem");
		return ptr;
	}


	void STATIC_OnStatUpdated(class URpgStat* Stat);
};


// Class Indiana.Container
// 0x0190 (0x0518 - 0x0388)
class AContainer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0388(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Container");
		return ptr;
	}


	bool IsLightEnabled();
	void STATIC_HandleItemRemoved(const struct FItemStack& ItemStack);
	void STATIC_HandleItemCountChanged(const struct FItemStack& ItemStack);
	void STATIC_HandleItemAdded(const struct FItemStack& ItemStack);
	void STATIC_GetItemsInContainer(TArray<class UItem*>* OutItems);
};


// Class Indiana.Conversation
// 0x00D0 (0x0188 - 0x00B8)
class UConversation : public UFlowChart
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00B8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Conversation");
		return ptr;
	}

};


// Class Indiana.ConversationActorInterface
// 0x0000 (0x0030 - 0x0030)
class UConversationActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationActorInterface");
		return ptr;
	}


	struct FGuid GetSpeakerGameDataID();
	struct FConversationDescription GetConversationDescription();
};


// Class Indiana.ConversationBehaviorStateInfo
// 0x0018 (0x0138 - 0x0120)
class UConversationBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0120(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.ConversationRequestData
// 0x0000 (0x0068 - 0x0068)
class UConversationRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationRequestData");
		return ptr;
	}

};


// Class Indiana.ConversationBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UConversationBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationBlueprintLibrary");
		return ptr;
	}


	bool StartSlideshow(class UConversationData* Conversation, int* InstanceId);
	bool StartPlayerControllerConversation(class UConversationData* ConversationData, int StartNode, TArray<struct FCharacterDescription> OverrideCharacters, bool bAllowedDuringCombat, ECheckBranches* Branches, int* InstanceId);
	bool StartConversationWithActorInterface(const TScriptInterface<class UConversationActorInterface>& Actor, int StartNode, ECheckBranches* Branches, int* InstanceId);
	bool StartConversationByDescriptionAtNode(const struct FConversationDescription& Description, int StartNode, ECheckBranches* Branches, int* InstanceId);
	bool StartConversationByDescription(const struct FConversationDescription& Description, ECheckBranches* Branches, int* InstanceId);
	bool StartConversation(class UConversationData* Conversation, int StartNode, TArray<struct FCharacterDescription> OverrideCharacters, bool bAllowedDuringCombat, ECheckBranches* Branches, int* InstanceId);
	struct FCharacterDescription MakeCharacterDescription(class AActor* Actor);
	TArray<struct FSpeakerGameDataReferenceID> GetSpeakerGameDataReferences(class UConversationData* ConversationData);
	int EndConversation(int ConversationInstanceID);
	bool CanStartConversationByDescription(const struct FConversationDescription& Description, ECheckBranches* Branches);
	bool CanStartConversation(class UConversationData* Conversation, int StartNode, TArray<struct FCharacterDescription> OverrideCharacters, bool bAllowedDuringCombat, ECheckBranches* Branches);
	void STATIC_AssignAllParticipantsAsOverrides(class AActor* OverrideActor, struct FConversationDescription* Description);
	void STATIC_AddConversationEndedDelegate(int InstanceId, const struct FScriptDelegate& Event);
};


// Class Indiana.ConversationCamera
// 0x0118 (0x0230 - 0x0118)
class UConversationCamera : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0118(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationCamera");
		return ptr;
	}

};


// Class Indiana.ConversationCroppingComponent
// 0x0000 (0x0630 - 0x0630)
class UConversationCroppingComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationCroppingComponent");
		return ptr;
	}

};


// Class Indiana.ConversationData
// 0x0050 (0x0080 - 0x0030)
class UConversationData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationData");
		return ptr;
	}

};


// Class Indiana.ConversationFramingComponent
// 0x0000 (0x02B0 - 0x02B0)
class UConversationFramingComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationFramingComponent");
		return ptr;
	}

};


// Class Indiana.ConversationHistoryWidget
// 0x0028 (0x0248 - 0x0220)
class UConversationHistoryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0220(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationHistoryWidget");
		return ptr;
	}

};


// Class Indiana.ConversationInstance
// 0x03B0 (0x03E0 - 0x0030)
class UConversationInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x0030(0x03B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationInstance");
		return ptr;
	}


	void STATIC_OnParticipantEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> Reason);
	void STATIC_OnCharacterDeath(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnCharacterCombatStateChange(bool bInCombat, bool bRestoring);
	bool IsCurrentSpeakerGameDataReferenceID(const struct FSpeakerGameDataReferenceID& SpeakerGameData);
	class AActor* GetPayloadActorChecked(EPayloadID Key, ECheckBranches* Branches);
	struct FSpeakerGameDataReferenceID GetCurrentSpeakerGameDataReferenceID();
};


// Class Indiana.ConversationInterface
// 0x0000 (0x0030 - 0x0030)
class UConversationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationInterface");
		return ptr;
	}


	bool ConversationStarted(class AActor* Speaker, const struct FGuid& Guid, int NodeID);
	bool ConversationNodeChanged(class AActor* Character, class AActor* Camera, class AActor* Audio, int NodeID);
	bool ConversationEnded(const struct FGuid& Guid);
};


// Class Indiana.SkillCheckInterruption
// 0x0070 (0x00A0 - 0x0030)
class USkillCheckInterruption : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillCheckInterruption");
		return ptr;
	}


	void STATIC_MontageFinished(class UAnimMontage* Montage, bool bInterrupted);
};


// Class Indiana.ConversationLighting
// 0x00A8 (0x0430 - 0x0388)
class AConversationLighting : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0388(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationLighting");
		return ptr;
	}

};


// Class Indiana.ConversationManager
// 0x0470 (0x04A0 - 0x0030)
class UConversationManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x470];                                     // 0x0030(0x0470) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationManager");
		return ptr;
	}


	void STATIC_MarkConversationNodeAsRead(class UConversationData* Conversation, int NodeID);
	bool HasConversationNodeBeenVisited(class UConversationData* Conversation, int NodeID, ECheckBranches* Branches);
	void STATIC_ClearConversationNodeAsRead(class UConversationData* Conversation, int NodeID);
};


// Class Indiana.ConversationMessageWidget
// 0x0050 (0x0270 - 0x0220)
class UConversationMessageWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0220(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationMessageWidget");
		return ptr;
	}


	void STATIC_ContentLerpTick(float DeltaTime);
};


// Class Indiana.ConversationPlayer
// 0x02F8 (0x03B8 - 0x00C0)
class UConversationPlayer : public UFlowChartPlayer
{
public:
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x00C0(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationPlayer");
		return ptr;
	}

};


// Class Indiana.ConversationRegisterComponent
// 0x07F8 (0x0910 - 0x0118)
class UConversationRegisterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x7F8];                                     // 0x0118(0x07F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationRegisterComponent");
		return ptr;
	}


	bool StartConversationByComponent(class AActor* ComponentOwner, ECheckBranches* Branches);
	void STATIC_OnResumeConversationTimerComplete();
	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnCombatStateChange(bool bInCombat, bool bRestoring);
	void STATIC_OnChatterComplete(class UChatterPlayer* ChatterPlayer);
};


// Class Indiana.ConversationResponseWidget
// 0x0058 (0x0278 - 0x0220)
class UConversationResponseWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0220(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationResponseWidget");
		return ptr;
	}


	void STATIC_OnSetSkillCheckRequiredCompanion(bool bSelectable);
	void STATIC_OnSetSelectableOption(bool bSelectable);
	void STATIC_OnResponseSkillsChanged(bool bContainsSkillCheck);
	bool IsSelectable();
};


// Class Indiana.ConversationSubtitleWidget
// 0x0008 (0x02B8 - 0x02B0)
class UConversationSubtitleWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationSubtitleWidget");
		return ptr;
	}

};


// Class Indiana.ConversationWidget
// 0x01C0 (0x04C8 - 0x0308)
class UConversationWidget : public UConversationBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0308(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ConversationWidget");
		return ptr;
	}


	bool ShouldShowResponseLine();
	bool ShouldShowInputLabelLine();
	void STATIC_SetHistoryBackingFillRatio(float DesiredHistoryHeight);
	void STATIC_SetConversationBackingFillRatio(float DesiredOverlayHeight);
	void STATIC_OnHistoryToggleInputAction();
	void STATIC_OnHistoryScroll(float InputDelta);
	void STATIC_OnConversationEnded();
};


// Class Indiana.Corpse
// 0x00D8 (0x0460 - 0x0388)
class ACorpse : public AActor
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0388(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Corpse");
		return ptr;
	}


	void STATIC_HandleItemRemoved(const struct FItemStack& ItemStack);
	void STATIC_HandleItemAdded(const struct FItemStack& ItemStack);
	void STATIC_GetItemsOnCorpse(TArray<class UItem*>* OutItems);
};


// Class Indiana.CoverBehaviorStateInfo
// 0x0028 (0x01A0 - 0x0178)
class UCoverBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0178(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CoverBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CoverRequestData
// 0x0000 (0x0080 - 0x0080)
class UCoverRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CoverRequestData");
		return ptr;
	}

};


// Class Indiana.QuickCoverStateInfo
// 0x0000 (0x01A0 - 0x01A0)
class UQuickCoverStateInfo : public UCoverBehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuickCoverStateInfo");
		return ptr;
	}

};


// Class Indiana.QuickCoverRequestData
// 0x0000 (0x0080 - 0x0080)
class UQuickCoverRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuickCoverRequestData");
		return ptr;
	}

};


// Class Indiana.CoverGenerationAssetData
// 0x0050 (0x0088 - 0x0038)
class UCoverGenerationAssetData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CoverGenerationAssetData");
		return ptr;
	}

};


// Class Indiana.EnviromentNode
// 0x00A0 (0x0428 - 0x0388)
class AEnviromentNode : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0388(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnviromentNode");
		return ptr;
	}

};


// Class Indiana.CoverNode
// 0x0060 (0x0488 - 0x0428)
class ACoverNode : public AEnviromentNode
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0428(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CoverNode");
		return ptr;
	}

};


// Class Indiana.CoverNodeComponent
// 0x0000 (0x0118 - 0x0118)
class UCoverNodeComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CoverNodeComponent");
		return ptr;
	}

};


// Class Indiana.CoverNodeGenerationVolume
// 0x0050 (0x0430 - 0x03E0)
class ACoverNodeGenerationVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CoverNodeGenerationVolume");
		return ptr;
	}

};


// Class Indiana.CowerBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class UCowerBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CowerBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CowerRequestData
// 0x0000 (0x0068 - 0x0068)
class UCowerRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CowerRequestData");
		return ptr;
	}

};


// Class Indiana.CrashLogging
// 0x0000 (0x0030 - 0x0030)
class UCrashLogging : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CrashLogging");
		return ptr;
	}

};


// Class Indiana.CreateItemStatusEffect
// 0x0018 (0x01A0 - 0x0188)
class UCreateItemStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0188(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CreateItemStatusEffect");
		return ptr;
	}

};


// Class Indiana.CreditsData
// 0x0028 (0x0060 - 0x0038)
class UCreditsData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CreditsData");
		return ptr;
	}

};


// Class Indiana.CreditsFormattingData
// 0x00B8 (0x00F0 - 0x0038)
class UCreditsFormattingData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CreditsFormattingData");
		return ptr;
	}

};


// Class Indiana.CreditsWidget
// 0x0078 (0x0328 - 0x02B0)
class UCreditsWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x02B0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CreditsWidget");
		return ptr;
	}

};


// Class Indiana.CrosshairWidget
// 0x0070 (0x0318 - 0x02A8)
class UCrosshairWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CrosshairWidget");
		return ptr;
	}

};


// Class Indiana.CrouchBehaviorStateInfo
// 0x0010 (0x0188 - 0x0178)
class UCrouchBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CrouchBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.CrouchRequestData
// 0x0000 (0x0080 - 0x0080)
class UCrouchRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CrouchRequestData");
		return ptr;
	}

};


// Class Indiana.IndianaNavLink
// 0x0018 (0x03A0 - 0x0388)
class AIndianaNavLink : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0388(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaNavLink");
		return ptr;
	}

};


// Class Indiana.PlaceableNavLink
// 0x0000 (0x03A0 - 0x03A0)
class APlaceableNavLink : public AIndianaNavLink
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlaceableNavLink");
		return ptr;
	}

};


// Class Indiana.ReservableNavLink
// 0x0018 (0x03B8 - 0x03A0)
class AReservableNavLink : public APlaceableNavLink
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReservableNavLink");
		return ptr;
	}

};


// Class Indiana.CrouchNavLink
// 0x0000 (0x03B8 - 0x03B8)
class ACrouchNavLink : public AReservableNavLink
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CrouchNavLink");
		return ptr;
	}

};


// Class Indiana.CurrencyItem
// 0x0028 (0x0140 - 0x0118)
class UCurrencyItem : public UItem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CurrencyItem");
		return ptr;
	}

};


// Class Indiana.CustomEventEffect
// 0x0000 (0x0030 - 0x0030)
class UCustomEventEffect : public UEventEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CustomEventEffect");
		return ptr;
	}


	void STATIC_CustomTrigger(class AActor* TargetActor, const struct FEventEffectParams& Params);
	void STATIC_CustomStop(class AActor* TargetActor);
};


// Class Indiana.CustomHitReceiver
// 0x0000 (0x0388 - 0x0388)
class ACustomHitReceiver : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CustomHitReceiver");
		return ptr;
	}


	void STATIC_CustomOnHit(const struct FHitResult& Hit);
};


// Class Indiana.CustomMaterialModVisual
// 0x0028 (0x0090 - 0x0068)
class UCustomMaterialModVisual : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CustomMaterialModVisual");
		return ptr;
	}


	void STATIC_CopyParamOverrides(class UMaterialInstanceDynamic* Source, const struct FName& DestinationSlotName);
	void STATIC_ApplyVectorParamToAll(const struct FName& ParamName, const struct FLinearColor& ParamValue, const struct FName& OnlyApplyIfParamSet);
	void STATIC_ApplyVectorParam(const struct FName& MaterialSlotName, const struct FName& ParamName, const struct FLinearColor& ParamValue);
	void STATIC_ApplyTextureParamToAll(const struct FName& ParamName, const struct FName& OnlyApplyIfParamSet);
	void STATIC_ApplyTextureParam(const struct FName& MaterialSlotName, const struct FName& ParamName);
	void STATIC_ApplyScalarParamToAll(const struct FName& ParamName, float ParamValue, const struct FName& OnlyApplyIfParamSet);
	void STATIC_ApplyScalarParam(const struct FName& MaterialSlotName, const struct FName& ParamName, float ParamValue);
	void STATIC_Apply();
};


// Class Indiana.CustomModVisual
// 0x0000 (0x0068 - 0x0068)
class UCustomModVisual : public UModVisual
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CustomModVisual");
		return ptr;
	}


	void STATIC_RemoveVisualsTrigger();
	void STATIC_PermanentlyApplyVisualsTrigger(class UObject* NewTargetObject, class USkeletalMeshComponent* NewParentComponent, bool bShouldWeld);
	void STATIC_NewMeshAddedBP(class USkeletalMeshComponent* TargetParentComponent, class UMeshComponent* MeshComponent);
	void STATIC_ApplyVisualsTrigger(class UObject* NewTargetObject, class USkeletalMeshComponent* NewParentComponent);
	void STATIC_ApplyToNewMeshTrigger(class UMeshComponent* NewMesh);
	void STATIC_ApplyToNewMeshPermanentlyTrigger(class UMeshComponent* NewMesh);
};


// Class Indiana.CustomTimeDilationStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UCustomTimeDilationStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CustomTimeDilationStatusEffect");
		return ptr;
	}

};


// Class Indiana.DamageableComponent
// 0x01A8 (0x02C0 - 0x0118)
class UDamageableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0118(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DamageableComponent");
		return ptr;
	}

};


// Class Indiana.DamageByGameTagStatusEffect
// 0x0028 (0x01B0 - 0x0188)
class UDamageByGameTagStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0188(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DamageByGameTagStatusEffect");
		return ptr;
	}

};


// Class Indiana.DamageEffectWidget
// 0x0070 (0x0318 - 0x02A8)
class UDamageEffectWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DamageEffectWidget");
		return ptr;
	}

};


// Class Indiana.DamageFlagsStatusEffect
// 0x0010 (0x0198 - 0x0188)
class UDamageFlagsStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DamageFlagsStatusEffect");
		return ptr;
	}

};


// Class Indiana.DamageStatusEffect
// 0x0088 (0x0210 - 0x0188)
class UDamageStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0188(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DamageStatusEffect");
		return ptr;
	}

};


// Class Indiana.DamageTextActor
// 0x0020 (0x03B0 - 0x0390)
class ADamageTextActor : public APooledActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0390(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DamageTextActor");
		return ptr;
	}

};


// Class Indiana.DeactivatedBehaviorStateInfo
// 0x0000 (0x0120 - 0x0120)
class UDeactivatedBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeactivatedBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.DeactivatedRequestData
// 0x0000 (0x0068 - 0x0068)
class UDeactivatedRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeactivatedRequestData");
		return ptr;
	}

};


// Class Indiana.DeathBehavior
// 0x0010 (0x0040 - 0x0030)
class UDeathBehavior : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathBehavior");
		return ptr;
	}


	class USkeletalMeshComponent* GetTargetMesh();
	void STATIC_CustomTrigger();
	void STATIC_CustomTick();
	void STATIC_Complete();
};


// Class Indiana.DeathBehaviorStateInfo
// 0x0000 (0x0120 - 0x0120)
class UDeathBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.DeathRequestData
// 0x0000 (0x0068 - 0x0068)
class UDeathRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathRequestData");
		return ptr;
	}

};


// Class Indiana.DeathBodyTypeAudioEvents
// 0x0010 (0x0048 - 0x0038)
class UDeathBodyTypeAudioEvents : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathBodyTypeAudioEvents");
		return ptr;
	}

};


// Class Indiana.DeathBodyTypeParticleSystems
// 0x0010 (0x0048 - 0x0038)
class UDeathBodyTypeParticleSystems : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathBodyTypeParticleSystems");
		return ptr;
	}

};


// Class Indiana.DeathClassData
// 0x0010 (0x0048 - 0x0038)
class UDeathClassData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathClassData");
		return ptr;
	}

};


// Class Indiana.DeathMenuWidget
// 0x0058 (0x0308 - 0x02B0)
class UDeathMenuWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathMenuWidget");
		return ptr;
	}


	void STATIC_OnQueryLatestSaveFinished(const class FString& LatestSaveName, bool bHasSaves);
	void STATIC_OnLoadComplete(const class FString& Filename, ELoadGameResult Result);
};


// Class Indiana.DeathOverrideStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UDeathOverrideStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathOverrideStatusEffect");
		return ptr;
	}

};


// Class Indiana.DeathStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UDeathStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathStatusEffect");
		return ptr;
	}

};


// Class Indiana.DebugOverlayWidget
// 0x0008 (0x02B8 - 0x02B0)
class UDebugOverlayWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DebugOverlayWidget");
		return ptr;
	}

};


// Class Indiana.DecisionTree
// 0x0000 (0x0030 - 0x0030)
class UDecisionTree : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree");
		return ptr;
	}


	TArray<class UDecisionTreeRequestData*> RunSuperDecisionTree(class AIndianaAiCharacter* Owner, const struct FName& EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority* OutPriority);
	TArray<class UDecisionTreeRequestData*> RunMetaDecisionTree(class UClass* DecisionTree, class AIndianaAiCharacter* Owner, const struct FName& EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority* OutPriority);
	TArray<class UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, const struct FName& EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority* OutPriority);
};


// Class Indiana.DecisionTree_AvoidMeleeAttack
// 0x0010 (0x0040 - 0x0030)
class UDecisionTree_AvoidMeleeAttack : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_AvoidMeleeAttack");
		return ptr;
	}

};


// Class Indiana.DecisionTree_Base
// 0x0000 (0x0030 - 0x0030)
class UDecisionTree_Base : public UDecisionTree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_Base");
		return ptr;
	}

};


// Class Indiana.DecisionTree_DefaultMeleeAttack
// 0x0008 (0x0038 - 0x0030)
class UDecisionTree_DefaultMeleeAttack : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_DefaultMeleeAttack");
		return ptr;
	}

};


// Class Indiana.DecisionTree_CanidMeleeAttack
// 0x0030 (0x0068 - 0x0038)
class UDecisionTree_CanidMeleeAttack : public UDecisionTree_DefaultMeleeAttack
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_CanidMeleeAttack");
		return ptr;
	}

};


// Class Indiana.DecisionTree_CanidOnStatusEffectAdded
// 0x0030 (0x0060 - 0x0030)
class UDecisionTree_CanidOnStatusEffectAdded : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_CanidOnStatusEffectAdded");
		return ptr;
	}

};


// Class Indiana.DecisionTree_CanidMeleeRecovery
// 0x0010 (0x0040 - 0x0030)
class UDecisionTree_CanidMeleeRecovery : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_CanidMeleeRecovery");
		return ptr;
	}

};


// Class Indiana.DecisionTree_Combined
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_Combined : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_Combined");
		return ptr;
	}

};


// Class Indiana.DecisionTree_CombinedRequests
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_CombinedRequests : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_CombinedRequests");
		return ptr;
	}

};


// Class Indiana.DecisionTree_CompanionCalledShot
// 0x0028 (0x0058 - 0x0030)
class UDecisionTree_CompanionCalledShot : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_CompanionCalledShot");
		return ptr;
	}

};


// Class Indiana.DecisionTree_DefaultAttack
// 0x0028 (0x0058 - 0x0030)
class UDecisionTree_DefaultAttack : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_DefaultAttack");
		return ptr;
	}

};


// Class Indiana.DecisionTree_DefaultOutOfCombat
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_DefaultOutOfCombat : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_DefaultOutOfCombat");
		return ptr;
	}

};


// Class Indiana.DecisionTree_DefaultPacifist
// 0x0010 (0x0040 - 0x0030)
class UDecisionTree_DefaultPacifist : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_DefaultPacifist");
		return ptr;
	}

};


// Class Indiana.DecisionTree_DefaultRangeAttack
// 0x0050 (0x0080 - 0x0030)
class UDecisionTree_DefaultRangeAttack : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_DefaultRangeAttack");
		return ptr;
	}

};


// Class Indiana.DecisionTree_DefaultSwitchContext
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_DefaultSwitchContext : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_DefaultSwitchContext");
		return ptr;
	}

};


// Class Indiana.DecisionTree_Dodge
// 0x0028 (0x0058 - 0x0030)
class UDecisionTree_Dodge : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_Dodge");
		return ptr;
	}

};


// Class Indiana.DecisionTree_ForceCompanionFollow
// 0x0008 (0x0038 - 0x0030)
class UDecisionTree_ForceCompanionFollow : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_ForceCompanionFollow");
		return ptr;
	}

};


// Class Indiana.DecisionTree_GainedAwareness
// 0x0000 (0x0030 - 0x0030)
class UDecisionTree_GainedAwareness : public UDecisionTree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_GainedAwareness");
		return ptr;
	}

};


// Class Indiana.DecisionTree_GorillianRangeComplete
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_GorillianRangeComplete : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_GorillianRangeComplete");
		return ptr;
	}

};


// Class Indiana.DecisionTree_GorillianMeleeComplete
// 0x0010 (0x0040 - 0x0030)
class UDecisionTree_GorillianMeleeComplete : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_GorillianMeleeComplete");
		return ptr;
	}

};


// Class Indiana.DecisionTree_GorillianBurrowComplete
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_GorillianBurrowComplete : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_GorillianBurrowComplete");
		return ptr;
	}

};


// Class Indiana.DecisionTree_GorillianCombatStart
// 0x0020 (0x0050 - 0x0030)
class UDecisionTree_GorillianCombatStart : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_GorillianCombatStart");
		return ptr;
	}

};


// Class Indiana.DecisionTree_PrimalRavager
// 0x0010 (0x0040 - 0x0030)
class UDecisionTree_PrimalRavager : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_PrimalRavager");
		return ptr;
	}

};


// Class Indiana.DecisionTree_JumpReposition
// 0x0028 (0x0058 - 0x0030)
class UDecisionTree_JumpReposition : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_JumpReposition");
		return ptr;
	}

};


// Class Indiana.DecisionTree_LineOfFireBlocked
// 0x0008 (0x0038 - 0x0030)
class UDecisionTree_LineOfFireBlocked : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_LineOfFireBlocked");
		return ptr;
	}

};


// Class Indiana.DecisionTree_LostTarget
// 0x0010 (0x0040 - 0x0030)
class UDecisionTree_LostTarget : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_LostTarget");
		return ptr;
	}

};


// Class Indiana.DecisionTree_MantiQueenDefaultTree
// 0x0050 (0x0080 - 0x0030)
class UDecisionTree_MantiQueenDefaultTree : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_MantiQueenDefaultTree");
		return ptr;
	}

};


// Class Indiana.DecisionTree_MantiQueenRangeComplete
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_MantiQueenRangeComplete : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_MantiQueenRangeComplete");
		return ptr;
	}

};


// Class Indiana.DecisionTree_MantiBlock
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_MantiBlock : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_MantiBlock");
		return ptr;
	}

};


// Class Indiana.DecisionTree_MeleeUnreachable
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_MeleeUnreachable : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_MeleeUnreachable");
		return ptr;
	}

};


// Class Indiana.DecisionTree_PreEmptiveMeleeAction
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_PreEmptiveMeleeAction : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_PreEmptiveMeleeAction");
		return ptr;
	}

};


// Class Indiana.DecisionTree_QueueBehavior
// 0x0048 (0x0078 - 0x0030)
class UDecisionTree_QueueBehavior : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_QueueBehavior");
		return ptr;
	}

};


// Class Indiana.DecisionTree_RandomRequest
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_RandomRequest : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_RandomRequest");
		return ptr;
	}

};


// Class Indiana.DecisionTree_RaptidonMatriarchOnPhaseChange
// 0x0008 (0x0038 - 0x0030)
class UDecisionTree_RaptidonMatriarchOnPhaseChange : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_RaptidonMatriarchOnPhaseChange");
		return ptr;
	}

};


// Class Indiana.DecisionTree_ReactiveRangeAction
// 0x0010 (0x0040 - 0x0030)
class UDecisionTree_ReactiveRangeAction : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_ReactiveRangeAction");
		return ptr;
	}

};


// Class Indiana.DecisionTree_SecurityBotOutOfCombat
// 0x0010 (0x0040 - 0x0030)
class UDecisionTree_SecurityBotOutOfCombat : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_SecurityBotOutOfCombat");
		return ptr;
	}

};


// Class Indiana.DecisionTree_WeaponPreference
// 0x0038 (0x0068 - 0x0030)
class UDecisionTree_WeaponPreference : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_WeaponPreference");
		return ptr;
	}

};


// Class Indiana.DecisionTree_WeaponSwapByPhase
// 0x0018 (0x0048 - 0x0030)
class UDecisionTree_WeaponSwapByPhase : public UDecisionTree
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTree_WeaponSwapByPhase");
		return ptr;
	}

};


// Class Indiana.DecisionTreeComponent
// 0x0088 (0x01A0 - 0x0118)
class UDecisionTreeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0118(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTreeComponent");
		return ptr;
	}


	void STATIC_OnWeaponPreferenceChange(EWeaponPreference NewWeaponPreference, EWeaponPreference OldWeaponPreference);
	void STATIC_OnTether(bool bCanceled, const struct FVector& TetherReturnLocation);
	void STATIC_OnStatusEffectAdded(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
	void STATIC_OnStateOfBeingChange(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnStartTraverse(ETraverseType TraverseType, int NavLinkDirection, class AReservableNavLink* ReservableNavLink, class ALadder* ClimbLadder);
	void STATIC_OnScriptedBehaviorCall(class UAISettings_Behavior* ScriptedBehavior, bool bInterruptible);
	void STATIC_OnReactiveRangeAction();
	void STATIC_OnPlayerProximityChange(bool bEnteredProximity);
	void STATIC_OnPlayerConversationProximityChange(bool bInProximity);
	void STATIC_OnPlayerConversationChange(class UConversationInstance* Instance, bool bEntered);
	void STATIC_OnNewTarget();
	void STATIC_OnNearbyInterestPoint(class UFurnitureComponent* InterestPoint);
	void STATIC_OnDefaultBehaviorChange(class UAISettings_Behavior* NewDefaultBehavior, bool bFullReset);
	void STATIC_OnCombatStateChange(bool bIsInCombat, bool bRestoring);
	void STATIC_OnBehaviorPhaseChange(int NewBehaviorPhase);
	void STATIC_OnAlertStateChange(class AActor* TargetActor, EAlertState PreviousAlertState, EAlertState TargetAlertState, bool bRestoring);
	void STATIC_OnActionToggled(ETogglableAction Action, bool bToggled);
};


// Class Indiana.DecisionTreeDesignerData
// 0x0018 (0x0050 - 0x0038)
class UDecisionTreeDesignerData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTreeDesignerData");
		return ptr;
	}

};


// Class Indiana.DecisionTreeDesignerDataBundle
// 0x0050 (0x0088 - 0x0038)
class UDecisionTreeDesignerDataBundle : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTreeDesignerDataBundle");
		return ptr;
	}

};


// Class Indiana.DecisionTreeProcessor
// 0x0038 (0x0068 - 0x0030)
class UDecisionTreeProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTreeProcessor");
		return ptr;
	}

};


// Class Indiana.DecisionTreeSequenceRequestData
// 0x0018 (0x0050 - 0x0038)
class UDecisionTreeSequenceRequestData : public UDecisionTreeRequestData
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DecisionTreeSequenceRequestData");
		return ptr;
	}

};


// Class Indiana.DerivedStatWidget
// 0x0028 (0x02D0 - 0x02A8)
class UDerivedStatWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DerivedStatWidget");
		return ptr;
	}

};


// Class Indiana.DespawnAction
// 0x0008 (0x0040 - 0x0038)
class UDespawnAction : public UAIAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DespawnAction");
		return ptr;
	}

};


// Class Indiana.DestructibleAudioComponent
// 0x0050 (0x01D8 - 0x0188)
class UDestructibleAudioComponent : public UInteractableAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0188(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DestructibleAudioComponent");
		return ptr;
	}


	void STATIC_Stop(EDestructibleEventType Type);
	void STATIC_Play(EDestructibleEventType Type);
};


// Class Indiana.DestructibleShoutComponent
// 0x0008 (0x0140 - 0x0138)
class UDestructibleShoutComponent : public UShoutComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DestructibleShoutComponent");
		return ptr;
	}


	void STATIC_OnDestructibleDestroyed(class AActor* Instigator);
};


// Class Indiana.DevelopmentFunctionality
// 0x0000 (0x0030 - 0x0030)
class UDevelopmentFunctionality : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DevelopmentFunctionality");
		return ptr;
	}


	void STATIC_ToggleTempVO();
	void STATIC_Task();
	void STATIC_StartInfoTracking(float TrackRate, bool bTrackStats);
	void STATIC_FlushLevelStreaming();
	void STATIC_FlushAsyncLoading();
	void STATIC_EndInfoTracking();
	void STATIC_DumpNameTable();
	void STATIC_DebugDrawLightmapNamesSummary(float Duration, int LightmapTextureIndex, float VolumeThreshold);
	void STATIC_DebugDrawLightmapNamesPerComponent(float Duration, int LightmapTextureIndex);
	void STATIC_DebugDrawLightmapInfo(const class FString& LightmapName, float Duration);
	void STATIC_Crash();
	void STATIC_CharacterMemReport();
	void STATIC_Bug();
};


// Class Indiana.DialogBoxWidget
// 0x00B0 (0x0360 - 0x02B0)
class UDialogBoxWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x02B0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DialogBoxWidget");
		return ptr;
	}


	void STATIC_SetNewBackingMaterialHeight(float NewHeight);
	void STATIC_OnInputConfirm();
	void STATIC_OnInputBack();
	void STATIC_OnInputAbort();
};


// Class Indiana.DialogBoxRespecWidget
// 0x0018 (0x0378 - 0x0360)
class UDialogBoxRespecWidget : public UDialogBoxWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0360(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DialogBoxRespecWidget");
		return ptr;
	}

};


// Class Indiana.DialogWarningBoxWidget
// 0x0060 (0x0310 - 0x02B0)
class UDialogWarningBoxWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DialogWarningBoxWidget");
		return ptr;
	}


	void STATIC_OnInputConfirm();
	void STATIC_OnInputBack();
};


// Class Indiana.DifficultyManager
// 0x0028 (0x0058 - 0x0030)
class UDifficultyManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DifficultyManager");
		return ptr;
	}


	void STATIC_SetSurvivalMode(bool IsSurvivalMode);
	void STATIC_SetDifficulty(EGameDifficulty NewDifficulty);
	EGameDifficulty GetGameDifficulty();
};


// Class Indiana.DifficultyRpgStatModifiers
// 0x0010 (0x0048 - 0x0038)
class UDifficultyRpgStatModifiers : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DifficultyRpgStatModifiers");
		return ptr;
	}

};


// Class Indiana.DifficultySelectWidget
// 0x0178 (0x0428 - 0x02B0)
class UDifficultySelectWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x02B0(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DifficultySelectWidget");
		return ptr;
	}


	void STATIC_ValueChanged(class UUserSetting* UserSetting);
	void STATIC_TrasitionToSubtitleComplete();
	void STATIC_TransitionToDifficultyComplete();
	void STATIC_StartTransitionToSubtitleFromDifficulty();
	void STATIC_StartTransitionToDifficultyFromSubtitle();
};


// Class Indiana.DirectionalAnimDisableStatusEffect
// 0x0010 (0x01B0 - 0x01A0)
class UDirectionalAnimDisableStatusEffect : public UAnimDisableStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DirectionalAnimDisableStatusEffect");
		return ptr;
	}

};


// Class Indiana.Dirt
// 0x0008 (0x0040 - 0x0038)
class UDirt : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Dirt");
		return ptr;
	}

};


// Class Indiana.DisableBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class UDisableBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DisableBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.DisableRequestData
// 0x0000 (0x0068 - 0x0068)
class UDisableRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DisableRequestData");
		return ptr;
	}

};


// Class Indiana.DisguiseData
// 0x0020 (0x0058 - 0x0038)
class UDisguiseData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DisguiseData");
		return ptr;
	}

};


// Class Indiana.QuestItem
// 0x00B8 (0x01D0 - 0x0118)
class UQuestItem : public UItem
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0118(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestItem");
		return ptr;
	}

};


// Class Indiana.DisguiseItem
// 0x0000 (0x01D0 - 0x01D0)
class UDisguiseItem : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DisguiseItem");
		return ptr;
	}

};


// Class Indiana.DisguiseMeterWidget
// 0x0130 (0x03D8 - 0x02A8)
class UDisguiseMeterWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x02A8(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DisguiseMeterWidget");
		return ptr;
	}


	void STATIC_UpdateDisguiseMeterInnerAnim(int CurrentFrame);
	void STATIC_UpdateDisguiseMeterFill(float NewValue);
	void STATIC_ShowDisguiseMeterTip(float StartTime);
	void STATIC_OnRestrictedAreaExited(class ARestrictedArea* RestrictedArea);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnEnterRestrictedAreaWithoutDisguise(class UDisguiseData* Disguise, bool bMissingShroud);
	void STATIC_OnDisguiseUnequipped();
	void STATIC_OnDisguiseRefilled();
	void STATIC_OnDisguiseMeterVisibilityChanged(bool bVisible);
	void STATIC_OnDisguiseMeterChanged(float NewValue);
	void STATIC_OnDisguiseImageLoaded();
	void STATIC_OnDisguiseFailure();
	void STATIC_OnDisguiseEquipped(class UDisguiseData* Disguise);
	void STATIC_OnDisguiseEnd();
	void STATIC_OnDisguiseBegin();
	void STATIC_HideDisguiseMeterTip(float StartTime);
};


// Class Indiana.DisguiseStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UDisguiseStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DisguiseStatusEffect");
		return ptr;
	}

};


// Class Indiana.DisplayInterface
// 0x0000 (0x0030 - 0x0030)
class UDisplayInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DisplayInterface");
		return ptr;
	}

};


// Class Indiana.DLCManager
// 0x0020 (0x0050 - 0x0030)
class UDLCManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DLCManager");
		return ptr;
	}


	void STATIC_OnGlobalVarChanged(const class FString& VariableName, int NewValue);
	bool IsINX2Installed();
	bool IsINX1Installed();
};


// Class Indiana.DodgeBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class UDodgeBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DodgeBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.DodgeRequestData
// 0x0008 (0x0070 - 0x0068)
class UDodgeRequestData : public UDecisionTreeEmptyRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DodgeRequestData");
		return ptr;
	}

};


// Class Indiana.Door
// 0x0168 (0x04F0 - 0x0388)
class ADoor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0388(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Door");
		return ptr;
	}


	bool TriggersTravel();
	void STATIC_OnOCLStateChange(EOCLState PreviousState, EOCLState CurrentState);
};


// Class Indiana.DragContainerWidget
// 0x0040 (0x0260 - 0x0220)
class UDragContainerWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0220(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DragContainerWidget");
		return ptr;
	}


	void STATIC_OnOperationDrop(class UDragDropOperation* Operation);
	void STATIC_OnOperationDragCancelled(class UDragDropOperation* Operation);
	void STATIC_OnDragStarted(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragGroupStarted(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragGroupDrop(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragGroupCancelled(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragConfirmDrop(class UIndianaDragDropOperation* Operation);
};


// Class Indiana.DraggableInterface
// 0x0000 (0x0030 - 0x0030)
class UDraggableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DraggableInterface");
		return ptr;
	}

};


// Class Indiana.DragVisualsWidget
// 0x0000 (0x0220 - 0x0220)
class UDragVisualsWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DragVisualsWidget");
		return ptr;
	}

};


// Class Indiana.ItemCellVisualsWidget
// 0x0008 (0x0228 - 0x0220)
class UItemCellVisualsWidget : public UDragVisualsWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemCellVisualsWidget");
		return ptr;
	}

};


// Class Indiana.DynamicTOD
// 0x07C8 (0x0B50 - 0x0388)
class ADynamicTOD : public AActor
{
public:
	unsigned char                                      UnknownData00[0x7C8];                                     // 0x0388(0x07C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DynamicTOD");
		return ptr;
	}


	void STATIC_WeatherTimelineUpdateReverse(float CurrentWeatherAmount, float CurrentMaterialWetness);
	void STATIC_WeatherTimelineUpdateForward(float CurrentWeatherAmount, float CurrentMaterialWetness);
	struct FName GetWeatherWwiseStateName();
	class UParticleSystem* GetWeatherParticleSystem();
	void STATIC_ForceUpdate();
};


// Class Indiana.Elevator
// 0x0128 (0x04B0 - 0x0388)
class AElevator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0388(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Elevator");
		return ptr;
	}


	void STATIC_SetCurrentFloor(int FloorIndex);
	void STATIC_OnStartMoveExternalDoors(int DestinationFloor, bool bFromStationary);
	void STATIC_OnEndMoveExternalDoors(int DestinationFloor);
	bool IsStationary();
	bool IsMoving();
	int GetTargetFloor();
	int GetCurrentFloor();
};


// Class Indiana.ElevatorAudioComponent
// 0x0050 (0x01D8 - 0x0188)
class UElevatorAudioComponent : public UInteractableAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0188(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ElevatorAudioComponent");
		return ptr;
	}


	void STATIC_Stop(EElevatorEventType Type);
	void STATIC_Play(EElevatorEventType Type);
};


// Class Indiana.IdleDisableStatusEffect
// 0x0008 (0x01A0 - 0x0198)
class UIdleDisableStatusEffect : public UDisableStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IdleDisableStatusEffect");
		return ptr;
	}

};


// Class Indiana.ElevatorDisableStatusEffect
// 0x0008 (0x01A8 - 0x01A0)
class UElevatorDisableStatusEffect : public UIdleDisableStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ElevatorDisableStatusEffect");
		return ptr;
	}


	void STATIC_OnElevatorMoveEnd(int DestinationFloor);
};


// Class Indiana.EmotionData
// 0x0050 (0x0088 - 0x0038)
class UEmotionData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EmotionData");
		return ptr;
	}

};


// Class Indiana.EnableEmitterModVisual
// 0x0018 (0x0080 - 0x0068)
class UEnableEmitterModVisual : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnableEmitterModVisual");
		return ptr;
	}

};


// Class Indiana.Encounter
// 0x0350 (0x06D8 - 0x0388)
class AEncounter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x0388(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Encounter");
		return ptr;
	}


	void STATIC_SetEncounterEnabled(bool bEnabled);
	void STATIC_ResetActivationFailed();
	void STATIC_RefreshEncounter();
	void STATIC_OnNodeBeginSpawning(class ASpawnNodeBase* Node);
	void STATIC_OnNodeActorSpawned(class ASpawnNodeBase* Node, bool bDamageable, bool bFirstSpawn);
	void STATIC_OnNodeActorKilled(class ASpawnNodeBase* Node, bool bFirstKill);
	void STATIC_OnNodeActorDespawned(class ASpawnNodeBase* Node);
	void STATIC_OnNodeActorDamaged(class ASpawnNodeBase* Node, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnNodeActorCombatState(class ASpawnNodeBase* Node, bool bInCombat, bool bRestoring);
	void STATIC_OnNodeActorAwareOfPlayer(class ASpawnNodeBase* Node, bool bRestoring);
	void STATIC_OnNodeActorAlertState(class ASpawnNodeBase* Node, class AActor* TargetActor, EAlertState State, bool bRestoring);
	void STATIC_OnActivationEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_OnActivationBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_IterateThroughSpawnedActors(const struct FScriptDelegate& GenericFunctionCall);
	bool IsEncounterActive();
	bool HasEncounterCompleted();
	void STATIC_ForceDeactivateEncounter();
	void STATIC_DeactivateEncounter();
	void STATIC_ActivateEncounter();
};


// Class Indiana.EncounterComponent
// 0x0000 (0x02B0 - 0x02B0)
class UEncounterComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EncounterComponent");
		return ptr;
	}

};


// Class Indiana.EncounterEnemyDescription
// 0x0008 (0x0038 - 0x0030)
class UEncounterEnemyDescription : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EncounterEnemyDescription");
		return ptr;
	}

};


// Class Indiana.EncounterEnemyScaled
// 0x0008 (0x0040 - 0x0038)
class UEncounterEnemyScaled : public UEncounterEnemyDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EncounterEnemyScaled");
		return ptr;
	}

};


// Class Indiana.EncounterEnemyFixed
// 0x0028 (0x0060 - 0x0038)
class UEncounterEnemyFixed : public UEncounterEnemyDescription
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EncounterEnemyFixed");
		return ptr;
	}

};


// Class Indiana.EncounterCompositionBase
// 0x0080 (0x00B0 - 0x0030)
class UEncounterCompositionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EncounterCompositionBase");
		return ptr;
	}

};


// Class Indiana.EncounterCompositionStandard
// 0x0010 (0x00C0 - 0x00B0)
class UEncounterCompositionStandard : public UEncounterCompositionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EncounterCompositionStandard");
		return ptr;
	}

};


// Class Indiana.EncounterCompositionSubList
// 0x0008 (0x00B8 - 0x00B0)
class UEncounterCompositionSubList : public UEncounterCompositionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EncounterCompositionSubList");
		return ptr;
	}

};


// Class Indiana.EncounterList
// 0x01B0 (0x01E8 - 0x0038)
class UEncounterList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0038(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EncounterList");
		return ptr;
	}

};


// Class Indiana.EnemyDifficultyWidget
// 0x0020 (0x02C8 - 0x02A8)
class UEnemyDifficultyWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnemyDifficultyWidget");
		return ptr;
	}

};


// Class Indiana.EnemyScannerComponent
// 0x0140 (0x0258 - 0x0118)
class UEnemyScannerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0118(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnemyScannerComponent");
		return ptr;
	}


	void STATIC_TimeDilationStart();
	void STATIC_TimeDilationEnd(float Duration);
};


// Class Indiana.EnemyScannerWidget
// 0x0058 (0x0300 - 0x02A8)
class UEnemyScannerWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnemyScannerWidget");
		return ptr;
	}


	void STATIC_ScanEnded();
	void STATIC_ScanCompleted();
};


// Class Indiana.EnvironmentalSpaceVolume
// 0x0008 (0x03E8 - 0x03E0)
class AEnvironmentalSpaceVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvironmentalSpaceVolume");
		return ptr;
	}

};


// Class Indiana.EnvironmentInteractionComponent
// 0x00B0 (0x01C8 - 0x0118)
class UEnvironmentInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0118(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvironmentInteractionComponent");
		return ptr;
	}

};


// Class Indiana.EnvQueryGenerator_Cover
// 0x0070 (0x00C8 - 0x0058)
class UEnvQueryGenerator_Cover : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0058(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryGenerator_Cover");
		return ptr;
	}

};


// Class Indiana.EnvQueryGenerator_FeetLocation
// 0x0008 (0x0060 - 0x0058)
class UEnvQueryGenerator_FeetLocation : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryGenerator_FeetLocation");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_CanSeeCharacter
// 0x0008 (0x01D0 - 0x01C8)
class UEnvQueryTest_CanSeeCharacter : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_CanSeeCharacter");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_CharacterHealth
// 0x0000 (0x01C8 - 0x01C8)
class UEnvQueryTest_CharacterHealth : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_CharacterHealth");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_Cover
// 0x0008 (0x01D0 - 0x01C8)
class UEnvQueryTest_Cover : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_Cover");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_DynamicSearchTest
// 0x0000 (0x01C8 - 0x01C8)
class UEnvQueryTest_DynamicSearchTest : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_DynamicSearchTest");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_DynamicFleeTest
// 0x0000 (0x01C8 - 0x01C8)
class UEnvQueryTest_DynamicFleeTest : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_DynamicFleeTest");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_FollowerPos
// 0x0070 (0x0238 - 0x01C8)
class UEnvQueryTest_FollowerPos : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x01C8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_FollowerPos");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_HasIndianaTag
// 0x0028 (0x01F0 - 0x01C8)
class UEnvQueryTest_HasIndianaTag : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_HasIndianaTag");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_IsActorOfClass
// 0x0008 (0x01D0 - 0x01C8)
class UEnvQueryTest_IsActorOfClass : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_IsActorOfClass");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_NavmeshRaycast
// 0x0008 (0x01D0 - 0x01C8)
class UEnvQueryTest_NavmeshRaycast : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_NavmeshRaycast");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_OccupiedRaycast
// 0x0020 (0x01E8 - 0x01C8)
class UEnvQueryTest_OccupiedRaycast : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_OccupiedRaycast");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_OccupiedEnvironmentNodes
// 0x0030 (0x01F8 - 0x01C8)
class UEnvQueryTest_OccupiedEnvironmentNodes : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_OccupiedEnvironmentNodes");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_PreferredCover
// 0x0060 (0x0230 - 0x01D0)
class UEnvQueryTest_PreferredCover : public UEnvQueryTest_Cover
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x01D0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_PreferredCover");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_Ranged
// 0x0008 (0x01D0 - 0x01C8)
class UEnvQueryTest_Ranged : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_Ranged");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_PreferredRanged
// 0x00C0 (0x0290 - 0x01D0)
class UEnvQueryTest_PreferredRanged : public UEnvQueryTest_Ranged
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x01D0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_PreferredRanged");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_Projectile
// 0x0008 (0x01D0 - 0x01C8)
class UEnvQueryTest_Projectile : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_Projectile");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_TeamRelationship
// 0x0008 (0x01D0 - 0x01C8)
class UEnvQueryTest_TeamRelationship : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_TeamRelationship");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_ValidCover
// 0x0000 (0x01D0 - 0x01D0)
class UEnvQueryTest_ValidCover : public UEnvQueryTest_Cover
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_ValidCover");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_ValidCoverFire
// 0x0030 (0x0200 - 0x01D0)
class UEnvQueryTest_ValidCoverFire : public UEnvQueryTest_Cover
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_ValidCoverFire");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_ValidJump
// 0x0000 (0x01C8 - 0x01C8)
class UEnvQueryTest_ValidJump : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_ValidJump");
		return ptr;
	}

};


// Class Indiana.EnvQueryTest_ValidRangedFire
// 0x0000 (0x01D0 - 0x01D0)
class UEnvQueryTest_ValidRangedFire : public UEnvQueryTest_Ranged
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnvQueryTest_ValidRangedFire");
		return ptr;
	}

};


// Class Indiana.EpicGameStoreDLCManager
// 0x0010 (0x0060 - 0x0050)
class UEpicGameStoreDLCManager : public UDLCManager
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EpicGameStoreDLCManager");
		return ptr;
	}

};


// Class Indiana.EQSContext_IndianaBase
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_IndianaBase : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_IndianaBase");
		return ptr;
	}

};


// Class Indiana.EQSContext_QuerierFeetLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_QuerierFeetLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_QuerierFeetLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_PrimaryTarget
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_PrimaryTarget : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_PrimaryTarget");
		return ptr;
	}

};


// Class Indiana.EQSContext_PrimaryTargetLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_PrimaryTargetLocation : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_PrimaryTargetLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_PrimaryTargetFeetLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_PrimaryTargetFeetLocation : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_PrimaryTargetFeetLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_PrimaryTargetStimulusLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_PrimaryTargetStimulusLocation : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_PrimaryTargetStimulusLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_FollowTarget
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_FollowTarget : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_FollowTarget");
		return ptr;
	}

};


// Class Indiana.EQSContext_WanderAchor
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_WanderAchor : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_WanderAchor");
		return ptr;
	}

};


// Class Indiana.EQSContext_FleeStatusEffectTarget
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_FleeStatusEffectTarget : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_FleeStatusEffectTarget");
		return ptr;
	}

};


// Class Indiana.EQSContext_CompanionFollowOrigin
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CompanionFollowOrigin : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CompanionFollowOrigin");
		return ptr;
	}

};


// Class Indiana.EQSContext_CompanionFollowOriginProjected
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CompanionFollowOriginProjected : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CompanionFollowOriginProjected");
		return ptr;
	}

};


// Class Indiana.EQSContext_CompanionFollowForward
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CompanionFollowForward : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CompanionFollowForward");
		return ptr;
	}

};


// Class Indiana.EQSContext_CompanionCommandLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CompanionCommandLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CompanionCommandLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_CompanionCommandForward
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CompanionCommandForward : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CompanionCommandForward");
		return ptr;
	}

};


// Class Indiana.EQSContext_CompanionCommandTarget
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CompanionCommandTarget : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CompanionCommandTarget");
		return ptr;
	}

};


// Class Indiana.EQSContext_Companions
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_Companions : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_Companions");
		return ptr;
	}

};


// Class Indiana.EQSContext_CalledShotSpellTargetFeetLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CalledShotSpellTargetFeetLocation : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CalledShotSpellTargetFeetLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_CalledShotSpellTarget
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CalledShotSpellTarget : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CalledShotSpellTarget");
		return ptr;
	}

};


// Class Indiana.EQSContext_CalledShotEndFurnitureLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_CalledShotEndFurnitureLocation : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_CalledShotEndFurnitureLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_SphereCheatLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_SphereCheatLocation : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_SphereCheatLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_Player
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_Player : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_Player");
		return ptr;
	}

};


// Class Indiana.EQSContext_PrimaryTargetStimulusSourceActorLocation
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_PrimaryTargetStimulusSourceActorLocation : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_PrimaryTargetStimulusSourceActorLocation");
		return ptr;
	}

};


// Class Indiana.EQSContext_TetherOrigin
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_TetherOrigin : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_TetherOrigin");
		return ptr;
	}

};


// Class Indiana.EQSContext_GeneralEQSActor
// 0x0000 (0x0030 - 0x0030)
class UEQSContext_GeneralEQSActor : public UEQSContext_IndianaBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSContext_GeneralEQSActor");
		return ptr;
	}

};


// Class Indiana.EQSRequest_IndianaBase
// 0x0020 (0x0058 - 0x0038)
class UEQSRequest_IndianaBase : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EQSRequest_IndianaBase");
		return ptr;
	}

};


// Class Indiana.EquipmentComponent
// 0x03A0 (0x04B8 - 0x0118)
class UEquipmentComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3A0];                                     // 0x0118(0x03A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EquipmentComponent");
		return ptr;
	}


	void STATIC_WeaponAdvanceLevelDebug(int NumLevels, bool bIgnoreCost);
	void STATIC_UnholsterWeapon(EHolsterRequestSource InSource);
	void STATIC_UnequipAllModsDebug();
	void STATIC_SetWeaponLevel(int Level, bool bOverrideWeaponLevels);
	void STATIC_SetCalledShotWeaponLevel(int Level);
	void STATIC_SetArmorLevel(int Level, bool bOverrideArmorLevels);
	void STATIC_OnUnlockAbilityChanged(EUnlockAbility Ability);
	void STATIC_OnUnequipDisguise();
	void STATIC_OnStopClimb();
	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnStartUnholsterWeapon(class UWeapon* Weapon);
	void STATIC_OnStartUnequipWeapon(class UWeapon* Weapon);
	void STATIC_OnStartReloadWeapon(class UWeapon* Weapon);
	void STATIC_OnStartHolsterWeapon(class UWeapon* Weapon);
	void STATIC_OnStartEquipWeapon(class UWeapon* Weapon);
	void STATIC_OnStartClimb();
	void STATIC_OnMedKitUsed(int ConsumeablesUsed);
	void STATIC_OnItemRemovedFromInventory(const struct FItemStack& ItemStack);
	void STATIC_OnItemAddedToInventory(const struct FItemStack& ItemStack);
	void STATIC_OnEquipDisguise(class UDisguiseData* Disguise);
	void STATIC_OnEndUnholsterWeapon(class UWeapon* Weapon);
	void STATIC_OnEndUnequipWeapon(class UWeapon* Weapon);
	void STATIC_OnEndReloadWeapon(class UWeapon* Weapon);
	void STATIC_OnEndHolsterWeapon(class UWeapon* Weapon);
	void STATIC_OnEndEquipWeapon(class UWeapon* Weapon);
	void STATIC_LoadAmmoDebug(const struct FName& AmmoName);
	void STATIC_HolsterWeapon(EHolsterRequestSource InSource, bool bInstantHolster);
	class UWeapon* GetEquippedWeapon();
	void STATIC_EquipWeaponMicroModDebug(const struct FName& MicroModName);
	void STATIC_EquipWeaponFromSlot(uint32_t SlotIndex, bool bInstantEquip);
	void STATIC_EquipWeaponDebug(const struct FName& WeaponName);
	void STATIC_EquipWeapon(class UWeapon* WeaponToEquip, bool bInstantEquip);
	void STATIC_EquipPreviousWeapon();
	void STATIC_EquipModDebug(const struct FName& ModName);
	void STATIC_EquipDefaultWeapon();
	void STATIC_EquipArmorSetMicroModDebug(const struct FName& MicroModName);
	void STATIC_EquipArmorModByClassDebug(EArmorModSlot ArmorModSlot, class UClass* ArmorModItem);
	void STATIC_EquipArmorDebug(const struct FName& ArmorName);
	void STATIC_EquipArmorByClassDebug(EArmorSlot ArmorSlot, class UClass* ArmorItem);
};


// Class Indiana.EquipmentModsWidget
// 0x00F0 (0x0398 - 0x02A8)
class UEquipmentModsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x02A8(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EquipmentModsWidget");
		return ptr;
	}

};


// Class Indiana.EquipmentModWidget
// 0x0030 (0x0250 - 0x0220)
class UEquipmentModWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0220(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EquipmentModWidget");
		return ptr;
	}

};


// Class Indiana.EventEffectComponent
// 0x0050 (0x0168 - 0x0118)
class UEventEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0118(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EventEffectComponent");
		return ptr;
	}

};


// Class Indiana.EventEffects
// 0x0010 (0x0040 - 0x0030)
class UEventEffects : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EventEffects");
		return ptr;
	}

};


// Class Indiana.EventListener
// 0x0028 (0x0058 - 0x0030)
class UEventListener : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EventListener");
		return ptr;
	}

};


// Class Indiana.FactionListener
// 0x0058 (0x00B0 - 0x0058)
class UFactionListener : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FactionListener");
		return ptr;
	}

};


// Class Indiana.OnKillListener
// 0x0020 (0x00D0 - 0x00B0)
class UOnKillListener : public UFactionListener
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnKillListener");
		return ptr;
	}


	void STATIC_OnKill(class AActor* Victim, const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.OnCompanionKillListener
// 0x0018 (0x00C8 - 0x00B0)
class UOnCompanionKillListener : public UFactionListener
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCompanionKillListener");
		return ptr;
	}


	void STATIC_OnKill(class AActor* Victim, const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.OnKillTurnToAshListener
// 0x0008 (0x00B8 - 0x00B0)
class UOnKillTurnToAshListener : public UFactionListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnKillTurnToAshListener");
		return ptr;
	}


	void STATIC_OnKill(class AActor* Victim, class UClass* DmgType);
};


// Class Indiana.OnCompanionRegistrationChanged
// 0x0000 (0x0058 - 0x0058)
class UOnCompanionRegistrationChanged : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCompanionRegistrationChanged");
		return ptr;
	}


	void STATIC_OnCompanionRegistrationChanged();
};


// Class Indiana.OnCompanionRegistrationAdded
// 0x0000 (0x0058 - 0x0058)
class UOnCompanionRegistrationAdded : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCompanionRegistrationAdded");
		return ptr;
	}


	void STATIC_OnCompanionRegistrationAdded();
};


// Class Indiana.OnAttackComplete
// 0x0000 (0x0058 - 0x0058)
class UOnAttackComplete : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnAttackComplete");
		return ptr;
	}


	void STATIC_OnAttackComplete(int AttackID);
};


// Class Indiana.OnCausedDamage
// 0x0048 (0x00F8 - 0x00B0)
class UOnCausedDamage : public UFactionListener
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCausedDamage");
		return ptr;
	}


	void STATIC_OnCauseDamage(const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.OnReceiveDamage
// 0x0030 (0x00E0 - 0x00B0)
class UOnReceiveDamage : public UFactionListener
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnReceiveDamage");
		return ptr;
	}


	void STATIC_OnDamageEvent(const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.OnReceiveFallingDamage
// 0x0000 (0x0058 - 0x0058)
class UOnReceiveFallingDamage : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnReceiveFallingDamage");
		return ptr;
	}


	void STATIC_OnFallingDamage(float Damage);
};


// Class Indiana.OnMeleeHit
// 0x0010 (0x00C0 - 0x00B0)
class UOnMeleeHit : public UFactionListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnMeleeHit");
		return ptr;
	}


	void STATIC_OnMeleeHit(TArray<class AActor*> HitActors, class UWeapon* Weapon, float Damage);
};


// Class Indiana.OnMeleeActionStart
// 0x0008 (0x0060 - 0x0058)
class UOnMeleeActionStart : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnMeleeActionStart");
		return ptr;
	}


	void STATIC_OnMeleeActionStart(EMeleeAction ActionStarted);
};


// Class Indiana.OnMeleeActionEnd
// 0x0008 (0x0060 - 0x0058)
class UOnMeleeActionEnd : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnMeleeActionEnd");
		return ptr;
	}


	void STATIC_OnMeleeActionEnd(EMeleeAction ActionEnded);
};


// Class Indiana.OnSpellCast
// 0x0008 (0x0060 - 0x0058)
class UOnSpellCast : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSpellCast");
		return ptr;
	}


	void STATIC_OnSpellCast(class UClass* Spell);
};


// Class Indiana.OnSpellRemoved
// 0x0008 (0x0060 - 0x0058)
class UOnSpellRemoved : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSpellRemoved");
		return ptr;
	}


	void STATIC_OnSpellRemoved(class UClass* RemovedSpell);
};


// Class Indiana.OnBlockStart
// 0x0000 (0x0058 - 0x0058)
class UOnBlockStart : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnBlockStart");
		return ptr;
	}


	void STATIC_OnBlockStart();
};


// Class Indiana.OnBlockEnd
// 0x0000 (0x0058 - 0x0058)
class UOnBlockEnd : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnBlockEnd");
		return ptr;
	}


	void STATIC_OnBlockEnd();
};


// Class Indiana.OnPerfectBlock
// 0x0000 (0x0058 - 0x0058)
class UOnPerfectBlock : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPerfectBlock");
		return ptr;
	}


	void STATIC_OnPerfectBlockEvent(class AIndianaCharacter* Attacker, float Damage);
};


// Class Indiana.OnBlockedHit
// 0x0000 (0x0058 - 0x0058)
class UOnBlockedHit : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnBlockedHit");
		return ptr;
	}


	void STATIC_OnBlockedHitEvent(bool bIsMeleeHit);
};


// Class Indiana.OnDetected
// 0x0000 (0x0058 - 0x0058)
class UOnDetected : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnDetected");
		return ptr;
	}


	void STATIC_OnDetectedEvent(class AActor* Detector);
};


// Class Indiana.OnIndividualDetected
// 0x0010 (0x00C0 - 0x00B0)
class UOnIndividualDetected : public UFactionListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnIndividualDetected");
		return ptr;
	}


	void STATIC_OnIndividualUnDetectedEvent(class AIndianaAiCharacter* Detector);
	void STATIC_OnIndividualDetectedEvent(class AIndianaAiCharacter* Detector);
};


// Class Indiana.OnPlayerMoveStart
// 0x0000 (0x0058 - 0x0058)
class UOnPlayerMoveStart : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPlayerMoveStart");
		return ptr;
	}


	void STATIC_OnPlayerMoveStart();
};


// Class Indiana.OnPlayerMoveEnd
// 0x0000 (0x0058 - 0x0058)
class UOnPlayerMoveEnd : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPlayerMoveEnd");
		return ptr;
	}


	void STATIC_OnPlayerMoveEnd();
};


// Class Indiana.OnDodgeEvent
// 0x0000 (0x0058 - 0x0058)
class UOnDodgeEvent : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnDodgeEvent");
		return ptr;
	}


	void STATIC_OnDodge(EDodgeDirection Direction);
};


// Class Indiana.OnStatusEffectAddedEvent
// 0x0010 (0x0068 - 0x0058)
class UOnStatusEffectAddedEvent : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnStatusEffectAddedEvent");
		return ptr;
	}


	void STATIC_OnAddStatusEffect(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffectAdded);
};


// Class Indiana.OnStatusEffectRemovedEvent
// 0x0008 (0x0060 - 0x0058)
class UOnStatusEffectRemovedEvent : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnStatusEffectRemovedEvent");
		return ptr;
	}


	void STATIC_OnStatusEffectRemoved(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffectRemoved);
};


// Class Indiana.OnNumHostileStatusEffects
// 0x0010 (0x0068 - 0x0058)
class UOnNumHostileStatusEffects : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnNumHostileStatusEffects");
		return ptr;
	}


	void STATIC_OnStatusEffectRemoved(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffectRemoved);
	void STATIC_OnStatusEffectAdded(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffectAdded);
};


// Class Indiana.HasStatusEffectsEvent
// 0x0010 (0x0068 - 0x0058)
class UHasStatusEffectsEvent : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HasStatusEffectsEvent");
		return ptr;
	}


	void STATIC_OnAddStatusEffect(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffectAdded);
};


// Class Indiana.OnSkillUsedEvent
// 0x0008 (0x0060 - 0x0058)
class UOnSkillUsedEvent : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSkillUsedEvent");
		return ptr;
	}


	void STATIC_OnSkillUsed(ESkill SkillUsed, class AActor* Target);
};


// Class Indiana.OnSkillEndedEvent
// 0x0008 (0x0060 - 0x0058)
class UOnSkillEndedEvent : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSkillEndedEvent");
		return ptr;
	}


	void STATIC_OnSkillEnded(ESkill SkillUsed, class AActor* Target);
};


// Class Indiana.OnSkillCheckSuccess
// 0x0008 (0x0060 - 0x0058)
class UOnSkillCheckSuccess : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSkillCheckSuccess");
		return ptr;
	}


	void STATIC_OnSkillCheckSuccess(EXPGainReason Reason, int XPEarned, ESkill SkillUsed);
};


// Class Indiana.OnItemConsumed
// 0x0008 (0x0060 - 0x0058)
class UOnItemConsumed : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnItemConsumed");
		return ptr;
	}


	void STATIC_OnItemConsumed(const struct FItemStack& ItemStack);
};


// Class Indiana.OnSpendMoney
// 0x0008 (0x0060 - 0x0058)
class UOnSpendMoney : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSpendMoney");
		return ptr;
	}


	void STATIC_OnMoneySpent(int Money, bool bVendorInteraction);
};


// Class Indiana.OnPickPocket
// 0x0000 (0x0058 - 0x0058)
class UOnPickPocket : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPickPocket");
		return ptr;
	}


	void STATIC_OnPickPocket(class AActor* Target);
};


// Class Indiana.OnPickPocketStart
// 0x0000 (0x0058 - 0x0058)
class UOnPickPocketStart : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPickPocketStart");
		return ptr;
	}


	void STATIC_OnPickPocket(class AActor* Target);
};


// Class Indiana.OnPickPocketEnd
// 0x0000 (0x0058 - 0x0058)
class UOnPickPocketEnd : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPickPocketEnd");
		return ptr;
	}


	void STATIC_OnPickPocket(class AActor* Target);
};


// Class Indiana.ReputationListener
// 0x0010 (0x0068 - 0x0058)
class UReputationListener : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReputationListener");
		return ptr;
	}


	void STATIC_OnReputationChange(class UFactionData* FactionData, EReputationType InReputationType, int Amount, class UReputationData* ReputationBefore, class UReputationData* ReputationAfter);
};


// Class Indiana.OnPartyChange
// 0x0010 (0x0068 - 0x0058)
class UOnPartyChange : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPartyChange");
		return ptr;
	}


	void STATIC_OnPartyChanged(class AIndianaAiCharacter* Companion, bool bAdded);
};


// Class Indiana.OnPerfectDodge
// 0x0000 (0x0058 - 0x0058)
class UOnPerfectDodge : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPerfectDodge");
		return ptr;
	}


	void STATIC_OnPerfectDodge(class AActor* Attacker);
};


// Class Indiana.OnBehaviorStateChange
// 0x0008 (0x0060 - 0x0058)
class UOnBehaviorStateChange : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnBehaviorStateChange");
		return ptr;
	}


	void STATIC_OnBehaviorStateEvent(EBehaviorState InBehaviorState, EBehaviorStateEventType InEventType);
};


// Class Indiana.OnCalledShotCameraChange
// 0x0008 (0x0060 - 0x0058)
class UOnCalledShotCameraChange : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCalledShotCameraChange");
		return ptr;
	}


	void STATIC_OnCameraStepEvent(ECalledShotCameraStep CameraStep);
};


// Class Indiana.OnCompanionCommandIssued
// 0x0008 (0x0060 - 0x0058)
class UOnCompanionCommandIssued : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCompanionCommandIssued");
		return ptr;
	}

};


// Class Indiana.OnCompanionCommandIssuedEnemy
// 0x0008 (0x0060 - 0x0058)
class UOnCompanionCommandIssuedEnemy : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCompanionCommandIssuedEnemy");
		return ptr;
	}

};


// Class Indiana.OnHealthPercentage
// 0x0008 (0x0060 - 0x0058)
class UOnHealthPercentage : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnHealthPercentage");
		return ptr;
	}


	void STATIC_OnHealthChanged(float HealthChange, class AActor* Instigator);
};


// Class Indiana.OnCompanionKilled
// 0x0000 (0x0058 - 0x0058)
class UOnCompanionKilled : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCompanionKilled");
		return ptr;
	}


	void STATIC_OnCompanionKilled(class AActor* Companion);
};


// Class Indiana.OnCinematicModeChange
// 0x0008 (0x0060 - 0x0058)
class UOnCinematicModeChange : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCinematicModeChange");
		return ptr;
	}


	void STATIC_OnCinematicModeChange(bool bCinematicMode);
};


// Class Indiana.OnMedKitUsed
// 0x0008 (0x0060 - 0x0058)
class UOnMedKitUsed : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnMedKitUsed");
		return ptr;
	}


	void STATIC_OnMedKitUsed(int ConsumablesUsed);
};


// Class Indiana.OnRestrictedAreaEntered
// 0x0000 (0x0058 - 0x0058)
class UOnRestrictedAreaEntered : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRestrictedAreaEntered");
		return ptr;
	}


	void STATIC_OnRestrictedAreaEntered(class ARestrictedArea* RestrictedArea);
};


// Class Indiana.OnRestrictedAreaExited
// 0x0000 (0x0058 - 0x0058)
class UOnRestrictedAreaExited : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRestrictedAreaExited");
		return ptr;
	}


	void STATIC_OnRestrictedAreaExited(class ARestrictedArea* RestrictedArea);
};


// Class Indiana.OrListener
// 0x0010 (0x0068 - 0x0058)
class UOrListener : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OrListener");
		return ptr;
	}

};


// Class Indiana.OnAcrophobiaEnabled
// 0x0008 (0x0060 - 0x0058)
class UOnAcrophobiaEnabled : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnAcrophobiaEnabled");
		return ptr;
	}


	void STATIC_OnAcrophobiaChanged(bool bNowEnabled);
};


// Class Indiana.OnTactialTimeDialationStart
// 0x0000 (0x0058 - 0x0058)
class UOnTactialTimeDialationStart : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnTactialTimeDialationStart");
		return ptr;
	}


	void STATIC_OnTacticalTimeDilationStart();
};


// Class Indiana.OnTactialTimeDialationEnd
// 0x0008 (0x0060 - 0x0058)
class UOnTactialTimeDialationEnd : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnTactialTimeDialationEnd");
		return ptr;
	}


	void STATIC_OnTacticalTimeDilationEnd(float Duration);
};


// Class Indiana.OnResurrect
// 0x0000 (0x0058 - 0x0058)
class UOnResurrect : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnResurrect");
		return ptr;
	}


	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
};


// Class Indiana.OnRest
// 0x0000 (0x0058 - 0x0058)
class UOnRest : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRest");
		return ptr;
	}


	void STATIC_OnRest();
};


// Class Indiana.OnInteractableSelectionChanged
// 0x0008 (0x0060 - 0x0058)
class UOnInteractableSelectionChanged : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnInteractableSelectionChanged");
		return ptr;
	}


	void STATIC_OnInteractableSelectionChanged(const struct FInteractionDescription& Description);
};


// Class Indiana.OnStatUpdated
// 0x0008 (0x0060 - 0x0058)
class UOnStatUpdated : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnStatUpdated");
		return ptr;
	}


	void STATIC_OnStatUpdated(class URpgStat* Stat);
};


// Class Indiana.OnSkillUpdated
// 0x0008 (0x0060 - 0x0058)
class UOnSkillUpdated : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSkillUpdated");
		return ptr;
	}


	void STATIC_OnSkillUpdated(ESkill Skill, int NewValue);
};


// Class Indiana.OnOccupiedElevatorMove
// 0x0000 (0x0058 - 0x0058)
class UOnOccupiedElevatorMove : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnOccupiedElevatorMove");
		return ptr;
	}


	void STATIC_OnOccupiedElevatorMove(class AElevator* Elevator);
};


// Class Indiana.OnAnimationSpellTrigger
// 0x0010 (0x0068 - 0x0058)
class UOnAnimationSpellTrigger : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnAnimationSpellTrigger");
		return ptr;
	}


	void STATIC_OnAnimationTriggered(const struct FGameplayTag& TriggerType, bool Enabled);
};


// Class Indiana.OnJump
// 0x0000 (0x0058 - 0x0058)
class UOnJump : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnJump");
		return ptr;
	}


	void STATIC_OnJump();
};


// Class Indiana.OnLanded
// 0x0008 (0x0060 - 0x0058)
class UOnLanded : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnLanded");
		return ptr;
	}


	void STATIC_OnLanded(float FallDistance);
};


// Class Indiana.OnTTDMeterPercentage
// 0x0008 (0x0060 - 0x0058)
class UOnTTDMeterPercentage : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnTTDMeterPercentage");
		return ptr;
	}


	void STATIC_OnTTDMeterChanged(float Value);
};


// Class Indiana.OnSprintStart
// 0x0000 (0x0058 - 0x0058)
class UOnSprintStart : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSprintStart");
		return ptr;
	}


	void STATIC_OnSprintStarted();
};


// Class Indiana.OnSprintEnd
// 0x0000 (0x0058 - 0x0058)
class UOnSprintEnd : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSprintEnd");
		return ptr;
	}


	void STATIC_OnSprintEnded();
};


// Class Indiana.OnPlayerFirstAttacked
// 0x0000 (0x00B0 - 0x00B0)
class UOnPlayerFirstAttacked : public UFactionListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPlayerFirstAttacked");
		return ptr;
	}


	void STATIC_OnFirstAttacked(class AActor* Attacker);
};


// Class Indiana.OnPlayerFirstAttack
// 0x0000 (0x00B0 - 0x00B0)
class UOnPlayerFirstAttack : public UFactionListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPlayerFirstAttack");
		return ptr;
	}


	void STATIC_OnFirstAttack(class AActor* Target);
};


// Class Indiana.OnStateOfBeingChanged
// 0x0008 (0x0060 - 0x0058)
class UOnStateOfBeingChanged : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnStateOfBeingChanged");
		return ptr;
	}


	void STATIC_OnStateOfBeingChanged(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
};


// Class Indiana.OnObjectBumped
// 0x0008 (0x0060 - 0x0058)
class UOnObjectBumped : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnObjectBumped");
		return ptr;
	}


	void STATIC_OnBumped(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Indiana.OnCombatStateChange
// 0x0008 (0x0060 - 0x0058)
class UOnCombatStateChange : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCombatStateChange");
		return ptr;
	}


	void STATIC_OnCombatStateChange(bool bInCombat, bool bRestoring);
};


// Class Indiana.OnGetUp
// 0x0008 (0x0060 - 0x0058)
class UOnGetUp : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnGetUp");
		return ptr;
	}


	void STATIC_OnGetUp(bool bInBegan);
};


// Class Indiana.OnPlayerConversationChange
// 0x0008 (0x0060 - 0x0058)
class UOnPlayerConversationChange : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPlayerConversationChange");
		return ptr;
	}


	void STATIC_OnPlayerConversationChange(class UConversationInstance* Instance, bool bInEntered);
};


// Class Indiana.OnAddictionTimerEntersMaxed
// 0x0008 (0x0060 - 0x0058)
class UOnAddictionTimerEntersMaxed : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnAddictionTimerEntersMaxed");
		return ptr;
	}


	void STATIC_OnAddictionTimerEntersMaxed(const struct FGameplayTag& TimerTag);
};


// Class Indiana.OnAddictionTimerLeavesMaxed
// 0x0008 (0x0060 - 0x0058)
class UOnAddictionTimerLeavesMaxed : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnAddictionTimerLeavesMaxed");
		return ptr;
	}


	void STATIC_OnAddictionTimerLeavesMaxed(const struct FGameplayTag& TimerTag);
};


// Class Indiana.OnSellItemNumBits
// 0x0000 (0x0058 - 0x0058)
class UOnSellItemNumBits : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSellItemNumBits");
		return ptr;
	}


	void STATIC_OnVectorTransaction(int BuyingBalance, int SellingBalance, int RepairingBalance, struct FItemStackSplit* ItemStackSplit);
};


// Class Indiana.OnFlawAccepted
// 0x0008 (0x0060 - 0x0058)
class UOnFlawAccepted : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnFlawAccepted");
		return ptr;
	}


	void STATIC_OnFlawAccepted(class UClass* Flaw, int Count);
};


// Class Indiana.OnLevelChangedListener
// 0x0008 (0x0060 - 0x0058)
class UOnLevelChangedListener : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnLevelChangedListener");
		return ptr;
	}


	void STATIC_OnLevelChanged(int Level);
};


// Class Indiana.OnItemTinkered
// 0x0000 (0x0058 - 0x0058)
class UOnItemTinkered : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnItemTinkered");
		return ptr;
	}


	void STATIC_OnItemTinkered();
};


// Class Indiana.OnEncumberedChange
// 0x0008 (0x0060 - 0x0058)
class UOnEncumberedChange : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnEncumberedChange");
		return ptr;
	}


	void STATIC_OnEncumberedChange(bool bInEncumbered);
};


// Class Indiana.OnStartCrouch
// 0x0000 (0x0058 - 0x0058)
class UOnStartCrouch : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnStartCrouch");
		return ptr;
	}


	void STATIC_OnCrouch();
};


// Class Indiana.OnStopCrouch
// 0x0000 (0x0058 - 0x0058)
class UOnStopCrouch : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnStopCrouch");
		return ptr;
	}


	void STATIC_OnStopCrouch();
};


// Class Indiana.OnInterrogateStartEvent
// 0x0000 (0x0058 - 0x0058)
class UOnInterrogateStartEvent : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnInterrogateStartEvent");
		return ptr;
	}


	void STATIC_OnStartInterrogation();
};


// Class Indiana.OnGroinHit
// 0x0000 (0x0058 - 0x0058)
class UOnGroinHit : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnGroinHit");
		return ptr;
	}


	void STATIC_OnGroinHit();
};


// Class Indiana.OnPatientNKill
// 0x0000 (0x0058 - 0x0058)
class UOnPatientNKill : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPatientNKill");
		return ptr;
	}


	void STATIC_OnPatientNKill();
};


// Class Indiana.OnMadScientistKill
// 0x0000 (0x0058 - 0x0058)
class UOnMadScientistKill : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnMadScientistKill");
		return ptr;
	}


	void STATIC_OnMadScientistKill();
};


// Class Indiana.OnBrandsMatch
// 0x0000 (0x0058 - 0x0058)
class UOnBrandsMatch : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnBrandsMatch");
		return ptr;
	}


	void STATIC_OnBrandsMatch();
};


// Class Indiana.OnSharpDressed
// 0x0000 (0x0058 - 0x0058)
class UOnSharpDressed : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSharpDressed");
		return ptr;
	}


	void STATIC_OnSharpDressed();
};


// Class Indiana.OnSpecialPETBenefits
// 0x0000 (0x0058 - 0x0058)
class UOnSpecialPETBenefits : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnSpecialPETBenefits");
		return ptr;
	}


	void STATIC_OnSpecialPETBenefits();
};


// Class Indiana.OnUdderGatlingNeedler
// 0x0000 (0x0058 - 0x0058)
class UOnUdderGatlingNeedler : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnUdderGatlingNeedler");
		return ptr;
	}


	void STATIC_OnUdderGatlingNeedler();
};


// Class Indiana.OnElementalMaelstrom
// 0x0000 (0x0058 - 0x0058)
class UOnElementalMaelstrom : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnElementalMaelstrom");
		return ptr;
	}


	void STATIC_OnElementalMaelstrom();
};


// Class Indiana.OnInterrogateEndEvent
// 0x0008 (0x0060 - 0x0058)
class UOnInterrogateEndEvent : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnInterrogateEndEvent");
		return ptr;
	}


	void STATIC_OnEndInterrogation(EInterrogationResult InterrogationResult, class AIndianaAiCharacter* Interrogator, ECrimeType InCrime, bool bInDisguised, int InDisguiseInterrogationsPassed);
};


// Class Indiana.OnMaxPositiveFactions
// 0x0000 (0x0058 - 0x0058)
class UOnMaxPositiveFactions : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnMaxPositiveFactions");
		return ptr;
	}


	void STATIC_OnMaxPositiveFactions();
};


// Class Indiana.OnMaxNegativeFactions
// 0x0000 (0x0058 - 0x0058)
class UOnMaxNegativeFactions : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnMaxNegativeFactions");
		return ptr;
	}


	void STATIC_OnMaxNegativeFactions();
};


// Class Indiana.OnKillingBlowListener
// 0x0000 (0x0058 - 0x0058)
class UOnKillingBlowListener : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnKillingBlowListener");
		return ptr;
	}


	void STATIC_OnKillingBlow();
};


// Class Indiana.OnQuestCompleteListener
// 0x0000 (0x0058 - 0x0058)
class UOnQuestCompleteListener : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnQuestCompleteListener");
		return ptr;
	}


	void STATIC_OnQuestComplete(const struct FGuid& QuestID);
};


// Class Indiana.OnModInstalledListener
// 0x0000 (0x0058 - 0x0058)
class UOnModInstalledListener : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnModInstalledListener");
		return ptr;
	}


	void STATIC_OnModInstalled();
};


// Class Indiana.OnWeaponEquipped
// 0x0010 (0x0068 - 0x0058)
class UOnWeaponEquipped : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnWeaponEquipped");
		return ptr;
	}


	void STATIC_OnWeaponEquipped(class UWeapon* Weapon);
};


// Class Indiana.OnWeaponHolstered
// 0x0010 (0x0068 - 0x0058)
class UOnWeaponHolstered : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnWeaponHolstered");
		return ptr;
	}


	void STATIC_OnWeaponHolstered(class UWeapon* Weapon);
};


// Class Indiana.OnWeaponUnholstered
// 0x0010 (0x0068 - 0x0058)
class UOnWeaponUnholstered : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnWeaponUnholstered");
		return ptr;
	}


	void STATIC_OnWeaponUnholstered(class UWeapon* Weapon);
};


// Class Indiana.OnWithinRoboRange
// 0x0010 (0x00C0 - 0x00B0)
class UOnWithinRoboRange : public UFactionListener
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnWithinRoboRange");
		return ptr;
	}


	void STATIC_OnRoboWithinRangeStateChanged();
};


// Class Indiana.OnPlayerBeginPlay
// 0x0000 (0x0058 - 0x0058)
class UOnPlayerBeginPlay : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPlayerBeginPlay");
		return ptr;
	}


	void STATIC_OnPlayerBeginPlay();
};


// Class Indiana.OnFastTravelInitiated
// 0x0000 (0x0058 - 0x0058)
class UOnFastTravelInitiated : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnFastTravelInitiated");
		return ptr;
	}


	void STATIC_OnFastTravelInitiated(class UTravelDestinationData* TravelData, float TimePassed, bool bTravelFromMapLedger);
};


// Class Indiana.OnRespec
// 0x0000 (0x0058 - 0x0058)
class UOnRespec : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRespec");
		return ptr;
	}


	void STATIC_OnRespec();
};


// Class Indiana.OnCarryWeightChange
// 0x0008 (0x0060 - 0x0058)
class UOnCarryWeightChange : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnCarryWeightChange");
		return ptr;
	}


	void STATIC_OnCarryWeightChange();
};


// Class Indiana.OnGlobalVarChanged
// 0x0020 (0x0078 - 0x0058)
class UOnGlobalVarChanged : public UEventListener
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnGlobalVarChanged");
		return ptr;
	}


	void STATIC_OnGlobalVarChanged(const class FString& VariableName, int NewValue);
};


// Class Indiana.OnPickupAudioLog
// 0x0000 (0x0058 - 0x0058)
class UOnPickupAudioLog : public UEventListener
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnPickupAudioLog");
		return ptr;
	}


	void STATIC_OnPickupAudioLog(class UAudioLogDataAsset* AudioLogDataAsset);
};


// Class Indiana.EvidenceActor
// 0x0298 (0x0620 - 0x0388)
class AEvidenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x298];                                     // 0x0388(0x0298) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EvidenceActor");
		return ptr;
	}


	void STATIC_RefreshHasItemEquipped(class UWeapon* Weapon);
	void STATIC_RefreshHasItem();
	void STATIC_PlayerExitedProximity();
	void STATIC_PlayerEnteredProximity();
	void STATIC_OnVisibilityStateChanged();
	void STATIC_OnConversationStarted(class UConversationInstance* Instance);
	void STATIC_OnConversationEnded(class UConversationInstance* Instance);
	void STATIC_OnCombatStateChanged(bool bCombatIn, bool bRestoring);
	void STATIC_OnActivated(bool bActivated);
	bool IsVisible();
	bool IsInDAConversation();
	bool HasBeenScanned();
};


// Class Indiana.EvidenceComponent
// 0x0000 (0x0118 - 0x0118)
class UEvidenceComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EvidenceComponent");
		return ptr;
	}

};


// Class Indiana.InteractionEvent
// 0x0000 (0x0030 - 0x0030)
class UInteractionEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InteractionEvent");
		return ptr;
	}

};


// Class Indiana.ExaminableEvent
// 0x0038 (0x0068 - 0x0030)
class UExaminableEvent : public UInteractionEvent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ExaminableEvent");
		return ptr;
	}

};


// Class Indiana.ExaminableWidget
// 0x0048 (0x02F8 - 0x02B0)
class UExaminableWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ExaminableWidget");
		return ptr;
	}

};


// Class Indiana.ExpandableAreaBase
// 0x02D0 (0x03E8 - 0x0118)
class UExpandableAreaBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0118(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ExpandableAreaBase");
		return ptr;
	}


	void STATIC_SetIsExpanded_Animated(bool IsExpanded);
	void STATIC_SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};


// Class Indiana.EyeColor
// 0x0020 (0x0058 - 0x0038)
class UEyeColor : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EyeColor");
		return ptr;
	}

};


// Class Indiana.FaceFxRigsGameDataReference
// 0x0000 (0x0050 - 0x0050)
class UFaceFxRigsGameDataReference : public UGameDataReference
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FaceFxRigsGameDataReference");
		return ptr;
	}

};


// Class Indiana.FactionData
// 0x01D0 (0x0200 - 0x0030)
class UFactionData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0030(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FactionData");
		return ptr;
	}

};


// Class Indiana.FactionManager
// 0x0078 (0x00A8 - 0x0030)
class UFactionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FactionManager");
		return ptr;
	}


	void STATIC_SetRandomReputations_Debug();
	void STATIC_SetPositiveReputation_Debug(const class FString& FactionName, int Amount);
	void STATIC_SetNegativeReputation_Debug(const class FString& FactionName, int Amount);
	void STATIC_SetFactionEncountered_BP(class UClass* FactionData);
	bool IsReputationRankType_BP(class UClass* FactionData, EReputationRankType InRankType, EComparisonOperator Operator);
	bool IsReputationRank_BP(class UClass* FactionData, EReputationRankType InRankType, int InRank, EComparisonOperator Operator);
	class UReputationData* GetReputation_BP(class UClass* FactionData);
	void STATIC_ClearFactionRecentHostilityToPlayer_BP(class UClass* FactionData);
	void STATIC_AddReputation_BP(class UClass* FactionData, EReputationType ReputationType, EReputationIncrementType IncrementType, int CustomAmount, EReputationActionType ReputationAction);
	void STATIC_AddPositiveReputation_Debug(const class FString& FactionName, int Amount);
	void STATIC_AddNegativeReputation_Debug(const class FString& FactionName, int Amount);
};


// Class Indiana.ToolTipContentWidget
// 0x0000 (0x02A8 - 0x02A8)
class UToolTipContentWidget : public UIndianaUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ToolTipContentWidget");
		return ptr;
	}

};


// Class Indiana.FastTravelTooltipWidget
// 0x0010 (0x02B8 - 0x02A8)
class UFastTravelTooltipWidget : public UToolTipContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FastTravelTooltipWidget");
		return ptr;
	}

};


// Class Indiana.FilePathLoader
// 0x0000 (0x0030 - 0x0030)
class UFilePathLoader : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FilePathLoader");
		return ptr;
	}

};


// Class Indiana.FireMode
// 0x0400 (0x0980 - 0x0580)
class UFireMode : public URangedMode
{
public:
	unsigned char                                      UnknownData00[0x400];                                     // 0x0580(0x0400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FireMode");
		return ptr;
	}


	bool UsesCharge();
	void STATIC_ResetCharge();
	void STATIC_OnTimeDilationUpdated(float Value);
	void STATIC_OnStatUpdated(class URpgStat* Stat);
	bool IsSpinUp();
	bool IsSemiAutomatic();
	bool IsProjectileCharge();
	bool IsBurst();
	float GetChargeProgress();
	bool CanCharge();
};


// Class Indiana.FireMultiDamageTypeMode
// 0x0040 (0x09C0 - 0x0980)
class UFireMultiDamageTypeMode : public UFireMode
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0980(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FireMultiDamageTypeMode");
		return ptr;
	}

};


// Class Indiana.SpawnNodeBase
// 0x0280 (0x0608 - 0x0388)
class ASpawnNodeBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0388(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnNodeBase");
		return ptr;
	}


	void STATIC_OnActorTookDamage(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnActorNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnActorDespawned();
	void STATIC_OnActorCombatStateChanged(bool bInCombat, bool bRestoring);
	void STATIC_OnActorAwareOfPlayer(bool bRestoring);
	void STATIC_OnActorAlertStateChanged(class AActor* TargetActor, EAlertState PreviousAlertState, EAlertState TargetAlertState, bool bRestoring);
};


// Class Indiana.FixedSpawnNode
// 0x0028 (0x0630 - 0x0608)
class AFixedSpawnNode : public ASpawnNodeBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0608(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FixedSpawnNode");
		return ptr;
	}

};


// Class Indiana.FlavorTextWidget
// 0x0010 (0x02B8 - 0x02A8)
class UFlavorTextWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FlavorTextWidget");
		return ptr;
	}

};


// Class Indiana.Flaw
// 0x0058 (0x0088 - 0x0030)
class UFlaw : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Flaw");
		return ptr;
	}

};


// Class Indiana.FlawSummaryEntryWidget
// 0x0018 (0x02C0 - 0x02A8)
class UFlawSummaryEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FlawSummaryEntryWidget");
		return ptr;
	}

};


// Class Indiana.FlawTree
// 0x0040 (0x0078 - 0x0038)
class UFlawTree : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FlawTree");
		return ptr;
	}

};


// Class Indiana.FleeBehaviorStateInfo
// 0x0008 (0x0180 - 0x0178)
class UFleeBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FleeBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.FleeRequestData
// 0x0000 (0x0080 - 0x0080)
class UFleeRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FleeRequestData");
		return ptr;
	}

};


// Class Indiana.FleeNode
// 0x0000 (0x0428 - 0x0428)
class AFleeNode : public AEnviromentNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FleeNode");
		return ptr;
	}

};


// Class Indiana.FlipbookWidget
// 0x0030 (0x02D8 - 0x02A8)
class UFlipbookWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FlipbookWidget");
		return ptr;
	}


	bool IsPlaying();
	void STATIC_EndPlay();
	void STATIC_BeginPlay(bool bInShouldLoop, int PlayFromFrame);
};


// Class Indiana.FloorIndicatorWidget
// 0x00C0 (0x0368 - 0x02A8)
class UFloorIndicatorWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x02A8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FloorIndicatorWidget");
		return ptr;
	}

};


// Class Indiana.FloorLevelWidget
// 0x0010 (0x0230 - 0x0220)
class UFloorLevelWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FloorLevelWidget");
		return ptr;
	}

};


// Class Indiana.FollowBehaviorStateInfo
// 0x0030 (0x0150 - 0x0120)
class UFollowBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0120(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FollowBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.FollowRequestData
// 0x0000 (0x0068 - 0x0068)
class UFollowRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FollowRequestData");
		return ptr;
	}

};


// Class Indiana.FootstepAudio
// 0x0118 (0x0148 - 0x0030)
class UFootstepAudio : public UObject
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0030(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FootstepAudio");
		return ptr;
	}

};


// Class Indiana.FootstepData
// 0x0018 (0x0050 - 0x0038)
class UFootstepData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FootstepData");
		return ptr;
	}

};


// Class Indiana.FootstepEnvironmentInteraction
// 0x0000 (0x0038 - 0x0038)
class UFootstepEnvironmentInteraction : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FootstepEnvironmentInteraction");
		return ptr;
	}

};


// Class Indiana.FootstepStimulusData
// 0x0068 (0x00A0 - 0x0038)
class UFootstepStimulusData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FootstepStimulusData");
		return ptr;
	}

};


// Class Indiana.FootstepVisualData
// 0x0090 (0x00C8 - 0x0038)
class UFootstepVisualData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FootstepVisualData");
		return ptr;
	}

};


// Class Indiana.ForcedAnimationComponent
// 0x0030 (0x0148 - 0x0118)
class UForcedAnimationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0118(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ForcedAnimationComponent");
		return ptr;
	}


	void STATIC_PlayEquippedWeaponInspectionAnimation();
	void STATIC_OnWeaponEquipped(class UWeapon* Weapon);
};


// Class Indiana.ForceFeedbackEventEffect
// 0x0010 (0x0040 - 0x0030)
class UForceFeedbackEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ForceFeedbackEventEffect");
		return ptr;
	}

};


// Class Indiana.FPVAnimInstance
// 0x00A0 (0x06A0 - 0x0600)
class UFPVAnimInstance : public UCharacterAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0600(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FPVAnimInstance");
		return ptr;
	}


	void STATIC_OnHeadbobbingChanged(bool bShouldHeadbob);
	bool IsAimTransitioning();
	float GetHeadbobWeight();
};


// Class Indiana.FPVCameraComponent
// 0x0020 (0x0840 - 0x0820)
class UFPVCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0820(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FPVCameraComponent");
		return ptr;
	}


	void STATIC_OnFieldOfViewSettingChanged(float NewFOV);
};


// Class Indiana.FreezeDisableStatusEffect
// 0x0000 (0x0198 - 0x0198)
class UFreezeDisableStatusEffect : public UDisableStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FreezeDisableStatusEffect");
		return ptr;
	}

};


// Class Indiana.FurnitureAction
// 0x0020 (0x0058 - 0x0038)
class UFurnitureAction : public UAIAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FurnitureAction");
		return ptr;
	}

};


// Class Indiana.FurnitureSkeletonPreviewMeshMap
// 0x0090 (0x00C8 - 0x0038)
class UFurnitureSkeletonPreviewMeshMap : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FurnitureSkeletonPreviewMeshMap");
		return ptr;
	}

};


// Class Indiana.FurnitureBehaviorStateInfo
// 0x0088 (0x01A8 - 0x0120)
class UFurnitureBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0120(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FurnitureBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.FurnitureRequestData
// 0x0000 (0x0068 - 0x0068)
class UFurnitureRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FurnitureRequestData");
		return ptr;
	}

};


// Class Indiana.FurnitureAnimationData
// 0x0168 (0x01A0 - 0x0038)
class UFurnitureAnimationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0038(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FurnitureAnimationData");
		return ptr;
	}

};


// Class Indiana.FurnitureComponent
// 0x01F0 (0x04A0 - 0x02B0)
class UFurnitureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x02B0(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.FurnitureComponent");
		return ptr;
	}

};


// Class Indiana.Gadget
// 0x0038 (0x0150 - 0x0118)
class UGadget : public UItem
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0118(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Gadget");
		return ptr;
	}

};


// Class Indiana.GameCalendar
// 0x00B0 (0x00E0 - 0x0030)
class UGameCalendar : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GameCalendar");
		return ptr;
	}


	void STATIC_RequestUnpauseTime(const struct FName& RequestContext);
	void STATIC_RequestPauseTime(const struct FName& RequestContext);
	void STATIC_LockCalendar(bool Block);
	void STATIC_K2_SetupDelayedCallback(class UObject* WorldContextObject, const struct FScriptDelegate& EventToDelay, float SecondsToDelay);
	void STATIC_K2_RegisterNamedTimestamp(const class FString& TimestampName);
	bool K2_IsTimeSlice(int StartHour, int EndHour);
	bool K2_IsPhaseOfDay(EPhaseOfDay Phase);
	bool K2_HaveMinutesElapsedSinceNamedTimestamp(const class FString& TimestampName, int Minutes);
	bool K2_HaveHoursElapsedSinceNamedTimestamp(const class FString& TimestampName, int Hours);
	bool K2_HaveDaysElapsedSinceNamedTimestamp(const class FString& TimestampName, int Days);
	float K2_GetRawHour();
	float K2_GetNormalizedTime();
	void STATIC_K2_ClearNamedTimestamp(const class FString& TimestampName);
	void STATIC_K2_AdvanceToHour(int TargetHour);
	void STATIC_K2_AdvanceTime(float Days, float Hours, float Minutes, float Seconds);
	void STATIC_K2_AdvanceSeconds(float Seconds);
	void STATIC_K2_AdvanceMinutes(float Minutes);
	void STATIC_K2_AdvanceHours(float Hours);
	void STATIC_K2_AdvanceDays(float Days);
	void STATIC_ForceWeatherStart();
	void STATIC_ForceWeatherEnd();
	void STATIC_AdvanceToHour(float TargetHour);
	void STATIC_AdvanceTime(float Days, float Hours, float Minutes, float Seconds);
	void STATIC_AdvanceSeconds(float Seconds);
	void STATIC_AdvanceMinutes(float Minutes);
	void STATIC_AdvanceHours(float Hours);
	void STATIC_AdvanceDays(float Days);
};


// Class Indiana.KeyHoldActionBase
// 0x0038 (0x0068 - 0x0030)
class UKeyHoldActionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.KeyHoldActionBase");
		return ptr;
	}

};


// Class Indiana.StandardKeyHoldAction
// 0x0010 (0x0078 - 0x0068)
class UStandardKeyHoldAction : public UKeyHoldActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StandardKeyHoldAction");
		return ptr;
	}

};


// Class Indiana.IndexedReleaseKeyHoldAction
// 0x0010 (0x0078 - 0x0068)
class UIndexedReleaseKeyHoldAction : public UKeyHoldActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndexedReleaseKeyHoldAction");
		return ptr;
	}

};


// Class Indiana.DoubleClickKeyHoldAction
// 0x0028 (0x0090 - 0x0068)
class UDoubleClickKeyHoldAction : public UKeyHoldActionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DoubleClickKeyHoldAction");
		return ptr;
	}

};


// Class Indiana.IndianaInputComponent
// 0x0030 (0x01D8 - 0x01A8)
class UIndianaInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaInputComponent");
		return ptr;
	}

};


// Class Indiana.GameInputComponent
// 0x0088 (0x0260 - 0x01D8)
class UGameInputComponent : public UIndianaInputComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x01D8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GameInputComponent");
		return ptr;
	}

};


// Class Indiana.GammaSelectionWidget
// 0x0068 (0x0318 - 0x02B0)
class UGammaSelectionWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GammaSelectionWidget");
		return ptr;
	}


	void STATIC_OnRestoreDefaults();
	void STATIC_OnLocStringChanged();
	void STATIC_OnGammaChanged(const struct FSliderEvent& Event);
	void STATIC_OnGammaAccepted();
	void STATIC_ApplyDefaults();
};


// Class Indiana.GDKDLCManager
// 0x0000 (0x0050 - 0x0050)
class UGDKDLCManager : public UDLCManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GDKDLCManager");
		return ptr;
	}

};


// Class Indiana.GeneralButtonWidget
// 0x0018 (0x02C0 - 0x02A8)
class UGeneralButtonWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GeneralButtonWidget");
		return ptr;
	}

};


// Class Indiana.GenericCollapsableListContainer
// 0x0010 (0x02B8 - 0x02A8)
class UGenericCollapsableListContainer : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GenericCollapsableListContainer");
		return ptr;
	}

};


// Class Indiana.GenericListEntryWidget
// 0x0030 (0x02D8 - 0x02A8)
class UGenericListEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GenericListEntryWidget");
		return ptr;
	}

};


// Class Indiana.GenericLogicDataAsset
// 0x0088 (0x00C0 - 0x0038)
class UGenericLogicDataAsset : public ULogicalExpressionBaseDataAsset
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GenericLogicDataAsset");
		return ptr;
	}

};


// Class Indiana.GenericNotificationEntryWidget
// 0x0140 (0x03E8 - 0x02A8)
class UGenericNotificationEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x02A8(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GenericNotificationEntryWidget");
		return ptr;
	}


	void STATIC_PrepareNextMessage();
	void STATIC_PrepareNewMessage();
	void STATIC_OnStickLayoutChanged(int NewValue);
	void STATIC_OnFadeOutComplete();
	void STATIC_OnFadeInComplete();
};


// Class Indiana.GenericNotificationWidget
// 0x0160 (0x0408 - 0x02A8)
class UGenericNotificationWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x02A8(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GenericNotificationWidget");
		return ptr;
	}


	void STATIC_TriggerFadeOut();
	void STATIC_TriggerFadeIn();
	void STATIC_SetBackingMaterialHeight(float NewHeight);
	void STATIC_OnSaveGameComplete(ESaveGameResult SaveResult, ESaveGameType SaveGameType);
	void STATIC_OnNotificationDurationChanged(float NotificationTime);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnFadeOutComplete();
};


// Class Indiana.GhostNavMesh
// 0x0018 (0x03A0 - 0x0388)
class AGhostNavMesh : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0388(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GhostNavMesh");
		return ptr;
	}

};


// Class Indiana.GhostNavMeshComponent
// 0x0000 (0x06A0 - 0x06A0)
class UGhostNavMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GhostNavMeshComponent");
		return ptr;
	}

};


// Class Indiana.GlobalAchievementData
// 0x00E0 (0x0118 - 0x0038)
class UGlobalAchievementData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0038(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalAchievementData");
		return ptr;
	}

};


// Class Indiana.GlobalAIData
// 0x0A70 (0x0AA8 - 0x0038)
class UGlobalAIData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA70];                                     // 0x0038(0x0A70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalAIData");
		return ptr;
	}

};


// Class Indiana.GlobalArmorData
// 0x0170 (0x01A8 - 0x0038)
class UGlobalArmorData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0038(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalArmorData");
		return ptr;
	}

};


// Class Indiana.GlobalAudioData
// 0x02D0 (0x0308 - 0x0038)
class UGlobalAudioData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0038(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalAudioData");
		return ptr;
	}

};


// Class Indiana.GlobalFactionData
// 0x02D0 (0x0308 - 0x0038)
class UGlobalFactionData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0038(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalFactionData");
		return ptr;
	}

};


// Class Indiana.GlobalFactionDataCollection
// 0x00C8 (0x0100 - 0x0038)
class UGlobalFactionDataCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0038(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalFactionDataCollection");
		return ptr;
	}

};


// Class Indiana.GlobalItemData
// 0x00B8 (0x00F0 - 0x0038)
class UGlobalItemData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalItemData");
		return ptr;
	}

};


// Class Indiana.GlobalKeybindsData
// 0x00B0 (0x00E8 - 0x0038)
class UGlobalKeybindsData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0038(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalKeybindsData");
		return ptr;
	}

};


// Class Indiana.GlobalMeleeData
// 0x0078 (0x00B0 - 0x0038)
class UGlobalMeleeData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalMeleeData");
		return ptr;
	}

};


// Class Indiana.GlobalTeamData
// 0x01A0 (0x01D8 - 0x0038)
class UGlobalTeamData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0038(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalTeamData");
		return ptr;
	}

};


// Class Indiana.GlobalTeamDataCollection
// 0x0158 (0x0190 - 0x0038)
class UGlobalTeamDataCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0038(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalTeamDataCollection");
		return ptr;
	}

};


// Class Indiana.GlobalUIData
// 0x0140 (0x0178 - 0x0038)
class UGlobalUIData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0038(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalUIData");
		return ptr;
	}

};


// Class Indiana.GlobalWeaponData
// 0x0160 (0x0198 - 0x0038)
class UGlobalWeaponData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0038(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GlobalWeaponData");
		return ptr;
	}

};


// Class Indiana.GravityStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UGravityStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GravityStatusEffect");
		return ptr;
	}

};


// Class Indiana.GravManger
// 0x0000 (0x0388 - 0x0388)
class AGravManger : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.GravManger");
		return ptr;
	}


	void STATIC_SetLowGravAmbientAudioEnabled(bool Enabled);
};


// Class Indiana.ButtonGroup
// 0x0038 (0x0068 - 0x0030)
class UButtonGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ButtonGroup");
		return ptr;
	}


	void STATIC_OnButtonUnFocused(class UButtonBase* Button);
	void STATIC_OnButtonFocused(class UButtonBase* Button);
	void STATIC_CyclePreviousButton();
	void STATIC_CycleNextButton();
};


// Class Indiana.TransitionGroup
// 0x0058 (0x0088 - 0x0030)
class UTransitionGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TransitionGroup");
		return ptr;
	}

};


// Class Indiana.ToggleTransitionGroup
// 0x0000 (0x0088 - 0x0088)
class UToggleTransitionGroup : public UTransitionGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ToggleTransitionGroup");
		return ptr;
	}

};


// Class Indiana.ScrollingWidgetGroup
// 0x0008 (0x0090 - 0x0088)
class UScrollingWidgetGroup : public UTransitionGroup
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScrollingWidgetGroup");
		return ptr;
	}


	void STATIC_OnScrollingComplete();
};


// Class Indiana.HairAppearances
// 0x0010 (0x0048 - 0x0038)
class UHairAppearances : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HairAppearances");
		return ptr;
	}

};


// Class Indiana.HairColor
// 0x0040 (0x0078 - 0x0038)
class UHairColor : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HairColor");
		return ptr;
	}

};


// Class Indiana.HairCustomizationWidget
// 0x0000 (0x0340 - 0x0340)
class UHairCustomizationWidget : public UCCCharacterCustomizationBaseWdgt
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HairCustomizationWidget");
		return ptr;
	}

};


// Class Indiana.Hazard
// 0x00C8 (0x0450 - 0x0388)
class AHazard : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0388(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Hazard");
		return ptr;
	}


	void STATIC_OnActorExited(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_OnActorEntered(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_ForceSetEnabled(bool bNewEnabled);
	void STATIC_CustomUpdate();
	void STATIC_AttemptEnableHazard(bool bEnable);
};


// Class Indiana.HazardAudioComponent
// 0x0050 (0x01D8 - 0x0188)
class UHazardAudioComponent : public UInteractableAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0188(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HazardAudioComponent");
		return ptr;
	}


	void STATIC_Stop(EHazardEventType Type);
	void STATIC_Play(EHazardEventType Type);
};


// Class Indiana.HazardSource
// 0x0008 (0x0540 - 0x0538)
class AHazardSource : public ADestructible
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0538(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HazardSource");
		return ptr;
	}

};


// Class Indiana.HeadAndBodyTrackingComponent
// 0x04F8 (0x0610 - 0x0118)
class UHeadAndBodyTrackingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4F8];                                     // 0x0118(0x04F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HeadAndBodyTrackingComponent");
		return ptr;
	}


	void STATIC_OnOccupiedElevatorChange(class AElevator* Elevator, bool bOccupied);
};


// Class Indiana.HeadAppearances
// 0x0010 (0x0048 - 0x0038)
class UHeadAppearances : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HeadAppearances");
		return ptr;
	}

};


// Class Indiana.HealGunBehaviorStateInfo
// 0x0010 (0x0188 - 0x0178)
class UHealGunBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HealGunBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.HealGunRequestData
// 0x0000 (0x0080 - 0x0080)
class UHealGunRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HealGunRequestData");
		return ptr;
	}

};


// Class Indiana.HealStatusEffect
// 0x0028 (0x01B0 - 0x0188)
class UHealStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0188(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HealStatusEffect");
		return ptr;
	}

};


// Class Indiana.HealthComponent
// 0x00E0 (0x01F8 - 0x0118)
class UHealthComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0118(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HealthComponent");
		return ptr;
	}


	void STATIC_Suicide();
	void STATIC_SetPseudoGod(bool bEnabled);
	void STATIC_SetHealthPercentNPC(float Percent);
	void STATIC_SetHealthPercent(float Percent, class AActor* Instigator);
	void STATIC_SetGod(bool bEnabled);
	void STATIC_PseudoGod();
	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnAttributeUpdated(EAttribute Attribute, int NewValue);
	void STATIC_LevelChanged(int Level);
	void STATIC_KillNPC(class AIndianaAiCharacter* Character);
	void STATIC_HealthFill();
	void STATIC_GodCompanions();
	void STATIC_God();
	EStateOfBeing GetStateOfBeing();
	float GetRegenRatePoints();
	float GetRegenRate();
	float GetNormalizedHealth();
	float GetMaxHealth();
	float GetHealth();
	void STATIC_DeathComplete(class AActor* DeadActor);
};


// Class Indiana.HealthKitTooltipWidget
// 0x00B0 (0x0358 - 0x02A8)
class UHealthKitTooltipWidget : public UToolTipContentWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x02A8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HealthKitTooltipWidget");
		return ptr;
	}


	void STATIC_FontSizeChanged(int NewModifier);
};


// Class Indiana.HearingNavLink
// 0x0000 (0x03A0 - 0x03A0)
class AHearingNavLink : public APlaceableNavLink
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HearingNavLink");
		return ptr;
	}

};


// Class Indiana.HeightmapManager
// 0x0030 (0x0410 - 0x03E0)
class AHeightmapManager : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HeightmapManager");
		return ptr;
	}

};


// Class Indiana.Helmet
// 0x00B8 (0x02B0 - 0x01F8)
class UHelmet : public UArmorItem
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x01F8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Helmet");
		return ptr;
	}

};


// Class Indiana.HeroStat
// 0x0018 (0x0050 - 0x0038)
class UHeroStat : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HeroStat");
		return ptr;
	}

};


// Class Indiana.HideMeshEventEffect
// 0x0008 (0x0038 - 0x0030)
class UHideMeshEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HideMeshEventEffect");
		return ptr;
	}

};


// Class Indiana.HighlightComponent
// 0x0058 (0x0170 - 0x0118)
class UHighlightComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0118(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HighlightComponent");
		return ptr;
	}

};


// Class Indiana.HitEffectIndicatorComponent
// 0x0888 (0x09A0 - 0x0118)
class UHitEffectIndicatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x888];                                     // 0x0118(0x0888) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HitEffectIndicatorComponent");
		return ptr;
	}


	void STATIC_OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void STATIC_OnHit(float NormalizedAmount, float IncidentAngleRelativeToCameraDegrees);
	void STATIC_HitEffectIndicatorEnableDebugKeys();
};


// Class Indiana.HitLocationData
// 0x0010 (0x0048 - 0x0038)
class UHitLocationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HitLocationData");
		return ptr;
	}

};


// Class Indiana.HitReactionStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UHitReactionStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HitReactionStatusEffect");
		return ptr;
	}

};


// Class Indiana.HopeBotBehaviorStateInfo
// 0x0000 (0x0178 - 0x0178)
class UHopeBotBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HopeBotBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.HopeBotRequestData
// 0x0000 (0x0080 - 0x0080)
class UHopeBotRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HopeBotRequestData");
		return ptr;
	}

};


// Class Indiana.HoverbotAnimInstance
// 0x0040 (0x0A30 - 0x09F0)
class UHoverbotAnimInstance : public UTPVAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x09F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HoverbotAnimInstance");
		return ptr;
	}

};


// Class Indiana.HUDWidget
// 0x00E8 (0x0398 - 0x02B0)
class UHUDWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x02B0(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HUDWidget");
		return ptr;
	}


	void STATIC_QueueLevelUpNotification(int NewLevel);
	class UCharacterOverviewWidget* GetCharacterOverview();
};


// Class Indiana.HunkerDownBehaviorStateInfo
// 0x0000 (0x0128 - 0x0128)
class UHunkerDownBehaviorStateInfo : public UCompanionCommandTimedBehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HunkerDownBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.HunkerDownBehaviorRequestData
// 0x0000 (0x0068 - 0x0068)
class UHunkerDownBehaviorRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HunkerDownBehaviorRequestData");
		return ptr;
	}

};


// Class Indiana.IdleBehaviorStateInfo
// 0x0018 (0x0138 - 0x0120)
class UIdleBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0120(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IdleBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.IdleRequestData
// 0x0000 (0x0068 - 0x0068)
class UIdleRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IdleRequestData");
		return ptr;
	}

};


// Class Indiana.IdleCameraComponent
// 0x0060 (0x0390 - 0x0330)
class UIdleCameraComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0330(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IdleCameraComponent");
		return ptr;
	}

};


// Class Indiana.ImageSectionWidget
// 0x0020 (0x0250 - 0x0230)
class UImageSectionWidget : public URadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0230(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ImageSectionWidget");
		return ptr;
	}

};


// Class Indiana.ImmobilizeStatusEffect
// 0x0000 (0x0188 - 0x0188)
class UImmobilizeStatusEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ImmobilizeStatusEffect");
		return ptr;
	}

};


// Class Indiana.ImmuneStatusEffect
// 0x0030 (0x01B8 - 0x0188)
class UImmuneStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0188(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ImmuneStatusEffect");
		return ptr;
	}

};


// Class Indiana.ImpactAudioData
// 0x01F8 (0x0230 - 0x0038)
class UImpactAudioData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0038(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ImpactAudioData");
		return ptr;
	}

};


// Class Indiana.ImpactDataSet
// 0x0068 (0x00A0 - 0x0038)
class UImpactDataSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ImpactDataSet");
		return ptr;
	}

};


// Class Indiana.ImpactFxData
// 0x0050 (0x0088 - 0x0038)
class UImpactFxData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ImpactFxData");
		return ptr;
	}

};


// Class Indiana.IndianaCharacter
// 0x06B0 (0x0E60 - 0x07B0)
class AIndianaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x6B0];                                     // 0x07B0(0x06B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaCharacter");
		return ptr;
	}


	void STATIC_UpdateOutlines();
	void STATIC_PlayWeaponEvent(const class FString& WeaponEvent);
	void STATIC_OnRestoredStateOfBeing(EStateOfBeing RestoredStateOfBeing);
	void STATIC_OnPreStateOfBeingChange(EStateOfBeing StateOfBeing);
	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnLevelChanged(int Level);
	void STATIC_OnDifficultyChanged(EGameDifficulty NewDifficulty);
	void STATIC_OnAttack(float DurationScalar);
	void STATIC_ItemRemoved(const struct FItemStack& Item);
	void STATIC_ItemAdded(const struct FItemStack& Item);
	bool IsWeaponEquipped(class UClass* WeaponClass);
	bool IsArmorEquipped(class UClass* ArmorClass);
	bool HasItem(class UClass* Item);
	class UStatusEffectManagerComponent* GetStatusEffectManager();
	int GetItemQuantity(class UClass* Item);
	class UEquipmentComponent* GetEquipmentComponent();
	class UWeapon* GetCurrentWeapon();
	void STATIC_ExecuteDeath(bool bFromReload);
	void STATIC_Died(const struct FCauseDamageInfo& CDI);
	void STATIC_DamageCaused(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_CastSpellDebugTarget(const class FString& SpellName);
	void STATIC_CastSpellDebug(const class FString& SpellName);
};


// Class Indiana.IndianaAiCharacter
// 0x0250 (0x10B0 - 0x0E60)
class AIndianaAiCharacter : public AIndianaCharacter
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0E60(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAiCharacter");
		return ptr;
	}


	void STATIC_SetRagdoll(bool bInIsRagdoll, bool bInstantFreeze);
	void STATIC_SetIsInLowGrav(bool bNewIsInLowGrav);
	void STATIC_OnWeaponEndUnequip(class UWeapon* Weapon);
	void STATIC_OnWeaponEndEquip(class UWeapon* Weapon);
	void STATIC_OnMontageEndDelegate(class UAnimMontage* Montage, bool bInterrupted);
	void STATIC_OnDamageEvent(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnAlertStateChange(class AActor* TargetActor, EAlertState PreviousAlertState, EAlertState TargetAlertState, bool bRestoring);
	void STATIC_OnActorHiddenChange(bool bIsHidden);
	bool IsInCombat();
	class AIndianaAiController* GetOwningController();
};


// Class Indiana.IndianaAiController
// 0x00E0 (0x0578 - 0x0498)
class AIndianaAiController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0498(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAiController");
		return ptr;
	}


	void STATIC_OnTakeDamage(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnSwitchedTarget(class AActor* OldTarget, class AActor* NewTarget, bool bRestoring);
	void STATIC_OnRestoredStateOfBeing(EStateOfBeing RestoredStateOfBeing);
	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnMeleeActionEnd(EMeleeAction ActionEnded);
	void STATIC_OnCombatStateChange(bool bInCombat, bool bRestoring);
	void STATIC_OnBehaviorStateChange(class UBehaviorStateInfo* OldBehaviorStateInfo, class UBehaviorStateInfo* NewBehaviorStateInfo);
	float GetSightAwarenessIncreaseRate(bool bIsStealthed, int OwnerPerceptionSkill, int TargetSneakSkill, EAlertState InAlertState, float Distance, float SightRadius, bool bAllowTargeting);
	float GetSightAwarenessDecreaseRate(bool bIsStealthed, int OwnerPerceptionSkill, int TargetSneakSkill, EAlertState InAlertState, bool bLost, bool bDeadBodyKiller);
	float GetFootstepAwarenessIncrease(bool bIsStealthed, int OwnerPerceptionSkill, int TargetSneakSkill, EAlertState InAlertState, float BaseFootstepAwareness, float Distance, float SoundRadius);
	float GetCurrentTargetDistance();
	void STATIC_AIScriptWander(class AIndianaAiCharacter* InCharacter);
	void STATIC_AIScriptPatrolInterruptible(class AIndianaAiCharacter* InCharacter, class APatrolNode* InPatrolNode);
	void STATIC_AIScriptPatrol(class AIndianaAiCharacter* InCharacter, class APatrolNode* InPatrolNode);
	void STATIC_AIScriptIdle(class AIndianaAiCharacter* InCharacter);
	void STATIC_AIScriptFollowPlayer(class AIndianaAiCharacter* InCharacter);
	void STATIC_AIScriptEncounterAttackEncounter(class AEncounter* InEncounter, class AEncounter* InTargetEncounter);
	void STATIC_AIScriptEncounterAttack(class AIndianaAiCharacter* InCharacter, class AEncounter* InTargetEncounter);
	void STATIC_AIScriptClearScripts(class AIndianaAiCharacter* InCharacter);
	void STATIC_AIScriptCharactersAttackCharacters(TArray<class AIndianaAiCharacter*> InCharacters, TArray<class AIndianaAiCharacter*> InTargetCharacters);
	void STATIC_AIScriptAttackEncounter(class AEncounter* InEncounter, class AIndianaCharacter* InTargetCharacter);
	void STATIC_AIScriptAttack(class AIndianaAiCharacter* InCharacter, class AIndianaCharacter* InTargetCharacter);
};


// Class Indiana.IndianaAIPerceptionComponent
// 0x0060 (0x0248 - 0x01E8)
class UIndianaAIPerceptionComponent : public UAIPerceptionComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x01E8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAIPerceptionComponent");
		return ptr;
	}


	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnPerceptionRangeScalarUpdated(const struct FGameplayTagContainer& CreatureType);
	void STATIC_OnGodVisionChanged(bool bGodVision);
	void STATIC_OnCombatStateChanged(bool bIsInCombat, bool bRestoring);
	void STATIC_OnCharacterDeath(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnBehaviorTreeInitialized();
};


// Class Indiana.IndianaAIPerceptionSystem
// 0x0078 (0x01B0 - 0x0138)
class UIndianaAIPerceptionSystem : public UAIPerceptionSystem
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0138(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAIPerceptionSystem");
		return ptr;
	}

};


// Class Indiana.IndianaAISense_Hearing
// 0x0000 (0x00F8 - 0x00F8)
class UIndianaAISense_Hearing : public UAISense_Hearing
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAISense_Hearing");
		return ptr;
	}

};


// Class Indiana.IndianaAISense_Sight
// 0x0000 (0x0170 - 0x0170)
class UIndianaAISense_Sight : public UAISense_Sight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAISense_Sight");
		return ptr;
	}

};


// Class Indiana.IndianaAISystem
// 0x0000 (0x0138 - 0x0138)
class UIndianaAISystem : public UAISystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAISystem");
		return ptr;
	}

};


// Class Indiana.IndianaAkAmbientVolume
// 0x0080 (0x04A8 - 0x0428)
class AIndianaAkAmbientVolume : public ATriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0428(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAkAmbientVolume");
		return ptr;
	}

};


// Class Indiana.IndianaAkAmbientSpatialVolume
// 0x0018 (0x04C0 - 0x04A8)
class AIndianaAkAmbientSpatialVolume : public AIndianaAkAmbientVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAkAmbientSpatialVolume");
		return ptr;
	}

};


// Class Indiana.IndianaAnimNotify_FootPlace
// 0x0018 (0x0058 - 0x0040)
class UIndianaAnimNotify_FootPlace : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAnimNotify_FootPlace");
		return ptr;
	}

};


// Class Indiana.IndianaAttribute
// 0x0010 (0x0040 - 0x0030)
class UIndianaAttribute : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAttribute");
		return ptr;
	}

};


// Class Indiana.StrengthAttribute
// 0x0000 (0x0040 - 0x0040)
class UStrengthAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StrengthAttribute");
		return ptr;
	}

};


// Class Indiana.DexterityAttribute
// 0x0000 (0x0040 - 0x0040)
class UDexterityAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DexterityAttribute");
		return ptr;
	}

};


// Class Indiana.EnduranceAttribute
// 0x0000 (0x0040 - 0x0040)
class UEnduranceAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EnduranceAttribute");
		return ptr;
	}

};


// Class Indiana.IntelligenceAttribute
// 0x0000 (0x0040 - 0x0040)
class UIntelligenceAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IntelligenceAttribute");
		return ptr;
	}

};


// Class Indiana.PerceptionAttribute
// 0x0000 (0x0040 - 0x0040)
class UPerceptionAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerceptionAttribute");
		return ptr;
	}

};


// Class Indiana.WillpowerAttribute
// 0x0000 (0x0040 - 0x0040)
class UWillpowerAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WillpowerAttribute");
		return ptr;
	}

};


// Class Indiana.CharmAttribute
// 0x0000 (0x0040 - 0x0040)
class UCharmAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CharmAttribute");
		return ptr;
	}

};


// Class Indiana.WitsAttribute
// 0x0000 (0x0040 - 0x0040)
class UWitsAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WitsAttribute");
		return ptr;
	}

};


// Class Indiana.TemperamentAttribute
// 0x0000 (0x0040 - 0x0040)
class UTemperamentAttribute : public UIndianaAttribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TemperamentAttribute");
		return ptr;
	}

};


// Class Indiana.IndianaAttributes
// 0x0048 (0x0078 - 0x0030)
class UIndianaAttributes : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAttributes");
		return ptr;
	}

};


// Class Indiana.IndianaDefaultButtonAudioData
// 0x0048 (0x0080 - 0x0038)
class UIndianaDefaultButtonAudioData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaDefaultButtonAudioData");
		return ptr;
	}

};


// Class Indiana.IndianaAudioComponent
// 0x01A8 (0x02C0 - 0x0118)
class UIndianaAudioComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0118(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAudioComponent");
		return ptr;
	}


	void STATIC_OnStopClimb();
	void STATIC_OnStartClimb();
	void STATIC_OnSpecialMovementEvent(ESpecialMovementEvent SpecialEvent, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<EPhysicalSurface> PhysMaterial);
	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnNewFootstepData(class UFootstepData* NewData);
	void STATIC_OnLanded(float FallDistance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<EPhysicalSurface> PhysMaterial);
	void STATIC_OnFootstep(EFootID FootID, EFootstepType FootstepType, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<EPhysicalSurface> PhysMaterial);
	void STATIC_OnDodge(EDodgeDirection Direction, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<EPhysicalSurface> PhysMaterial);
	void STATIC_OnCharacterMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
};


// Class Indiana.IndianaAutoPlayer
// 0x0000 (0x0030 - 0x0030)
class UIndianaAutoPlayer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAutoPlayer");
		return ptr;
	}


	void STATIC_StopAutoPlayer();
	void STATIC_StartAutoPlayer();
	void STATIC_OnAsyncSaveComplete(ESaveGameResult Result, ESaveGameType SaveType);
};


// Class Indiana.IndianaAutoPlayerTestSettings
// 0x01A8 (0x01E8 - 0x0040)
class UIndianaAutoPlayerTestSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0040(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAutoPlayerTestSettings");
		return ptr;
	}

};


// Class Indiana.IndianaAvoidanceManager
// 0x0068 (0x0150 - 0x00E8)
class UIndianaAvoidanceManager : public UAvoidanceManager
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00E8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaAvoidanceManager");
		return ptr;
	}

};


// Class Indiana.IndianaBehaviorTreeComponent
// 0x0050 (0x0318 - 0x02C8)
class UIndianaBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02C8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaBehaviorTreeComponent");
		return ptr;
	}

};


// Class Indiana.IndianaBossBar
// 0x0080 (0x0328 - 0x02A8)
class UIndianaBossBar : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02A8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaBossBar");
		return ptr;
	}


	void STATIC_OnEndBossFight();
	void STATIC_OnBossHealthChanged(float NormalizedHealth);
	void STATIC_OnBeginBossFight(class AIndianaCharacter* OwnerCharacter, const class FString& BossName, float StartingNormalizedHealth);
	class UWidgetAnimation* GetShowAnimation();
	class UWidgetAnimation* GetHideAnimation();
};


// Class Indiana.IndianaCharacterDummy
// 0x0050 (0x0800 - 0x07B0)
class AIndianaCharacterDummy : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x07B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaCharacterDummy");
		return ptr;
	}


	void STATIC_OnWeaponEndEquip(class UWeapon* Weapon);
	void STATIC_CopyFromCharacter(class AIndianaCharacter* Character);
};


// Class Indiana.IndianaCheatManager
// 0x0000 (0x0080 - 0x0080)
class UIndianaCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaCheatManager");
		return ptr;
	}


	void STATIC_SetLevelNPC(int NewLevel);
	void STATIC_LootTableDebug(const class FString& LootTable, int NumTimes);
	void STATIC_GivePlayerAllItems();
	void STATIC_DropAllItemsDebug(bool bSplitStacks);
};


// Class Indiana.IndianaDamageType
// 0x0068 (0x00B0 - 0x0048)
class UIndianaDamageType : public UDamageType
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaDamageType");
		return ptr;
	}


	void STATIC_TriggerMuzzleFx(class USceneComponent* AttachComponent);
	void STATIC_SetupSecondaryImpactFx(class UParticleSystemComponent* ParentEffect, bool bGraze, bool bCritical, bool bWeakSpot, bool bRadial, float Radius);
	void STATIC_SetupImpactFx(class UParticleSystemComponent* ParentEffect, bool bGraze, bool bCritical, bool bWeakSpot, bool bRadial, float Radius);
};


// Class Indiana.IndianaDebugCameraController
// 0x0008 (0x0728 - 0x0720)
class AIndianaDebugCameraController : public ADebugCameraController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0720(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaDebugCameraController");
		return ptr;
	}

};


// Class Indiana.IndianaDragDropOperation
// 0x0028 (0x00B8 - 0x0090)
class UIndianaDragDropOperation : public UDragDropOperation
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0090(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaDragDropOperation");
		return ptr;
	}

};


// Class Indiana.IndianaFlybyAkComponent
// 0x0010 (0x04D0 - 0x04C0)
class UIndianaFlybyAkComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaFlybyAkComponent");
		return ptr;
	}


	void STATIC_UpdateEmitterLocation();
	void STATIC_InitializeEmitter();
	void STATIC_DeactivateEmitter();
};


// Class Indiana.IndianaFormulas
// 0x0128 (0x0158 - 0x0030)
class UIndianaFormulas : public UObject
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0030(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaFormulas");
		return ptr;
	}


	int WorkbenchRepairPartCost(float Durability, int ItemLevel, int EngineerSkill);
	int VendorRepairCurrencyCost(float Durability, int ItemLevel);
	unsigned char TrapToughness(unsigned char ExactTrapDifficulty, unsigned char PlayerEngineeringSkill);
	float TrapDisarmNoise(unsigned char ExactTrapDifficulty, unsigned char PlayerEngineeringSkill);
	float TrapDifficultyRange();
	unsigned char TrapDifficultyNumRanges();
	unsigned char TrapDifficultyFullRange();
	float TrapDamagePercent(ETrapDifficulty TrapDifficulty);
	float TrapArmNoise(unsigned char ExactTrapDifficulty, unsigned char PlayerEngineeringSkill);
	bool ShouldDrawFireSwitchCompanionTargets(float OldHealth, float OldDTBody, float OldDTHead, float NewHealth, float NewDTBody, float NewDTHead);
	float PlayerSneakEnemyDetectionRage(bool bInterior, unsigned char PlayerSneakSkill);
	float PickPocketTime(int LockpickSkill, int TargetPerception);
	unsigned char LockpickToughness(unsigned char ExactLockpickDifficulty, unsigned char PlayerLockpickSkill);
	float LockpickTime(unsigned char ExactLockpickDifficulty, unsigned char PlayerLockpickSkill, unsigned char BasePlayerLockpickSkill);
	unsigned char LockpickNumResources(unsigned char ExactLockpickDifficulty, unsigned char PlayerLockpickSkill, unsigned char BasePlayerLockpickSkill);
	float LockpickNoise(unsigned char ExactLockpickDifficulty, unsigned char PlayerLockpickSkill);
	float LockpickDifficultyRange();
	unsigned char LockpickDifficultyNumRanges();
	unsigned char LockpickDifficultyFullRange();
	unsigned char HackToughness(unsigned char ExactHackDifficulty, unsigned char PlayerHackSkill);
	unsigned char HackTime(unsigned char ExactHackDifficulty, unsigned char PlayerHackSkill);
	unsigned char HackRobotTime(unsigned char ExactHackDifficulty, unsigned char PlayerHackSkill);
	unsigned char HackNumResources(unsigned char ExactHackDifficulty, unsigned char PlayerHackSkill);
	float HackNoise(unsigned char ExactHackDifficulty, unsigned char PlayerHackSkill);
	float HackDifficultyRange();
	unsigned char HackDifficultyNumRanges();
	unsigned char HackDifficultyFullRange();
	int GetRespecCost(int NumRespecs);
	float GetModifiedItemEffectiveness(class UDegradableItem* Item);
	int GetInterrogationBribeAmount(ECrimeType CrimeType, bool bRestrictedArea, bool bDisguised, int DisguiseInterrogationsPassed, int PlayerLevel, int MerchantSkill, int StolenItemsValue);
	float GetDisguiseDrainRate(int StealthSkill, bool bMoving, bool bSprinting, bool bCrouching);
	int GetBribeAmount(EBribeDifficulty BribeDifficulty, int Level, int MerchantSkill);
	int FieldRepairPartCost(float Durability, int ItemLevel, int EngineerSkill);
	bool DoesHackSkillUnlockRestrictedStock(int HackSkill);
	unsigned char DisarmTime(unsigned char ExactTrapDifficulty, unsigned char PlayerEngineeringSkill);
	int ConversationSkillNearMissThreshold();
	int ConversationNearMissMaxOptions();
	int ConversationAttributeNearMissThreshold();
	ECharacterSkillRange ComputeSkillValueToRange(int SkillValue);
	int ComputeSkillPointsForSecondaryAttribute(unsigned char AttributeRank);
	int ComputeSkillPointsForPrimaryAttribute(unsigned char AttributeRank);
	float ComputeFallingDamagePercent(float DistanceFallen);
	unsigned char ComputeExactTrapDifficulty(ETrapDifficulty TrapDifficulty);
	unsigned char ComputeExactLockpickDifficulty(EOCLDifficulty LockpickDifficulty);
	unsigned char ComputeExactHackDifficulty(EOCLDifficulty HackDifficulty);
	bool CanLockpick(unsigned char ExactLockpickDifficulty, unsigned char PlayerLockpickSkill);
	bool CanHack(unsigned char ExactComputerDifficulty, unsigned char PlayerHackSkill);
	bool CanDisarm(unsigned char ExactTrapDifficulty, unsigned char PlayerEngineeringSkill);
	bool CanArm(unsigned char ExactTrapDifficulty, unsigned char PlayerEngineeringSkill);
	int CalculateTier3Count(int ScienceSkill);
	int CalculateTier2Count(int ScienceSkill);
	int CalculateTier1Count(int ScienceSkill);
	int CalculatePartsRecoveredOnBreakdown(float Durability, int ItemLevel, bool bFieldBreakdown);
	float CalculateMoraleAdjustment(float AddedMoral, int CharmAttribute, int TemperamentAttribute);
	float CalculateMerchantSkillDiscount(int MerchantSkill);
	float CalculateItemEffectiveness(class UDegradableItem* Item);
	float CalculateItemBasePrice(int BasePrice, bool bPristine, float Condition);
	float CalculateIntialMorale(int TemperamentAttribute);
	int CalculateGadgetSlots(int ScienceSkill);
	float BaseRepairPartCost(float Durability, int ItemLevel);
	unsigned char ArmTime(unsigned char ExactTrapDifficulty, unsigned char PlayerEngineeringSkill);
};


// Class Indiana.IndianaGameInstance
// 0x0748 (0x07F0 - 0x00A8)
class UIndianaGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x748];                                     // 0x00A8(0x0748) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaGameInstance");
		return ptr;
	}


	void STATIC_SetOverridePlayerClass(class UClass* Override);
	void STATIC_QueueEndGameLoadingScreen(EEndGameImageType EndGameType);
	void STATIC_QueueCredits(bool bShouldQueue);
	bool IsXFHDLCInstalled();
	bool IsINX2Installed();
	bool IsINX2DLCInstalled();
	bool IsINX1Installed();
	bool HasVisitedMainMenu();
	bool AreCreditsQueued();
	bool AreCreditsPlaying();
};


// Class Indiana.IndianaGameMode
// 0x0030 (0x04A8 - 0x0478)
class AIndianaGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0478(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaGameMode");
		return ptr;
	}

};


// Class Indiana.IndianaGameplayStatics
// 0x0000 (0x0030 - 0x0030)
class UIndianaGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaGameplayStatics");
		return ptr;
	}


	float UndilateTime(class UObject* ContextObject, float DilatedTime);
	void STATIC_TeleportPlayerToStart(class AIndianaPlayerStart* PlayerStart);
	bool SuicideActor(class AActor* Actor);
	class UParticleSystemComponent* SpawnPooledEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType);
	class UParticleSystemComponent* SpawnPooledEmitterAtLocation(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	void STATIC_SetParticleSystemEmittersEnabled(class UParticleSystemComponent* ParticleSystem, TArray<struct FName> EnabledEmitters, bool bEnabled);
	void STATIC_SetMoveIgnoreComponentCollision(class AActor* Actor, class UPrimitiveComponent* ComponentToIgnore, bool bIgnore);
	void STATIC_SetMoveIgnoreActorCollision(class AActor* ActorA, class AActor* ActorB, bool bIgnore);
	void STATIC_SetIndianaActorPseudoGod(class AActor* Actor, bool bPseudoGodMode);
	void STATIC_SetIndianaActorInteractable(class AActor* Actor, bool bInteractable);
	void STATIC_SetIndianaActorGod(class AActor* Actor, bool bGodMode);
	void STATIC_SetFPVCameraFOV(bool bOverrideCustomFOV);
	bool IsRunningAutomationTest(EBoolResult* Result);
	bool IsQuestActive(const struct FGuid& QuestID, EBoolResult* Result);
	bool IsItemStackOfClass(const struct FItemStack& ItemStack, class UClass* ItemType);
	bool IsItemOfClass(class UItem* Item, class UClass* ItemType);
	bool IsGlobalVariableValue(const struct FGlobalVariable& Variable, EComparisonOperator Operator, int Value, EBoolResult* Result);
	bool IsGlobalVariableValid(const struct FGlobalVariable& Variable, EBoolResult* Result);
	bool IsGlobalValue(const class FString& VariableName, EComparisonOperator Operator, int Value, EBoolResult* Result);
	bool IsCharacterInAnyBarkConversation(class AIndianaCharacter* Character);
	void STATIC_InitiateTravel(class AIndianaPlayerCharacter* PlayerCharacter, class UTravelDestinationData* TravelDest, bool bTravelFromMapLedger, bool bTriggerAutosave);
	void STATIC_InheritMeshProperties(class UMeshComponent* ParentMesh, class UMeshComponent* ChildMesh);
	void STATIC_IndianaCancelAsyncLoadAsset(int Handle);
	void STATIC_IndianaAsyncLoadAsset(int Priority, const struct FScriptDelegate& Callback, int* HandleOut);
	float GetWeaponSpinProgress(class UWeapon* Weapon);
	bool GetWeaponSpinningUp(class UWeapon* Weapon);
	float GetWeaponProjectileCharge(class UWeapon* Weapon);
	bool GetWeaponIsSwinging(class UWeapon* Weapon);
	bool GetWeaponForceSpin(class UWeapon* Weapon);
	float GetWeaponCurrentCharge(class UWeapon* Weapon);
	float GetWeaponCurrentAmmoGaugeAlpha(class UWeapon* Weapon);
	class USkeletalMeshComponent* GetSkeletalMeshComponent(class AActor* TargetActor, EMeshTarget MeshType);
	class UMeshComponent* GetMeshComponent(class AActor* TargetActor, EMeshTarget MeshType);
	class UGameCalendar* GetGameCalendar();
	TEnumAsByte<EPhysicalSurface> GetEventEffectPhysicalSurface(const struct FEventEffectParams& Params);
	float GetEventEffectParam(const struct FEventEffectParams& Params, EEventEffectFloatParams Param);
	TArray<struct FName> GetEventEffectEnabledEmitters(const struct FEventEffectParams& Params);
	float GetBlendSpaceLength(class UBlendSpaceBase* BlendSpace);
	void STATIC_GetAllAppearanceRelatedMeshes(class AActor* Actor, bool bIncludeWeapon, TArray<class UMeshComponent*>* Meshes);
	class AActor* GetActorBySpeakerName(const struct FGuid& SpeakerReference, ECheckBranches* Branches);
	class USceneComponent* FindFirstChildComponentByTag(class USceneComponent* ParentComponent, const struct FName& Tag, ECheckBranches* Branches);
	bool FindChildComponentsByTag(class USceneComponent* ParentComponent, const struct FName& Tag, TArray<class USceneComponent*>* ChildComponents);
	void STATIC_EnableParticleSystemEmitters(class UParticleSystemComponent* ParticleSystem, TArray<struct FName> EnabledEmitters);
	float DilateTime(class UObject* ContextObject, float UndilatedTime);
	class UDialogBoxWidget* CreateEndGameDialogWidget(const struct FLocString& BodyLocString);
	class UDialogBoxWidget* CreateDialogWidget(const struct FLocString& BodyLocString, bool bCancellable);
	class UActorComponent* ConstructComponentByClass(class UObject* InOuter, class UClass* InClass, ECheckBranches* Branches);
	void STATIC_ClearPlayerCombat();
	bool CanCharacterUnlockRestrictedStock(class AIndianaCharacter* Character);
	void STATIC_ApplyGenericDamage(class AActor* DamageCauser, class AActor* DamagedActor, float BaseDamage, class UClass* DamageType, bool bUseCustomDamageDescription, const struct FDamageDescription& CustomDamageDescription);
	void STATIC_ApplyCACVisibilityToActorCollision(class UChildActorComponent* CAC);
};


// Class Indiana.IndianaGameUserSettings
// 0x0890 (0x09B0 - 0x0120)
class UIndianaGameUserSettings : public UGameUserSettings
{
public:
	unsigned char                                      UnknownData00[0x890];                                     // 0x0120(0x0890) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaGameUserSettings");
		return ptr;
	}


	void STATIC_SetYAxisInverted(bool Value);
	void STATIC_SetXAxisInverted(bool Value);
	void STATIC_SetWeaponTooltipStatMode(EWeaponTooltipStatMode Mode);
	void STATIC_SetWeaponSelectMode(EWeaponSelectMode ModeIn);
	void STATIC_SetWeaponSelectAxisMode(EWeaponSelectAxisMode ModeIn);
	void STATIC_SetVSyncWrapper(bool bEnabled);
	void STATIC_SetVoiceSoundVolume(float Value);
	void STATIC_SetViewBaseStats(bool Value);
	void STATIC_SetUISoundVolume(float Value);
	void STATIC_SetTutorialsEnabled(bool bEnabled);
	void STATIC_SetTTDDisplayMode(ETTDDisplayMode ModeIn);
	void STATIC_SetTooltipDelay(float Delay);
	void STATIC_SetSurvivalMeterMode(bool bVisibleIn);
	void STATIC_SetShowWaypointMarkers(bool bShow);
	void STATIC_SetShowTutorialNotifications(bool bShow);
	void STATIC_SetShowTTDStatusEffectPreview(bool bShow);
	void STATIC_SetShowTTDScanner(bool bShow);
	void STATIC_SetShowTTDReticleMeter(ETTDReticleMeterMode ModeIn);
	void STATIC_SetShowReticleFeedback(bool bShow);
	void STATIC_SetShowPlayerStatusEffects(bool bShow);
	void STATIC_SetShowPlayerHelmet(bool bShow);
	void STATIC_SetShowLootTooltips(bool bShow);
	void STATIC_SetShowLootControls(bool bShow);
	void STATIC_SetShowLevelUpReminders(bool bShow);
	void STATIC_SetShowLevelUpNotification(bool bShow);
	void STATIC_SetShowInteractionOutlines(bool bShow);
	void STATIC_SetShowInteractionControls(bool bShow);
	void STATIC_SetShowFloatingDamageText(bool bShow);
	void STATIC_SetShowEquipmentRepairWarning(bool bShow);
	void STATIC_SetShowEnemyHealthBars(EEnemyHealthBarMode ModeIn);
	void STATIC_SetShowEnemyAwarenessMeters(bool bVisible);
	void STATIC_SetShowDisguiseMeter(bool bShow);
	void STATIC_SetShowDirectionalDamageIndicators(EDirectionalDamageIndicatorMode ModeIn);
	void STATIC_SetShowCompass(ECompassVisibilityMode ModeIn);
	void STATIC_SetShowCompanionPassiveCD(ECompanionAbilityPassiveCDMode ModeIn);
	void STATIC_SetShowCompanionHelmets(bool bShow);
	void STATIC_SetShowCombatIndicator(bool bShow);
	void STATIC_SetRadialSensitivity(float Value);
	void STATIC_SetQuestUpdateMode(EQuestUpdateMode bShow);
	void STATIC_SetPseudoGodMode(bool Value);
	void STATIC_SetPlayerStatusEffectTextMode(EPlayerStatusEffectTextMode ModeIn);
	void STATIC_SetPlayerStatusBarMode(EPlayerStatusBarMode ModeIn);
	void STATIC_SetOffsetReticle(bool bUseOffset);
	void STATIC_SetNotificationDuration(float DurationIn);
	void STATIC_SetMusicSoundVolume(float Value);
	void STATIC_SetMouseSensitivity(float Value);
	void STATIC_SetMouseADSSensitivity(float Value);
	void STATIC_SetMotionBlurScale(float NewMotionBlurScale);
	void STATIC_SetMedicalInhalerUIMode(EMedicalInhalerMode InhalerModeIn);
	void STATIC_SetMasterSoundVolume(float Value);
	void STATIC_SetLanguageMode(ELanguageMode LanguageModeIn, bool bPending);
	void STATIC_SetIsSimplifiedLockpickHackingMode(ESimplifiedLockpickHackingMode ModeIn);
	void STATIC_SetIsSimplifiedEquipmentRepairWarning(bool bShow);
	void STATIC_SetIsFreshUserSettings(bool Value);
	void STATIC_SetInfiniteAmmo(bool Value);
	void STATIC_SetHUDVisibility(bool bVisibilityIn);
	void STATIC_SetHUDMode(EHUDMode ModeIn);
	void STATIC_SetHeldWeaponDisplayTextMode(EHeldWeaponDisplayText ModeIn);
	void STATIC_SetHeldWeaponDisplayMode(EHeldWeaponDisplayMode ModeIn);
	void STATIC_SetHeadbobbing(bool bEnabledIn);
	void STATIC_SetGraphicsQuality(int Value);
	void STATIC_SetGodMode(bool Value);
	void STATIC_SetGammaLevel(float GammaLevelIn);
	void STATIC_SetFullscreenModeThenBroadcast(TEnumAsByte<EWindowMode> Value);
	void STATIC_SetFPSLimit(EFPSLimit FPSLimitIn);
	void STATIC_SetFPSIndicatorMode(EFPSIndicatorMode ModeIn);
	void STATIC_SetFOV(float FOVIn);
	void STATIC_SetFontSizeModifier(int ModifierIn);
	void STATIC_SetEffectsSoundVolume(float Value);
	void STATIC_SetDodgeDisplayMode(EDodgeDisplayMode ModeIn);
	void STATIC_SetDialogSkillMode(EDialogSkillMode ModeIn);
	void STATIC_SetConversationSubtitleMode(EConversationSubtitleMode Mode);
	void STATIC_SetConversationResponseVisibleDuringVO(bool bVisible);
	void STATIC_SetConversationContinueOnVOEnd(bool Value);
	void STATIC_SetControllerYAxisInverted(bool Value);
	void STATIC_SetControllerXAxisInverted(bool Value);
	void STATIC_SetControllerSensitivity(float Value);
	void STATIC_SetControllerRumbleEnabled(bool Value);
	void STATIC_SetControllerRightOuterDeadZone(float Value);
	void STATIC_SetControllerRightInnerDeadZone(float Value);
	void STATIC_SetControllerLeftOuterDeadZone(float Value);
	void STATIC_SetControllerLeftInnerDeadZone(float Value);
	void STATIC_SetControllerAutoSprintEnabled(bool Value);
	void STATIC_SetControllerADSSensitivity(float Value);
	void STATIC_SetCompanionStatusUIMode(ECompanionStatusMode ModeIn);
	void STATIC_SetCompanionPassiveCDNotificationMode(ECompanionAbilityPassiveNotificationMode ModeIn);
	void STATIC_SetCompanionOutlineMode(ECompanionOutlineMode Mode);
	void STATIC_SetCompanionAbilityUIMode(ECompanionAbilityUIMode ModeIn);
	void STATIC_SetCompanionAbilityBindingMode(ECompanionAbilityBindingMode ModeIn);
	void STATIC_SetColorblindModeEnabled(bool bEnabled);
	void STATIC_SetCinematicSubtitlesVisible(bool bVisible);
	void STATIC_SetCinematicKillCam(bool bEnabledIn);
	void STATIC_SetChromaticAberration(bool bUseChromaticAberration);
	void STATIC_SetBarkSubtitleMode(bool bVisible);
	void STATIC_SetAxisKeyBinds(TArray<struct FInputAxisKeyMapping> OldValues, TArray<struct FInputAxisKeyMapping> NewValues);
	void STATIC_SetAutoCollapseItemViewers(bool bEnabled);
	void STATIC_SetAreaNameMode(EAreaNameMode AreaModeIn);
	void STATIC_SetAntiAliasingMethod(int Method);
	void STATIC_SetAimingReticleMode(EReticleMode ModeIn);
	void STATIC_SetActionKeyBinds(TArray<struct FInputActionKeyMapping> OldValues, TArray<struct FInputActionKeyMapping> NewValues);
	void STATIC_SetAbilityControlUIMode(EAbilityControlMode ModeIn);
	void STATIC_Set3DResolution(float ResolutionIn);
	void STATIC_ResetAllKeyBinds();
	void STATIC_OnDetectGraphics();
	bool IsConversationResponseVisibleDuringVO();
	bool GetYAxisInverted();
	bool GetXAxisInverted();
	EWeaponTooltipStatMode GetWeaponTooltipStatMode();
	EWeaponSelectMode GetWeaponSelectMode();
	EWeaponSelectAxisMode GetWeaponSelectAxisMode();
	bool GetVSyncWrapper();
	float GetVoiceSoundVolume();
	bool GetViewBaseStats();
	float GetUISoundVolume();
	bool GetTutorialsEnabled();
	ETTDDisplayMode GetTTDDisplayMode();
	float GetTooltipDelay();
	bool GetSurvivalMeterMode();
	bool GetShowWaypointMarkers();
	bool GetShowTutorialNotifications();
	bool GetShowTTDStatusEffectPreview();
	bool GetShowTTDScanner();
	ETTDReticleMeterMode GetShowTTDReticleMeter();
	bool GetShowReticleFeedback();
	bool GetShowPlayerStatusEffects();
	bool GetShowPlayerHelmet();
	bool GetShowLootTooltips();
	bool GetShowLootControls();
	bool GetShowLevelUpReminders();
	bool GetShowLevelUpNotification();
	bool GetShowInteractionOutlines();
	bool GetShowInteractionControls();
	bool GetShowFloatingDamageText();
	bool GetShowEquipmentRepairWarning();
	EEnemyHealthBarMode GetShowEnemyHealthBars();
	bool GetShowEnemyAwarenessMeters();
	bool GetShowDisguiseMeter();
	EDirectionalDamageIndicatorMode GetShowDirectionalDamageIndicators();
	ECompassVisibilityMode GetShowCompass();
	ECompanionAbilityPassiveCDMode GetShowCompanionPassiveCD();
	bool GetShowCompanionHelmets();
	bool GetShowCombatIndicator();
	float GetRadialSensitivity();
	EQuestUpdateMode GetQuestUpdateMode();
	bool GetPseudoGodMode();
	EPlayerStatusEffectTextMode GetPlayerStatusEffectTextMode();
	EPlayerStatusBarMode GetPlayerStatusBarMode();
	bool GetOffsetReticle();
	float GetNotificationDuration();
	float GetMusicSoundVolume();
	float GetMouseSensitivity();
	float GetMouseADSSensitivity();
	float GetMotionBlurScale();
	EMedicalInhalerMode GetMedicalInhalerUIMode();
	float GetMasterSoundVolume();
	ELanguageMode GetLanguageMode();
	ESimplifiedLockpickHackingMode GetIsSimplifiedLockpickHackingMode();
	bool GetIsSimplifiedEquipmentRepairWarning();
	bool GetIsFreshUserSettings();
	bool GetInfiniteAmmo();
	bool GetHUDVisibility();
	EHUDMode GetHUDMode();
	EHeldWeaponDisplayText GetHeldWeaponDisplayTextMode();
	EHeldWeaponDisplayMode GetHeldWeaponDisplayMode();
	bool GetHeadbobbing();
	int GetGraphicsQuality();
	bool GetGodMode();
	float GetGammaLevel();
	EFPSLimit GetFPSLimit();
	EFPSIndicatorMode GetFPSIndicatorMode();
	float GetFOV();
	int GetFontSizeModifier();
	float GetEffectsSoundVolume();
	EDodgeDisplayMode GetDodgeDisplayMode();
	EDialogSkillMode GetDialogSkillMode();
	EConversationSubtitleMode GetConversationSubtitleMode();
	bool GetConversationContinueOnVOEnd();
	bool GetControllerYAxisInverted();
	bool GetControllerXAxisInverted();
	float GetControllerSensitivity();
	bool GetControllerRumbleEnabled();
	float GetControllerRightOuterDeadZone();
	float GetControllerRightInnerDeadZone();
	float GetControllerLeftOuterDeadZone();
	float GetControllerLeftInnerDeadZone();
	bool GetControllerAutoSprintEnabled();
	float GetControllerADSSensitivity();
	ECompanionStatusMode GetCompanionStatusUIMode();
	ECompanionAbilityPassiveNotificationMode GetCompanionPassiveCDNotificationMode();
	ECompanionOutlineMode GetCompanionOutlineMode();
	ECompanionAbilityUIMode GetCompanionAbilityUIMode();
	ECompanionAbilityBindingMode GetCompanionAbilityBindingMode();
	bool GetColorblindModeEnabled();
	bool GetCinematicSubtitlesVisible();
	bool GetCinematicKillCam();
	bool GetChromaticAberration();
	bool GetBarkSubtitlesVisible();
	TArray<struct FInputAxisKeyMapping> GetAxisKeyBinds(const struct FName& AxisName, float Scale);
	bool GetAutoCollapseItemViewers();
	EAreaNameMode GetAreaNameMode();
	int GetAntiAliasingMethod();
	EReticleMode GetAimingReticleMode();
	TArray<struct FInputActionKeyMapping> GetActionKeyBinds(const struct FName& ActionName);
	EAbilityControlMode GetAbilityControlUIMode();
	float Get3DResolution();
};


// Class Indiana.IndianaGameViewportClient
// 0x0018 (0x0318 - 0x0300)
class UIndianaGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0300(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaGameViewportClient");
		return ptr;
	}


	void STATIC_SetSoundOverride();
};


// Class Indiana.IndianaGlobals
// 0x0238 (0x0268 - 0x0030)
class UIndianaGlobals : public UObject
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0030(0x0238) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaGlobals");
		return ptr;
	}


	class UTutorialManager* GetTutorialManager();
};


// Class Indiana.IndianaItemAudioData
// 0x0050 (0x0088 - 0x0038)
class UIndianaItemAudioData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaItemAudioData");
		return ptr;
	}

};


// Class Indiana.IndianaLoadingScreenImageData
// 0x0188 (0x01C0 - 0x0038)
class UIndianaLoadingScreenImageData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0038(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaLoadingScreenImageData");
		return ptr;
	}

};


// Class Indiana.IndianaLoadingScreenManager
// 0x0040 (0x0070 - 0x0030)
class UIndianaLoadingScreenManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaLoadingScreenManager");
		return ptr;
	}


	void STATIC_DebugShowLoadingScreen(const struct FName& MapName);
};


// Class Indiana.IndianaMathStatics
// 0x0000 (0x0030 - 0x0030)
class UIndianaMathStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaMathStatics");
		return ptr;
	}

};


// Class Indiana.IndianaNavigationSystem
// 0x00F8 (0x0560 - 0x0468)
class UIndianaNavigationSystem : public UNavigationSystemV1
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0468(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaNavigationSystem");
		return ptr;
	}


	void STATIC_UnregisterArea(class AActor* Source, EOccupationChannel Channel);
	bool TraceOccupation(class AActor* Source, EOccupationChannel Channel, const struct FVector& Start, const struct FVector& End);
	void STATIC_RegisterArea(class AActor* Source, EOccupationChannel Channel, const struct FVector& Location, const struct FVector& Extents, const struct FRotator& Transform);
};


// Class Indiana.IndianaNavModifierComponent
// 0x0068 (0x01B0 - 0x0148)
class UIndianaNavModifierComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0148(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaNavModifierComponent");
		return ptr;
	}

};


// Class Indiana.IndianaPathFollowingComponent
// 0x00A8 (0x0390 - 0x02E8)
class UIndianaPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x02E8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaPathFollowingComponent");
		return ptr;
	}


	void STATIC_OnCapsuleSizeChange();
	void STATIC_EndStationaryRotate();
};


// Class Indiana.IndianaPlayerAudioComponent
// 0x0128 (0x03E8 - 0x02C0)
class UIndianaPlayerAudioComponent : public UIndianaAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x02C0(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaPlayerAudioComponent");
		return ptr;
	}


	void STATIC_TacticalTimeDilationStart();
	void STATIC_TacticalTimeDilationEnd(float Duration);
	void STATIC_OnStealthChange(bool bStealthed);
	void STATIC_OnKillCameraStart(class AActor* CameraTarget);
	void STATIC_OnKillCameraEnd();
	void STATIC_OnDisguiseUnequipped();
	void STATIC_OnDisguiseRefilled();
	void STATIC_OnDisguiseMeterChanged(float Meter);
	void STATIC_OnDisguiseEquipped(class UDisguiseData* Disguise);
	void STATIC_OnDisguiseDrainStart();
	void STATIC_OnDisguiseDrainEnd();
	void STATIC_OnDetectionChange(EDetectionType DetectionType);
	void STATIC_OnCompanionCommandCooldownEnd(ECompanionCommand Command);
	void STATIC_OnCombatStateChanged(bool bInCombat, bool bRestoring);
	void STATIC_OnCalledShotCameraStep(class AActor* Attacker, ECalledShotCameraStep OldCameraStep, ECalledShotCameraStep NewCameraStep, bool bCloseRange);
	void STATIC_GamePauseChanged(bool bPaused);
};


// Class Indiana.IndianaPlayerCharacter
// 0x0B10 (0x1970 - 0x0E60)
class AIndianaPlayerCharacter : public AIndianaCharacter
{
public:
	unsigned char                                      UnknownData00[0xB10];                                     // 0x0E60(0x0B10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaPlayerCharacter");
		return ptr;
	}


	bool WasPONRRollbackRecentlyPerformed();
	void STATIC_TravelToDestination(class UTravelDestinationData* Destination, bool bTriggerAutosave);
	void STATIC_ToggleUnlockTravelPoints();
	void STATIC_TinkerAdvanceWeapon(bool bIgnoreCost);
	void STATIC_SuppressInput(bool bSuppress);
	void STATIC_SetVisitedTravelDestination(class UTravelDestinationData* TravelDest);
	void STATIC_SetVisitedRegion(class UTravelRegionData* Region);
	void STATIC_SetTutorialsEnabled(bool bEnabled);
	void STATIC_SetTravelDestinationLocked(class UTravelDestinationData* TravelDest, bool bLocked);
	void STATIC_SetTravelDestinationHidden(class UTravelDestinationData* TravelDest, bool bSetHidden);
	void STATIC_SetMovementEnabled(bool bNewIsMovementEnabled);
	void STATIC_SetIsInLowGravity(bool bNewIsInLowGravity);
	void STATIC_SetCurrentShipLocation(class UShipDestinationData* ShipDest);
	void STATIC_SetAwareOfTravelDestination(class UTravelDestinationData* TravelDest);
	void STATIC_SetAwareOfRegion(class UTravelRegionData* Region);
	void STATIC_SetAllLevels(int Level);
	void STATIC_PointOfNoReturnRollback();
	void STATIC_PointOfNoReturnFixQuests();
	void STATIC_PointOfNoReturnFixItems();
	void STATIC_PointOfNoReturnFixGlobalVars();
	void STATIC_PointOfNoReturnFixConversations();
	void STATIC_OnUndetected();
	void STATIC_OnStopCrouch();
	void STATIC_OnSoftCoverExited();
	void STATIC_OnSoftCoverEntered();
	void STATIC_OnPlayerStealthExitedBP();
	void STATIC_OnPlayerStealthEnteredBP();
	void STATIC_OnPlayerSoftCoverExitedBP();
	void STATIC_OnPlayerSoftCoverEnteredBP();
	void STATIC_OnPlayerInventoryItemConsumed(const struct FItemStack& ItemStack);
	void STATIC_OnPlayerInventoryItemAdded(const struct FItemStack& ItemStack);
	void STATIC_OnPauseStateChanged(bool bIsPaused);
	void STATIC_OnPartyCombatDamageTaken(const struct FCauseDamageInfo& DamageInfo);
	void STATIC_OnJumpLanded(float FallDistance);
	void STATIC_OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void STATIC_OnDodged(EDodgeDirection EDodgeDirection);
	void STATIC_OnDetected(class AActor* Detector);
	void STATIC_OnCrouchComplete();
	void STATIC_OffsetReticleChanged(bool bUseOffsetReticle);
	void STATIC_MentionPointOfInterest(class UPointOfInterestData* POIData);
	void STATIC_MakePointOfInterestDiscoverable(class UPointOfInterestData* POIData, bool bStillHidden);
	bool IsTravelDestinationLocked(class UTravelDestinationData* TravelDest);
	bool IsTravelDestinationHidden(class UTravelDestinationData* TravelDest);
	bool IsShipCurrentlyAt(class UTravelDestinationData* ShipDest);
	bool IsAwareOfTravelDestination(class UTravelDestinationData* TravelDest);
	bool IsAwareOfRegion(class UTravelRegionData* Region);
	bool IsAwareOfPointOfInterest(class UPointOfInterestData* POIData);
	void STATIC_InitiateTravelToShipLocation();
	void STATIC_HidePointOfInterest(class UPointOfInterestData* POIData);
	void STATIC_HeadbobbingChanged(bool bHeadbobbing);
	bool HasVisitedTravelDestination(class UTravelDestinationData* TravelDest);
	bool HasVisitedRegion(class UTravelRegionData* Region);
	bool HasOnlyHeardAboutPointOfInterest(class UPointOfInterestData* POIData);
	bool HasDiscoveredPointOfInterest(class UPointOfInterestData* POIData);
	class AIndianaPlayerCharacter* GetIndianaPC();
	void STATIC_EvidenceScannerActivated(bool bActivated);
	void STATIC_EquippedWeaponChanged(class UWeapon* NewlyEquippedWeapon);
	void STATIC_DiscoverPointOfInterest(class UPointOfInterestData* POIData, bool bCanAwardXP);
	void STATIC_DebugTravel_TravelToDestination(const struct FName& TravelDestination);
	void STATIC_DebugTravel_SetVisitedRegion(const struct FName& Region, bool bNewVisited);
	void STATIC_DebugTravel_SetVisitedDestination(const struct FName& TravelDestination, bool bNewVisited);
	void STATIC_DebugTravel_SetShipLocation(const struct FName& ShipLocation);
	void STATIC_DebugTravel_SetDestinationLocked(const struct FName& TravelDestination, bool bNewLocked);
	void STATIC_DebugTravel_SetDestinationHidden(const struct FName& TravelDestination, bool bNewHidden);
	void STATIC_DebugTravel_SetAwareRegion(const struct FName& Region, bool bNewAware);
	void STATIC_DebugTravel_SetAwareDestination(const struct FName& TravelDestination, bool bNewAware);
	void STATIC_DebugSoftCoverExited();
	void STATIC_DebugSoftCoverEntered();
	bool CanDiscoverPointOfInterest(class UPointOfInterestData* POIData);
	bool CanAccessTravelDestination(class UTravelDestinationData* TravelDest);
	void STATIC_AdjustWeaponHealth(float Amount);
};


// Class Indiana.IndianaPlayerController
// 0x0058 (0x0730 - 0x06D8)
class AIndianaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x06D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaPlayerController");
		return ptr;
	}


	void STATIC_UnpinGlobalVariable(const class FString& GlobalVariable);
	void STATIC_ToggleQuestLog();
	void STATIC_TogglePauseMenu();
	void STATIC_ToggleMap();
	void STATIC_ToggleLedger();
	void STATIC_ToggleInventory();
	void STATIC_ToggleCompanions();
	void STATIC_ToggleCharacterSummary();
	void STATIC_SetYAxisInverted(bool bIsInverted);
	void STATIC_SetXAxisInverted(bool bIsInverted);
	void STATIC_SetMouseSensitivity(float Value);
	void STATIC_SetMouseADSSensitivity(float Value);
	void STATIC_SetGlobalVariable(const class FString& GlobalVariable, int Value);
	void STATIC_SetControllerYAxisInverted(bool bIsInverted);
	void STATIC_SetControllerXAxisInverted(bool bIsInverted);
	void STATIC_SetAutoSprintEnabled(bool bIsEnabled);
	void STATIC_PlayChatterOnTarget(EChatterEventType ChatterEvent);
	void STATIC_PinGlobalVariable(const class FString& GlobalVariable);
	void STATIC_OpenQuestLog();
	void STATIC_OpenMap();
	void STATIC_OpenLedger();
	void STATIC_OpenInventory();
	void STATIC_OpenCompanions();
	void STATIC_OpenCharacterSummary();
	void STATIC_OnRestoredStateOfBeing(EStateOfBeing RestoredStateOfBeing);
	void STATIC_OnKeyBindsReset();
	void STATIC_OnAxisMappingRemoved(const struct FInputAxisKeyMapping& Value);
	void STATIC_OnAxisMappingAdded(const struct FInputAxisKeyMapping& Value);
	void STATIC_OnActionMappingRemoved(const struct FInputActionKeyMapping& Value);
	void STATIC_OnActionMappingAdded(const struct FInputActionKeyMapping& Value);
	bool IsYAxisInverted();
	bool IsXAxisInverted();
	bool InputAxis(const struct FKey& Key, float Delta, float DeltaTime, int NumSamples, bool bGamepad);
	float GetMouseSensitivity();
	float GetMouseADSSensitivity();
	float GetInteractHoldTime();
	class AIndianaPlayerController* GetIndianaPlayerController();
	void STATIC_DebugSpawnCompanion(const struct FName& CompanionName);
	class AIndianaAiCharacter* DebugSpawnAICharacter(const struct FName& AICharacterAssetName);
	void STATIC_DebugRevertDutchAngle(float Axis);
	void STATIC_DebugDynamicallyReplaceCompanion(const struct FName& OldCompanionName, const struct FName& NewCompanionName);
	void STATIC_DebugDutchAngleAdjustment(float Axis);
	void STATIC_CloseLedger();
	class AIndianaAiCharacter* AsyncSpawnCompanion(ESpecialObsidianID CompanionID);
	void STATIC_AddStickYawInput(float Val);
	void STATIC_AddStickRollInput(float Val);
	void STATIC_AddStickPitchInput(float Val);
};


// Class Indiana.IndianaPlayerInput
// 0x0018 (0x03D0 - 0x03B8)
class UIndianaPlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaPlayerInput");
		return ptr;
	}

};


// Class Indiana.IndianaPlayerStart
// 0x0030 (0x03E8 - 0x03B8)
class AIndianaPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaPlayerStart");
		return ptr;
	}


	void STATIC_OnPlayerPawnOverlappedVisited(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_OnPlayerPawnOverlappedAwareness(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	class FString GetDebugString();
	bool GetCompanionSpawnLocation(const class FString& CompanionCapsuleName, bool bFeetLocation, struct FVector* Location, struct FRotator* Rotation);
};


// Class Indiana.IndianaProjMovementComponent
// 0x0020 (0x0250 - 0x0230)
class UIndianaProjMovementComponent : public UProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0230(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaProjMovementComponent");
		return ptr;
	}

};


// Class Indiana.IndianaSkill
// 0x0048 (0x0078 - 0x0030)
class UIndianaSkill : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaSkill");
		return ptr;
	}

};


// Class Indiana.HandGunsSkill
// 0x0000 (0x0078 - 0x0078)
class UHandGunsSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HandGunsSkill");
		return ptr;
	}

};


// Class Indiana.LongGunsSkill
// 0x0000 (0x0078 - 0x0078)
class ULongGunsSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LongGunsSkill");
		return ptr;
	}

};


// Class Indiana.HeavyWeaponsSkill
// 0x0000 (0x0078 - 0x0078)
class UHeavyWeaponsSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HeavyWeaponsSkill");
		return ptr;
	}

};


// Class Indiana.SneakSkill
// 0x0008 (0x0080 - 0x0078)
class USneakSkill : public UIndianaSkill
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SneakSkill");
		return ptr;
	}

};


// Class Indiana.LockpickSkill
// 0x0000 (0x0078 - 0x0078)
class ULockpickSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LockpickSkill");
		return ptr;
	}

};


// Class Indiana.EngineeringSkill
// 0x0000 (0x0078 - 0x0078)
class UEngineeringSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.EngineeringSkill");
		return ptr;
	}

};


// Class Indiana.HackSkill
// 0x0000 (0x0078 - 0x0078)
class UHackSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HackSkill");
		return ptr;
	}

};


// Class Indiana.MedicalSkill
// 0x0000 (0x0078 - 0x0078)
class UMedicalSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MedicalSkill");
		return ptr;
	}

};


// Class Indiana.LightMeleeSkill
// 0x0000 (0x0078 - 0x0078)
class ULightMeleeSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LightMeleeSkill");
		return ptr;
	}

};


// Class Indiana.HeavyMeleeSkill
// 0x0000 (0x0078 - 0x0078)
class UHeavyMeleeSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.HeavyMeleeSkill");
		return ptr;
	}

};


// Class Indiana.ScienceSkill
// 0x0000 (0x0078 - 0x0078)
class UScienceSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScienceSkill");
		return ptr;
	}

};


// Class Indiana.PersuadeSkill
// 0x0000 (0x0078 - 0x0078)
class UPersuadeSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PersuadeSkill");
		return ptr;
	}

};


// Class Indiana.LieSkill
// 0x0000 (0x0078 - 0x0078)
class ULieSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LieSkill");
		return ptr;
	}

};


// Class Indiana.IntimidateSkill
// 0x0000 (0x0078 - 0x0078)
class UIntimidateSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IntimidateSkill");
		return ptr;
	}

};


// Class Indiana.DodgeSkill
// 0x0000 (0x0078 - 0x0078)
class UDodgeSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DodgeSkill");
		return ptr;
	}

};


// Class Indiana.BlockSkill
// 0x0000 (0x0078 - 0x0078)
class UBlockSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BlockSkill");
		return ptr;
	}

};


// Class Indiana.InspirationSkill
// 0x0000 (0x0078 - 0x0078)
class UInspirationSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InspirationSkill");
		return ptr;
	}

};


// Class Indiana.DeterminationSkill
// 0x0000 (0x0078 - 0x0078)
class UDeterminationSkill : public UIndianaSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeterminationSkill");
		return ptr;
	}

};


// Class Indiana.IndianaSkills
// 0x0090 (0x00C0 - 0x0030)
class UIndianaSkills : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaSkills");
		return ptr;
	}

};


// Class Indiana.IndianaStatGlobals
// 0x00E8 (0x0120 - 0x0038)
class UIndianaStatGlobals : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0038(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaStatGlobals");
		return ptr;
	}

};


// Class Indiana.IndianaStats
// 0x00E8 (0x0118 - 0x0030)
class UIndianaStats : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0030(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaStats");
		return ptr;
	}

};


// Class Indiana.IndianaTargetPoint
// 0x0008 (0x0390 - 0x0388)
class AIndianaTargetPoint : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaTargetPoint");
		return ptr;
	}

};


// Class Indiana.IndianaTextAnimationData
// 0x0050 (0x0088 - 0x0038)
class UIndianaTextAnimationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaTextAnimationData");
		return ptr;
	}

};


// Class Indiana.IndianaUI
// 0x02D0 (0x0748 - 0x0478)
class AIndianaUI : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0478(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaUI");
		return ptr;
	}


	void STATIC_ToggleSafeSpace();
	void STATIC_ToggleResurrect();
	void STATIC_ToggleDamageTextVisibility();
	void STATIC_StartWorkbench();
	void STATIC_ShowItemOnDisplay(class UClass* ItemIn);
	void STATIC_SetSoundMixVolume(class USoundMix* SoundMix, float Volume);
	void STATIC_SetHudVisible(bool bNewVisible);
	void STATIC_RemoveSubtitleManagerInstance(class USubtitleManagerWidget* ManagerWidget);
	void STATIC_OverlayCycle();
	class UIndianaInterfaceUserWidget* GetUserWidget(class UClass* WidgetClass, ECheckBranches* Branches);
	class USlideshowWidget* GetSlideshowWidget();
	class UHUDWidget* GetHUD();
	void STATIC_ForceHUDHidden(bool bForceHidden);
	void STATIC_FontSizeModifierChanged(int ModifierIn);
	void STATIC_DebugToggleDLC();
	void STATIC_DebugStringTables();
	void STATIC_DebugStringIDsAndTables();
	void STATIC_DebugStringIDs();
	void STATIC_DebugSetFontScaling(int ModifierIn);
	class USubtitleManagerWidget* CreateSubtitleManagerInstanceForMSSP(class UMovieSceneSequencePlayer* MovieSceneSequencePlayer);
	class USubtitleManagerWidget* CreateSubtitleManagerInstance(class UMediaPlayer* MediaPlayer);
	class UMoviePlayerWidget* CreateGenericMoviePlayer();
	void STATIC_CreateExaminable(const struct FLocString& NameString, const struct FLocString& DescriptionString, const struct FLocString& ActionString, const struct FName& RemoteEventOnExaminationEnd);
	class UCinematicPlayerWidget* CreateCinematicPlayer();
	class UIndianaInterfaceUserWidget* ConstructUserWidget(class UClass* WidgetClass, ECheckBranches* Branches);
	void STATIC_ColorblindMode(EColorVisionDeficiency Deficiency, int Severity, bool bCorrection, bool bCorrectionPreview);
	void STATIC_CloseWorkbench();
	void STATIC_CloseGenericMoviePlayer();
};


// Class Indiana.IndianaUIAudioData
// 0x0050 (0x0088 - 0x0038)
class UIndianaUIAudioData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaUIAudioData");
		return ptr;
	}

};


// Class Indiana.IndianaUIColorsData
// 0x00A0 (0x00D8 - 0x0038)
class UIndianaUIColorsData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0038(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaUIColorsData");
		return ptr;
	}

};


// Class Indiana.IndianaUIControllerIconsData
// 0x00F0 (0x0128 - 0x0038)
class UIndianaUIControllerIconsData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0038(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaUIControllerIconsData");
		return ptr;
	}

};


// Class Indiana.IndianaUIFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UIndianaUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaUIFunctionLibrary");
		return ptr;
	}


	float GetOpacityForComponentByType(EIndianaUIOpacityType Type);
	class AIndianaUI* GetIndianaUI(class APlayerController* Controller, ECheckBranches* Branches);
	struct FLinearColor GetColorByType(EIndianaUIColorType Type);
};


// Class Indiana.IndianaWorldSettings
// 0x0118 (0x06D0 - 0x05B8)
class AIndianaWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x05B8(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaWorldSettings");
		return ptr;
	}


	bool K2_IsCurrentMap(class UMapInformation* MapInfo);
};


// Class Indiana.InputGuideWidget
// 0x0178 (0x0420 - 0x02A8)
class UInputGuideWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x02A8(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InputGuideWidget");
		return ptr;
	}


	void STATIC_OnInteractionProgressChange(float CurrentProgressRatio);
	void STATIC_InteractChanged(bool bVisible);
	int GetContentWidth();
};


// Class Indiana.InputLabelGroupWidget
// 0x0070 (0x0318 - 0x02A8)
class UInputLabelGroupWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InputLabelGroupWidget");
		return ptr;
	}

};


// Class Indiana.InputLabelHoldWidget
// 0x00B8 (0x0360 - 0x02A8)
class UInputLabelHoldWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x02A8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InputLabelHoldWidget");
		return ptr;
	}


	void STATIC_UpdateFill();
	void STATIC_SetWidth(float Width);
	void STATIC_SetRadialFill(float FillRatio, float Opacity);
};


// Class Indiana.InputLabelWidget
// 0x0070 (0x0318 - 0x02A8)
class UInputLabelWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InputLabelWidget");
		return ptr;
	}

};


// Class Indiana.InputWidget
// 0x0078 (0x0320 - 0x02A8)
class UInputWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x02A8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InputWidget");
		return ptr;
	}

};


// Class Indiana.InstantHitData
// 0x0018 (0x0050 - 0x0038)
class UInstantHitData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InstantHitData");
		return ptr;
	}

};


// Class Indiana.InteractableComponent
// 0x00C0 (0x0370 - 0x02B0)
class UInteractableComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x02B0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InteractableComponent");
		return ptr;
	}


	class UInteractableComponent* GetInteractableComponent(class UChildActorComponent* ChildActorComponent);
};


// Class Indiana.InteractableMapEntry
// 0x0008 (0x02B0 - 0x02A8)
class UInteractableMapEntry : public UBaseMapEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InteractableMapEntry");
		return ptr;
	}

};


// Class Indiana.ScriptingEvent
// 0x0010 (0x0040 - 0x0030)
class UScriptingEvent : public UInteractionEvent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScriptingEvent");
		return ptr;
	}

};


// Class Indiana.InteractionInterface
// 0x0000 (0x0030 - 0x0030)
class UInteractionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InteractionInterface");
		return ptr;
	}


	struct FLocString GetInteractLocString();
	EInteractionType GetInteraction(const struct FInteractionDescription& Description, const struct FInteractPayload& Payload, float InteractDistance);
	bool CanInteract(class AIndianaCharacter* Initiator, const struct FInteractPayload& Payload);
};


// Class Indiana.InteractorInterface
// 0x0000 (0x0030 - 0x0030)
class UInteractorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InteractorInterface");
		return ptr;
	}

};


// Class Indiana.InterestComponent
// 0x00B8 (0x01D0 - 0x0118)
class UInterestComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0118(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InterestComponent");
		return ptr;
	}

};


// Class Indiana.InterestDataPackage
// 0x0020 (0x0058 - 0x0038)
class UInterestDataPackage : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InterestDataPackage");
		return ptr;
	}

};


// Class Indiana.InventoryAmmoData
// 0x0018 (0x0050 - 0x0038)
class UInventoryAmmoData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryAmmoData");
		return ptr;
	}

};


// Class Indiana.InventoryPageWidget
// 0x0130 (0x03D8 - 0x02A8)
class UInventoryPageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x02A8(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryPageWidget");
		return ptr;
	}


	void STATIC_OnItemCompare(bool bCompared);
};


// Class Indiana.InventoryArmorPageWidget
// 0x0058 (0x0430 - 0x03D8)
class UInventoryArmorPageWidget : public UInventoryPageWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryArmorPageWidget");
		return ptr;
	}


	void STATIC_SetEquippedArmorSlot(EArmorSlot ArmorSlotIn);
};


// Class Indiana.InventoryConsumablesPageWidget
// 0x0140 (0x0518 - 0x03D8)
class UInventoryConsumablesPageWidget : public UInventoryPageWidget
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x03D8(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryConsumablesPageWidget");
		return ptr;
	}

};


// Class Indiana.InventoryGadgetsPageWidget
// 0x00C0 (0x0498 - 0x03D8)
class UInventoryGadgetsPageWidget : public UInventoryPageWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x03D8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryGadgetsPageWidget");
		return ptr;
	}

};


// Class Indiana.InventoryItemSlotWidget
// 0x0008 (0x02B0 - 0x02A8)
class UInventoryItemSlotWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryItemSlotWidget");
		return ptr;
	}

};


// Class Indiana.ItemViewerItemWidget
// 0x0010 (0x0230 - 0x0220)
class UItemViewerItemWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerItemWidget");
		return ptr;
	}


	void STATIC_OnButtonUnhovered();
	void STATIC_OnButtonPressed();
	void STATIC_OnButtonHovered();
	void STATIC_OnButtonFocusLost();
	void STATIC_OnButtonFocused();
	void STATIC_OnButtonClicked();
};


// Class Indiana.InventoryItemWidget
// 0x00E8 (0x0318 - 0x0230)
class UInventoryItemWidget : public UItemViewerItemWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0230(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryItemWidget");
		return ptr;
	}


	class UClass* GetDamageType();
};


// Class Indiana.InventoryJunkPageWidget
// 0x0000 (0x03D8 - 0x03D8)
class UInventoryJunkPageWidget : public UInventoryPageWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryJunkPageWidget");
		return ptr;
	}

};


// Class Indiana.InventoryMaterialsPageWidget
// 0x0000 (0x03D8 - 0x03D8)
class UInventoryMaterialsPageWidget : public UInventoryPageWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryMaterialsPageWidget");
		return ptr;
	}

};


// Class Indiana.InventoryModificationsPageWidget
// 0x0000 (0x03D8 - 0x03D8)
class UInventoryModificationsPageWidget : public UInventoryPageWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryModificationsPageWidget");
		return ptr;
	}

};


// Class Indiana.InventoryWeaponAmmoGroupWidget
// 0x0018 (0x02C0 - 0x02A8)
class UInventoryWeaponAmmoGroupWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryWeaponAmmoGroupWidget");
		return ptr;
	}


	void STATIC_OnHighlightChange(bool bHighlight);
};


// Class Indiana.InventoryWeaponAmmoWidget
// 0x00A0 (0x02C0 - 0x0220)
class UInventoryWeaponAmmoWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0220(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryWeaponAmmoWidget");
		return ptr;
	}


	void STATIC_SetIcon(class UTexture2D* Icon);
};


// Class Indiana.InventoryWeaponsPageWidget
// 0x0120 (0x04F8 - 0x03D8)
class UInventoryWeaponsPageWidget : public UInventoryPageWidget
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x03D8(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryWeaponsPageWidget");
		return ptr;
	}

};


// Class Indiana.InventoryWidget
// 0x0110 (0x0458 - 0x0348)
class UInventoryWidget : public UBaseInventoryItemManagement
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0348(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InventoryWidget");
		return ptr;
	}


	void STATIC_OnWeaponStartEquip(class UWeapon* Weapon);
	void STATIC_OnScrollingPageChangeStart(class UIndianaUserWidget* UserWidget, int Index);
	void STATIC_OnScrollingPageChangeComplete(class UIndianaUserWidget* UserWidget, int Index);
	void STATIC_OnItemRemoved(const struct FItemStack& ItemStack);
	void STATIC_OnItemJunkStatusChanged(const struct FItemStack& ItemStack);
	void STATIC_OnItemCountChanged(const struct FItemStack& ItemStack);
	void STATIC_OnItemAdded(const struct FItemStack& ItemStack);
	void STATIC_OnDragDrop_SwapWeaponSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_SwapGadgetSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_SwapDrugSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_SetWeaponSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_ItemViewerWeaponSwap(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_ItemViewerInternalSwap(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_ItemViewerArmorSwap(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_DropItem(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_ClearGadgetSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_ClearDrugSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_AssignGadgetSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_AssignDrugSlot(class UIndianaDragDropOperation* Operation);
};


// Class Indiana.InvestigateBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class UInvestigateBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InvestigateBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.InvestigateRequestData
// 0x0000 (0x0068 - 0x0068)
class UInvestigateRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.InvestigateRequestData");
		return ptr;
	}

};


// Class Indiana.ItemActionButtonContainersWidget
// 0x0030 (0x02D8 - 0x02A8)
class UItemActionButtonContainersWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemActionButtonContainersWidget");
		return ptr;
	}

};


// Class Indiana.ItemActionDragContainersWidget
// 0x0050 (0x02F8 - 0x02A8)
class UItemActionDragContainersWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemActionDragContainersWidget");
		return ptr;
	}

};


// Class Indiana.ItemConditionWidget
// 0x0008 (0x02B0 - 0x02A8)
class UItemConditionWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemConditionWidget");
		return ptr;
	}

};


// Class Indiana.ItemContainerEntryWidget
// 0x0068 (0x0310 - 0x02A8)
class UItemContainerEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemContainerEntryWidget");
		return ptr;
	}

};


// Class Indiana.ItemContainerListWidget
// 0x00E8 (0x0390 - 0x02A8)
class UItemContainerListWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x02A8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemContainerListWidget");
		return ptr;
	}

};


// Class Indiana.ItemContainerWidget
// 0x0060 (0x0310 - 0x02B0)
class UItemContainerWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemContainerWidget");
		return ptr;
	}


	void STATIC_ShowContainer();
	void STATIC_OnItemRemoved(const struct FItemStack& ItemStack);
	void STATIC_OnItemCountChanged(const struct FItemStack& ItemStack);
	void STATIC_OnItemAdded(const struct FItemStack& ItemStack);
	void STATIC_HideContainer();
};


// Class Indiana.ItemDegradationAlertWidget
// 0x0030 (0x02D8 - 0x02A8)
class UItemDegradationAlertWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemDegradationAlertWidget");
		return ptr;
	}


	void STATIC_WeaponDamageStatusChanged(EItemDegradationState DegradationState);
	void STATIC_OnUnequippedArmor(EArmorSlot ArmorSlotIn);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnEquipmentRepairVisibilityChanged(bool bVisible);
	void STATIC_HeadArmorDamageStatusChanged(EItemDegradationState DegradationState);
	void STATIC_BodyArmorDamageStatusChanged(EItemDegradationState DegradationState);
};


// Class Indiana.ItemDegradationEntryWidget
// 0x0020 (0x02C8 - 0x02A8)
class UItemDegradationEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemDegradationEntryWidget");
		return ptr;
	}


	void STATIC_PlaySevereDamageAnim();
	void STATIC_PlayIntroDamagedAnim();
	void STATIC_KillAllAnims();
};


// Class Indiana.ItemDrugSectionWidget
// 0x0030 (0x0260 - 0x0230)
class UItemDrugSectionWidget : public URadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0230(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemDrugSectionWidget");
		return ptr;
	}

};


// Class Indiana.ItemGadgetSectionWidget
// 0x0028 (0x0258 - 0x0230)
class UItemGadgetSectionWidget : public URadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0230(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemGadgetSectionWidget");
		return ptr;
	}

};


// Class Indiana.ItemInspectorStatWidget
// 0x0010 (0x0230 - 0x0220)
class UItemInspectorStatWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemInspectorStatWidget");
		return ptr;
	}

};


// Class Indiana.ItemInspectorWidget
// 0x0080 (0x0330 - 0x02B0)
class UItemInspectorWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemInspectorWidget");
		return ptr;
	}


	void STATIC_ZoomToggled(bool bFullZoom);
	void STATIC_OnZoomToggled(bool bFullZoom);
	void STATIC_OnInputBack();
	void STATIC_MouseScroll(float MouseInput);
	void STATIC_GamepadScroll(float GamepadInput);
};


// Class Indiana.ItemMedKitSectionWidget
// 0x0010 (0x0240 - 0x0230)
class UItemMedKitSectionWidget : public URadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemMedKitSectionWidget");
		return ptr;
	}

};


// Class Indiana.ItemModdingWidget
// 0x0318 (0x0660 - 0x0348)
class UItemModdingWidget : public UBaseInventoryItemManagement
{
public:
	unsigned char                                      UnknownData00[0x318];                                     // 0x0348(0x0318) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemModdingWidget");
		return ptr;
	}


	void STATIC_OnInstallMod();
	void STATIC_OnInputBack();
};


// Class Indiana.ItemOwnershipVolume
// 0x0040 (0x0420 - 0x03E0)
class AItemOwnershipVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemOwnershipVolume");
		return ptr;
	}

};


// Class Indiana.ItemRepairWidget
// 0x00A0 (0x0350 - 0x02B0)
class UItemRepairWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemRepairWidget");
		return ptr;
	}


	void STATIC_OnRepair();
	void STATIC_OnInputBack();
};


// Class Indiana.ItemStatEntryWidget
// 0x0048 (0x02F0 - 0x02A8)
class UItemStatEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemStatEntryWidget");
		return ptr;
	}

};


// Class Indiana.ItemStatsCategoryWidget
// 0x0018 (0x02C0 - 0x02A8)
class UItemStatsCategoryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemStatsCategoryWidget");
		return ptr;
	}

};


// Class Indiana.ItemStatsWidget
// 0x0118 (0x03C0 - 0x02A8)
class UItemStatsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x02A8(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemStatsWidget");
		return ptr;
	}


	void STATIC_OnAlternateChanged();
};


// Class Indiana.ItemToolTipWidget
// 0x01F8 (0x04A0 - 0x02A8)
class UItemToolTipWidget : public UToolTipContentWidget
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x02A8(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemToolTipWidget");
		return ptr;
	}


	void STATIC_SetBackgroundBrush();
	void STATIC_FontSizeChanged(int NewModifier);
};


// Class Indiana.ItemTransferWidget
// 0x00C8 (0x0378 - 0x02B0)
class UItemTransferWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x02B0(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemTransferWidget");
		return ptr;
	}


	void STATIC_OnPlayerItemRemoved(const struct FItemStack& Item);
	void STATIC_OnPlayerItemAdded(const struct FItemStack& Item);
	void STATIC_OnPlayerCountChanged(const struct FItemStack& ItemStack);
	void STATIC_OnItemCountChanged(const struct FItemStack& ItemStack);
	void STATIC_OnInventoryItemRemoved(const struct FItemStack& Item);
	void STATIC_OnInventoryItemAdded(const struct FItemStack& Item);
};


// Class Indiana.ItemViewerButtonWidget
// 0x0008 (0x0B10 - 0x0B08)
class UItemViewerButtonWidget : public UButtonBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B08(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerButtonWidget");
		return ptr;
	}

};


// Class Indiana.ItemViewerCellWidget
// 0x0008 (0x0228 - 0x0220)
class UItemViewerCellWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerCellWidget");
		return ptr;
	}

};


// Class Indiana.ItemViewerHealthKitButtonWidget
// 0x0000 (0x0B08 - 0x0B08)
class UItemViewerHealthKitButtonWidget : public UButtonBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerHealthKitButtonWidget");
		return ptr;
	}

};


// Class Indiana.ItemViewerNavigationWidget
// 0x0090 (0x0338 - 0x02A8)
class UItemViewerNavigationWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x02A8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerNavigationWidget");
		return ptr;
	}

};


// Class Indiana.ItemViewerPageWidget
// 0x0070 (0x0318 - 0x02A8)
class UItemViewerPageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerPageWidget");
		return ptr;
	}


	void STATIC_PlayCollapseAnimation();
};


// Class Indiana.ItemViewerPannerWidget
// 0x0030 (0x02D8 - 0x02A8)
class UItemViewerPannerWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerPannerWidget");
		return ptr;
	}

};


// Class Indiana.ItemViewerScrollSelector
// 0x0030 (0x02D8 - 0x02A8)
class UItemViewerScrollSelector : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerScrollSelector");
		return ptr;
	}

};


// Class Indiana.ItemViewerScrollSelectorEntry
// 0x0010 (0x02B8 - 0x02A8)
class UItemViewerScrollSelectorEntry : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerScrollSelectorEntry");
		return ptr;
	}

};


// Class Indiana.ItemViewerWidget
// 0x0350 (0x05F8 - 0x02A8)
class UItemViewerWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x02A8(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemViewerWidget");
		return ptr;
	}


	void STATIC_OnScrollingComplete();
};


// Class Indiana.ItemVisualizer
// 0x00D8 (0x0460 - 0x0388)
class AItemVisualizer : public AActor
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0388(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemVisualizer");
		return ptr;
	}

};


// Class Indiana.ItemWeaponSectionWidget
// 0x0028 (0x0258 - 0x0230)
class UItemWeaponSectionWidget : public URadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0230(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ItemWeaponSectionWidget");
		return ptr;
	}

};


// Class Indiana.JournalDescriptionPanel
// 0x0018 (0x02E0 - 0x02C8)
class UJournalDescriptionPanel : public ULedgerDescriptionPanel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.JournalDescriptionPanel");
		return ptr;
	}

};


// Class Indiana.LedgerJournalWidget
// 0x0030 (0x02D8 - 0x02A8)
class ULedgerJournalWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LedgerJournalWidget");
		return ptr;
	}

};


// Class Indiana.JumpBehaviorStateInfo
// 0x0010 (0x0188 - 0x0178)
class UJumpBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.JumpBehaviorStateInfo");
		return ptr;
	}


	void STATIC_OnOutroAnimationComplete();
	void STATIC_OnIntroAnimationComplete();
};


// Class Indiana.JumpRequestData
// 0x0008 (0x0088 - 0x0080)
class UJumpRequestData : public UDecisionTreeEQSRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.JumpRequestData");
		return ptr;
	}

};


// Class Indiana.JumpNavLink
// 0x0000 (0x03B8 - 0x03B8)
class AJumpNavLink : public AReservableNavLink
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.JumpNavLink");
		return ptr;
	}

};


// Class Indiana.KeybindDialogBoxWidget
// 0x0088 (0x0338 - 0x02B0)
class UKeybindDialogBoxWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x02B0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.KeybindDialogBoxWidget");
		return ptr;
	}


	void STATIC_SetNewBackingMaterialHeight(float NewHeight);
	void STATIC_OnInputPress();
	void STATIC_OnInputBack();
};


// Class Indiana.KeyBindsMenuWidget
// 0x0800 (0x0AB0 - 0x02B0)
class UKeyBindsMenuWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x800];                                     // 0x02B0(0x0800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.KeyBindsMenuWidget");
		return ptr;
	}


	void STATIC_OnBackButtonClicked();
	void STATIC_CreateRestoreDefaultsDialogBox();
};


// Class Indiana.KillCameraComponent
// 0x0040 (0x0198 - 0x0158)
class UKillCameraComponent : public UCombatCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0158(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.KillCameraComponent");
		return ptr;
	}


	void STATIC_OnKill(class AActor* Victim, const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.KillStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UKillStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.KillStatusEffect");
		return ptr;
	}

};


// Class Indiana.Ladder
// 0x0048 (0x03E8 - 0x03A0)
class ALadder : public AIndianaNavLink
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03A0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Ladder");
		return ptr;
	}

};


// Class Indiana.LedgerCharacterStatsWidget
// 0x0028 (0x02D0 - 0x02A8)
class ULedgerCharacterStatsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LedgerCharacterStatsWidget");
		return ptr;
	}

};


// Class Indiana.LedgerCharacterWidget
// 0x0048 (0x02F0 - 0x02A8)
class ULedgerCharacterWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LedgerCharacterWidget");
		return ptr;
	}

};


// Class Indiana.LedgerMapQuestSelectionWidget
// 0x0068 (0x0318 - 0x02B0)
class ULedgerMapQuestSelectionWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LedgerMapQuestSelectionWidget");
		return ptr;
	}

};


// Class Indiana.MapBaseWidget
// 0x01B8 (0x0460 - 0x02A8)
class UMapBaseWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x02A8(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapBaseWidget");
		return ptr;
	}

};


// Class Indiana.LedgerMapWidget
// 0x0208 (0x0668 - 0x0460)
class ULedgerMapWidget : public UMapBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x208];                                     // 0x0460(0x0208) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LedgerMapWidget");
		return ptr;
	}


	void STATIC_OnCompanionSelectionClosed();
	struct FEventReply OnBorderMouseDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_InitiateFastTravelFromCompanionSelect();
	void STATIC_ActiveQuestChanged();
};


// Class Indiana.LedgerWidget
// 0x0100 (0x03B0 - 0x02B0)
class ULedgerWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x02B0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LedgerWidget");
		return ptr;
	}


	void STATIC_UpdateCompanionTabs();
	void STATIC_OnSetCurrentPage(ELedgerPages Page, bool bAnimate);
	void STATIC_OnItemAdded(const struct FItemStack& ItemStack);
	void STATIC_FadeInSharedItemViewer();
};


// Class Indiana.LevelOptionsWidget
// 0x0038 (0x02E0 - 0x02A8)
class ULevelOptionsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LevelOptionsWidget");
		return ptr;
	}


	void STATIC_OnControllerBack();
};


// Class Indiana.LevelUpButtonWidget
// 0x0038 (0x02E0 - 0x02A8)
class ULevelUpButtonWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LevelUpButtonWidget");
		return ptr;
	}

};


// Class Indiana.LevelUpNotificationWidget
// 0x00D8 (0x0388 - 0x02B0)
class ULevelUpNotificationWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x02B0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LevelUpNotificationWidget");
		return ptr;
	}


	void STATIC_PlayerCombatStateChanged(bool bIsInCombat, bool bRestoring);
	void STATIC_OnTextAndSunFadeOutComplete();
	void STATIC_OnSkillUpdated(ESkill Skill, int Value);
	void STATIC_OnProgressToSkillsPage();
	void STATIC_OnProgressToPerksPage();
	void STATIC_OnPrimaryTextAndSunFadeInComplete();
	void STATIC_OnPerkAdded();
	void STATIC_OnLevelUpReminderVisibilityChanged(bool bVisible);
	void STATIC_OnLevelUpNotificationVisibilityChanged(bool bVisible);
	void STATIC_OnLevelUpComplete();
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnGlowShrinkComplete();
	void STATIC_OnGlowGrowComplete();
	void STATIC_OnGlowballComplete();
	class UWidgetAnimation* GetTextAndSunFadeOutAnimation();
	class UWidgetAnimation* GetSunSpinAnimation();
	class UWidgetAnimation* GetSecondaryTextFadeInAnimation();
	class UWidgetAnimation* GetPrimaryTextGrowAnimation();
	class UWidgetAnimation* GetPrimaryTextAndSunFadeInAnimation();
	class UWidgetAnimation* GetLevelUpReminderAnimation();
	class UWidgetAnimation* GetGlowShrinkAnimation();
	class UWidgetAnimation* GetGlowGrowAnimation();
	class UWidgetAnimation* GetGlowFadeAnimation();
	class UWidgetAnimation* GetGlowballAnimation();
};


// Class Indiana.LocomotionAnimationSet
// 0x0000 (0x0038 - 0x0038)
class ULocomotionAnimationSet : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LocomotionAnimationSet");
		return ptr;
	}

};


// Class Indiana.DeathMontageSet
// 0x0050 (0x0088 - 0x0038)
class UDeathMontageSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.DeathMontageSet");
		return ptr;
	}

};


// Class Indiana.TPVPersonalityCollection
// 0x0058 (0x0090 - 0x0038)
class UTPVPersonalityCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TPVPersonalityCollection");
		return ptr;
	}

};


// Class Indiana.TalkingIdleOverrideData
// 0x0010 (0x0048 - 0x0038)
class UTalkingIdleOverrideData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TalkingIdleOverrideData");
		return ptr;
	}

};


// Class Indiana.TPVPersonalitySet
// 0x01F8 (0x0230 - 0x0038)
class UTPVPersonalitySet : public ULocomotionAnimationSet
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0038(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TPVPersonalitySet");
		return ptr;
	}

};


// Class Indiana.LocomotionLogicComponent
// 0x0158 (0x0270 - 0x0118)
class ULocomotionLogicComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0118(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LocomotionLogicComponent");
		return ptr;
	}

};


// Class Indiana.LogList
// 0x0030 (0x0330 - 0x0300)
class ULogList : public UGenericCollapsableList
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0300(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LogList");
		return ptr;
	}


	void STATIC_AddNewFoundLog(const struct FLocString& ExaminableName, const struct FLocString& ExaminableDescription);
};


// Class Indiana.LootRowBase
// 0x0090 (0x00C0 - 0x0030)
class ULootRowBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LootRowBase");
		return ptr;
	}

};


// Class Indiana.LootRowItem
// 0x01F0 (0x02B0 - 0x00C0)
class ULootRowItem : public ULootRowBase
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x00C0(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LootRowItem");
		return ptr;
	}

};


// Class Indiana.LootRowTable
// 0x0008 (0x00C8 - 0x00C0)
class ULootRowTable : public ULootRowBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LootRowTable");
		return ptr;
	}

};


// Class Indiana.LootTableData
// 0x0040 (0x0078 - 0x0038)
class ULootTableData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LootTableData");
		return ptr;
	}

};


// Class Indiana.LowGravJumpNavLink
// 0x0008 (0x03C0 - 0x03B8)
class ALowGravJumpNavLink : public AJumpNavLink
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.LowGravJumpNavLink");
		return ptr;
	}

};


// Class Indiana.MainActionKeyBindDisplay
// 0x0040 (0x02E8 - 0x02A8)
class UMainActionKeyBindDisplay : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MainActionKeyBindDisplay");
		return ptr;
	}

};


// Class Indiana.MainMenuDLCManagerWidget
// 0x0030 (0x02D8 - 0x02A8)
class UMainMenuDLCManagerWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MainMenuDLCManagerWidget");
		return ptr;
	}


	void STATIC_RefreshEntitlements();
};


// Class Indiana.MainMenuDLCWidget
// 0x0150 (0x03F8 - 0x02A8)
class UMainMenuDLCWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x02A8(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MainMenuDLCWidget");
		return ptr;
	}


	void STATIC_OnButtonUnhoveredUnfocused();
	void STATIC_OnButtonHoveredFocused();
};


// Class Indiana.MainMenuLevelsData
// 0x0010 (0x0048 - 0x0038)
class UMainMenuLevelsData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MainMenuLevelsData");
		return ptr;
	}

};


// Class Indiana.MainMenuWidget
// 0x00D8 (0x0388 - 0x02B0)
class UMainMenuWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x02B0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MainMenuWidget");
		return ptr;
	}


	void STATIC_StartAutosaveSplash();
	void STATIC_OpenMainScreen();
	void STATIC_OpenExtrasScreen();
	void STATIC_OpenDeliverablesScreen();
	void STATIC_OpenCredits();
	void STATIC_OnStartShowMainOptions();
	void STATIC_OnStartShowGammaSelection();
	void STATIC_OnStartHideGammaSelection();
	void STATIC_OnStartHideAnyTextPrompt();
	void STATIC_OnShowMainOptionsComplete();
	void STATIC_OnShowMainOptions();
	void STATIC_OnShowLogo();
	void STATIC_OnShowInterface(bool bShouldChangeLogo);
	void STATIC_OnShowAnyTextPrompt();
	void STATIC_OnOfflineDLCCheckComplete();
	void STATIC_OnLoadUserGameSettingsComplete();
	void STATIC_OnHideMainOptionsStart();
	void STATIC_OnHideMainOptionsComplete();
	void STATIC_OnHideLogo();
	void STATIC_OnHideInterface();
	void STATIC_OnGammaSelectionOpened();
	void STATIC_OnGammaSelectionClosed();
	void STATIC_OnExternalMenuOpened();
	void STATIC_OnExternalMenuClosed(bool bForced);
	void STATIC_OnDLCCheckComplete();
	void STATIC_OnCreditsInterfaceOpened();
	void STATIC_OnCreditsInterfaceClosed(bool bForced);
	void STATIC_OnAutosaveSplashComplete();
	void STATIC_OnAnyTextPromptHideComplete();
	void STATIC_OnActiveUserChanged(EActiveUserChangeType ChangeType);
};


// Class Indiana.MainOptionsWidget
// 0x00E0 (0x0388 - 0x02A8)
class UMainOptionsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x02A8(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MainOptionsWidget");
		return ptr;
	}


	void STATIC_OnSettingsMenuClosed();
	void STATIC_OnQueryLatestSaveFinished(const class FString& LatestSaveName, bool bHasSaves);
	void STATIC_OnLoadSaveMenuClosed(bool bForced);
	void STATIC_OnLoadComplete(const class FString& Filename, ELoadGameResult Result);
	void STATIC_OnActiveUserChanged(EActiveUserChangeType ChangeType);
	void STATIC_InquireDLC2();
	void STATIC_InquireDLC1();
};


// Class Indiana.Makeup
// 0x0050 (0x0088 - 0x0038)
class UMakeup : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Makeup");
		return ptr;
	}

};


// Class Indiana.ManagerDebugger
// 0x0098 (0x00C8 - 0x0030)
class UManagerDebugger : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ManagerDebugger");
		return ptr;
	}

};


// Class Indiana.Manifest
// 0x0050 (0x0080 - 0x0030)
class UManifest : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Manifest");
		return ptr;
	}

};


// Class Indiana.MapAreaBeaconWidget
// 0x0010 (0x0230 - 0x0220)
class UMapAreaBeaconWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapAreaBeaconWidget");
		return ptr;
	}

};


// Class Indiana.MapBeaconData
// 0x0050 (0x0088 - 0x0038)
class UMapBeaconData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapBeaconData");
		return ptr;
	}

};


// Class Indiana.MapBeaconEntryTooltipWidget
// 0x0000 (0x02A8 - 0x02A8)
class UMapBeaconEntryTooltipWidget : public UToolTipContentWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapBeaconEntryTooltipWidget");
		return ptr;
	}

};


// Class Indiana.MapBeaconEntryWidget
// 0x0050 (0x0300 - 0x02B0)
class UMapBeaconEntryWidget : public UInteractableMapEntry
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapBeaconEntryWidget");
		return ptr;
	}

};


// Class Indiana.MapCompassUIVisualData
// 0x0010 (0x0048 - 0x0038)
class UMapCompassUIVisualData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapCompassUIVisualData");
		return ptr;
	}

};


// Class Indiana.MapFastTravelEntryWidget
// 0x0028 (0x02D8 - 0x02B0)
class UMapFastTravelEntryWidget : public UInteractableMapEntry
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapFastTravelEntryWidget");
		return ptr;
	}

};


// Class Indiana.MapFloorTrackedActor
// 0x0000 (0x0030 - 0x0030)
class UMapFloorTrackedActor : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapFloorTrackedActor");
		return ptr;
	}

};


// Class Indiana.MapFloorVolume
// 0x0008 (0x03E8 - 0x03E0)
class AMapFloorVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapFloorVolume");
		return ptr;
	}

};


// Class Indiana.MapGameplayMusicSettings
// 0x0038 (0x0070 - 0x0038)
class UMapGameplayMusicSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapGameplayMusicSettings");
		return ptr;
	}

};


// Class Indiana.MapInformation
// 0x00C8 (0x0100 - 0x0038)
class UMapInformation : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0038(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapInformation");
		return ptr;
	}

};


// Class Indiana.MapLoadingMusicSettings
// 0x0018 (0x0050 - 0x0038)
class UMapLoadingMusicSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapLoadingMusicSettings");
		return ptr;
	}

};


// Class Indiana.MapPointOfInterestData
// 0x0010 (0x0048 - 0x0038)
class UMapPointOfInterestData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapPointOfInterestData");
		return ptr;
	}

};


// Class Indiana.MapPointOfInterestWidget
// 0x0018 (0x02C8 - 0x02B0)
class UMapPointOfInterestWidget : public UInteractableMapEntry
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapPointOfInterestWidget");
		return ptr;
	}

};


// Class Indiana.MapQuestSelectionEntryWidget
// 0x0030 (0x02D8 - 0x02A8)
class UMapQuestSelectionEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapQuestSelectionEntryWidget");
		return ptr;
	}

};


// Class Indiana.MapRendererFilterData
// 0x0020 (0x0050 - 0x0030)
class UMapRendererFilterData : public UAssetUserData
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapRendererFilterData");
		return ptr;
	}

};


// Class Indiana.MapRenderer
// 0x00E0 (0x0468 - 0x0388)
class AMapRenderer : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0388(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapRenderer");
		return ptr;
	}


	void STATIC_TakeRender();
};


// Class Indiana.MapTextData
// 0x0010 (0x0048 - 0x0038)
class UMapTextData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapTextData");
		return ptr;
	}

};


// Class Indiana.MapTextEntry
// 0x0028 (0x03E0 - 0x03B8)
class AMapTextEntry : public ABasicMapFloorTrackedActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapTextEntry");
		return ptr;
	}

};


// Class Indiana.MapTextEntryWidget
// 0x0020 (0x02C8 - 0x02A8)
class UMapTextEntryWidget : public UBaseMapEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapTextEntryWidget");
		return ptr;
	}

};


// Class Indiana.MapTransitionNotification
// 0x0018 (0x02C0 - 0x02A8)
class UMapTransitionNotification : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MapTransitionNotification");
		return ptr;
	}


	void STATIC_StartAnimation();
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnAreaNameModeChanged(int ModeIn);
};


// Class Indiana.MaterialParamModVisual
// 0x0068 (0x00D0 - 0x0068)
class UMaterialParamModVisual : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0068(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MaterialParamModVisual");
		return ptr;
	}

};


// Class Indiana.MedKitAbilityWidget
// 0x0070 (0x0388 - 0x0318)
class UMedKitAbilityWidget : public UAbilityOverviewChildWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0318(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MedKitAbilityWidget");
		return ptr;
	}


	void STATIC_UpdateDrugSlots(int ConsumablesUsed);
};


// Class Indiana.MedKitComponent
// 0x0088 (0x01A0 - 0x0118)
class UMedKitComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0118(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MedKitComponent");
		return ptr;
	}


	void STATIC_StartMedkit(class UWeapon* Weapon);
	void STATIC_OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent);
	void STATIC_OnAbilityMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
};


// Class Indiana.MedKitDrugSlotWidget
// 0x0018 (0x02C0 - 0x02A8)
class UMedKitDrugSlotWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MedKitDrugSlotWidget");
		return ptr;
	}

};


// Class Indiana.MeleeAnimEventEffect
// 0x00E0 (0x0110 - 0x0030)
class UMeleeAnimEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeAnimEventEffect");
		return ptr;
	}

};


// Class Indiana.MeleeBlockBehaviorStateInfo
// 0x0000 (0x0120 - 0x0120)
class UMeleeBlockBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeBlockBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.MeleeBlockRequestData
// 0x0000 (0x0068 - 0x0068)
class UMeleeBlockRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeBlockRequestData");
		return ptr;
	}

};


// Class Indiana.MeleeActionCollisionInfo
// 0x0050 (0x0080 - 0x0030)
class UMeleeActionCollisionInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeActionCollisionInfo");
		return ptr;
	}

};


// Class Indiana.MeleeMode
// 0x03A0 (0x04D0 - 0x0130)
class UMeleeMode : public UWeaponMode
{
public:
	unsigned char                                      UnknownData00[0x3A0];                                     // 0x0130(0x03A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeMode");
		return ptr;
	}


	void STATIC_OnStatUpdated(class URpgStat* Stat);
};


// Class Indiana.MeleeMultiDamageTypeMode
// 0x0030 (0x0500 - 0x04D0)
class UMeleeMultiDamageTypeMode : public UMeleeMode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeMultiDamageTypeMode");
		return ptr;
	}

};


// Class Indiana.MeleeSequencer
// 0x0060 (0x0090 - 0x0030)
class UMeleeSequencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeSequencer");
		return ptr;
	}


	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnAbilityUnlocked(EUnlockAbility Ability);
};


// Class Indiana.MeleeSlotBehaviorStateInfo
// 0x0028 (0x0148 - 0x0120)
class UMeleeSlotBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0120(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeSlotBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.MeleeSlotBaseRequestData
// 0x0000 (0x0068 - 0x0068)
class UMeleeSlotBaseRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeSlotBaseRequestData");
		return ptr;
	}

};


// Class Indiana.MeleeSlotRequestData
// 0x0008 (0x0070 - 0x0068)
class UMeleeSlotRequestData : public UMeleeSlotBaseRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeSlotRequestData");
		return ptr;
	}

};


// Class Indiana.MeleeSlotPatternRequestData
// 0x0008 (0x0070 - 0x0068)
class UMeleeSlotPatternRequestData : public UMeleeSlotBaseRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeSlotPatternRequestData");
		return ptr;
	}

};


// Class Indiana.MeleeSlotManagerComponent
// 0x0070 (0x0188 - 0x0118)
class UMeleeSlotManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0118(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeSlotManagerComponent");
		return ptr;
	}


	void STATIC_OnAttackerNumMeleeSlotsRequiredChanged(class AIndianaAiController* AttackerController);
};


// Class Indiana.MeleeStatusEffect
// 0x0000 (0x0188 - 0x0188)
class UMeleeStatusEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeStatusEffect");
		return ptr;
	}

};


// Class Indiana.WeaponVisuals
// 0x01D0 (0x0200 - 0x0030)
class UWeaponVisuals : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0030(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponVisuals");
		return ptr;
	}


	void STATIC_UninitializeBP();
	void STATIC_TriggerEventBP(EWeaponEvent WeaponEvent, const struct FEventEffectParams& Params);
	void STATIC_TriggerDamageTypeMuzzleFx();
	void STATIC_TriggerCustomEventBP(const struct FName& EventName, const struct FEventEffectParams& Params);
	void STATIC_TriggerCustomEvent(const struct FName& EventName);
	void STATIC_TickBP(float DeltaTime);
	void STATIC_StopCustomEventBP(const struct FName& EventName);
	void STATIC_StopCustomEvent(const struct FName& EventName);
	void STATIC_LeaveStateBP(EWeaponState WeaponState);
	void STATIC_LeaveCustomStateBP(const struct FName& EventName);
	void STATIC_LeaveCustomState(const struct FName& StateName);
	void STATIC_InterruptEventBP(EWeaponEvent WeaponEvent);
	void STATIC_InitializeBP(class AActor* NewTarget, class UWeapon* NewWeapon);
	void STATIC_EnterStateBP(EWeaponState WeaponState, const struct FEventEffectParams& Params);
	void STATIC_EnterCustomStateBP(const struct FName& EventName, const struct FEventEffectParams& Params);
	void STATIC_EnterCustomState(const struct FName& StateName);
	void STATIC_CreateLerpTimer(const struct FLerpTimer& TimerProperties);
	void STATIC_ClearLerpTimers();
};


// Class Indiana.PrimaryWeaponVisuals
// 0x0048 (0x0248 - 0x0200)
class UPrimaryWeaponVisuals : public UWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0200(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PrimaryWeaponVisuals");
		return ptr;
	}

};


// Class Indiana.MeleeVisuals
// 0x0010 (0x0258 - 0x0248)
class UMeleeVisuals : public UPrimaryWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0248(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeVisuals");
		return ptr;
	}

};


// Class Indiana.MeshModVisual
// 0x0058 (0x00C0 - 0x0068)
class UMeshModVisual : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0068(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeshModVisual");
		return ptr;
	}

};


// Class Indiana.MetaTeamData
// 0x0000 (0x0080 - 0x0080)
class UMetaTeamData : public UBaseTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MetaTeamData");
		return ptr;
	}

};


// Class Indiana.MFTSelectionEntryWidget
// 0x0010 (0x02B8 - 0x02A8)
class UMFTSelectionEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MFTSelectionEntryWidget");
		return ptr;
	}

};


// Class Indiana.MFTSelectionWidget
// 0x0038 (0x02E8 - 0x02B0)
class UMFTSelectionWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MFTSelectionWidget");
		return ptr;
	}

};


// Class Indiana.MicroMod
// 0x0010 (0x0040 - 0x0030)
class UMicroMod : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MicroMod");
		return ptr;
	}

};


// Class Indiana.MicroModTable
// 0x0050 (0x0088 - 0x0038)
class UMicroModTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MicroModTable");
		return ptr;
	}

};


// Class Indiana.ModAppearances
// 0x0010 (0x0040 - 0x0030)
class UModAppearances : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ModAppearances");
		return ptr;
	}

};


// Class Indiana.AppliedModVisualData
// 0x0010 (0x0040 - 0x0030)
class UAppliedModVisualData : public UAssetUserData
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AppliedModVisualData");
		return ptr;
	}

};


// Class Indiana.ModVisuals
// 0x0010 (0x0078 - 0x0068)
class UModVisuals : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ModVisuals");
		return ptr;
	}

};


// Class Indiana.MoveToBehaviorStateInfo
// 0x0008 (0x0180 - 0x0178)
class UMoveToBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MoveToBehaviorStateInfo");
		return ptr;
	}


	void STATIC_OnTakeDamage(const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.MoveToRequestData
// 0x0010 (0x0090 - 0x0080)
class UMoveToRequestData : public UDecisionTreeEQSRequestData
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MoveToRequestData");
		return ptr;
	}

};


// Class Indiana.MoviePlayerWidget
// 0x0060 (0x0310 - 0x02B0)
class UMoviePlayerWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MoviePlayerWidget");
		return ptr;
	}


	void STATIC_StopMovie(bool bWasSkipped);
	void STATIC_PlayMovie(class UFileMediaSource* Movie);
	void STATIC_PauseMovie();
	void STATIC_OnMovieFinished();
	void STATIC_OnAttemptCancel();
	void STATIC_InitiateFadeOut();
	void STATIC_InitiateFadeIn();
};


// Class Indiana.MovieSubtitleData
// 0x00A0 (0x00D8 - 0x0038)
class UMovieSubtitleData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0038(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MovieSubtitleData");
		return ptr;
	}

};


// Class Indiana.MultiQuestMapTracker
// 0x0040 (0x02E8 - 0x02A8)
class UMultiQuestMapTracker : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MultiQuestMapTracker");
		return ptr;
	}

};


// Class Indiana.StatusEffectChildData
// 0x0008 (0x0038 - 0x0030)
class UStatusEffectChildData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectChildData");
		return ptr;
	}

};


// Class Indiana.MultiStatusEffect
// 0x0030 (0x01B8 - 0x0188)
class UMultiStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0188(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MultiStatusEffect");
		return ptr;
	}


	void STATIC_OnChildCleared(class UStatusEffect* ChildEffect);
};


// Class Indiana.MusicTrackData
// 0x0008 (0x0040 - 0x0038)
class UMusicTrackData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MusicTrackData");
		return ptr;
	}

};


// Class Indiana.MusicManager
// 0x0038 (0x0068 - 0x0030)
class UMusicManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MusicManager");
		return ptr;
	}


	void STATIC_SetMusicOverride_BP(class UMusicTrackData* OverrideTrack);
	void STATIC_OnPreMapLoad(const class FString& MapName);
	void STATIC_OnPostMapLoad(class UWorld* World);
};


// Class Indiana.NavArea_Crouch
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Crouch : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Crouch");
		return ptr;
	}

};


// Class Indiana.NavArea_Door
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Door : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Door");
		return ptr;
	}

};


// Class Indiana.NavArea_Elevator
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Elevator : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Elevator");
		return ptr;
	}

};


// Class Indiana.NavArea_Hazard
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Hazard : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Hazard");
		return ptr;
	}

};


// Class Indiana.NavArea_Hearing
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Hearing : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Hearing");
		return ptr;
	}

};


// Class Indiana.NavArea_Jump
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Jump : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Jump");
		return ptr;
	}

};


// Class Indiana.NavArea_Ladder
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Ladder : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Ladder");
		return ptr;
	}

};


// Class Indiana.NavArea_Mine
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Mine : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Mine");
		return ptr;
	}

};


// Class Indiana.NavArea_Trap
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Trap : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Trap");
		return ptr;
	}

};


// Class Indiana.NavArea_Walk
// 0x0000 (0x0050 - 0x0050)
class UNavArea_Walk : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavArea_Walk");
		return ptr;
	}

};


// Class Indiana.NavFilter_AIControllerBehavior
// 0x0000 (0x0050 - 0x0050)
class UNavFilter_AIControllerBehavior : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavFilter_AIControllerBehavior");
		return ptr;
	}

};


// Class Indiana.NavFilter_AIControllerDefaultEQS
// 0x0000 (0x0050 - 0x0050)
class UNavFilter_AIControllerDefaultEQS : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavFilter_AIControllerDefaultEQS");
		return ptr;
	}

};


// Class Indiana.NavigationGroupWidget
// 0x0080 (0x0328 - 0x02A8)
class UNavigationGroupWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02A8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NavigationGroupWidget");
		return ptr;
	}

};


// Class Indiana.NewSaveWidget
// 0x0010 (0x0230 - 0x0220)
class UNewSaveWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NewSaveWidget");
		return ptr;
	}

};


// Class Indiana.NotificationHelpers
// 0x0000 (0x0030 - 0x0030)
class UNotificationHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NotificationHelpers");
		return ptr;
	}

};


// Class Indiana.NPCNavigationQueryFilter_EQS
// 0x0000 (0x0050 - 0x0050)
class UNPCNavigationQueryFilter_EQS : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NPCNavigationQueryFilter_EQS");
		return ptr;
	}

};


// Class Indiana.NPCNavigationQueryFilter_Pathing
// 0x0008 (0x0058 - 0x0050)
class UNPCNavigationQueryFilter_Pathing : public UNavigationQueryFilter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.NPCNavigationQueryFilter_Pathing");
		return ptr;
	}

};


// Class Indiana.ObjectiveListWidget
// 0x0028 (0x02D0 - 0x02A8)
class UObjectiveListWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ObjectiveListWidget");
		return ptr;
	}

};


// Class Indiana.ObjectiveWaypointGameDataReference
// 0x0000 (0x0050 - 0x0050)
class UObjectiveWaypointGameDataReference : public UGameDataReference
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ObjectiveWaypointGameDataReference");
		return ptr;
	}


	bool GetOverridesPreviousWaypoint();
	struct FGuid GetGameObject();
	class FString GetDisplayOverrideWithGender(EGender CharacterGender);
	int GetDisplayOverrideID();
	class FString GetDisplayOverride();
};


// Class Indiana.ObsidianIDComponent
// 0x0018 (0x0130 - 0x0118)
class UObsidianIDComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ObsidianIDComponent");
		return ptr;
	}

};


// Class Indiana.OCLAudioComponent
// 0x0050 (0x01D8 - 0x0188)
class UOCLAudioComponent : public UInteractableAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0188(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OCLAudioComponent");
		return ptr;
	}


	void STATIC_Stop(EOCLEventType Type);
	void STATIC_Play(EOCLEventType Type);
};


// Class Indiana.OCLComponent
// 0x01E0 (0x02F8 - 0x0118)
class UOCLComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0118(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OCLComponent");
		return ptr;
	}


	void STATIC_UnsealOCL(bool bFireOCLUnsealedEvent);
	void STATIC_UnlockOCL(bool bFireOCLUnlockedEvent);
	void STATIC_UnbarOCL(bool bFireOCLUnbarredEvent, bool bEnterLockedState);
	void STATIC_SignalOCLAnimationComplete();
	void STATIC_SealOCL(bool bFireOCLSealedEvent);
	void STATIC_LockOCL(bool bFireOCLLockedEvent);
	bool IsSealing();
	bool IsSealed();
	bool IsOpening();
	bool IsOpen();
	bool IsLocked();
	bool IsClosing();
	bool IsClosed();
	bool IsBarred();
	unsigned char GetExactLockpickDifficulty();
	EOCLState GetCurrentState();
	void STATIC_BarOCL(bool bFireOCLBarredEvent);
	EOCLResult AttemptUnlock(class AActor* Initiator);
	EOCLResult AttemptOpen(class AActor* Initiator, bool bForce, bool bSeal, bool bIgnoreLockStatus, bool bIgnoreStartEvent, bool bIgnoreEndEvent, bool bIgnoreSound, bool bInstantAnimation);
	EOCLResult AttemptClose(class AActor* Initiator, bool bForce, bool Block, bool bSeal, bool bIgnoreLockStatus, bool bIgnoreStartEvent, bool bIgnoreEndEvent, bool bIgnoreSound, bool bInstantAnimation);
};


// Class Indiana.OctreeHelperActor
// 0x0008 (0x0390 - 0x0388)
class AOctreeHelperActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OctreeHelperActor");
		return ptr;
	}

};


// Class Indiana.OctreeRenderingComponent
// 0x0000 (0x0610 - 0x0610)
class UOctreeRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OctreeRenderingComponent");
		return ptr;
	}

};


// Class Indiana.OnRailsBehaviorStateInfo
// 0x0010 (0x0188 - 0x0178)
class UOnRailsBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRailsBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.OnRailsRequestData
// 0x0000 (0x0080 - 0x0080)
class UOnRailsRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRailsRequestData");
		return ptr;
	}

};


// Class Indiana.OnRailsComponent
// 0x0098 (0x01B0 - 0x0118)
class UOnRailsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0118(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OnRailsComponent");
		return ptr;
	}


	void STATIC_OnCompHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void STATIC_OnCharacterDeath(const struct FCauseDamageInfo& CDI);
	bool IsMovingForward();
	bool IsMoving();
	bool HasVantageForActor(class AActor* Actor);
	struct FVector FurthestLocationOnSpline();
	struct FVector FindVantageForLocation(const struct FVector& Location);
	struct FVector FindVantageForActor(class AActor* Actor);
};


// Class Indiana.OptionPresenterWidget
// 0x0080 (0x0328 - 0x02A8)
class UOptionPresenterWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02A8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OptionPresenterWidget");
		return ptr;
	}

};


// Class Indiana.OptionSliderWidget
// 0x0068 (0x0310 - 0x02A8)
class UOptionSliderWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OptionSliderWidget");
		return ptr;
	}


	void STATIC_OnSliderValueChanged(const struct FSliderEvent& Event);
};


// Class Indiana.OverlayedSystemMapData
// 0x0028 (0x0060 - 0x0038)
class UOverlayedSystemMapData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OverlayedSystemMapData");
		return ptr;
	}

};


// Class Indiana.PaginatedButtonWidget
// 0x0010 (0x0230 - 0x0220)
class UPaginatedButtonWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PaginatedButtonWidget");
		return ptr;
	}

};


// Class Indiana.PooledParticleSystemComponent
// 0x0010 (0x0870 - 0x0860)
class UPooledParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0860(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PooledParticleSystemComponent");
		return ptr;
	}

};


// Class Indiana.ParticlePool
// 0x0078 (0x00A8 - 0x0030)
class UParticlePool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ParticlePool");
		return ptr;
	}


	void STATIC_ParticleFreed(class UParticleSystemComponent* Particle);
};


// Class Indiana.PatrolBehaviorStateInfo
// 0x0028 (0x0148 - 0x0120)
class UPatrolBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0120(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PatrolBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.PatrolRequestData
// 0x0000 (0x0068 - 0x0068)
class UPatrolRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PatrolRequestData");
		return ptr;
	}

};


// Class Indiana.PatrolNode
// 0x0048 (0x03D0 - 0x0388)
class APatrolNode : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0388(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PatrolNode");
		return ptr;
	}

};


// Class Indiana.PatrolNodeComponent
// 0x0000 (0x0118 - 0x0118)
class UPatrolNodeComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PatrolNodeComponent");
		return ptr;
	}

};


// Class Indiana.PauseMenuWidget
// 0x0068 (0x0318 - 0x02B0)
class UPauseMenuWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PauseMenuWidget");
		return ptr;
	}


	void STATIC_OnSettingsMenuClosed();
	void STATIC_OnSaveLoadMenuClosed(bool bForced);
	void STATIC_OnSaveGameComplete(ESaveGameResult SaveResult, ESaveGameType SaveType);
	void STATIC_OnInputBack();
};


// Class Indiana.PerceptionRangeScalarStatusEffect
// 0x0028 (0x01B0 - 0x0188)
class UPerceptionRangeScalarStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0188(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerceptionRangeScalarStatusEffect");
		return ptr;
	}

};


// Class Indiana.Perk
// 0x0040 (0x0070 - 0x0030)
class UPerk : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Perk");
		return ptr;
	}

};


// Class Indiana.PerkReadoutWidget
// 0x0048 (0x02F0 - 0x02A8)
class UPerkReadoutWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerkReadoutWidget");
		return ptr;
	}

};


// Class Indiana.PerksListEntry
// 0x0068 (0x0310 - 0x02A8)
class UPerksListEntry : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerksListEntry");
		return ptr;
	}


	void STATIC_UpdateButtonBrush(bool bPendingPurchase, bool bActuallyPurchased, bool bSuppressed);
	void STATIC_OnPerkClickedValid();
	class UTexture2D* GetUnpurchasedIcon();
	class UTexture2D* GetSuppressedIcon();
	class UTexture2D* GetPurchasedIcon();
};


// Class Indiana.PerksListRowWidget
// 0x0128 (0x03D0 - 0x02A8)
class UPerksListRowWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x02A8(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerksListRowWidget");
		return ptr;
	}

};


// Class Indiana.PerksListWidget
// 0x0060 (0x0308 - 0x02A8)
class UPerksListWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02A8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerksListWidget");
		return ptr;
	}

};


// Class Indiana.PerksTierWidget
// 0x0040 (0x02E8 - 0x02A8)
class UPerksTierWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerksTierWidget");
		return ptr;
	}


	float GetTextOpacity(bool bUnlocked);
	float GetImageOpacity(bool bUnlocked);
	EIndianaUIColorType GetColorType(bool bUnlocked);
};


// Class Indiana.PerkSummaryEntryWidget
// 0x0018 (0x02C0 - 0x02A8)
class UPerkSummaryEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerkSummaryEntryWidget");
		return ptr;
	}

};


// Class Indiana.PerkTree
// 0x0090 (0x00C8 - 0x0038)
class UPerkTree : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerkTree");
		return ptr;
	}

};


// Class Indiana.PerkTreeCollection
// 0x0070 (0x00A8 - 0x0038)
class UPerkTreeCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PerkTreeCollection");
		return ptr;
	}

};


// Class Indiana.PersistentFiringPattern
// 0x0000 (0x0030 - 0x0030)
class UPersistentFiringPattern : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PersistentFiringPattern");
		return ptr;
	}

};


// Class Indiana.PersonalSpaceComponent
// 0x00B8 (0x01D0 - 0x0118)
class UPersonalSpaceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0118(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PersonalSpaceComponent");
		return ptr;
	}


	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
};


// Class Indiana.PersuadeBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class UPersuadeBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PersuadeBehaviorStateInfo");
		return ptr;
	}


	void STATIC_OnTakeDamage(const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.PersuadeRequestData
// 0x0000 (0x0068 - 0x0068)
class UPersuadeRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PersuadeRequestData");
		return ptr;
	}

};


// Class Indiana.PetableComponent
// 0x0030 (0x0148 - 0x0118)
class UPetableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0118(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PetableComponent");
		return ptr;
	}

};


// Class Indiana.Pickup
// 0x02A0 (0x0700 - 0x0460)
class APickup : public AItemVisualizer
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0460(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Pickup");
		return ptr;
	}


	void STATIC_ShutdownDropPhysics(bool bUpdateTransforms);
	void STATIC_SetupDropPhysics();
	void STATIC_OnPhysicsWake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName);
	void STATIC_OnPhysicsSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
	class UItem* GetItem();
};


// Class Indiana.AkPlaySoundEventEffect
// 0x0030 (0x0060 - 0x0030)
class UAkPlaySoundEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AkPlaySoundEventEffect");
		return ptr;
	}

};


// Class Indiana.PlayAnimationAction
// 0x0028 (0x0060 - 0x0038)
class UPlayAnimationAction : public UAIAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayAnimationAction");
		return ptr;
	}


	void STATIC_OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
};


// Class Indiana.PlayAnimEventEffect
// 0x0008 (0x0048 - 0x0040)
class UPlayAnimEventEffect : public UBasePlayAnimEventEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayAnimEventEffect");
		return ptr;
	}

};


// Class Indiana.PlayAnimStateEventEffect
// 0x0008 (0x0038 - 0x0030)
class UPlayAnimStateEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayAnimStateEventEffect");
		return ptr;
	}

};


// Class Indiana.PlayDirectionalAnimEventEffect
// 0x0010 (0x0050 - 0x0040)
class UPlayDirectionalAnimEventEffect : public UBasePlayAnimEventEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayDirectionalAnimEventEffect");
		return ptr;
	}

};


// Class Indiana.PlayerAppearanceComponent
// 0x0008 (0x04A0 - 0x0498)
class UPlayerAppearanceComponent : public UAppearanceComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0498(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerAppearanceComponent");
		return ptr;
	}

};


// Class Indiana.PlayerDeathComponent
// 0x0048 (0x0338 - 0x02F0)
class UPlayerDeathComponent : public UCharacterDeathComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerDeathComponent");
		return ptr;
	}


	void STATIC_OnLanded(float DistanceFallen);
	void STATIC_OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent);
	void STATIC_FadeToBlackComplete();
	void STATIC_DeathAnimComplete();
};


// Class Indiana.PlayerDisableStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UPlayerDisableStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerDisableStatusEffect");
		return ptr;
	}

};


// Class Indiana.PlayerEnvironmentInteractionComponent
// 0x0210 (0x03D8 - 0x01C8)
class UPlayerEnvironmentInteractionComponent : public UEnvironmentInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x01C8(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerEnvironmentInteractionComponent");
		return ptr;
	}


	void STATIC_OnOccupiedNavAreaChanged(class UClass* PrevOccupiedArea, class UClass* CurrentOccupiedArea);
	void STATIC_OnCombatStateChange(bool bIsInCombat, bool bRestoring);
};


// Class Indiana.PlayerHealthComponent
// 0x01A8 (0x03A0 - 0x01F8)
class UPlayerHealthComponent : public UHealthComponent
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x01F8(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerHealthComponent");
		return ptr;
	}


	void STATIC_SurvivalModeUpdated(bool bSurvivalMode);
	void STATIC_PlayerWaitInitiated(float SecondsPassed, ERestType RestType);
	float GetThirst();
	float GetMaxFastTravelThirst();
	float GetMaxFastTravelHunger();
	float GetMaxFastTravelExhaustion();
	float GetLethalThirst();
	float GetLethalHunger();
	float GetLethalExhaustion();
	float GetHunger();
	float GetExhaustion();
	void STATIC_FastTravelInitiated(class UTravelDestinationData* TravelData, float TimePassed, bool bTravelFromMapLedger);
	void STATIC_AdjustThirst(float Amount, bool bFromFastTravel, bool bTravelFromMapLedger);
	void STATIC_AdjustSurvivalStats(float HungerGained, float ThirstGained, float ExhaustionGained, bool bFromFastTravel, bool bTravelFromMapLedger, bool bForced);
	void STATIC_AdjustHunger(float Amount, bool bFromFastTravel, bool bTravelFromMapLedger);
	void STATIC_AdjustExhaustion(float Amount, bool bFromFastTravel, bool bTravelFromMapLedger);
	void STATIC_AddThirst(float Thirst);
	void STATIC_AddHunger(float Hunger);
	void STATIC_AddExhaustion(float Exhaustion);
};


// Class Indiana.PlayerInfoComponent
// 0x0618 (0x09F0 - 0x03D8)
class UPlayerInfoComponent : public UCharacterInfoComponent
{
public:
	unsigned char                                      UnknownData00[0x618];                                     // 0x03D8(0x0618) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerInfoComponent");
		return ptr;
	}


	void STATIC_StopCurrentAudioLog();
	void STATIC_SetGenderDebug(EGender GenderIn);
	void STATIC_SetFlawAsOfferable(class UClass* Flaw, float OfferChance, bool bIgnoreTimer);
	void STATIC_SetAptitudeDebug(const class FString& AptitudeName);
	void STATIC_ResumeCurrentAudioLog();
	void STATIC_RespecSkillPoints();
	void STATIC_RespecPerks(bool bNoCost);
	void STATIC_ResetQuest(const class FString& QuestName, TArray<int> ResetEventIDs);
	void STATIC_ResetFlawOfferTimer();
	void STATIC_QuestTriggerAddendum(const class FString& QuestName, int AddendumNode);
	void STATIC_QuestStart(const class FString& QuestName);
	void STATIC_QuestListAll();
	void STATIC_QuestFail(const class FString& QuestName);
	void STATIC_QuestComplete(const class FString& QuestName);
	void STATIC_PlayAudioLog(int AudioLogIndex);
	void STATIC_PauseCurrentAudioLog();
	void STATIC_OnCombatStateChanged(bool bInCombat, bool bRestoring);
	bool IsPlayingAudioLog();
	void STATIC_FlawOfferRejectDebug();
	void STATIC_FlawOfferDebug(const class FString& FlawName);
	void STATIC_FlawOfferAcceptDebug();
	void STATIC_FlawClearOfferDebug();
	void STATIC_FlawClearDebug(const class FString& FlawName);
	void STATIC_FlawAddDebug(const class FString& FlawName);
	void STATIC_EnableFlawOffers();
	void STATIC_DisableFlawOffers();
	void STATIC_AddXPDebug(int XP);
	void STATIC_AddAudioLog(struct FAudioLogDefinition* AudioLogDefinition);
};


// Class Indiana.PlayerInteractionComponent
// 0x0138 (0x0260 - 0x0128)
class UPlayerInteractionComponent : public UInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0128(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerInteractionComponent");
		return ptr;
	}


	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnHighlightModeChanged(bool bVisible);
	void STATIC_OnDiscrepencyAmplifierActivated(bool bActivated);
};


// Class Indiana.PlayerInventoryComponent
// 0x00E0 (0x0350 - 0x0270)
class UPlayerInventoryComponent : public UCharacterInventoryComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0270(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerInventoryComponent");
		return ptr;
	}


	void STATIC_VendorRepairItemDebug(const struct FName& ItemName);
	void STATIC_SetWeaponHealthDebug(float Percent);
	void STATIC_SetItemHealthDebug(const struct FName& ItemName, float Percent);
	void STATIC_SetHelmetHealthDebug(float Percent);
	void STATIC_SetArmorHealthDebug(float Percent);
	void STATIC_RepairItemDebug(const struct FName& ItemName, bool bFieldRepair);
	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnCompanionRegistered(class AIndianaAiCharacter* Character, bool bAdded);
	void STATIC_IgnoreEncumbrance(bool bIgnored);
	void STATIC_GiveTools();
	void STATIC_BreakDownItemDebug(const struct FName& ItemName, bool bFieldBreakdown);
};


// Class Indiana.PlayerMovementComponent
// 0x05A0 (0x0FB0 - 0x0A10)
class UPlayerMovementComponent : public UIndianaCharMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x5A0];                                     // 0x0A10(0x05A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerMovementComponent");
		return ptr;
	}


	void STATIC_OnUnlockAbilityChanged(EUnlockAbility Ability);
	void STATIC_OnTakeFallingDamage(float FallingDamage);
	void STATIC_ControllerSensitivityUpdated(float SensitivityIn);
	void STATIC_ControllerADSSensitivityUpdated(float SensititivityIn);
	void STATIC_AcrophobiaEnableDebug(bool bEnable);
};


// Class Indiana.PlayerPresetData
// 0x0058 (0x0090 - 0x0038)
class UPlayerPresetData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerPresetData");
		return ptr;
	}

};


// Class Indiana.PlayerShoutComponent
// 0x0008 (0x0140 - 0x0138)
class UPlayerShoutComponent : public UShoutComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerShoutComponent");
		return ptr;
	}


	void STATIC_OnCombatStateChange(bool bIsInCombat, bool bRestoring);
};


// Class Indiana.PlayerStatsWidget
// 0x0048 (0x02F0 - 0x02A8)
class UPlayerStatsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerStatsWidget");
		return ptr;
	}


	void STATIC_SetXPRatio(float XPRatio);
	void STATIC_OnPlayerWeightChange();
	void STATIC_OnLevelChanged(int NewLevel);
	void STATIC_OnItemPartsChanged(int WeaponParts, int ArmorParts);
	void STATIC_OnItemEquipped(class UItem* ItemEquipped);
};


// Class Indiana.PlayerTargetingComponent
// 0x0168 (0x0288 - 0x0120)
class UPlayerTargetingComponent : public UTargetingComponent
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0120(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayerTargetingComponent");
		return ptr;
	}


	void STATIC_KillTarget();
	void STATIC_DrawPlayerTargetingTrace(float PersistTime);
};


// Class Indiana.PlayFxEventEffect
// 0x0020 (0x0050 - 0x0030)
class UPlayFxEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayFxEventEffect");
		return ptr;
	}

};


// Class Indiana.PlayLayeredFxEventEffect
// 0x0000 (0x0050 - 0x0050)
class UPlayLayeredFxEventEffect : public UPlayFxEventEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlayLayeredFxEventEffect");
		return ptr;
	}

};


// Class Indiana.PlaySoundEventEffect
// 0x0000 (0x0030 - 0x0030)
class UPlaySoundEventEffect : public UEventEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PlaySoundEventEffect");
		return ptr;
	}

};


// Class Indiana.PointOfInterestComponent
// 0x0000 (0x02B0 - 0x02B0)
class UPointOfInterestComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PointOfInterestComponent");
		return ptr;
	}

};


// Class Indiana.PointOfInterest
// 0x0010 (0x03C8 - 0x03B8)
class APointOfInterest : public ABasicMapFloorTrackedActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PointOfInterest");
		return ptr;
	}


	void STATIC_OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};


// Class Indiana.PointOfInterestData
// 0x0010 (0x0048 - 0x0038)
class UPointOfInterestData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PointOfInterestData");
		return ptr;
	}

};


// Class Indiana.PointOfInterestTextureData
// 0x0050 (0x0088 - 0x0038)
class UPointOfInterestTextureData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PointOfInterestTextureData");
		return ptr;
	}

};


// Class Indiana.PointOfInterestTooltipWidget
// 0x0008 (0x02B0 - 0x02A8)
class UPointOfInterestTooltipWidget : public UToolTipContentWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PointOfInterestTooltipWidget");
		return ptr;
	}

};


// Class Indiana.PointOfNoReturnRollbackData
// 0x00E0 (0x0110 - 0x0030)
class UPointOfNoReturnRollbackData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PointOfNoReturnRollbackData");
		return ptr;
	}


	void STATIC_FixQuestsBP();
	void STATIC_FixItemsBP();
	void STATIC_FixGlobalVarsBP();
	void STATIC_FixConversationsBP();
};


// Class Indiana.PoseableMeshModVisual
// 0x0080 (0x0140 - 0x00C0)
class UPoseableMeshModVisual : public UMeshModVisual
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PoseableMeshModVisual");
		return ptr;
	}

};


// Class Indiana.PosedSkeletalMeshModVisual
// 0x0028 (0x00E8 - 0x00C0)
class UPosedSkeletalMeshModVisual : public UMeshModVisual
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PosedSkeletalMeshModVisual");
		return ptr;
	}

};


// Class Indiana.PostProcessEventEffect
// 0x0068 (0x0098 - 0x0030)
class UPostProcessEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PostProcessEventEffect");
		return ptr;
	}

};


// Class Indiana.PostProcessStatusEffect
// 0x0080 (0x0208 - 0x0188)
class UPostProcessStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0188(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PostProcessStatusEffect");
		return ptr;
	}

};


// Class Indiana.PreloadAssetList
// 0x0010 (0x0048 - 0x0038)
class UPreloadAssetList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PreloadAssetList");
		return ptr;
	}

};


// Class Indiana.PresenceData
// 0x0018 (0x0050 - 0x0038)
class UPresenceData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PresenceData");
		return ptr;
	}

};


// Class Indiana.PreviewCharacterAnimInstance
// 0x0080 (0x05C0 - 0x0540)
class UPreviewCharacterAnimInstance : public UIndianaAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0540(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PreviewCharacterAnimInstance");
		return ptr;
	}

};


// Class Indiana.PreviewWeaponAnimations
// 0x0010 (0x0210 - 0x0200)
class UPreviewWeaponAnimations : public UWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PreviewWeaponAnimations");
		return ptr;
	}

};


// Class Indiana.Projectile
// 0x02E0 (0x0668 - 0x0388)
class AProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2E0];                                     // 0x0388(0x02E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Projectile");
		return ptr;
	}


	void STATIC_OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void STATIC_OnDamageEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_OnDamageBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	float GetOverlapCollisionSize();
	float GetCollisionSize();
	float GetChargeAmount();
};


// Class Indiana.ProjectileLauncher
// 0x0098 (0x05D0 - 0x0538)
class AProjectileLauncher : public ADestructible
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0538(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ProjectileLauncher");
		return ptr;
	}

};


// Class Indiana.PushDisableStatusEffect
// 0x0038 (0x01D8 - 0x01A0)
class UPushDisableStatusEffect : public UAnimDisableStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x01A0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PushDisableStatusEffect");
		return ptr;
	}

};


// Class Indiana.QuadrupedAnimInstance
// 0x0080 (0x0A70 - 0x09F0)
class UQuadrupedAnimInstance : public UTPVAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x09F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuadrupedAnimInstance");
		return ptr;
	}

};


// Class Indiana.Quest
// 0x0068 (0x0120 - 0x00B8)
class UQuest : public UFlowChart
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Quest");
		return ptr;
	}

};


// Class Indiana.QuestAddendumWidget
// 0x0008 (0x02B0 - 0x02A8)
class UQuestAddendumWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestAddendumWidget");
		return ptr;
	}


	void STATIC_OnObjectiveStatusChange(ECompletionStatus ObjectiveCompletion);
};


// Class Indiana.QuestDataAsset
// 0x0058 (0x0090 - 0x0038)
class UQuestDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestDataAsset");
		return ptr;
	}

};


// Class Indiana.QuestJournalWidget
// 0x01C0 (0x0468 - 0x02A8)
class UQuestJournalWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x02A8(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestJournalWidget");
		return ptr;
	}


	void STATIC_OnQuestImageLoaded();
};


// Class Indiana.QuestListEntryWidget
// 0x0048 (0x0290 - 0x0248)
class UQuestListEntryWidget : public UGenericCollapsableListEntry
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0248(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestListEntryWidget");
		return ptr;
	}


	void STATIC_SetQuestCompletionStatus(EQuestState QuestState);
	void STATIC_SetActiveQuest(bool bActive);
};


// Class Indiana.QuestListWidget
// 0x0060 (0x0360 - 0x0300)
class UQuestListWidget : public UGenericCollapsableList
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0300(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestListWidget");
		return ptr;
	}

};


// Class Indiana.QuestLogComboBoxWidget
// 0x0060 (0x0280 - 0x0220)
class UQuestLogComboBoxWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0220(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestLogComboBoxWidget");
		return ptr;
	}


	void STATIC_OnValueChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void STATIC_OnSortOptionIncrement();
};


// Class Indiana.QuestLogEntryWidget
// 0x0030 (0x02D8 - 0x02A8)
class UQuestLogEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestLogEntryWidget");
		return ptr;
	}


	void STATIC_OnQuestUpdated();
	void STATIC_OnQuestTextFadeOutComplete();
	void STATIC_OnQuestTextFadeInComplete();
	void STATIC_OnQuestFailed();
	void STATIC_OnQuestCompleted();
	void STATIC_OnQuestAnimationStartOrUpdateComplete();
	void STATIC_OnQuestAnimationFinishedComplete();
	void STATIC_FadeOutQuestText();
	void STATIC_FadeInQuestText();
};


// Class Indiana.QuestLogWidget
// 0x00B8 (0x0360 - 0x02A8)
class UQuestLogWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x02A8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestLogWidget");
		return ptr;
	}


	void STATIC_OnQuestUpdateModeChanged(int ModeIn);
	void STATIC_OnHUDVisibilityChanged(bool bVisibleIn);
	void STATIC_OnFadeOutComplete();
	void STATIC_OnFadeInComplete();
	void STATIC_FadeOutContents();
	void STATIC_FadeInContents();
};


// Class Indiana.QuestManager
// 0x03E0 (0x0410 - 0x0030)
class UQuestManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0030(0x03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestManager");
		return ptr;
	}

};


// Class Indiana.QuestObjectiveEntryWidget
// 0x0038 (0x02E0 - 0x02A8)
class UQuestObjectiveEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestObjectiveEntryWidget");
		return ptr;
	}


	void STATIC_StartFailAnim();
	void STATIC_StartCompleteAnim();
	void STATIC_OnOutroComplete();
	void STATIC_OnObjectiveUpdateAnimComplete();
	void STATIC_OnObjectiveMadeInactive();
	void STATIC_OnObjectiveMadeActive();
	void STATIC_OnIntroComplete();
};


// Class Indiana.QuestObjectiveTitleWidget
// 0x0030 (0x0250 - 0x0220)
class UQuestObjectiveTitleWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0220(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestObjectiveTitleWidget");
		return ptr;
	}


	void STATIC_OnObjectiveStatusChange(ECompletionStatus ObjectiveStatus);
};


// Class Indiana.QuestObjectiveWidget
// 0x0018 (0x0238 - 0x0220)
class UQuestObjectiveWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0220(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestObjectiveWidget");
		return ptr;
	}


	void STATIC_OnObjectiveStatusChange(ECompletionStatus ObjectiveStatus);
};


// Class Indiana.QuestSortingData
// 0x0268 (0x02A0 - 0x0038)
class UQuestSortingData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x268];                                     // 0x0038(0x0268) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuestSortingData");
		return ptr;
	}

};


// Class Indiana.QuickMeleeData
// 0x0038 (0x0070 - 0x0038)
class UQuickMeleeData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.QuickMeleeData");
		return ptr;
	}

};


// Class Indiana.RadialBackgroundSectionWidget
// 0x0020 (0x02C8 - 0x02A8)
class URadialBackgroundSectionWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RadialBackgroundSectionWidget");
		return ptr;
	}

};


// Class Indiana.RadialContainerWidget
// 0x0030 (0x02D8 - 0x02A8)
class URadialContainerWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RadialContainerWidget");
		return ptr;
	}

};


// Class Indiana.RadialContextMenuWidget
// 0x0030 (0x02E0 - 0x02B0)
class URadialContextMenuWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RadialContextMenuWidget");
		return ptr;
	}


	void STATIC_OnRadialMenuSelection(int Index);
};


// Class Indiana.RadialWidget
// 0x0140 (0x03E8 - 0x02A8)
class URadialWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x02A8(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RadialWidget");
		return ptr;
	}


	void STATIC_OnSectionConfirmedAux();
	void STATIC_OnSectionConfirmed();
	void STATIC_OnRadialScroll(float Value);
};


// Class Indiana.RagDollDeathBehavior
// 0x0000 (0x0040 - 0x0040)
class URagDollDeathBehavior : public UDeathBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RagDollDeathBehavior");
		return ptr;
	}

};


// Class Indiana.RagdollDisable
// 0x0048 (0x01E8 - 0x01A0)
class URagdollDisable : public UAnimDisableStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01A0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RagdollDisable");
		return ptr;
	}

};


// Class Indiana.RandomActionSet
// 0x0018 (0x0050 - 0x0038)
class URandomActionSet : public UAIAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RandomActionSet");
		return ptr;
	}

};


// Class Indiana.RandomBankGameDataReference
// 0x0000 (0x0050 - 0x0050)
class URandomBankGameDataReference : public UGameDataReference
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RandomBankGameDataReference");
		return ptr;
	}

};


// Class Indiana.RandomEventEffects
// 0x0018 (0x0048 - 0x0030)
class URandomEventEffects : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RandomEventEffects");
		return ptr;
	}

};


// Class Indiana.RandomQuerySet
// 0x0010 (0x0048 - 0x0038)
class URandomQuerySet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RandomQuerySet");
		return ptr;
	}

};


// Class Indiana.RandomSpawnNode
// 0x0038 (0x0640 - 0x0608)
class ARandomSpawnNode : public ASpawnNodeBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0608(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RandomSpawnNode");
		return ptr;
	}

};


// Class Indiana.RangeBehaviorStateInfo
// 0x0010 (0x0188 - 0x0178)
class URangeBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangeBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.RangeRequestData
// 0x0000 (0x0080 - 0x0080)
class URangeRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangeRequestData");
		return ptr;
	}

};


// Class Indiana.ReactionComponent
// 0x0160 (0x0278 - 0x0118)
class UReactionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0118(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReactionComponent");
		return ptr;
	}


	void STATIC_TriggerDebugCameraShake(float Strength, float X, float Y);
	void STATIC_OnTakeDamage(const struct FCauseDamageInfo& CDI);
};


// Class Indiana.ReactiveEnvironmentActor
// 0x0020 (0x03A8 - 0x0388)
class AReactiveEnvironmentActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReactiveEnvironmentActor");
		return ptr;
	}

};


// Class Indiana.ReactiveEnvironmentAnimInstance
// 0x0010 (0x0380 - 0x0370)
class UReactiveEnvironmentAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReactiveEnvironmentAnimInstance");
		return ptr;
	}

};


// Class Indiana.RecoilData
// 0x0100 (0x0138 - 0x0038)
class URecoilData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0038(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RecoilData");
		return ptr;
	}

};


// Class Indiana.RecoilManagerComponent
// 0x0058 (0x0170 - 0x0118)
class URecoilManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0118(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RecoilManagerComponent");
		return ptr;
	}

};


// Class Indiana.RedirectorMap
// 0x0050 (0x0088 - 0x0038)
class URedirectorMap : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RedirectorMap");
		return ptr;
	}

};


// Class Indiana.ReflectStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UReflectStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReflectStatusEffect");
		return ptr;
	}

};


// Class Indiana.RelevanceOptimizationInterface
// 0x0000 (0x0030 - 0x0030)
class URelevanceOptimizationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RelevanceOptimizationInterface");
		return ptr;
	}

};


// Class Indiana.Reload_AnimNotify
// 0x0000 (0x0040 - 0x0040)
class UReload_AnimNotify : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Reload_AnimNotify");
		return ptr;
	}

};


// Class Indiana.ReloadStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UReloadStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReloadStatusEffect");
		return ptr;
	}

};


// Class Indiana.RenderThreadAnimationWidget
// 0x0008 (0x0228 - 0x0220)
class URenderThreadAnimationWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RenderThreadAnimationWidget");
		return ptr;
	}

};


// Class Indiana.RepairUpgradeInfoWidget
// 0x0080 (0x0328 - 0x02A8)
class URepairUpgradeInfoWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02A8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RepairUpgradeInfoWidget");
		return ptr;
	}

};


// Class Indiana.ReplaceRandomFlawStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UReplaceRandomFlawStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReplaceRandomFlawStatusEffect");
		return ptr;
	}

};


// Class Indiana.RepositionSearchBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class URepositionSearchBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RepositionSearchBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.RepositionSearchRequestData
// 0x0000 (0x0068 - 0x0068)
class URepositionSearchRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RepositionSearchRequestData");
		return ptr;
	}

};


// Class Indiana.ReputationData
// 0x0020 (0x0058 - 0x0038)
class UReputationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReputationData");
		return ptr;
	}

};


// Class Indiana.ReputationDetailsWidget
// 0x0060 (0x0308 - 0x02A8)
class UReputationDetailsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02A8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReputationDetailsWidget");
		return ptr;
	}

};


// Class Indiana.ReputationEntryWidget
// 0x0030 (0x02D8 - 0x02A8)
class UReputationEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReputationEntryWidget");
		return ptr;
	}

};


// Class Indiana.ReputationListWidget
// 0x0028 (0x02D0 - 0x02A8)
class UReputationListWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReputationListWidget");
		return ptr;
	}

};


// Class Indiana.ReputationProgressWidget
// 0x0020 (0x0240 - 0x0220)
class UReputationProgressWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0220(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReputationProgressWidget");
		return ptr;
	}

};


// Class Indiana.ReputationSummaryWidget
// 0x0040 (0x02E8 - 0x02A8)
class UReputationSummaryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReputationSummaryWidget");
		return ptr;
	}


	void STATIC_RemoveReputationBackgroundOnMinimize();
	void STATIC_OnFactionReputationChanged(class UFactionData* FactionData, EReputationType ReputationType, int Amount, class UReputationData* ReputationBefore, class UReputationData* ReputationAfter);
	void STATIC_InitReputationBackgroundOnMaximize();
};


// Class Indiana.ResetSpellCooldownStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UResetSpellCooldownStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ResetSpellCooldownStatusEffect");
		return ptr;
	}

};


// Class Indiana.RespecMachine
// 0x0010 (0x0398 - 0x0388)
class ARespecMachine : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RespecMachine");
		return ptr;
	}

};


// Class Indiana.RestrictedArea
// 0x00B0 (0x0438 - 0x0388)
class ARestrictedArea : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0388(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RestrictedArea");
		return ptr;
	}


	bool IsEnabled();
};


// Class Indiana.RestrictedAreaComponent
// 0x0000 (0x02B0 - 0x02B0)
class URestrictedAreaComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RestrictedAreaComponent");
		return ptr;
	}

};


// Class Indiana.RestrictedAreaVolume
// 0x0008 (0x03E8 - 0x03E0)
class ARestrictedAreaVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RestrictedAreaVolume");
		return ptr;
	}

};


// Class Indiana.ResurrectStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UResurrectStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ResurrectStatusEffect");
		return ptr;
	}

};


// Class Indiana.ReticleVisualsDataAsset
// 0x0090 (0x00C8 - 0x0038)
class UReticleVisualsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReticleVisualsDataAsset");
		return ptr;
	}

};


// Class Indiana.ReticleWidget
// 0x00A0 (0x0348 - 0x02A8)
class UReticleWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02A8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ReticleWidget");
		return ptr;
	}


	void STATIC_ShrinkTTDRotator();
	void STATIC_SetTTDProgressRatio(float NewTTDRatio);
	void STATIC_OnTTDTargetLost();
	void STATIC_OnTTDTargetAcquired();
	void STATIC_OnTTDReticleMeterModeChanged(int bVisible);
	void STATIC_OnReticleModeChanged(int ModeIn);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnCombatStateChanged(bool bCombatIn, bool bRestoring);
	void STATIC_ExpandTTDRotator();
};


// Class Indiana.RetreatBehaviorStateInfo
// 0x0018 (0x0190 - 0x0178)
class URetreatBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0178(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RetreatBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.RetreatRequestData
// 0x0000 (0x0080 - 0x0080)
class URetreatRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RetreatRequestData");
		return ptr;
	}

};


// Class Indiana.RpgStat
// 0x0048 (0x0080 - 0x0038)
class URpgStat : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RpgStat");
		return ptr;
	}

};


// Class Indiana.RpgStatComponent
// 0x00E0 (0x01F8 - 0x0118)
class URpgStatComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0118(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RpgStatComponent");
		return ptr;
	}


	void STATIC_SetModifier(class UObject* SourceObject, int SourceId, const struct FStatModifierDescription& StatModifier);
	void STATIC_RpgStatShowStat(const class FString& Stat);
	void STATIC_RpgStatShowAll();
	void STATIC_RpgStatRemoveModifierDebug(const struct FName& Stat);
	void STATIC_RpgStatAddModifierDebug(const struct FName& Stat, float Value);
	void STATIC_RemoveModifier(class UObject* SourceObject, int SourceId, const struct FStatModifierDescription& StatModifier);
	void STATIC_OnCollectionStatUpdated(class URpgStat* Stat);
	float GetValue(class URpgStat* Stat, ERpgStatGroupMask StatGroupMask, float InputValue);
};


// Class Indiana.SaveGameManager
// 0x0660 (0x0690 - 0x0030)
class USaveGameManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x660];                                     // 0x0030(0x0660) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SaveGameManager");
		return ptr;
	}


	void STATIC_SaveUserGameSettings(bool bSettingsPotentiallyChanged);
	ESaveGameResult SaveGame(const class FString& Filename, bool bIgnoreSuperNova, ESaveGameType SaveGameType);
	void STATIC_RequestPostGameSave();
	void STATIC_RequestPointOfNoReturnSave();
	void STATIC_RequestPointOfNoReturnRollbackSave();
	void STATIC_RequestBeforeSkipSave();
	void STATIC_RequestBeforeEVTransitionSave();
	void STATIC_RequestAutosave(bool bAllowOnSuperNova);
	ESaveGameResult Quicksave();
	ELoadGameResult Quickload();
	void STATIC_PointOfNoReturnSave();
	void STATIC_PointOfNoReturnRollbackSave();
	void STATIC_OnPromptedSaveSaveMenuClosed(bool bForced);
	void STATIC_OnActorDestroyed(class AActor* Actor);
	void STATIC_LoadUserGameSettings();
	ELoadGameResult LoadGame(const class FString& Filename, bool bPreValidateMetadata);
	bool EnsureSignIn();
	void STATIC_DisableSaves(bool bDisable);
	EDeleteGameResult DeleteGame(const class FString& Filename);
	void STATIC_CheckCanSaveGame();
	void STATIC_BeforeEVTransitionSave();
	bool Autosave(EAutoSaveType AutoSaveType, bool bIgnoreSuperNova);
};


// Class Indiana.SaveLoadDetailWidget
// 0x0180 (0x03A0 - 0x0220)
class USaveLoadDetailWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0220(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SaveLoadDetailWidget");
		return ptr;
	}

};


// Class Indiana.SaveLoadMenuWidget
// 0x00D0 (0x0380 - 0x02B0)
class USaveLoadMenuWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x02B0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SaveLoadMenuWidget");
		return ptr;
	}


	void STATIC_OnSaveDataRequestFinished();
	void STATIC_OnPS4LoadInturrupted(const class FString& SaveName);
	void STATIC_OnLoadComplete(const class FString& Filename, ELoadGameResult Result);
	void STATIC_OnExitInterface();
	void STATIC_OnActiveUserChanged(EActiveUserChangeType ChangeType);
	void STATIC_DeleteSave();
};


// Class Indiana.SavingWidget
// 0x0020 (0x02C8 - 0x02A8)
class USavingWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SavingWidget");
		return ptr;
	}


	void STATIC_ShowSavingWidget();
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_HideSavingWidget(ESaveGameResult SaveGameResult, ESaveGameType SaveGameType);
};


// Class Indiana.ScalableImage
// 0x0038 (0x02E0 - 0x02A8)
class UScalableImage : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScalableImage");
		return ptr;
	}


	void STATIC_SizeSettingChanged(int SizeIn);
};


// Class Indiana.ScaledActorTable
// 0x0010 (0x0048 - 0x0038)
class UScaledActorTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScaledActorTable");
		return ptr;
	}

};


// Class Indiana.ScaledSpawnNode
// 0x0030 (0x0638 - 0x0608)
class AScaledSpawnNode : public ASpawnNodeBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0608(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScaledSpawnNode");
		return ptr;
	}

};


// Class Indiana.ScaleStatusEffect
// 0x0010 (0x0198 - 0x0188)
class UScaleStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScaleStatusEffect");
		return ptr;
	}

};


// Class Indiana.ScalingData
// 0x0030 (0x0068 - 0x0038)
class UScalingData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScalingData");
		return ptr;
	}

};


// Class Indiana.ScalingOverrideBox
// 0x0038 (0x03C0 - 0x0388)
class AScalingOverrideBox : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0388(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScalingOverrideBox");
		return ptr;
	}

};


// Class Indiana.ScannerFlavorTextData
// 0x0010 (0x0048 - 0x0038)
class UScannerFlavorTextData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScannerFlavorTextData");
		return ptr;
	}

};


// Class Indiana.Scar
// 0x0008 (0x0040 - 0x0038)
class UScar : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Scar");
		return ptr;
	}

};


// Class Indiana.ScopeData
// 0x0118 (0x0150 - 0x0038)
class UScopeData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0038(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScopeData");
		return ptr;
	}

};


// Class Indiana.ScriptRequestData
// 0x0000 (0x0068 - 0x0068)
class UScriptRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScriptRequestData");
		return ptr;
	}

};


// Class Indiana.PopRequestData
// 0x0000 (0x0068 - 0x0068)
class UPopRequestData : public UScriptRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.PopRequestData");
		return ptr;
	}

};


// Class Indiana.ClearCompanionCommandStatesRequestData
// 0x0000 (0x0068 - 0x0068)
class UClearCompanionCommandStatesRequestData : public UScriptRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ClearCompanionCommandStatesRequestData");
		return ptr;
	}

};


// Class Indiana.ClearBehaviorStatesOfTypeRequestData
// 0x0008 (0x0070 - 0x0068)
class UClearBehaviorStatesOfTypeRequestData : public UScriptRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ClearBehaviorStatesOfTypeRequestData");
		return ptr;
	}

};


// Class Indiana.RequestTargetRequestData
// 0x0008 (0x0070 - 0x0068)
class URequestTargetRequestData : public UScriptRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RequestTargetRequestData");
		return ptr;
	}

};


// Class Indiana.SetWeaponPreferenceRequestData
// 0x0008 (0x0070 - 0x0068)
class USetWeaponPreferenceRequestData : public UScriptRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SetWeaponPreferenceRequestData");
		return ptr;
	}

};


// Class Indiana.ScriptEvent
// 0x0000 (0x0030 - 0x0030)
class UScriptEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScriptEvent");
		return ptr;
	}

};


// Class Indiana.SetGlobalValueEvent
// 0x0018 (0x0048 - 0x0030)
class USetGlobalValueEvent : public UScriptEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SetGlobalValueEvent");
		return ptr;
	}

};


// Class Indiana.SetGlobalIfGlobalEvent
// 0x0030 (0x0060 - 0x0030)
class USetGlobalIfGlobalEvent : public UScriptEvent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SetGlobalIfGlobalEvent");
		return ptr;
	}

};


// Class Indiana.IncrementGlobalValueEvent
// 0x0018 (0x0048 - 0x0030)
class UIncrementGlobalValueEvent : public UScriptEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IncrementGlobalValueEvent");
		return ptr;
	}

};


// Class Indiana.RandomizeGlobalValueEvent
// 0x0018 (0x0048 - 0x0030)
class URandomizeGlobalValueEvent : public UScriptEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RandomizeGlobalValueEvent");
		return ptr;
	}

};


// Class Indiana.StartQuestEvent
// 0x0010 (0x0040 - 0x0030)
class UStartQuestEvent : public UScriptEvent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StartQuestEvent");
		return ptr;
	}

};


// Class Indiana.TriggerQuestAddendumEvent
// 0x0018 (0x0048 - 0x0030)
class UTriggerQuestAddendumEvent : public UScriptEvent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TriggerQuestAddendumEvent");
		return ptr;
	}

};


// Class Indiana.AdvanceQuestEvent
// 0x0010 (0x0040 - 0x0030)
class UAdvanceQuestEvent : public UScriptEvent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.AdvanceQuestEvent");
		return ptr;
	}

};


// Class Indiana.RemoteEvent
// 0x0010 (0x0040 - 0x0030)
class URemoteEvent : public UScriptEvent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RemoteEvent");
		return ptr;
	}

};


// Class Indiana.ScriptManager
// 0x0150 (0x0180 - 0x0030)
class UScriptManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0030(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ScriptManager");
		return ptr;
	}

};


// Class Indiana.Scripts
// 0x0000 (0x0030 - 0x0030)
class UScripts : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Scripts");
		return ptr;
	}


	void STATIC_UnsealOCL(const struct FGuid& OCLObjectID);
	void STATIC_UnlockOCL(const struct FGuid& OCLObjectID);
	void STATIC_UnlockComputer(const struct FGuid& ComputerObjectID);
	void STATIC_UnlockCompanion(const struct FGuid& CompanionID);
	void STATIC_UnbarOCL(const struct FGuid& OCLObjectID);
	void STATIC_TriggerQuestFailState(const struct FGuid& QuestID, int EndStateID);
	void STATIC_TriggerQuestEndState(const struct FGuid& QuestID, int EndStateID);
	void STATIC_TriggerQuestAddendum(const struct FGuid& QuestID, int AddendumID);
	void STATIC_TravelToDestination(const class FString& TravelDestination, bool bTriggerAutosave);
	void STATIC_TakeItemValue(const class FString& Item);
	void STATIC_StartQuestWithAlternateDescription(const struct FGuid& QuestID, int QuestDescriptionID);
	void STATIC_StartQuest(const struct FGuid& QuestID);
	void STATIC_ShowBeacon(const struct FGuid& BeaconObjectID);
	void STATIC_SetTrackedQuest(const struct FGuid& QuestID);
	void STATIC_SetTeamRelationship(const class FString& SourceTeam, TEnumAsByte<ETeamAttitude> Relationship, bool bMutual, class FString* OtherTeam);
	void STATIC_SetTalkIdleOverride(const struct FGuid& Actor, const struct FName& TalkIdleOverrideName, EEmotion Emotion, float Delay, float Duration, bool Persist);
	void STATIC_SetSpeakersTalkIdleOverride(const struct FName& TalkIdleOverrideName, EEmotion Emotion, float Delay, float Duration, bool Persist);
	void STATIC_SetSpeakersEmotionWithDelay(EEmotion Emotion, float EmotionDelay, float Duration, bool Persist);
	void STATIC_SetSpeakersEmotionFull(EEmotion Emotion, float Delay, float Duration, float HeadStrength, bool Persist, bool AffectHead, bool AffectBody);
	void STATIC_SetSpeakersEmotion(EEmotion Emotion, float Duration, bool Persist);
	void STATIC_SetSpeakersDefaultEmotion(EEmotion Emotion);
	void STATIC_SetSlideshowImageKey(class FString* ImageKey);
	void STATIC_SetQuestAlternateDescription(const struct FGuid& QuestID, int QuestDescriptionID);
	void STATIC_SetPosture(EPosture Posture, float Delay, float Duration, bool Persist);
	void STATIC_SetPointOfInterestDiscovered(const class FString& PointOfInterestData, bool bCanAwardXP);
	void STATIC_SetPlayerVisitedTravelDestination(const class FString& TravelDestination);
	void STATIC_SetPlayerVisitedRegion(const class FString& TravelRegion);
	void STATIC_SetPlayerTravelDestinationLocked(const class FString& TravelDestination, bool bLocked);
	void STATIC_SetPlayerTravelDestinationHidden(const class FString& TravelDestination, bool bHidden);
	void STATIC_SetPlayerShipLocation(const class FString& ShipDestination);
	void STATIC_SetPlayerRelationshipToHostile(const struct FGuid& CharacterID);
	void STATIC_SetPlayerOwnershipOfItemTypeInContainer(const struct FGuid& ContainerID, const class FString& Item, bool bPlayerOwned, bool bClearNonPlayerOwnership);
	void STATIC_SetPlayerOwnershipOfItemsInContainer(const struct FGuid& ContainerID, bool bPlayerOwned, bool bClearNonPlayerOwnership);
	void STATIC_SetPlayerAwareOfTravelDestination(const class FString& TravelDestination);
	void STATIC_SetPlayerAwareOfRegion(const class FString& TravelRegion);
	void STATIC_SetPickupPlayerOwnership(const struct FGuid& PickupID, bool bPlayerOwned, bool bClearNonPlayerOwnership);
	void STATIC_SetPickupNonPlayerOwnership(const struct FGuid& PickupID, const struct FGuid& Actor, bool bClearPlayerOwnership);
	void STATIC_SetPickupFactionOwnership(const struct FGuid& PickupID, const class FString& Faction, bool bClearPlayerOwnership);
	void STATIC_SetObjectiveAlternateDescription(const struct FGuid& QuestID, int ObjectiveID, int ObjectiveDescriptionID);
	void STATIC_SetNonPlayerOwnershipOfItemTypeInContainer(const struct FGuid& ContainerID, const class FString& Item, const struct FGuid& Actor, bool bClearPlayerOwnership);
	void STATIC_SetNonPlayerOwnershipOfItemsInContainer(const struct FGuid& ContainerID, const struct FGuid& Actor, bool bClearPlayerOwnership);
	void STATIC_SetMusicOverride(const class FString& OverrideTrack);
	void STATIC_SetInterrogationComplete(EInterrogationResult Result);
	void STATIC_SetGlobalVariableValue(const struct FGlobalVariable& Variable, int Value);
	void STATIC_SetGlobalValue(const class FString& VariableName, int Value);
	void STATIC_SetGlobalIfGlobal(const class FString& ConditionVariableName, int ConditionValue, const class FString& VariableName, int Value);
	void STATIC_SetFactionOwnershipOfItemTypeInContainer(const struct FGuid& ContainerID, const class FString& Item, const class FString& Faction, bool bClearPlayerOwnership);
	void STATIC_SetFactionOwnershipOfItemsInContainer(const struct FGuid& ContainerID, const class FString& Faction, bool bClearPlayerOwnership);
	void STATIC_SetFactionEncountered(const class FString& Faction);
	void STATIC_SetEmotionWithDelay(const struct FGuid& Actor, EEmotion Emotion, float EmotionDelay, float Duration, bool Persist);
	void STATIC_SetEmotionFull(const struct FGuid& Actor, EEmotion Emotion, float Delay, float Duration, float HeadStrength, bool Persist, bool AffectHead, bool AffectBody);
	void STATIC_SetEmotion(const struct FGuid& Actor, EEmotion Emotion, float Duration, bool Persist);
	void STATIC_SetDefaultEmotion(const struct FGuid& Actor, EEmotion Emotion);
	void STATIC_SetConversationTargetActor(const struct FGuid& Actor, const struct FGuid& Target, bool bRotateBody, bool bStickyTarget);
	void STATIC_SetConversationHeadTargetActor(const struct FGuid& Actor, const struct FGuid& Target, bool bStickyTarget);
	void STATIC_SetConversationEyesTargetActor(const struct FGuid& Actor, const struct FGuid& Target, bool bStickyTarget);
	void STATIC_SetConversationBodyTargetActor(const struct FGuid& Actor, const struct FGuid& Target, bool bStickyTarget);
	void STATIC_SetCompanionWantsToTalk(ESpecialObsidianID CompanionID, bool bWantsToTalk);
	void STATIC_SetCharacterTeam_AvoidUsingThis(const struct FGuid& CharacterID, const class FString& Team);
	void STATIC_SealOCL(const struct FGuid& OCLObjectID);
	void STATIC_ResumeMusic();
	void STATIC_ResetRPGSystems();
	void STATIC_ReplaceCompanionInSlot(const struct FGuid& PotientalCompanionID, ECompanionSlot CommpanionSlot);
	void STATIC_RemoveItemFromActor(const struct FGuid& ActorId, const class FString& Item, int Count);
	void STATIC_RemoveItem(const class FString& Item, int Count);
	void STATIC_RemoveCurrency(const struct FGuid& ActorId, int Count);
	void STATIC_RemoveCompanionFromParty(const struct FGuid& CompanionID);
	void STATIC_RemoteEvent(const class FString& EventName);
	void STATIC_RegisterNamedTimestamp(const class FString& TimestampName);
	void STATIC_RandomizeGlobalValueWithGlobals(const class FString& VariableName, const class FString& MinValueGlobal, const class FString& MaxValueGlobal);
	void STATIC_RandomizeGlobalValue(const class FString& VariableName, int MinValue, int MaxValue);
	void STATIC_PlayConversationChatterEvent(EChatterEventType ChatterEvent, bool bConversationNode);
	void STATIC_PauseMusic();
	void STATIC_OpenOCL(const struct FGuid& OCLObjectID);
	void STATIC_MentionQuest(const struct FGuid& QuestID);
	void STATIC_MentionPointOfInterest(const class FString& PointOfInterestData);
	void STATIC_MarkConversationNodeAsRead(const struct FGuid& ConversationID, int NodeID);
	void STATIC_MakePointOfInterestDiscoverable(const class FString& PointOfInterestData, bool bStillHidden);
	void STATIC_LockOCL(const struct FGuid& OCLObjectID);
	void STATIC_LockComputer(const struct FGuid& ComputerObjectID);
	void STATIC_KillNPC(const struct FGuid& Character);
	void STATIC_IncrementGlobalValue(const class FString& VariableName, int IncrementValue);
	void STATIC_HidePointOfInterest(const class FString& PointOfInterestData);
	void STATIC_HideBeacon(const struct FGuid& BeaconObjectID);
	void STATIC_GivePerkToActor(const struct FGuid& ActorId, const class FString& Perk);
	void STATIC_GiveLoot(const class FString& LootTableData);
	void STATIC_GiveItemToActor(const struct FGuid& ActorIdID, const class FString& Item, int Count);
	void STATIC_GiveItem(const class FString& Item, int Count);
	void STATIC_GiveCurrency(const struct FGuid& ActorId, int Count);
	float GetCompanionMoral(ESpecialObsidianID CompanionID);
	void STATIC_DynamicallyReplaceCompanion(ESpecialObsidianID OldCompanionID, ESpecialObsidianID NewCompanionID);
	void STATIC_DismissCompanion(ESpecialObsidianID CompanionID);
	void STATIC_DisarmTrap(const struct FGuid& TrapObjectID);
	void STATIC_DebugPrintMessage(const class FString& Message);
	void STATIC_DebugAdvanceQuest(const struct FGuid& QuestID);
	void STATIC_CloseOCL(const struct FGuid& OCLObjectID, bool Block, bool bSeal);
	void STATIC_ClearTalkIdleOverrideOnNextEmotionChange(const struct FGuid& Actor);
	void STATIC_ClearTalkIdleOverride(const struct FGuid& Actor, EEmotion Emotion, float Duration, bool Persist);
	void STATIC_ClearSpeakersTalkIdleOverrideOnNextEmotionChange();
	void STATIC_ClearSpeakersTalkIdleOverride(EEmotion Emotion, float Duration, bool Persist);
	void STATIC_ClearSpeakersDefaultEmotion();
	void STATIC_ClearPickupOwnerships(const struct FGuid& PickupID, bool bClearPlayerOwnership, bool bClearNonPlayerOwnership);
	void STATIC_ClearOwnershipsOfItemTypeInContainer(const struct FGuid& ContainerID, const class FString& Item, bool bClearPlayerOwnership, bool bClearNonPlayerOwnership);
	void STATIC_ClearOwnershipsOfItemsInContainer(const struct FGuid& ContainerID, bool bClearPlayerOwnership, bool bClearNonPlayerOwnership);
	void STATIC_ClearNamedTimestamp(const class FString& TimestampName);
	void STATIC_ClearMusicOverride();
	void STATIC_ClearFactionRecentHostilityToPlayer(const class FString& Faction);
	void STATIC_ClearEmotion(const struct FGuid& Actor);
	void STATIC_ClearDefaultEmotion(const struct FGuid& Actor);
	void STATIC_ClearConversationTargetActor(const struct FGuid& Actor, bool bStickyTarget);
	void STATIC_ClearConversationNodeAsRead(const struct FGuid& ConversationID, int NodeID);
	void STATIC_ClearConversationHeadTargetActor(const struct FGuid& Actor, bool bStickyTarget);
	void STATIC_ClearConversationEyesTargetActor(const struct FGuid& Actor, bool bStickyTarget);
	void STATIC_ClearConversationBodyTargetActor(const struct FGuid& Actor, bool bStickyTarget);
	void STATIC_CallGlobalScript(const struct FGuid& GlobalScriptID);
	void STATIC_Bribe(const class FString& VariableName);
	void STATIC_BeginTradeWithSpeaker();
	void STATIC_BarOCL(const struct FGuid& OCLObjectID);
	void STATIC_AttemptEnableHazard(const struct FGuid& HazardActorID, bool bEnable);
	void STATIC_ArmTrap(const struct FGuid& TrapObjectID);
	void STATIC_AdvanceToHour(int TargetHour);
	void STATIC_AdvanceTime(float Days, float Hours, float Minutes, float Seconds);
	void STATIC_AdvanceSeconds(float Seconds);
	void STATIC_AdvanceQuest(const struct FGuid& QuestID);
	void STATIC_AdvanceMinutes(float Minutes);
	void STATIC_AdvanceHours(float Hours);
	void STATIC_AdvanceDays(float Days);
	void STATIC_AdjustFactionReputation(const class FString& Faction, EReputationType ReputationType, EReputationIncrementType IncrementType, int CustomAmount);
	void STATIC_AdjustCompanionMoral(ESpecialObsidianID CompanionID, bool bPositiveMoralAdjustment, EMoraleContribution Contribution, float CustomAmount, bool bOnlyActivePartyMembers);
	void STATIC_AddCompanionToParty(const struct FGuid& CompanionID);
	void STATIC_AddAudioLogBP(class UAudioLogDataAsset* audiolog, bool bPlayOnPickup);
	void STATIC_AddAudioLog(const class FString& audiolog, bool bPlayOnPickup);
	void STATIC_AchievementIncrement(const struct FName& AchievementName, int Count);
	void STATIC_AchievementGameOver();
	void STATIC_AchievementCompleted(const struct FName& AchievementName);
};


// Class Indiana.SearchBehaviorStateInfo
// 0x0028 (0x0148 - 0x0120)
class USearchBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0120(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SearchBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.SearchRequestData
// 0x0008 (0x0070 - 0x0068)
class USearchRequestData : public UDecisionTreeEmptyRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SearchRequestData");
		return ptr;
	}

};


// Class Indiana.SelectedNotificationWidget
// 0x0018 (0x02C0 - 0x02A8)
class USelectedNotificationWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SelectedNotificationWidget");
		return ptr;
	}


	void STATIC_StopFadeOutAnimation();
	void STATIC_PlayNotificationAnimation();
	void STATIC_PlayFadeOutAnimation();
	void STATIC_OnFadeRightAnimationEnd();
	void STATIC_OnFadeOutAnimationEnd();
};


// Class Indiana.SettingsHUDMode
// 0x00B0 (0x00E8 - 0x0038)
class USettingsHUDMode : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0038(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsHUDMode");
		return ptr;
	}

};


// Class Indiana.SettingsMenuButtonSlotWidget
// 0x0050 (0x02F8 - 0x02A8)
class USettingsMenuButtonSlotWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuButtonSlotWidget");
		return ptr;
	}


	void STATIC_OnButtonClicked();
};


// Class Indiana.SettingsMenuSlotEntryBase
// 0x0000 (0x02A8 - 0x02A8)
class USettingsMenuSlotEntryBase : public UIndianaUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuSlotEntryBase");
		return ptr;
	}

};


// Class Indiana.SettingsMenuCheckBoxWidget
// 0x0020 (0x02C8 - 0x02A8)
class USettingsMenuCheckBoxWidget : public USettingsMenuSlotEntryBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuCheckBoxWidget");
		return ptr;
	}


	void STATIC_OnValueChanged(class UButtonBase* Button);
};


// Class Indiana.SettingsMenuComboBoxWidget
// 0x0018 (0x0238 - 0x0220)
class USettingsMenuComboBoxWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0220(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuComboBoxWidget");
		return ptr;
	}


	void STATIC_OnValueChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
};


// Class Indiana.SettingsMenuData
// 0x00B8 (0x00F0 - 0x0038)
class USettingsMenuData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuData");
		return ptr;
	}

};


// Class Indiana.SettingsMenuInputKeySelector
// 0x00A8 (0x0350 - 0x02A8)
class USettingsMenuInputKeySelector : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x02A8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuInputKeySelector");
		return ptr;
	}


	void STATIC_OnRightClicked();
	void STATIC_OnClicked();
};


// Class Indiana.SettingsMenuKeyRebindWidget
// 0x0068 (0x0310 - 0x02A8)
class USettingsMenuKeyRebindWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuKeyRebindWidget");
		return ptr;
	}


	void STATIC_OnSecondaryIsSelectingKeyChanged(bool bIsSelectingKey);
	void STATIC_OnPrimaryIsSelectingKeyChanged(bool bIsSelectingKey);
	void STATIC_OnKeySelected(const struct FInputChord& InputChord);
	void STATIC_OnContainerClicked();
	void STATIC_OnBack();
};


// Class Indiana.SettingsMenuOptionPresenterWdgt
// 0x0020 (0x02C8 - 0x02A8)
class USettingsMenuOptionPresenterWdgt : public USettingsMenuSlotEntryBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuOptionPresenterWdgt");
		return ptr;
	}


	void STATIC_OnValueChanged(int SelectedItem);
};


// Class Indiana.SettingsMenuSliderWidget
// 0x0038 (0x02E0 - 0x02A8)
class USettingsMenuSliderWidget : public USettingsMenuSlotEntryBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuSliderWidget");
		return ptr;
	}


	void STATIC_OnValueChanged(const struct FSliderEvent& Event);
};


// Class Indiana.SettingsMenuSlotWidget
// 0x0050 (0x02F8 - 0x02A8)
class USettingsMenuSlotWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuSlotWidget");
		return ptr;
	}

};


// Class Indiana.SettingsMenuSubcategoryWidget
// 0x0020 (0x0240 - 0x0220)
class USettingsMenuSubcategoryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0220(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuSubcategoryWidget");
		return ptr;
	}

};


// Class Indiana.UserSetting
// 0x0030 (0x0060 - 0x0030)
class UUserSetting : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSetting");
		return ptr;
	}

};


// Class Indiana.UserSettingBool
// 0x0038 (0x0098 - 0x0060)
class UUserSettingBool : public UUserSetting
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSettingBool");
		return ptr;
	}

};


// Class Indiana.UserSettingFloat
// 0x0040 (0x00A0 - 0x0060)
class UUserSettingFloat : public UUserSetting
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSettingFloat");
		return ptr;
	}

};


// Class Indiana.UserSettingInt32
// 0x0040 (0x00A0 - 0x0060)
class UUserSettingInt32 : public UUserSetting
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSettingInt32");
		return ptr;
	}

};


// Class Indiana.UserSettingKeyBinding
// 0x0010 (0x0070 - 0x0060)
class UUserSettingKeyBinding : public UUserSetting
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSettingKeyBinding");
		return ptr;
	}

};


// Class Indiana.UserSettingActionBinding
// 0x0090 (0x0100 - 0x0070)
class UUserSettingActionBinding : public UUserSettingKeyBinding
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0070(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSettingActionBinding");
		return ptr;
	}

};


// Class Indiana.UserSettingAxisBinding
// 0x0088 (0x00F8 - 0x0070)
class UUserSettingAxisBinding : public UUserSettingKeyBinding
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0070(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSettingAxisBinding");
		return ptr;
	}

};


// Class Indiana.UserSettingActionKeyboardBinding
// 0x0050 (0x00C0 - 0x0070)
class UUserSettingActionKeyboardBinding : public UUserSettingKeyBinding
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0070(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSettingActionKeyboardBinding");
		return ptr;
	}

};


// Class Indiana.UserSettingAxisKeyboardBinding
// 0x0058 (0x00C8 - 0x0070)
class UUserSettingAxisKeyboardBinding : public UUserSettingKeyBinding
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0070(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UserSettingAxisKeyboardBinding");
		return ptr;
	}

};


// Class Indiana.SettingsMenuWidget
// 0x0310 (0x05C0 - 0x02B0)
class USettingsMenuWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x310];                                     // 0x02B0(0x0310) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SettingsMenuWidget");
		return ptr;
	}


	void STATIC_ValueChanged(class UUserSetting* UserSetting);
	void STATIC_UpdateDialogTimerText(float DeltaTime);
	void STATIC_SetVisualEffectQuality(int Value);
	void STATIC_SetViewDistanceQuality(int Value);
	void STATIC_SetTextureQuality(int Value);
	void STATIC_SetShadowQuality(int Value);
	void STATIC_SetPostProcessingQuality(int Value);
	void STATIC_SetGraphicsQuality(int Value);
	void STATIC_SetFoliageQuality(int Value);
	void STATIC_SetAntiAliasingQuality(int Value);
	void STATIC_SetAntiAliasingMethod(int Value);
	void STATIC_QueueRefreshHUDMode();
	void STATIC_OnOpenPCKeyBinds();
	void STATIC_OnOpenGamepadLayout();
	void STATIC_OnInputBack();
	void STATIC_OnDetectGraphics();
	void STATIC_OnCyclePageRight();
	void STATIC_OnCyclePageLeft();
	void STATIC_EmptyHandler();
	void STATIC_DefaultsActionHandler();
};


// Class Indiana.Shape
// 0x0000 (0x0030 - 0x0030)
class UShape : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Shape");
		return ptr;
	}

};


// Class Indiana.BoxShape
// 0x0018 (0x0048 - 0x0030)
class UBoxShape : public UShape
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.BoxShape");
		return ptr;
	}

};


// Class Indiana.SphereShape
// 0x0010 (0x0040 - 0x0030)
class USphereShape : public UShape
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SphereShape");
		return ptr;
	}

};


// Class Indiana.CapsuleShape
// 0x0010 (0x0040 - 0x0030)
class UCapsuleShape : public UShape
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.CapsuleShape");
		return ptr;
	}

};


// Class Indiana.SharedWeaponVisuals
// 0x0000 (0x0200 - 0x0200)
class USharedWeaponVisuals : public UWeaponVisuals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SharedWeaponVisuals");
		return ptr;
	}

};


// Class Indiana.ShipDoor
// 0x0060 (0x03E8 - 0x0388)
class AShipDoor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0388(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShipDoor");
		return ptr;
	}

};


// Class Indiana.ShipFastTravelPointComponent
// 0x0000 (0x02B0 - 0x02B0)
class UShipFastTravelPointComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShipFastTravelPointComponent");
		return ptr;
	}

};


// Class Indiana.ShipFastTravelPoint
// 0x0008 (0x03C0 - 0x03B8)
class AShipFastTravelPoint : public ABasicMapFloorTrackedActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShipFastTravelPoint");
		return ptr;
	}

};


// Class Indiana.ShipLocation
// 0x0078 (0x0400 - 0x0388)
class AShipLocation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0388(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShipLocation");
		return ptr;
	}


	void STATIC_ShipLocationDeactivated();
	void STATIC_ShipLocationActivated();
	void STATIC_OnShipLocationChanged(class UShipDestinationData* NewLocation);
};


// Class Indiana.ShipTerminal
// 0x0078 (0x0400 - 0x0388)
class AShipTerminal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0388(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShipTerminal");
		return ptr;
	}

};


// Class Indiana.ShipTravelData
// 0x0058 (0x0090 - 0x0038)
class UShipTravelData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShipTravelData");
		return ptr;
	}

};


// Class Indiana.ShipTravelDataCollection
// 0x0070 (0x00A8 - 0x0038)
class UShipTravelDataCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShipTravelDataCollection");
		return ptr;
	}

};


// Class Indiana.SkeletalMeshModVisual
// 0x0030 (0x00F0 - 0x00C0)
class USkeletalMeshModVisual : public UMeshModVisual
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkeletalMeshModVisual");
		return ptr;
	}

};


// Class Indiana.SkillAdjustment
// 0x0040 (0x02E8 - 0x02A8)
class USkillAdjustment : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillAdjustment");
		return ptr;
	}

};


// Class Indiana.SkillButtonEntryWidget
// 0x0020 (0x0438 - 0x0418)
class USkillButtonEntryWidget : public UStatsSkillButtonEntryBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0418(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillButtonEntryWidget");
		return ptr;
	}

};


// Class Indiana.SkillGroupDetailWidget
// 0x0040 (0x0260 - 0x0220)
class USkillGroupDetailWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0220(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillGroupDetailWidget");
		return ptr;
	}


	void STATIC_OnSkillSelected();
};


// Class Indiana.SkillStatusEffect
// 0x0078 (0x0200 - 0x0188)
class USkillStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0188(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillStatusEffect");
		return ptr;
	}


	void STATIC_OnSpawnedEffectCleared(class UStatusEffect* SpawnedEffect);
};


// Class Indiana.SkillSummaryEntryWidget
// 0x0020 (0x0240 - 0x0220)
class USkillSummaryEntryWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0220(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillSummaryEntryWidget");
		return ptr;
	}

};


// Class Indiana.SkillUnlockEntryWidget
// 0x0058 (0x0300 - 0x02A8)
class USkillUnlockEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x02A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillUnlockEntryWidget");
		return ptr;
	}

};


// Class Indiana.SkillUnlockPanelMeter
// 0x0020 (0x02C8 - 0x02A8)
class USkillUnlockPanelMeter : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillUnlockPanelMeter");
		return ptr;
	}

};


// Class Indiana.SkillUnlockPanelWidget
// 0x0018 (0x02C0 - 0x02A8)
class USkillUnlockPanelWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkillUnlockPanelWidget");
		return ptr;
	}

};


// Class Indiana.SkinTone
// 0x0008 (0x0040 - 0x0038)
class USkinTone : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SkinTone");
		return ptr;
	}

};


// Class Indiana.SliderBase
// 0x0460 (0x0578 - 0x0118)
class USliderBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x460];                                     // 0x0118(0x0460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SliderBase");
		return ptr;
	}


	void STATIC_SetValue(float InValue);
	void STATIC_SetStepSize(float InValue);
	void STATIC_SetLocked(bool InValue);
	void STATIC_SetIndentHandle(bool InValue);
	void STATIC_SetAndCommitValue(float InValue);
	void STATIC_ModifySliderValue(float InValue);
	float GetValue();
};


// Class Indiana.IndianaSliderWidgetStyle
// 0x0390 (0x03C8 - 0x0038)
class UIndianaSliderWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0038(0x0390) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaSliderWidgetStyle");
		return ptr;
	}

};


// Class Indiana.SlideshowImageSet
// 0x0050 (0x0088 - 0x0038)
class USlideshowImageSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SlideshowImageSet");
		return ptr;
	}

};


// Class Indiana.SlideshowWidget
// 0x00C8 (0x03D0 - 0x0308)
class USlideshowWidget : public UConversationBaseWidget
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0308(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SlideshowWidget");
		return ptr;
	}


	void STATIC_SetSlideshowImagesAsset(class USlideshowImageSet* ImageSet);
	void STATIC_SetSlideshowImageKey(const class FString& ImageKey);
	void STATIC_OnSlideshowEnd(class UConversationInstance* Instance);
	void STATIC_OnCinematicSubtitleSettingChanged(bool bVisibleIn);
};


// Class Indiana.SpawnActorBehaviorStateInfo
// 0x0018 (0x0190 - 0x0178)
class USpawnActorBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0178(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnActorBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.SpawnActorRequestData
// 0x0018 (0x0098 - 0x0080)
class USpawnActorRequestData : public UDecisionTreeEQSRequestData
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnActorRequestData");
		return ptr;
	}

};


// Class Indiana.SpawnActorEventEffect
// 0x0010 (0x0040 - 0x0030)
class USpawnActorEventEffect : public UEventEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnActorEventEffect");
		return ptr;
	}

};


// Class Indiana.SpawnActorStatusEffect
// 0x0040 (0x01C8 - 0x0188)
class USpawnActorStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0188(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnActorStatusEffect");
		return ptr;
	}

};


// Class Indiana.SpawnHazardStatusEffect
// 0x0050 (0x01D8 - 0x0188)
class USpawnHazardStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0188(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnHazardStatusEffect");
		return ptr;
	}

};


// Class Indiana.SpawnSource
// 0x0000 (0x0030 - 0x0030)
class USpawnSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnSource");
		return ptr;
	}

};


// Class Indiana.TrackedSpawn
// 0x0000 (0x0030 - 0x0030)
class UTrackedSpawn : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TrackedSpawn");
		return ptr;
	}

};


// Class Indiana.SpawnNodeComponent
// 0x0000 (0x02B0 - 0x02B0)
class USpawnNodeComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpawnNodeComponent");
		return ptr;
	}

};


// Class Indiana.SpeakerGameDataReference
// 0x0000 (0x0050 - 0x0050)
class USpeakerGameDataReference : public UGameDataReference
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpeakerGameDataReference");
		return ptr;
	}


	class FString GetWwiseChatterVoiceOverride();
	class FString GetWwiseChatterEventOverride();
	class FString GetInGameNameWithGender(EGender CharacterGender);
	int GetInGameNameID();
	class FString GetInGameName();
	EGender GetGender();
	class FString GetChatterPrefix();
	struct FGuid GetChatterFile();
	ECharacterGrouping GetCharacterGrouping();
};


// Class Indiana.Spell
// 0x0170 (0x01A0 - 0x0030)
class USpell : public UObject
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0030(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Spell");
		return ptr;
	}

};


// Class Indiana.SpellConditional
// 0x0008 (0x0038 - 0x0030)
class USpellConditional : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional");
		return ptr;
	}

};


// Class Indiana.SpellConditional_CreatureType
// 0x0028 (0x0060 - 0x0038)
class USpellConditional_CreatureType : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_CreatureType");
		return ptr;
	}

};


// Class Indiana.SpellConditional_Health
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_Health : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_Health");
		return ptr;
	}

};


// Class Indiana.SpellConditional_Encumbrance
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_Encumbrance : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_Encumbrance");
		return ptr;
	}

};


// Class Indiana.SpellConditional_MeleeWeaponCategory
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_MeleeWeaponCategory : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_MeleeWeaponCategory");
		return ptr;
	}

};


// Class Indiana.SpellConditional_NumCompanions
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_NumCompanions : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_NumCompanions");
		return ptr;
	}

};


// Class Indiana.SpellConditional_RandomChance
// 0x0010 (0x0048 - 0x0038)
class USpellConditional_RandomChance : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_RandomChance");
		return ptr;
	}

};


// Class Indiana.SpellConditional_MinSkill
// 0x0010 (0x0048 - 0x0038)
class USpellConditional_MinSkill : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_MinSkill");
		return ptr;
	}

};


// Class Indiana.SpellConditional_HasStatusEffect
// 0x0010 (0x0048 - 0x0038)
class USpellConditional_HasStatusEffect : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_HasStatusEffect");
		return ptr;
	}

};


// Class Indiana.SpellConditional_HasSpell
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_HasSpell : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_HasSpell");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsPlayer
// 0x0000 (0x0038 - 0x0038)
class USpellConditional_IsPlayer : public USpellConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsPlayer");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsFacingCaster
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_IsFacingCaster : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsFacingCaster");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsDifficulty
// 0x0010 (0x0048 - 0x0038)
class USpellConditional_IsDifficulty : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsDifficulty");
		return ptr;
	}

};


// Class Indiana.SpellConditional_HostileStatusEffect
// 0x0000 (0x0038 - 0x0038)
class USpellConditional_HostileStatusEffect : public USpellConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_HostileStatusEffect");
		return ptr;
	}

};


// Class Indiana.SpellConditional_TTDMeter
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_TTDMeter : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_TTDMeter");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsInCombatWithPlayer
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_IsInCombatWithPlayer : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsInCombatWithPlayer");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsPacifist
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_IsPacifist : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsPacifist");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsHostileToPlayer
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_IsHostileToPlayer : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsHostileToPlayer");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsHostileToCaster
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_IsHostileToCaster : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsHostileToCaster");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsOnPlayerShip
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_IsOnPlayerShip : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsOnPlayerShip");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsCompanion
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_IsCompanion : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsCompanion");
		return ptr;
	}

};


// Class Indiana.SpellConditional_RosterSize
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_RosterSize : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_RosterSize");
		return ptr;
	}

};


// Class Indiana.SpellConditional_FlawCount
// 0x0008 (0x0040 - 0x0038)
class USpellConditional_FlawCount : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_FlawCount");
		return ptr;
	}

};


// Class Indiana.SpellConditional_IsAmmoTypeEquipped
// 0x0010 (0x0048 - 0x0038)
class USpellConditional_IsAmmoTypeEquipped : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_IsAmmoTypeEquipped");
		return ptr;
	}

};


// Class Indiana.SpellConditional_CheckGlobalVariable
// 0x0018 (0x0050 - 0x0038)
class USpellConditional_CheckGlobalVariable : public USpellConditional
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellConditional_CheckGlobalVariable");
		return ptr;
	}

};


// Class Indiana.SpellManagerComponent
// 0x0160 (0x0278 - 0x0118)
class USpellManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0118(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellManagerComponent");
		return ptr;
	}

};


// Class Indiana.SpellRemoveStatusEffect
// 0x0008 (0x0190 - 0x0188)
class USpellRemoveStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellRemoveStatusEffect");
		return ptr;
	}

};


// Class Indiana.SpellTargetBehaviorStateInfo
// 0x0000 (0x0178 - 0x0178)
class USpellTargetBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellTargetBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.SpellTargetRequestData
// 0x0018 (0x0098 - 0x0080)
class USpellTargetRequestData : public UDecisionTreeEQSRequestData
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpellTargetRequestData");
		return ptr;
	}

};


// Class Indiana.SpreadManagerComponent
// 0x0068 (0x0180 - 0x0118)
class USpreadManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0118(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SpreadManagerComponent");
		return ptr;
	}


	void STATIC_OnCombatStateChange(bool bInCombat, bool bRestoring);
	void STATIC_OnAttack(float DurationScalar);
};


// Class Indiana.StackSplittingWidget
// 0x01C0 (0x0470 - 0x02B0)
class UStackSplittingWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x02B0(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StackSplittingWidget");
		return ptr;
	}


	void STATIC_SetNewBackingMaterialHeight(float NewHeight);
	void STATIC_OnStackSplitMin();
	void STATIC_OnStackSplitMax();
	void STATIC_OnSliderValueChanged(const struct FSliderEvent& Event);
	void STATIC_OnInputConfirm();
	void STATIC_OnInputBack();
};


// Class Indiana.StageItem
// 0x0018 (0x0478 - 0x0460)
class AStageItem : public AItemVisualizer
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0460(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StageItem");
		return ptr;
	}

};


// Class Indiana.StaminaComponent
// 0x0028 (0x0140 - 0x0118)
class UStaminaComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StaminaComponent");
		return ptr;
	}


	void STATIC_StaminaReplenish(float Amount);
	void STATIC_StaminaConsume(float Amount);
	void STATIC_OnCauseDamage(const struct FCauseDamageInfo& CauseDamageInfo);
	float GetValue();
	float GetNormalizedValue();
	float GetMaxValue();
};


// Class Indiana.StandardAmmoPool
// 0x0038 (0x00B8 - 0x0080)
class UStandardAmmoPool : public UAmmoPoolBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StandardAmmoPool");
		return ptr;
	}

};


// Class Indiana.StasisLogicDataAsset
// 0x0090 (0x00C8 - 0x0038)
class UStasisLogicDataAsset : public UStasisLogicBaseDataAsset
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0038(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StasisLogicDataAsset");
		return ptr;
	}

};


// Class Indiana.StaticMeshModVisual
// 0x0030 (0x00F0 - 0x00C0)
class UStaticMeshModVisual : public UMeshModVisual
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StaticMeshModVisual");
		return ptr;
	}

};


// Class Indiana.StatModifierStatusEffect
// 0x00A8 (0x0230 - 0x0188)
class UStatModifierStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0188(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatModifierStatusEffect");
		return ptr;
	}


	void STATIC_OnSkillUpdated(ESkill UpdatedSkill, int NewValue);
};


// Class Indiana.StatsFlawSummaryWidget
// 0x0010 (0x02B8 - 0x02A8)
class UStatsFlawSummaryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatsFlawSummaryWidget");
		return ptr;
	}

};


// Class Indiana.StatsPerksPageWidget
// 0x00E8 (0x0390 - 0x02A8)
class UStatsPerksPageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x02A8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatsPerksPageWidget");
		return ptr;
	}


	void STATIC_OnRevertAllocationsClicked();
	void STATIC_OnInputBack();
	void STATIC_OnDeallocation();
	void STATIC_OnAllocation();
	void STATIC_OnAcceptAllocations();
};


// Class Indiana.StatsPerkSummaryWidget
// 0x0028 (0x02D0 - 0x02A8)
class UStatsPerkSummaryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatsPerkSummaryWidget");
		return ptr;
	}

};


// Class Indiana.StatsSkillsPageWidget
// 0x0070 (0x0448 - 0x03D8)
class UStatsSkillsPageWidget : public UCharacterSkillsBasePage
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x03D8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatsSkillsPageWidget");
		return ptr;
	}


	void STATIC_OnSkillUpdated(ESkill Skill, int Value);
	void STATIC_OnResetAllAllocations();
	void STATIC_OnPlayerLevelUp(int NewLevel);
	void STATIC_OnLedgerToggle();
	void STATIC_OnInputBack();
	void STATIC_OnAllocation();
};


// Class Indiana.StatsSkillSummaryWidget
// 0x0020 (0x02C8 - 0x02A8)
class UStatsSkillSummaryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatsSkillSummaryWidget");
		return ptr;
	}

};


// Class Indiana.StatsSummaryPageWidget
// 0x0040 (0x02E8 - 0x02A8)
class UStatsSummaryPageWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatsSummaryPageWidget");
		return ptr;
	}

};


// Class Indiana.StatusEffectApplier
// 0x0018 (0x0048 - 0x0030)
class UStatusEffectApplier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectApplier");
		return ptr;
	}

};


// Class Indiana.StatusEffectBarEntryWidget
// 0x0020 (0x02C8 - 0x02A8)
class UStatusEffectBarEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectBarEntryWidget");
		return ptr;
	}


	void STATIC_ResetWidgetState(float DesiredRenderOpacity);
	void STATIC_OnAnimComplete();
	void STATIC_AnimateOut();
	void STATIC_AnimateIn();
};


// Class Indiana.StatusEffectBarWidget
// 0x0098 (0x0340 - 0x02A8)
class UStatusEffectBarWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x02A8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectBarWidget");
		return ptr;
	}


	void STATIC_OnStatusEffectRemoved(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
	void STATIC_OnStatusEffectAdded(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
};


// Class Indiana.StatusEffectEntryWidget
// 0x0028 (0x02D0 - 0x02A8)
class UStatusEffectEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectEntryWidget");
		return ptr;
	}

};


// Class Indiana.StatusEffectManagerComponent
// 0x0088 (0x01A0 - 0x0118)
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0118(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectManagerComponent");
		return ptr;
	}


	void STATIC_RemoveStatusEffectsOfClass(class UClass* Data);
	void STATIC_PreventHostileStatusEffectsOnCompanions(bool bPreventHostileStatusEffectsIn, bool bShouldClear);
	void STATIC_PreventHostileStatusEffectsNPC(bool bPreventHostileStatusEffectsIn, bool bShouldClear);
	void STATIC_PreventHostileStatusEffects(bool bPreventHostileStatusEffectsIn, bool bShouldClear);
	void STATIC_PreventAllStatusEffectsOnCompanions(bool bPreventStatusEffectsIn, bool bShouldClear);
	void STATIC_PreventAllStatusEffectsNPC(bool bPreventStatusEffectsIn, bool bShouldClear);
	void STATIC_PreventAllStatusEffects(bool bPreventStatusEffectsIn, bool bShouldClear);
	void STATIC_OnRestoredStateOfBeing(EStateOfBeing RestoredStateOfBeing);
	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_ClearStatusEffectOnCompanions(const class FString& Name);
	void STATIC_ClearStatusEffectNPC(const class FString& Name);
	void STATIC_ClearStatusEffect(const class FString& Name);
	void STATIC_ClearAllStatusEffectsOnCompanions(bool bOnlyHostile);
	void STATIC_ClearAllStatusEffectsNPC(bool bOnlyHostile);
	void STATIC_ClearAllStatusEffects(bool bOnlyHostile);
	class UStatusEffect* BPAddEffect(class UClass* Data, const TScriptInterface<class UStatusEffectOrigin>& Origin, const struct FDynamicEffectProperties& AddProperties);
	void STATIC_AddStatusEffectToCompanions(const class FString& Name);
	void STATIC_AddStatusEffectNPC(const class FString& Name);
	void STATIC_AddStatusEffect(const class FString& Name);
};


// Class Indiana.StatusEffectOrigin
// 0x0000 (0x0030 - 0x0030)
class UStatusEffectOrigin : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectOrigin");
		return ptr;
	}

};


// Class Indiana.StatusEffectRemove
// 0x0008 (0x0190 - 0x0188)
class UStatusEffectRemove : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectRemove");
		return ptr;
	}

};


// Class Indiana.StatusEffectTagEntryWidget
// 0x0020 (0x02C8 - 0x02A8)
class UStatusEffectTagEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectTagEntryWidget");
		return ptr;
	}


	void STATIC_OnImageSet();
};


// Class Indiana.StatusEffectTagWidget
// 0x0068 (0x0310 - 0x02A8)
class UStatusEffectTagWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectTagWidget");
		return ptr;
	}


	void STATIC_OnStatusEffectRemoved(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
	void STATIC_OnStatusEffectAdded(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
};


// Class Indiana.StatusEffectTarget
// 0x0000 (0x0030 - 0x0030)
class UStatusEffectTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectTarget");
		return ptr;
	}

};


// Class Indiana.StatusEffectUIVisualsData
// 0x0040 (0x0078 - 0x0038)
class UStatusEffectUIVisualsData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusEffectUIVisualsData");
		return ptr;
	}

};


// Class Indiana.StatusTagActor
// 0x0020 (0x03B0 - 0x0390)
class AStatusTagActor : public APooledActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0390(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusTagActor");
		return ptr;
	}

};


// Class Indiana.StatusTagAwarenessWidget
// 0x00C8 (0x0370 - 0x02A8)
class UStatusTagAwarenessWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x02A8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusTagAwarenessWidget");
		return ptr;
	}


	void STATIC_SetTextures(class UTexture2D* BackingTexture, class UTexture2D* FillTexture);
	void STATIC_SetTalkImage(class UTexture2D* TalkTexture);
};


// Class Indiana.StatusTagGenerator
// 0x0060 (0x0090 - 0x0030)
class UStatusTagGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusTagGenerator");
		return ptr;
	}

};


// Class Indiana.StatusTagWidget
// 0x0100 (0x03A8 - 0x02A8)
class UStatusTagWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x02A8(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusTagWidget");
		return ptr;
	}


	void STATIC_OnSetPlayerTargeted(bool bIsTarget);
	void STATIC_OnMeterVisibilityChanged(bool bVisible);
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnHealthBarModeChanged(int ModeIn);
	void STATIC_OnCombatStateChanged(bool bCombatIn, bool bRestoring);
};


// Class Indiana.StatusWidgetComponent
// 0x0010 (0x0790 - 0x0780)
class UStatusWidgetComponent : public UIndianaWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StatusWidgetComponent");
		return ptr;
	}

};


// Class Indiana.StealthComponent
// 0x0158 (0x0270 - 0x0118)
class UStealthComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0118(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StealthComponent");
		return ptr;
	}


	void STATIC_OnStopStealth();
	void STATIC_OnStartStealth();
	void STATIC_OnPickpocketDetectionChange(class AActor* TargetActor, EAlertState PreviousAlertState, EAlertState TargetAlertState, bool bRestoring);
	void STATIC_OnBumped(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class Indiana.SteamDLCManager
// 0x0028 (0x0078 - 0x0050)
class USteamDLCManager : public UDLCManager
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SteamDLCManager");
		return ptr;
	}

};


// Class Indiana.StringTableBundleSet
// 0x0058 (0x0090 - 0x0038)
class UStringTableBundleSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.StringTableBundleSet");
		return ptr;
	}

};


// Class Indiana.SubtitleData
// 0x0020 (0x0058 - 0x0038)
class USubtitleData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SubtitleData");
		return ptr;
	}

};


// Class Indiana.SubtitleEntryWidget
// 0x0008 (0x02B0 - 0x02A8)
class USubtitleEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SubtitleEntryWidget");
		return ptr;
	}

};


// Class Indiana.SubtitleManagerWidget
// 0x0098 (0x0348 - 0x02B0)
class USubtitleManagerWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x02B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SubtitleManagerWidget");
		return ptr;
	}


	void STATIC_OnCinematicSubtitleVisibilityChanged(bool bVisible);
};


// Class Indiana.SubtitlesWidget
// 0x0170 (0x0418 - 0x02A8)
class USubtitlesWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x02A8(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SubtitlesWidget");
		return ptr;
	}


	void STATIC_SetSizeBoxRatio(float HorizontalRatio, float VerticalRatio);
	void STATIC_OnBarkSubtitleVisibilityChanged(bool bVisible);
};


// Class Indiana.SuppressableInterface
// 0x0000 (0x0030 - 0x0030)
class USuppressableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SuppressableInterface");
		return ptr;
	}

};


// Class Indiana.SuppressRandomPlayerPerkStatusEffect
// 0x0010 (0x0198 - 0x0188)
class USuppressRandomPlayerPerkStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SuppressRandomPlayerPerkStatusEffect");
		return ptr;
	}

};


// Class Indiana.SuppressStatusEffect
// 0x0000 (0x0188 - 0x0188)
class USuppressStatusEffect : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SuppressStatusEffect");
		return ptr;
	}

};


// Class Indiana.SurvivalBarGroupWidget
// 0x0050 (0x02F8 - 0x02A8)
class USurvivalBarGroupWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SurvivalBarGroupWidget");
		return ptr;
	}


	void STATIC_OnSubSurvivalBarUpdated();
	void STATIC_OnDifficultyChanged(EGameDifficulty NewDifficulty);
};


// Class Indiana.SurvivalBarWidget
// 0x0038 (0x02E0 - 0x02A8)
class USurvivalBarWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SurvivalBarWidget");
		return ptr;
	}


	void STATIC_OnDifficultyChanged(EGameDifficulty DifficultyIn);
};


// Class Indiana.SuspiciousBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class USuspiciousBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SuspiciousBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.SuspiciousRequestData
// 0x0008 (0x0070 - 0x0068)
class USuspiciousRequestData : public UDecisionTreeEmptyRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SuspiciousRequestData");
		return ptr;
	}

};


// Class Indiana.Switch
// 0x0098 (0x0420 - 0x0388)
class ASwitch : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0388(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Switch");
		return ptr;
	}


	void STATIC_SetCurrentState(int NewState, class AActor* Initiator);
	int GetCurrentState();
	void STATIC_CycleNextState(class AActor* Initiator);
};


// Class Indiana.SwitchAudioComponent
// 0x0050 (0x01D8 - 0x0188)
class USwitchAudioComponent : public UInteractableAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0188(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SwitchAudioComponent");
		return ptr;
	}


	void STATIC_Stop(ESwitchEventType Type);
	void STATIC_Play(ESwitchEventType Type);
};


// Class Indiana.SwitchContextBehaviorStateInfo
// 0x0008 (0x0128 - 0x0120)
class USwitchContextBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SwitchContextBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.SwitchContextRequestData
// 0x0008 (0x0070 - 0x0068)
class USwitchContextRequestData : public UDecisionTreeEmptyRequestData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SwitchContextRequestData");
		return ptr;
	}

};


// Class Indiana.SwitchTargetBehaviorStateInfo
// 0x0000 (0x0120 - 0x0120)
class USwitchTargetBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SwitchTargetBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.SwitchTargetRequestData
// 0x0000 (0x0068 - 0x0068)
class USwitchTargetRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SwitchTargetRequestData");
		return ptr;
	}

};


// Class Indiana.SwitchWeaponBehaviorStateInfo
// 0x0018 (0x0138 - 0x0120)
class USwitchWeaponBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0120(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SwitchWeaponBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.SwitchWeaponRequestData
// 0x0018 (0x0080 - 0x0068)
class USwitchWeaponRequestData : public UDecisionTreeEmptyRequestData
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SwitchWeaponRequestData");
		return ptr;
	}

};


// Class Indiana.SymbolDescriptionPanelEntry
// 0x0018 (0x02C0 - 0x02A8)
class USymbolDescriptionPanelEntry : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SymbolDescriptionPanelEntry");
		return ptr;
	}

};


// Class Indiana.SymbolList
// 0x00F0 (0x03F0 - 0x0300)
class USymbolList : public UGenericCollapsableList
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0300(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SymbolList");
		return ptr;
	}

};


// Class Indiana.SystemMapData
// 0x0078 (0x00B0 - 0x0038)
class USystemMapData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapData");
		return ptr;
	}

};


// Class Indiana.SystemMapEntryWidget
// 0x0C60 (0x0F08 - 0x02A8)
class USystemMapEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC60];                                     // 0x02A8(0x0C60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapEntryWidget");
		return ptr;
	}

};


// Class Indiana.SystemMapInfoWidget
// 0x0020 (0x02C8 - 0x02A8)
class USystemMapInfoWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapInfoWidget");
		return ptr;
	}

};


// Class Indiana.SystemMapInterfaceWidget
// 0x0018 (0x02C8 - 0x02B0)
class USystemMapInterfaceWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapInterfaceWidget");
		return ptr;
	}

};


// Class Indiana.SystemMapObjectiveWidget
// 0x0010 (0x02B8 - 0x02A8)
class USystemMapObjectiveWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapObjectiveWidget");
		return ptr;
	}

};


// Class Indiana.SystemMapPlayerShipWidget
// 0x0048 (0x02F0 - 0x02A8)
class USystemMapPlayerShipWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapPlayerShipWidget");
		return ptr;
	}

};


// Class Indiana.SystemMapSelectionEntryWidget
// 0x0040 (0x02E8 - 0x02A8)
class USystemMapSelectionEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapSelectionEntryWidget");
		return ptr;
	}


	void STATIC_OnEntryUnhoveredUnfocused();
	void STATIC_OnEntryHoveredFocused();
};


// Class Indiana.SystemMapSelectionWidget
// 0x00E0 (0x0390 - 0x02B0)
class USystemMapSelectionWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x02B0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapSelectionWidget");
		return ptr;
	}

};


// Class Indiana.SystemMapWidget
// 0x0D30 (0x1190 - 0x0460)
class USystemMapWidget : public UMapBaseWidget
{
public:
	unsigned char                                      UnknownData00[0xD30];                                     // 0x0460(0x0D30) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.SystemMapWidget");
		return ptr;
	}

};


// Class Indiana.TacticalTimeDilationComponent
// 0x0170 (0x0288 - 0x0118)
class UTacticalTimeDilationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0118(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TacticalTimeDilationComponent");
		return ptr;
	}


	void STATIC_PreventTTD(bool bPrevent);
	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnPlayerConversationChange(class UConversationInstance* Instance, bool bEntered);
	void STATIC_OnDeath(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnAttack(float DurationScalar);
	void STATIC_EnableTimeDilation(bool bEnabled, bool bInstant, bool bForce);
	void STATIC_AttributeUpdated(EAttribute Attribute, int NewValue);
};


// Class Indiana.TalkManager
// 0x1EA8 (0x1ED8 - 0x0030)
class UTalkManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1EA8];                                    // 0x0030(0x1EA8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TalkManager");
		return ptr;
	}

};


// Class Indiana.TargetableComponent
// 0x0020 (0x0138 - 0x0118)
class UTargetableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TargetableComponent");
		return ptr;
	}


	void STATIC_OnStateOfBeingChanged(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnActionToggled(ETogglableAction ToggleActionType, bool bIsToggled);
};


// Class Indiana.TargetInfoComponent
// 0x0118 (0x0230 - 0x0118)
class UTargetInfoComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0118(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TargetInfoComponent");
		return ptr;
	}

};


// Class Indiana.TeamComponent
// 0x0118 (0x0230 - 0x0118)
class UTeamComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0118(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TeamComponent");
		return ptr;
	}


	void STATIC_SetRelationshipToPlayer(TEnumAsByte<ETeamAttitude> InRelationship, EChangeRelationshipSource InSource, ECrimeType InCrimeType);
	void STATIC_OnTakeDamage(const struct FCauseDamageInfo& DamageInfo);
	void STATIC_OnDetectedPlayerCrime(ECrimeType InCrimeType, bool bPlayerDisguised, EInterrogationResult InInterrogationResult);
	void STATIC_OnDeath(const struct FCauseDamageInfo& DamageInfo);
	TEnumAsByte<ETeamAttitude> GetRelationshipWithTeam(class UClass* InTeamData);
	TEnumAsByte<ETeamAttitude> GetRelationshipWithPlayer();
	TEnumAsByte<ETeamAttitude> GetRelationship(class AActor* InActor);
	void STATIC_ClearRelationshipToPlayer(EChangeRelationshipSource InSource);
	void STATIC_BPSetRelationshipToPlayer(class AIndianaAiCharacter* Character, TEnumAsByte<ETeamAttitude> Relationship);
	void STATIC_BPClearRelationshipToPlayer(class AIndianaAiCharacter* Character);
};


// Class Indiana.TeamData
// 0x01B8 (0x0238 - 0x0080)
class UTeamData : public UBaseTeamData
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0080(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TeamData");
		return ptr;
	}

};


// Class Indiana.TeamManager
// 0x0050 (0x0080 - 0x0030)
class UTeamManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TeamManager");
		return ptr;
	}


	void STATIC_BPSetRelationship(class UClass* SourceTeamData, class UClass* OtherTeamData, TEnumAsByte<ETeamAttitude> Relationship, bool bMutual);
	TEnumAsByte<ETeamAttitude> BPGetRelationship(class UClass* SourceTeamData, class UClass* OtherTeamData);
};


// Class Indiana.TelemetryComponent
// 0x0038 (0x0150 - 0x0118)
class UTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0118(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TelemetryComponent");
		return ptr;
	}


	void STATIC_OnVendorTransactionComplete(int BuyingBalance, int SellingBalance, int RepairingBalance, struct FItemStackSplit* ItemStackSplit);
	void STATIC_OnTakeDamage(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnTacticalTimeDialationStarted();
	void STATIC_OnTacticalTimeDialationEnded(float Duration);
	void STATIC_OnStartGameSession(const struct FGuid& Guid);
	void STATIC_OnPlayerZoneChange(const struct FVector& Location, const class FString& NewMapName, const class FString& OldMapName);
	void STATIC_OnPlayerMove(const struct FVector& Location, const class FString& MapName);
	void STATIC_OnMedKitUsed(int ConsumablesUsed);
	void STATIC_OnLevelChanged(int Level);
	void STATIC_OnEndGameSession(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_OnCombatStateChanged(bool bInCombat, bool bRestoring);
	void STATIC_OnCharacterKilled(const struct FCauseDamageInfo& CauseDamageInfo);
};


// Class Indiana.TelemetryManager
// 0x0040 (0x0070 - 0x0030)
class UTelemetryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TelemetryManager");
		return ptr;
	}


	void STATIC_SendDataKeys();
};


// Class Indiana.TeleportBehaviorStateInfo
// 0x0010 (0x0130 - 0x0120)
class UTeleportBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TeleportBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.TeleportRequestData
// 0x0010 (0x0078 - 0x0068)
class UTeleportRequestData : public UDecisionTreeEmptyRequestData
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TeleportRequestData");
		return ptr;
	}

};


// Class Indiana.TemporaryActor
// 0x0000 (0x0388 - 0x0388)
class ATemporaryActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TemporaryActor");
		return ptr;
	}

};


// Class Indiana.TestAudioDataTypeReference
// 0x0000 (0x0050 - 0x0050)
class UTestAudioDataTypeReference : public UGameDataReference
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TestAudioDataTypeReference");
		return ptr;
	}


	class FString GetTestAudioState();
	class FString GetTestAudioEvent();
	class FString GetTestAudioEnvironment();
	class FString GetTestAudioBank();
};


// Class Indiana.TestAudioComponent
// 0x0000 (0x0118 - 0x0118)
class UTestAudioComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TestAudioComponent");
		return ptr;
	}

};


// Class Indiana.TetherBehaviorStateInfo
// 0x0000 (0x0178 - 0x0178)
class UTetherBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TetherBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.TetherRequestData
// 0x0000 (0x0080 - 0x0080)
class UTetherRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TetherRequestData");
		return ptr;
	}

};


// Class Indiana.TextBlockBase
// 0x0250 (0x0388 - 0x0138)
class UTextBlockBase : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0138(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TextBlockBase");
		return ptr;
	}


	void STATIC_UseTextStyleShadowOffset(bool bShouldUse);
	void STATIC_UseTextStyleOutline(bool bShouldUse);
	void STATIC_SetTextByLocString(const struct FLocString& LocString);
	void STATIC_SetText(const class FString& inString);
	void STATIC_SetShadowOffset(const struct FVector2D& InShadowOffset);
	void STATIC_SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void STATIC_SetOutline(const struct FFontOutlineSettings& OutlineSettings);
	void STATIC_SetOpacity(float InOpacity);
	void STATIC_SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void STATIC_SetFont(const struct FSlateFontInfo& InFontInfo);
	void STATIC_SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	bool IsEmpty();
	struct FText GetText();
	struct FSlateFontInfo GetFont();
	struct FSlateColor GetColorAndOpacity();
};


// Class Indiana.IndianaTextBlockWidgetStyle
// 0x01F0 (0x0228 - 0x0038)
class UIndianaTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0038(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.IndianaTextBlockWidgetStyle");
		return ptr;
	}

};


// Class Indiana.TextEntryWidget
// 0x0070 (0x0318 - 0x02A8)
class UTextEntryWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TextEntryWidget");
		return ptr;
	}


	void STATIC_OnTextfieldCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitType);
	void STATIC_OnTextfieldChanged(const struct FText& Text);
};


// Class Indiana.TextSectionWidget
// 0x0018 (0x0248 - 0x0230)
class UTextSectionWidget : public URadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TextSectionWidget");
		return ptr;
	}

};


// Class Indiana.ThreatStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UThreatStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ThreatStatusEffect");
		return ptr;
	}

};


// Class Indiana.TimeDilationComponent
// 0x00A8 (0x01C0 - 0x0118)
class UTimeDilationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0118(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TimeDilationComponent");
		return ptr;
	}


	void STATIC_TimeDilatePlayer(float Dilation);
	void STATIC_SlomoWorld(float Dilation);
	void STATIC_OnTimeDilationStart();
	void STATIC_OnTimeDilationEnd();
};


// Class Indiana.TinkeringWidget
// 0x0098 (0x0348 - 0x02B0)
class UTinkeringWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x02B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TinkeringWidget");
		return ptr;
	}


	void STATIC_SetNewBackingMaterialHeight(float NewHeight);
};


// Class Indiana.ToggleActionStatusEffect
// 0x0010 (0x0198 - 0x0188)
class UToggleActionStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ToggleActionStatusEffect");
		return ptr;
	}

};


// Class Indiana.ToolTipContainerWidget
// 0x0030 (0x02D8 - 0x02A8)
class UToolTipContainerWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ToolTipContainerWidget");
		return ptr;
	}

};


// Class Indiana.OverrideRotationSpeedAnimMetaData
// 0x0008 (0x0038 - 0x0030)
class UOverrideRotationSpeedAnimMetaData : public UAnimMetaData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.OverrideRotationSpeedAnimMetaData");
		return ptr;
	}

};


// Class Indiana.TracerSoundData
// 0x0018 (0x0050 - 0x0038)
class UTracerSoundData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TracerSoundData");
		return ptr;
	}

};


// Class Indiana.Trap
// 0x0330 (0x06B8 - 0x0388)
class ATrap : public AActor
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x0388(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Trap");
		return ptr;
	}


	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnNewStateOfBeing(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_OnActivatorTrackingShapeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_OnActivatorTrackingShapeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_OnActivationShapeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_OnActivationShapeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsRearming();
	bool IsDetonationPending();
	unsigned char GetExactTrapDifficulty();
	ETrapState GetCurrentState();
	class UShapeComponent* GetActivatorTrackingShapeComponent();
	class UShapeComponent* GetActivationShapeComponent();
	void STATIC_DisarmTrap(class AIndianaCharacter* Initiator, bool bFireTrapDisarmedEvent);
	void STATIC_DeactivateTrap(class AIndianaCharacter* Initiator, bool bFireTrapDeactivatedEvent);
	void STATIC_ArmTrap(class AIndianaCharacter* Initiator, bool bFireTrapArmedEvent);
};


// Class Indiana.TrapAudioComponent
// 0x0050 (0x01D8 - 0x0188)
class UTrapAudioComponent : public UInteractableAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0188(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TrapAudioComponent");
		return ptr;
	}


	void STATIC_Stop(ETrapEventType Type);
	void STATIC_Play(ETrapEventType Type);
};


// Class Indiana.TrapEffectSource
// 0x0000 (0x0030 - 0x0030)
class UTrapEffectSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TrapEffectSource");
		return ptr;
	}


	void STATIC_ReceiveTriggerUntripped();
	void STATIC_ReceiveTriggerTripped();
	void STATIC_ReceiveTriggerDisarmed();
	void STATIC_ReceiveTriggerArmed();
	void STATIC_ReceivePreDeploy();
	void STATIC_ReceiveDeployOrder();
	void STATIC_GetCurrentActivators(TArray<class AIndianaCharacter*>* OutActivators);
};


// Class Indiana.TrapTerminal
// 0x0020 (0x0520 - 0x0500)
class ATrapTerminal : public AComputerTerminal
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0500(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TrapTerminal");
		return ptr;
	}

};


// Class Indiana.TrapTrigger
// 0x0120 (0x04A8 - 0x0388)
class ATrapTrigger : public AActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0388(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TrapTrigger");
		return ptr;
	}


	void STATIC_OnActivatorTrackingShapeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_OnActivatorTrackingShapeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_OnActivationShapeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_OnActivationShapeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsRearming();
	bool IsDeploymentPending();
	ETrapTriggerState GetCurrentState();
	void STATIC_DisarmTrapTrigger(bool bAlertEffectSources);
	void STATIC_ChangeState(ETrapTriggerState State);
	void STATIC_ArmTrapTrigger();
};


// Class Indiana.TravelDestinationData
// 0x00A0 (0x00D8 - 0x0038)
class UTravelDestinationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0038(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TravelDestinationData");
		return ptr;
	}


	class FString GetDebugString();
};


// Class Indiana.ShipDestinationData
// 0x0008 (0x00E0 - 0x00D8)
class UShipDestinationData : public UTravelDestinationData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.ShipDestinationData");
		return ptr;
	}

};


// Class Indiana.TravelMapLayoutData
// 0x0060 (0x0098 - 0x0038)
class UTravelMapLayoutData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TravelMapLayoutData");
		return ptr;
	}

};


// Class Indiana.TravelRegionData
// 0x0028 (0x0060 - 0x0038)
class UTravelRegionData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TravelRegionData");
		return ptr;
	}

};


// Class Indiana.TravelTriggerComponent
// 0x0020 (0x0138 - 0x0118)
class UTravelTriggerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TravelTriggerComponent");
		return ptr;
	}


	void STATIC_OnOverlapActor(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_OnOpen(class AActor* OpeningActor);
	void STATIC_OnInteract(const struct FInteractionDescription& Description);
	class FString GetDebugString();
	class FString GetAreaName();
	class FString GetAreaDescription();
};


// Class Indiana.TTDEnemyScanner
// 0x00C0 (0x0368 - 0x02A8)
class UTTDEnemyScanner : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x02A8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TTDEnemyScanner");
		return ptr;
	}


	void STATIC_StopFactionImageAnimation();
	void STATIC_ScanEnded();
	void STATIC_ScanCompleted();
	void STATIC_OnTTDScannerVisibilityChanged(bool bVisible);
	void STATIC_OnMakeVisible();
	void STATIC_OnMakeInvisible();
	void STATIC_OnMadeInvisible();
	void STATIC_OnHUDVisibilityChanged(bool bVisible);
	void STATIC_OnFactionImageLoaded();
	void STATIC_OnActiveScannerTargetChanged();
};


// Class Indiana.TTDStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UTTDStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TTDStatusEffect");
		return ptr;
	}

};


// Class Indiana.TTDStatusEffectsWidget
// 0x0018 (0x02C0 - 0x02A8)
class UTTDStatusEffectsWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TTDStatusEffectsWidget");
		return ptr;
	}


	void STATIC_OnStatusEffectRemoved(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
	void STATIC_OnStatusEffectAdded(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
};


// Class Indiana.TutorialDataAsset
// 0x0240 (0x0278 - 0x0038)
class UTutorialDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0038(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TutorialDataAsset");
		return ptr;
	}

};


// Class Indiana.TutorialList
// 0x0040 (0x0340 - 0x0300)
class UTutorialList : public UGenericCollapsableList
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0300(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TutorialList");
		return ptr;
	}


	void STATIC_AddNewCompletedTutorial(ETutorialEvent TutorialEvent);
};


// Class Indiana.TutorialListContainer
// 0x0018 (0x02D0 - 0x02B8)
class UTutorialListContainer : public UGenericCollapsableListContainer
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TutorialListContainer");
		return ptr;
	}

};


// Class Indiana.TutorialManager
// 0x0200 (0x0230 - 0x0030)
class UTutorialManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0030(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TutorialManager");
		return ptr;
	}


	void STATIC_ShowTutorialEventMessage(ETutorialEvent TutorialEvent, bool bShowOncePerSession, bool bInfiniteDuration);
	void STATIC_PlayerTargetChange(bool bAdded);
	void STATIC_PlayerTakeDamage(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_PlayerSkillUpdated(ESkill Skill, int NewValue);
	void STATIC_PlayerSkillCheckSuccess(EXPGainReason Reason, int XPEarned, ESkill SkillUsed);
	void STATIC_PlayerMedKitUsed();
	void STATIC_PlayerLevelChanged(int NewLevel);
	void STATIC_PlayerLanded(float DistanceFell);
	void STATIC_PlayerKill(class AActor* Victim, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_PlayerItemAdded(const struct FItemStack& Item);
	void STATIC_PlayerHealthChanged(float HealthChanged, class AActor* Instigator);
	void STATIC_PlayerFinishedEquipping(class UWeapon* Weapon);
	void STATIC_PlayerEnteredRestrictedArea(class ARestrictedArea* RestrictedArea);
	void STATIC_PlayerEncumberedChanged(bool bEncumbered);
	void STATIC_PlayerDisguiseDrainEnd();
	void STATIC_PlayerCompanionKilled(class AActor* Companion);
	void STATIC_PlayerCompanionAdded(class AIndianaAiCharacter* NPC, bool bRegister);
	void STATIC_PlayerCombatStateChanged(bool bIsInCombat, bool bRestoring);
	void STATIC_PlayerCausedDamage(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_MarkTutorialEventComplete(ETutorialEvent TutorialEvent);
	void STATIC_ItemDamageStatusChange(EItemDegradationState DegredationState);
	bool IsTutorialEventCompleted(ETutorialEvent TutorialEvent);
	void STATIC_HideTutorialEventMessage(ETutorialEvent TutorialEvent);
};


// Class Indiana.TutorialPopupStyleWidget
// 0x0100 (0x03A8 - 0x02A8)
class UTutorialPopupStyleWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x02A8(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TutorialPopupStyleWidget");
		return ptr;
	}


	void STATIC_SetNewBackingMaterialHeight(float NewHeight);
	void STATIC_FadeInMascotImage();
};


// Class Indiana.TutorialPopupWidget
// 0x0048 (0x02F8 - 0x02B0)
class UTutorialPopupWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x02B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TutorialPopupWidget");
		return ptr;
	}

};


// Class Indiana.TutorialTriggerVolume
// 0x0008 (0x0430 - 0x0428)
class ATutorialTriggerVolume : public ATriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.TutorialTriggerVolume");
		return ptr;
	}

};


// Class Indiana.UglyStickStatusEffect
// 0x0018 (0x01A0 - 0x0188)
class UUglyStickStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0188(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UglyStickStatusEffect");
		return ptr;
	}

};


// Class Indiana.UIFlipBookData
// 0x0018 (0x0050 - 0x0038)
class UUIFlipBookData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UIFlipBookData");
		return ptr;
	}

};


// Class Indiana.UnlockAbilityStatusEffect
// 0x0008 (0x0190 - 0x0188)
class UUnlockAbilityStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.UnlockAbilityStatusEffect");
		return ptr;
	}

};


// Class Indiana.RenderThreadLoadingScreenWidget
// 0x01C0 (0x03E0 - 0x0220)
class URenderThreadLoadingScreenWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0220(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RenderThreadLoadingScreenWidget");
		return ptr;
	}

};


// Class Indiana.VendorComponent
// 0x00F8 (0x0210 - 0x0118)
class UVendorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0118(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.VendorComponent");
		return ptr;
	}


	void STATIC_SetVendorContainer(class AContainer* Container);
};


// Class Indiana.VendorWidget
// 0x0318 (0x05C8 - 0x02B0)
class UVendorWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x318];                                     // 0x02B0(0x0318) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.VendorWidget");
		return ptr;
	}


	void STATIC_UpdateSubnavigationActivation();
	void STATIC_OnStoreItemRemoved(const struct FItemStack& ItemStack);
	void STATIC_OnStoreItemAdded(const struct FItemStack& ItemStack);
	void STATIC_OnSetCurrentPage(EVendorPages Page, bool bAnimate);
	void STATIC_OnPlayerItemRemoved(const struct FItemStack& ItemStack);
	void STATIC_OnPlayerItemAdded(const struct FItemStack& ItemStack);
	void STATIC_OnItemInspectorClosed(class UItemInspectorWidget* ItemInspectorWidget);
	void STATIC_OnAnimationSoldJunk();
	void STATIC_OnAnimationSoldItem();
	void STATIC_OnAnimationRepairedItem();
	void STATIC_OnAnimationBoughtItem();
	void STATIC_FadeInFactionImage();
};


// Class Indiana.WaitAction
// 0x0008 (0x0040 - 0x0038)
class UWaitAction : public UAIAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WaitAction");
		return ptr;
	}

};


// Class Indiana.WaitTimeSliderWidget
// 0x0038 (0x02E0 - 0x02A8)
class UWaitTimeSliderWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WaitTimeSliderWidget");
		return ptr;
	}


	void STATIC_OnValueChanged(const struct FSliderEvent& Event);
};


// Class Indiana.WaitTimeWidget
// 0x0098 (0x0348 - 0x02B0)
class UWaitTimeWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x02B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WaitTimeWidget");
		return ptr;
	}


	void STATIC_OnSliderValueChanged(const struct FSliderEvent& Event);
	void STATIC_OnInputConfirm();
	void STATIC_OnInputBack();
};


// Class Indiana.WalkBehaviorStateInfo
// 0x0010 (0x0188 - 0x0178)
class UWalkBehaviorStateInfo : public UEQS_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WalkBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.WalkRequestData
// 0x0000 (0x0080 - 0x0080)
class UWalkRequestData : public UDecisionTreeEQSRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WalkRequestData");
		return ptr;
	}

};


// Class Indiana.WalkNavLink
// 0x0000 (0x03B8 - 0x03B8)
class AWalkNavLink : public AReservableNavLink
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WalkNavLink");
		return ptr;
	}

};


// Class Indiana.WanderBehaviorStateInfo
// 0x0020 (0x0140 - 0x0120)
class UWanderBehaviorStateInfo : public UEmpty_BehaviorStateInfo
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WanderBehaviorStateInfo");
		return ptr;
	}

};


// Class Indiana.WanderRequestData
// 0x0000 (0x0068 - 0x0068)
class UWanderRequestData : public UDecisionTreeEmptyRequestData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WanderRequestData");
		return ptr;
	}

};


// Class Indiana.WorkbenchPageWidget
// 0x0060 (0x03A8 - 0x0348)
class UWorkbenchPageWidget : public UBaseInventoryItemManagement
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0348(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WorkbenchPageWidget");
		return ptr;
	}


	void STATIC_OnItemRemoved(const struct FItemStack& ItemStack);
	void STATIC_OnDragDrop_SwapWeaponSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_SetWeaponSlot(class UIndianaDragDropOperation* Operation);
	void STATIC_OnDragDrop_ClearArmorSlot(class UIndianaDragDropOperation* Operation);
};


// Class Indiana.WBBreakdownPageWidget
// 0x0018 (0x03C0 - 0x03A8)
class UWBBreakdownPageWidget : public UWorkbenchPageWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WBBreakdownPageWidget");
		return ptr;
	}

};


// Class Indiana.WBModificationPageWidget
// 0x0028 (0x03D0 - 0x03A8)
class UWBModificationPageWidget : public UWorkbenchPageWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WBModificationPageWidget");
		return ptr;
	}

};


// Class Indiana.WBRepairPageWidget
// 0x0050 (0x03F8 - 0x03A8)
class UWBRepairPageWidget : public UWorkbenchPageWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WBRepairPageWidget");
		return ptr;
	}

};


// Class Indiana.WBUpgradePageWidget
// 0x0028 (0x03D0 - 0x03A8)
class UWBUpgradePageWidget : public UWorkbenchPageWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WBUpgradePageWidget");
		return ptr;
	}

};


// Class Indiana.Weapon
// 0x0480 (0x05A8 - 0x0128)
class UWeapon : public UDegradableItem
{
public:
	unsigned char                                      UnknownData00[0x480];                                     // 0x0128(0x0480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Weapon");
		return ptr;
	}


	void STATIC_OnStatUpdated(class URpgStat* Stat);
	void STATIC_OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent);
	bool IsUnequipping();
	bool IsOnActiveWorld();
	bool IsNearbyEvidence();
	bool IsHealGun();
	bool IsEquipping();
	class UWeaponModContainer* GetWeaponModContainer();
	class URpgStatComponent* GetStats();
	float GetRadialDamageOuterRadius();
	float GetProjectileCollisionRadius();
	class UWeaponMode* GetPrimaryMode();
	class USkeletalMeshComponent* GetMesh();
	class UPrimaryWeaponVisuals* GetCurrentVisuals();
	class UWeaponMode* GetCurrentMode();
	class UCharacterInfoComponent* GetCharacterInfoComponent();
	class UAmmoPoolBase* GetAmmoPool();
	class UAISettings_Weapon* GetAISettings(class AIndianaAiCharacter* InOwner);
};


// Class Indiana.WeaponAnimations
// 0x00A0 (0x02A0 - 0x0200)
class UWeaponAnimations : public UWeaponVisuals
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0200(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponAnimations");
		return ptr;
	}

};


// Class Indiana.WeaponAnimationsCreature
// 0x0030 (0x02D0 - 0x02A0)
class UWeaponAnimationsCreature : public UWeaponAnimations
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponAnimationsCreature");
		return ptr;
	}

};


// Class Indiana.WeaponAnimationSet
// 0x0038 (0x0070 - 0x0038)
class UWeaponAnimationSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponAnimationSet");
		return ptr;
	}

};


// Class Indiana.WeaponAnimationsFPV
// 0x01C0 (0x0460 - 0x02A0)
class UWeaponAnimationsFPV : public UWeaponAnimations
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x02A0(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponAnimationsFPV");
		return ptr;
	}

};


// Class Indiana.WeaponAnimationsTPV
// 0x01C8 (0x0498 - 0x02D0)
class UWeaponAnimationsTPV : public UWeaponAnimationsCreature
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x02D0(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponAnimationsTPV");
		return ptr;
	}

};


// Class Indiana.WeaponAnimInstance
// 0x0040 (0x03B0 - 0x0370)
class UWeaponAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponAnimInstance");
		return ptr;
	}


	bool WeaponCharging();
};


// Class Indiana.WeaponAudio
// 0x0000 (0x0200 - 0x0200)
class UWeaponAudio : public UWeaponVisuals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponAudio");
		return ptr;
	}

};


// Class Indiana.WeaponMod
// 0x00B8 (0x01D0 - 0x0118)
class UWeaponMod : public UItem
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0118(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponMod");
		return ptr;
	}

};


// Class Indiana.RangedBarrelMod
// 0x0000 (0x01D0 - 0x01D0)
class URangedBarrelMod : public UWeaponMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangedBarrelMod");
		return ptr;
	}

};


// Class Indiana.RangedUnderbarrelMod
// 0x0000 (0x01D0 - 0x01D0)
class URangedUnderbarrelMod : public UWeaponMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangedUnderbarrelMod");
		return ptr;
	}

};


// Class Indiana.RangedSightMod
// 0x0000 (0x01D0 - 0x01D0)
class URangedSightMod : public UWeaponMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangedSightMod");
		return ptr;
	}

};


// Class Indiana.RangedMagazineMod
// 0x0000 (0x01D0 - 0x01D0)
class URangedMagazineMod : public UWeaponMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.RangedMagazineMod");
		return ptr;
	}

};


// Class Indiana.MeleeGripMod
// 0x0000 (0x01D0 - 0x01D0)
class UMeleeGripMod : public UWeaponMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeGripMod");
		return ptr;
	}

};


// Class Indiana.MeleeAttackMod
// 0x0000 (0x01D0 - 0x01D0)
class UMeleeAttackMod : public UWeaponMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.MeleeAttackMod");
		return ptr;
	}

};


// Class Indiana.WeaponModContainer
// 0x0080 (0x00B0 - 0x0030)
class UWeaponModContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponModContainer");
		return ptr;
	}

};


// Class Indiana.WeaponRadialSectionWidget
// 0x0010 (0x0240 - 0x0230)
class UWeaponRadialSectionWidget : public URadialSectionWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponRadialSectionWidget");
		return ptr;
	}

};


// Class Indiana.WeaponSelectWidget
// 0x0190 (0x0438 - 0x02A8)
class UWeaponSelectWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x02A8(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponSelectWidget");
		return ptr;
	}


	void STATIC_OnInputBack();
	bool IsWeaponSectionValid(int Index);
	bool IsSectionValid(int Index);
	bool IsAmmoSectionValid(int Index);
	bool HasAmmo();
};


// Class Indiana.WeaponStateWidget
// 0x0030 (0x02D8 - 0x02A8)
class UWeaponStateWidget : public UIndianaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponStateWidget");
		return ptr;
	}

};


// Class Indiana.WeaponStateWidgetComponent
// 0x0010 (0x0790 - 0x0780)
class UWeaponStateWidgetComponent : public UIndianaWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponStateWidgetComponent");
		return ptr;
	}

};


// Class Indiana.WeaponStatusEffectApplier
// 0x0018 (0x0060 - 0x0048)
class UWeaponStatusEffectApplier : public UStatusEffectApplier
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponStatusEffectApplier");
		return ptr;
	}

};


// Class Indiana.WeaponVisualStateModVisual
// 0x0010 (0x0078 - 0x0068)
class UWeaponVisualStateModVisual : public UModVisual
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WeaponVisualStateModVisual");
		return ptr;
	}

};


// Class Indiana.WindowsSaveGameManager
// 0x0020 (0x06B0 - 0x0690)
class UWindowsSaveGameManager : public USaveGameManager
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0690(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WindowsSaveGameManager");
		return ptr;
	}

};


// Class Indiana.Workbench
// 0x0010 (0x0398 - 0x0388)
class AWorkbench : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.Workbench");
		return ptr;
	}

};


// Class Indiana.WorkbenchTransactionDetails
// 0x0000 (0x02A8 - 0x02A8)
class UWorkbenchTransactionDetails : public UIndianaUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WorkbenchTransactionDetails");
		return ptr;
	}

};


// Class Indiana.WorkbenchWidget
// 0x0050 (0x0300 - 0x02B0)
class UWorkbenchWidget : public UIndianaInterfaceUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WorkbenchWidget");
		return ptr;
	}

};


// Class Indiana.WorldSpaceDamageTextGenerator
// 0x00D0 (0x0100 - 0x0030)
class UWorldSpaceDamageTextGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0030(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WorldSpaceDamageTextGenerator");
		return ptr;
	}

};


// Class Indiana.WorldSpaceDamageWidgetComponent
// 0x0000 (0x0780 - 0x0780)
class UWorldSpaceDamageWidgetComponent : public UIndianaWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WorldSpaceDamageWidgetComponent");
		return ptr;
	}

};


// Class Indiana.WormAnimInstance
// 0x0050 (0x0A40 - 0x09F0)
class UWormAnimInstance : public UTPVAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x09F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Indiana.WormAnimInstance");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
