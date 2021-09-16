#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Indiana_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Indiana.IndianaUserWidget.StartMinimize
struct UIndianaUserWidget_StartMinimize_Params
{
};

// Function Indiana.IndianaUserWidget.StartMaximize
struct UIndianaUserWidget_StartMaximize_Params
{
};

// Function Indiana.IndianaUserWidget.StartIntro
struct UIndianaUserWidget_StartIntro_Params
{
};

// Function Indiana.IndianaUserWidget.SetDefaultUserFocus
struct UIndianaUserWidget_SetDefaultUserFocus_Params
{
};

// Function Indiana.IndianaUserWidget.RestoreOrSetDefaultUserFocus
struct UIndianaUserWidget_RestoreOrSetDefaultUserFocus_Params
{
};

// Function Indiana.IndianaUserWidget.OnStartOutroCb
struct UIndianaUserWidget_OnStartOutroCb_Params
{
};

// Function Indiana.IndianaUserWidget.OnStartMinimizeCb
struct UIndianaUserWidget_OnStartMinimizeCb_Params
{
};

// Function Indiana.IndianaUserWidget.OnStartMaximizeCb
struct UIndianaUserWidget_OnStartMaximizeCb_Params
{
};

// Function Indiana.IndianaUserWidget.OnStartIntroCb
struct UIndianaUserWidget_OnStartIntroCb_Params
{
};

// Function Indiana.IndianaUserWidget.OnOutro
struct UIndianaUserWidget_OnOutro_Params
{
	struct FScriptDelegate                             AnimationCompleteCallback;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.OnMinimize
struct UIndianaUserWidget_OnMinimize_Params
{
	struct FScriptDelegate                             AnimationCompleteCallback;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.OnMaximize
struct UIndianaUserWidget_OnMaximize_Params
{
	struct FScriptDelegate                             AnimationCompleteCallback;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.OnIntro
struct UIndianaUserWidget_OnIntro_Params
{
	struct FScriptDelegate                             AnimationCompleteCallback;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.OnInputDeviceChanged
struct UIndianaUserWidget_OnInputDeviceChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.OnFinalizeOutroCb
struct UIndianaUserWidget_OnFinalizeOutroCb_Params
{
};

// Function Indiana.IndianaUserWidget.OnFinalizeMinimizeCb
struct UIndianaUserWidget_OnFinalizeMinimizeCb_Params
{
};

// Function Indiana.IndianaUserWidget.OnFinalizeMinimize
struct UIndianaUserWidget_OnFinalizeMinimize_Params
{
};

// Function Indiana.IndianaUserWidget.OnFinalizeMaximizeCb
struct UIndianaUserWidget_OnFinalizeMaximizeCb_Params
{
};

// Function Indiana.IndianaUserWidget.OnFinalizeMaximize
struct UIndianaUserWidget_OnFinalizeMaximize_Params
{
};

// Function Indiana.IndianaUserWidget.OnFinalizeIntroCb
struct UIndianaUserWidget_OnFinalizeIntroCb_Params
{
};

// Function Indiana.IndianaUserWidget.OnCounterZero
struct UIndianaUserWidget_OnCounterZero_Params
{
};

// Function Indiana.IndianaUserWidget.OnCounterNonZero
struct UIndianaUserWidget_OnCounterNonZero_Params
{
};

// Function Indiana.IndianaUserWidget.OnCancelShutdown
struct UIndianaUserWidget_OnCancelShutdown_Params
{
};

// Function Indiana.IndianaUserWidget.OnCancelMinimize
struct UIndianaUserWidget_OnCancelMinimize_Params
{
};

// Function Indiana.IndianaUserWidget.ObjectRefHasReferencers
struct UIndianaUserWidget_ObjectRefHasReferencers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.IsShuttingDown
struct UIndianaUserWidget_IsShuttingDown_Params
{
	bool                                               bIncludeTransitioning;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.IsMinimized
struct UIndianaUserWidget_IsMinimized_Params
{
	bool                                               bIncludeTransitioning;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.IsMaximized
struct UIndianaUserWidget_IsMaximized_Params
{
	bool                                               bIncludeTransitioning;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.GetOpenState
struct UIndianaUserWidget_GetOpenState_Params
{
	EWidgetOpenState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUserWidget.GetIndianaUI
struct UIndianaUserWidget_GetIndianaUI_Params
{
	class AIndianaUI*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AbilityOverviewChildWidget.OnAbilityCooldownComplete
struct UAbilityOverviewChildWidget_OnAbilityCooldownComplete_Params
{
};

// Function Indiana.AbilityOverviewChildWidget.ModifyPulseScale
struct UAbilityOverviewChildWidget_ModifyPulseScale_Params
{
	float                                              PulseScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewDetailWidget.OnAbilityUnlockChange
struct UAbilityOverviewDetailWidget_OnAbilityUnlockChange_Params
{
	EUnlockAbility                                     Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnPlayerCombatStateChange
struct UAbilityOverviewWidget_OnPlayerCombatStateChange_Params
{
	bool                                               IsPlayerInCombat;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnHUDVisibilityChanged
struct UAbilityOverviewWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnHUDModeChanged
struct UAbilityOverviewWidget_OnHUDModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnCompanionAbilityModeChanged
struct UAbilityOverviewWidget_OnCompanionAbilityModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnCompanionAbilityBindingModeChanged
struct UAbilityOverviewWidget_OnCompanionAbilityBindingModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnCommandButtonPressed
struct UAbilityOverviewWidget_OnCommandButtonPressed_Params
{
	EAbilityPosition                                   AbillityPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnAbilityUsed
struct UAbilityOverviewWidget_OnAbilityUsed_Params
{
	class UAbilityOverviewDetailWidget*                Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAbilityPosition                                   AbilityPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnAbilityCooldownTriggered
struct UAbilityOverviewWidget_OnAbilityCooldownTriggered_Params
{
	EAbilityPosition                                   AbilityPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnAbilityCooldownStarted
struct UAbilityOverviewWidget_OnAbilityCooldownStarted_Params
{
	EAbilityPosition                                   AbilityPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnAbilityCooldownFinished
struct UAbilityOverviewWidget_OnAbilityCooldownFinished_Params
{
	EAbilityPosition                                   AbillityPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AbilityOverviewWidget.OnAbilityCooldownEnded
struct UAbilityOverviewWidget_OnAbilityCooldownEnded_Params
{
	EAbilityPosition                                   AbilityPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AchievementsManager.ResetAchievements
struct UAchievementsManager_ResetAchievements_Params
{
};

// Function Indiana.AchievementsManager.OnWeaponSlotted
struct UAchievementsManager_OnWeaponSlotted_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AchievementsManager.OnKillPreDeath
struct UAchievementsManager_OnKillPreDeath_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AchievementsManager.OnItemEquipped
struct UAchievementsManager_OnItemEquipped_Params
{
	class UItem*                                       Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AchievementsManager.OnActiveUserChanged
struct UAchievementsManager_OnActiveUserChanged_Params
{
	EActiveUserChangeType                              ChangeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AchievementsManager.IncrementAchievement
struct UAchievementsManager_IncrementAchievement_Params
{
	struct FName                                       AchievementBPName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AchievementsManager.GameOver
struct UAchievementsManager_GameOver_Params
{
};

// Function Indiana.AchievementsManager.CompleteAchievementBP
struct UAchievementsManager_CompleteAchievementBP_Params
{
	class UAchievementDataAsset*                       Achievement;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AchievementsManager.CompleteAchievement
struct UAchievementsManager_CompleteAchievement_Params
{
	struct FName                                       AchievementBPName;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.ActorRenderWidget.OnMouseZoomOut
struct UActorRenderWidget_OnMouseZoomOut_Params
{
};

// Function Indiana.ActorRenderWidget.OnMouseZoomIn
struct UActorRenderWidget_OnMouseZoomIn_Params
{
};

// Function Indiana.ActorRenderWidget.OnGamepadToggleFullZoom
struct UActorRenderWidget_OnGamepadToggleFullZoom_Params
{
};

// Function Indiana.ActorRenderWidget.OnBorderMouseDown
struct UActorRenderWidget_OnBorderMouseDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ActorRenderWidget.CanZoom
struct UActorRenderWidget_CanZoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.StatusEffect.ReceiveClearEffect
struct UStatusEffect_ReceiveClearEffect_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffect.ReceiveApplyEffect
struct UStatusEffect_ReceiveApplyEffect_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoredFromSave;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffect.GetStatusEffectOriginActor
struct UStatusEffect_GetStatusEffectOriginActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AIDefensiveActionsComponent.OnTakeDamage
struct UAIDefensiveActionsComponent_OnTakeDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.AIDetectionComponent.OnPlayerKill
struct UAIDetectionComponent_OnPlayerKill_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.AIDetectionComponent.OnPerceptionUpdate
struct UAIDetectionComponent_OnPerceptionUpdate_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm)
};

// Function Indiana.AIDetectionComponent.OnDetectedNonHostileCombatStateChange
struct UAIDetectionComponent_OnDetectedNonHostileCombatStateChange_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AIInteractionComponent.OnNavigationPathUpdate
struct UAIInteractionComponent_OnNavigationPathUpdate_Params
{
};

// Function Indiana.AimAssistComponent.ToggleTrackQuickTarget
struct UAimAssistComponent_ToggleTrackQuickTarget_Params
{
};

// Function Indiana.AimAssistComponent.ToggleTargetStrafeLock
struct UAimAssistComponent_ToggleTargetStrafeLock_Params
{
};

// Function Indiana.AimAssistComponent.ToggleFriction
struct UAimAssistComponent_ToggleFriction_Params
{
};

// Function Indiana.AimAssistComponent.ToggleBulletMagnetism
struct UAimAssistComponent_ToggleBulletMagnetism_Params
{
};

// Function Indiana.AimAssistComponent.ToggleAimAssist
struct UAimAssistComponent_ToggleAimAssist_Params
{
};

// Function Indiana.AimAssistComponent.OnDifficultyChanged
struct UAimAssistComponent_OnDifficultyChanged_Params
{
	EGameDifficulty                                    NewDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AimAssistComponent.EnableAimAssist
struct UAimAssistComponent_EnableAimAssist_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AimAssistComponent.AimAssistVisualSpread
struct UAimAssistComponent_AimAssistVisualSpread_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AimAssistComponent.AimAssistVisualFriction
struct UAimAssistComponent_AimAssistVisualFriction_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AimAssistComponent.AimAssistVisualBulletMagnetism
struct UAimAssistComponent_AimAssistVisualBulletMagnetism_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AimAssistComponent.AimAssistVisualAdhesion
struct UAimAssistComponent_AimAssistVisualAdhesion_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCharMovementComponent.OnBumped
struct UIndianaCharMovementComponent_OnBumped_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.AIMovementComponent.OnRestoredStateOfBeing
struct UAIMovementComponent_OnRestoredStateOfBeing_Params
{
	EStateOfBeing                                      RestoredStateOfBeing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AIMovementComponent.OnNewStateOfBeing
struct UAIMovementComponent_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AIMovementComponent.OnExtremaEndOverlap
struct UAIMovementComponent_OnExtremaEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AIMovementComponent.OnExtremaBeginOverlap
struct UAIMovementComponent_OnExtremaBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.AISettingsComponent.OnUnequipWeapon
struct UAISettingsComponent_OnUnequipWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AISettingsComponent.OnEquipWeapon
struct UAISettingsComponent_OnEquipWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AlarmComponent.GetAlarmState
struct UAlarmComponent_GetAlarmState_Params
{
	EAlarmState                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Item.SetPlayerOwnership
struct UItem_SetPlayerOwnership_Params
{
	bool                                               bRemoveNonPlayerOwnership;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Item.SetOwnership
struct UItem_SetOwnership_Params
{
	class UClass*                                      Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class AActor>                       Actor;                                                    // (Parm)
	bool                                               bInPlayerOwned;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Item.SetNonPlayerOwnership
struct UItem_SetNonPlayerOwnership_Params
{
	class UClass*                                      Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class AActor>                       Actor;                                                    // (Parm)
	bool                                               bRemovePlayerOwnership;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Item.IsPlayerOwned
struct UItem_IsPlayerOwned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Item.GetOwningFaction
struct UItem_GetOwningFaction_Params
{
	class UClass*                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Item.GetOwningActor
struct UItem_GetOwningActor_Params
{
	TSoftObjectPtr<class AActor>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Indiana.Item.ClearPlayerOwnership
struct UItem_ClearPlayerOwnership_Params
{
};

// Function Indiana.Item.ClearNonPlayerOwnership
struct UItem_ClearNonPlayerOwnership_Params
{
};

// Function Indiana.Item.ClearAllOwnership
struct UItem_ClearAllOwnership_Params
{
};

// Function Indiana.Item.CanPlayerSafelyTake
struct UItem_CanPlayerSafelyTake_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AmmoPoolBase.UsesConsumables
struct UAmmoPoolBase_UsesConsumables_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AmmoPoolBase.UsesAmmo
struct UAmmoPoolBase_UsesAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AmmoPoolBase.OnTacticalTimeDilationEnd
struct UAmmoPoolBase_OnTacticalTimeDilationEnd_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AmmoPoolBase.IsReloading
struct UAmmoPoolBase_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AmmoPoolBase.GetCurrentPoolSize
struct UAmmoPoolBase_GetCurrentPoolSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AmmoPoolBase.GetCurrentConsumableClass
struct UAmmoPoolBase_GetCurrentConsumableClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AmmoPoolBase.GetCurrentAmmoClass
struct UAmmoPoolBase_GetCurrentAmmoClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AmmoPoolBase.GetBaseReloadTime
struct UAmmoPoolBase_GetBaseReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AmmoReadoutWidget.OnWeaponSwitch
struct UAmmoReadoutWidget_OnWeaponSwitch_Params
{
	class UWeapon*                                     EquippedWeapon;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AmmoReadoutWidget.OnReloadComplete
struct UAmmoReadoutWidget_OnReloadComplete_Params
{
	class UWeapon*                                     EquippedWeapon;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AmmoReadoutWidget.OnPlayerCombatStateChange
struct UAmmoReadoutWidget_OnPlayerCombatStateChange_Params
{
	bool                                               bCombatIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AmmoReadoutWidget.OnHUDVisibilityChanged
struct UAmmoReadoutWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AmmoReadoutWidget.OnHeldWeaponTextDisplayModeChanged
struct UAmmoReadoutWidget_OnHeldWeaponTextDisplayModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AmmoReadoutWidget.OnHeldWeaponDisplayModeChanged
struct UAmmoReadoutWidget_OnHeldWeaponDisplayModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AmmoReadoutWidget.EvaluateLowAmmoWarning
struct UAmmoReadoutWidget_EvaluateLowAmmoWarning_Params
{
	int                                                MaxClipSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentClipSize;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingAmmo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AnimNotifyState_Prop.OnMontageEnded
struct UAnimNotifyState_Prop_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetVectorParameter
struct UAppearanceComponent_SetVectorParameter_Params
{
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetSlotVectorParameter
struct UAppearanceComponent_SetSlotVectorParameter_Params
{
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetSlotTextureParameter
struct UAppearanceComponent_SetSlotTextureParameter_Params
{
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetSlotScalarParameter
struct UAppearanceComponent_SetSlotScalarParameter_Params
{
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetSkinTone
struct UAppearanceComponent_SetSkinTone_Params
{
	class USkinTone*                                   NewSkinTone;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetScar
struct UAppearanceComponent_SetScar_Params
{
	class UScar*                                       NewScar;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetScalarParameter
struct UAppearanceComponent_SetScalarParameter_Params
{
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scalar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetMakeup
struct UAppearanceComponent_SetMakeup_Params
{
	class UMakeup*                                     NewMakeup;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetHairColor
struct UAppearanceComponent_SetHairColor_Params
{
	class UHairColor*                                  NewColor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetHair
struct UAppearanceComponent_SetHair_Params
{
	class UHairAppearances*                            NewHair;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetGender
struct UAppearanceComponent_SetGender_Params
{
	struct FGameplayTag                                Gender;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.AppearanceComponent.SetEyeColor
struct UAppearanceComponent_SetEyeColor_Params
{
	class UEyeColor*                                   NewColor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetDirt
struct UAppearanceComponent_SetDirt_Params
{
	class UDirt*                                       NewDirt;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetDefaultHead
struct UAppearanceComponent_SetDefaultHead_Params
{
	class UHeadAppearances*                            Head;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetDefaultBody
struct UAppearanceComponent_SetDefaultBody_Params
{
	class UBodyAppearances*                            Body;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetBrows
struct UAppearanceComponent_SetBrows_Params
{
	class UBrows*                                      NewBrows;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetBoneModificationPresets
struct UAppearanceComponent_SetBoneModificationPresets_Params
{
	class UBoneModificationsPreset*                    Presets;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetBoneModification
struct UAppearanceComponent_SetBoneModification_Params
{
	class UBoneModifications*                          Modifications;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetBeardColor
struct UAppearanceComponent_SetBeardColor_Params
{
	class UBeardColor*                                 NewColor;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetBeard
struct UAppearanceComponent_SetBeard_Params
{
	class UBeardAppearances*                           NewBeard;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.SetAge
struct UAppearanceComponent_SetAge_Params
{
	float                                              NewAge;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.RemoveBoneModification
struct UAppearanceComponent_RemoveBoneModification_Params
{
	class UBoneModifications*                          Modifications;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.RefreshFullAppearance
struct UAppearanceComponent_RefreshFullAppearance_Params
{
};

// Function Indiana.AppearanceComponent.InvalidateOldBoneModifications
struct UAppearanceComponent_InvalidateOldBoneModifications_Params
{
};

// Function Indiana.AppearanceComponent.GetBreakBoneName
struct UAppearanceComponent_GetBreakBoneName_Params
{
	struct FGameplayTag                                BodyPartTag;                                              // (Parm)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.GetBreakBoneAndSocketNames
struct UAppearanceComponent_GetBreakBoneAndSocketNames_Params
{
	struct FGameplayTag                                BodyPartTag;                                              // (Parm)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachedSocket;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DetachedSocket;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AppearanceComponent.GetBreakableBoneNames
struct UAppearanceComponent_GetBreakableBoneNames_Params
{
};

// Function Indiana.AppearanceComponent.GetBodyPartTags
struct UAppearanceComponent_GetBodyPartTags_Params
{
};

// Function Indiana.AppearanceComponent.GetBodyPartsArray
struct UAppearanceComponent_GetBodyPartsArray_Params
{
	TArray<struct FBodyPart>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Indiana.AppearanceComponent.GetBodyPart
struct UAppearanceComponent_GetBodyPart_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.AppearanceComponent.DebugTargetVertexColors
struct UAppearanceComponent_DebugTargetVertexColors_Params
{
};

// Function Indiana.AppearanceComponent.ApplyAppearancePreset
struct UAppearanceComponent_ApplyAppearancePreset_Params
{
	class UAppearancePreset*                           Preset;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ArmorComponent.TinkerAdvanceArmor
struct UArmorComponent_TinkerAdvanceArmor_Params
{
	bool                                               bIgnoreCost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioHelpers.LoadAkAudioEventReference
struct UAudioHelpers_LoadAkAudioEventReference_Params
{
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.GenericCollapsableList.ExpandableAreaExpansionChanged
struct UGenericCollapsableList_ExpandableAreaExpansionChanged_Params
{
	class UExpandableAreaBase*                         Area;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsExpanded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogList.OnAudioLogViewedCB
struct UAudioLogList_OnAudioLogViewedCB_Params
{
	class UGenericCollapsableListEntry*                ListEntry;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AudioLogList.OnAudioLogSelectedCB
struct UAudioLogList_OnAudioLogSelectedCB_Params
{
	class UGenericCollapsableListEntry*                ListEntry;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.AudioLogList.OnAudioLogLibraryLoaded
struct UAudioLogList_OnAudioLogLibraryLoaded_Params
{
	class UAudioLogLibraryDataAsset*                   LoadedAudioLogLibrary;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogList.AddOldAudioLog
struct UAudioLogList_AddOldAudioLog_Params
{
	class UAudioLogDataAsset*                          AudioLogDataAsset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogList.AddNewAudioLog
struct UAudioLogList_AddNewAudioLog_Params
{
	class UAudioLogDataAsset*                          AudioLogDataAsset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.StopCurrentAudioLog
struct UAudioLogManager_StopCurrentAudioLog_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.ResumeCurrentAudioLog
struct UAudioLogManager_ResumeCurrentAudioLog_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.PlayAudioLog
struct UAudioLogManager_PlayAudioLog_Params
{
	int                                                AudioLogIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.PauseCurrentAudioLog
struct UAudioLogManager_PauseCurrentAudioLog_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromStop;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.OnPreMapLoad
struct UAudioLogManager_OnPreMapLoad_Params
{
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Indiana.AudioLogManager.OnPostMapLoad
struct UAudioLogManager_OnPostMapLoad_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.OnLoadComplete
struct UAudioLogManager_OnLoadComplete_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
	ELoadGameResult                                    Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.OnConversationEnded
struct UAudioLogManager_OnConversationEnded_Params
{
	class UConversationInstance*                       ConversationInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.OnCombatStateChanged
struct UAudioLogManager_OnCombatStateChanged_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogManager.OnAudioLogLibraryLoaded
struct UAudioLogManager_OnAudioLogLibraryLoaded_Params
{
	TSoftObjectPtr<class UAudioLogLibraryDataAsset>    LibraryDataAsset;                                         // (Parm)
};

// Function Indiana.AudioLogManager.IsPlayingAudioLog
struct UAudioLogManager_IsPlayingAudioLog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AudioLogManager.GetCurrentAudioLogPlayState
struct UAudioLogManager_GetCurrentAudioLogPlayState_Params
{
	EAudioLogPlayState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AudioLogManager.CanStopCurrentAudioLog
struct UAudioLogManager_CanStopCurrentAudioLog_Params
{
	bool                                               bExclusive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AudioLogManager.CanResumeCurrentAudioLog
struct UAudioLogManager_CanResumeCurrentAudioLog_Params
{
	bool                                               bExclusive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.AudioLogManager.CanPauseCurrentAudioLog
struct UAudioLogManager_CanPauseCurrentAudioLog_Params
{
	bool                                               bExclusive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaInterfaceUserWidget.SetInterfaceUserFocus
struct UIndianaInterfaceUserWidget_SetInterfaceUserFocus_Params
{
};

// Function Indiana.IndianaInterfaceUserWidget.SetCursorVisible
struct UIndianaInterfaceUserWidget_SetCursorVisible_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogWidget.TacticalTimeDilationStart
struct UAudioLogWidget_TacticalTimeDilationStart_Params
{
};

// Function Indiana.AudioLogWidget.TacticalTimeDilationEnd
struct UAudioLogWidget_TacticalTimeDilationEnd_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogWidget.ShowAudioLog
struct UAudioLogWidget_ShowAudioLog_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRenderOpacity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogWidget.OnHUDVisibilityChanged
struct UAudioLogWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogWidget.OnAudioLogPlayStateChanged
struct UAudioLogWidget_OnAudioLogPlayStateChanged_Params
{
	EAudioLogPlayState                                 NewPlayState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.AudioLogWidget.CanStopAudioLog
struct UAudioLogWidget_CanStopAudioLog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.BackgroundPanelWidget.SetBackgroundFocused
struct UBackgroundPanelWidget_SetBackgroundFocused_Params
{
	bool                                               bFocused;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BackgroundPanelWidget.RegisterButtons
struct UBackgroundPanelWidget_RegisterButtons_Params
{
	TArray<class UButtonBase*>                         Buttons;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function Indiana.BackgroundPanelWidget.OnOuterTextureLoaded
struct UBackgroundPanelWidget_OnOuterTextureLoaded_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BackgroundPanelWidget.OnInnerTextureLoaded
struct UBackgroundPanelWidget_OnInnerTextureLoaded_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BackgroundSplitPanelWidget.OnOuterTopTextureLoaded
struct UBackgroundSplitPanelWidget_OnOuterTopTextureLoaded_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BackgroundSplitPanelWidget.OnOuterBottomTextureLoaded
struct UBackgroundSplitPanelWidget_OnOuterBottomTextureLoaded_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BackgroundSplitPanelWidget.OnInnerTopTextureLoaded
struct UBackgroundSplitPanelWidget_OnInnerTopTextureLoaded_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BackgroundSplitPanelWidget.OnInnerBottomTextureLoaded
struct UBackgroundSplitPanelWidget_OnInnerBottomTextureLoaded_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BaseInventoryItemManagement.OnDragDrop_SetArmorSlot
struct UBaseInventoryItemManagement_OnDragDrop_SetArmorSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BaseInventoryItemManagement.OnDragDrop_JunkItem
struct UBaseInventoryItemManagement_OnDragDrop_JunkItem_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BaseInventoryItemManagement.OnDragDrop_ClearWeaponSlot
struct UBaseInventoryItemManagement_OnDragDrop_ClearWeaponSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BaseInventoryItemManagement.OnDragDrop_BreakDownItem
struct UBaseInventoryItemManagement_OnDragDrop_BreakDownItem_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BeaconComponent.Show
struct UBeaconComponent_Show_Params
{
};

// Function Indiana.BeaconComponent.Hide
struct UBeaconComponent_Hide_Params
{
};

// Function Indiana.BeaconManager.OnShipChangedLocation
struct UBeaconManager_OnShipChangedLocation_Params
{
	class UShipDestinationData*                        NewShipLocation;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BeaconTagWidget.OnWaypointMarkerVisibilityChanged
struct UBeaconTagWidget_OnWaypointMarkerVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BeaconTagWidget.OnHUDVisibilityChanged
struct UBeaconTagWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Destructible.SetDestructibleState
struct ADestructible_SetDestructibleState_Params
{
	EDestructibleState                                 NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Destructible.ReceiveTriggerUntripped
struct ADestructible_ReceiveTriggerUntripped_Params
{
};

// Function Indiana.Destructible.ReceiveTriggerTripped
struct ADestructible_ReceiveTriggerTripped_Params
{
};

// Function Indiana.Destructible.ReceiveTriggerDisarmed
struct ADestructible_ReceiveTriggerDisarmed_Params
{
};

// Function Indiana.Destructible.ReceiveTriggerArmed
struct ADestructible_ReceiveTriggerArmed_Params
{
};

// Function Indiana.Destructible.ReceivePreDeploy
struct ADestructible_ReceivePreDeploy_Params
{
};

// Function Indiana.Destructible.ReceiveDeployOrder
struct ADestructible_ReceiveDeployOrder_Params
{
};

// Function Indiana.Destructible.OnHealthChanged
struct ADestructible_OnHealthChanged_Params
{
	float                                              HealthChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponMode.IsIdle
struct UWeaponMode_IsIdle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponMode.IsFullyAimed
struct UWeaponMode_IsFullyAimed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponMode.IsCharging
struct UWeaponMode_IsCharging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponMode.GetSecondaryDamageType
struct UWeaponMode_GetSecondaryDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.WeaponMode.GetPrimaryDamageTypeEnum
struct UWeaponMode_GetPrimaryDamageTypeEnum_Params
{
	EIndianaDamageType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponMode.GetPrimaryDamageType
struct UWeaponMode_GetPrimaryDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.RangedMode.OnMontageBlendingOut
struct URangedMode_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.RangedMode.HasScope
struct URangedMode_HasScope_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.RangedMode.GetWeaponCurrentAmmoGaugeAlpha
struct URangedMode_GetWeaponCurrentAmmoGaugeAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.RangedMode.GetShotOrigin
struct URangedMode_GetShotOrigin_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.RangedMode.GetMuzzleRotation
struct URangedMode_GetMuzzleRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.RangedMode.GetMuzzleLocationAndRotation
struct URangedMode_GetMuzzleLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.RangedMode.GetMuzzleLocation
struct URangedMode_GetMuzzleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.RangedMode.GetAimingUpDirection
struct URangedMode_GetAimingUpDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.RangedMode.GetAimingDirection
struct URangedMode_GetAimingDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.BeamMode.IsTargetingPlayer
struct UBeamMode_IsTargetingPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.BeamMode.HasLockedTarget
struct UBeamMode_HasLockedTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.BeamMode.GetTargetLocation
struct UBeamMode_GetTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaAnimInstance.Montage_SkipToEnd
struct UIndianaAnimInstance_Montage_SkipToEnd_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaAnimInstance.AnimNotify_ToggleFootIK
struct UIndianaAnimInstance_AnimNotify_ToggleFootIK_Params
{
};

// Function Indiana.IndianaAnimInstance.AnimNotify_EnableFootIK
struct UIndianaAnimInstance_AnimNotify_EnableFootIK_Params
{
};

// Function Indiana.IndianaAnimInstance.AnimNotify_DisableFootIK
struct UIndianaAnimInstance_AnimNotify_DisableFootIK_Params
{
};

// Function Indiana.CharacterAnimInstance.SetDisabledAnimation
struct UCharacterAnimInstance_SetDisabledAnimation_Params
{
	struct FAnimEventGameplayTagContainer              Container;                                                // (Parm)
};

// Function Indiana.CharacterAnimInstance.OnRebuildAnimationSetData
struct UCharacterAnimInstance_OnRebuildAnimationSetData_Params
{
};

// Function Indiana.CharacterAnimInstance.OnNewWeaponAnimations
struct UCharacterAnimInstance_OnNewWeaponAnimations_Params
{
	class UWeaponAnimations*                           NewWeaponAnimations;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CharacterAnimInstance.OnNewLocomotionAnimationSet
struct UCharacterAnimInstance_OnNewLocomotionAnimationSet_Params
{
	class ULocomotionAnimationSet*                     NewLocomtionAnimationSet;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterAnimInstance.OnMovementLanded
struct UCharacterAnimInstance_OnMovementLanded_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterAnimInstance.IsMontagePlayingOnSlot
struct UCharacterAnimInstance_IsMontagePlayingOnSlot_Params
{
	struct FName                                       SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TPVAnimInstance.UpdateAnimationSetUpdate
struct UTPVAnimInstance_UpdateAnimationSetUpdate_Params
{
};

// Function Indiana.TPVAnimInstance.SetStateTransitioned
struct UTPVAnimInstance_SetStateTransitioned_Params
{
	EAnimTreeState                                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Transitioned;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TPVAnimInstance.SetPersonality
struct UTPVAnimInstance_SetPersonality_Params
{
	class UTPVPersonalitySet*                          Personality;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TPVAnimInstance.SetNextEmotion
struct UTPVAnimInstance_SetNextEmotion_Params
{
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceNextEmotion;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TPVAnimInstance.ResetEmotionToDefault
struct UTPVAnimInstance_ResetEmotionToDefault_Params
{
};

// Function Indiana.TPVAnimInstance.OnMontageStart
struct UTPVAnimInstance_OnMontageStart_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TPVAnimInstance.OnMontageEnd
struct UTPVAnimInstance_OnMontageEnd_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TPVAnimInstance.GetUpFromRagdoll
struct UTPVAnimInstance_GetUpFromRagdoll_Params
{
	float                                              GetUpSpeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TPVAnimInstance.GetAnimationSetUpdate
struct UTPVAnimInstance_GetAnimationSetUpdate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TPVAnimInstance.ClearCurrentEmotion
struct UTPVAnimInstance_ClearCurrentEmotion_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_ResetLocomotionState
struct UTPVAnimInstance_AnimNotify_ResetLocomotionState_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_OnLandEnd
struct UTPVAnimInstance_AnimNotify_OnLandEnd_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_OnJumpIntroEnd
struct UTPVAnimInstance_AnimNotify_OnJumpIntroEnd_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_NCWalkStartEntered
struct UTPVAnimInstance_AnimNotify_NCWalkStartEntered_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_NCWalkEntered
struct UTPVAnimInstance_AnimNotify_NCWalkEntered_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_NCTurnEntered
struct UTPVAnimInstance_AnimNotify_NCTurnEntered_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_NCRunEntered
struct UTPVAnimInstance_AnimNotify_NCRunEntered_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_NCIdleEntered
struct UTPVAnimInstance_AnimNotify_NCIdleEntered_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_JumpStateMachineComplete
struct UTPVAnimInstance_AnimNotify_JumpStateMachineComplete_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_IdleStateLeft
struct UTPVAnimInstance_AnimNotify_IdleStateLeft_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_CTurnEntered
struct UTPVAnimInstance_AnimNotify_CTurnEntered_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_CombatStateEntered
struct UTPVAnimInstance_AnimNotify_CombatStateEntered_Params
{
};

// Function Indiana.TPVAnimInstance.AnimNotify_ClearFurnitureFlag
struct UTPVAnimInstance_AnimNotify_ClearFurnitureFlag_Params
{
};

// Function Indiana.BipedAnimInstance.UpdatePersonalityAnims
struct UBipedAnimInstance_UpdatePersonalityAnims_Params
{
};

// Function Indiana.BipedAnimInstance.PickRandomIdle
struct UBipedAnimInstance_PickRandomIdle_Params
{
};

// Function Indiana.BipedAnimInstance.AnimNotify_SafeToReevaluateTalking
struct UBipedAnimInstance_AnimNotify_SafeToReevaluateTalking_Params
{
};

// Function Indiana.BossComponent.OnHealthChanged
struct UBossComponent_OnHealthChanged_Params
{
	float                                              HealthChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BossComponent.OnCombatStateChanged
struct UBossComponent_OnCombatStateChanged_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BTTask_Disable.OnRagdollComplete
struct UBTTask_Disable_OnRagdollComplete_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.BTTask_Disable.OnPushComplete
struct UBTTask_Disable_OnPushComplete_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.BTTask_Disable.OnMontageBlendingOut
struct UBTTask_Disable_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.BTTask_Disable.OnIdleFinished
struct UBTTask_Disable_OnIdleFinished_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.BTTask_Disable.OnFreezeComplete
struct UBTTask_Disable_OnFreezeComplete_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.BTTask_Disable.OnDisableFinished
struct UBTTask_Disable_OnDisableFinished_Params
{
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetSelectedPressedBrush
struct UButtonBase_SetSelectedPressedBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ButtonBase.SetSelectedNormalBrush
struct UButtonBase_SetSelectedNormalBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ButtonBase.SetSelectedHoveredBrush
struct UButtonBase_SetSelectedHoveredBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ButtonBase.SetSelectedFocusedBrush
struct UButtonBase_SetSelectedFocusedBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ButtonBase.SetSelected
struct UButtonBase_SetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EFocusCause                                        Cause;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetPressedBrush
struct UButtonBase_SetPressedBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ButtonBase.SetNormalBrush
struct UButtonBase_SetNormalBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ButtonBase.SetHoveredBrush
struct UButtonBase_SetHoveredBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ButtonBase.SetFocusedBrush
struct UButtonBase_SetFocusedBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ButtonBase.SetFocusable
struct UButtonBase_SetFocusable_Params
{
	bool                                               bFocused;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetEnabled
struct UButtonBase_SetEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetContentColor
struct UButtonBase_SetContentColor_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetButtonType
struct UButtonBase_SetButtonType_Params
{
	EButtonType                                        TypeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetButtonColor
struct UButtonBase_SetButtonColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetAllowSelectionStateChange
struct UButtonBase_SetAllowSelectionStateChange_Params
{
	bool                                               bAllowChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetAdvancedHitTexture
struct UButtonBase_SetAdvancedHitTexture_Params
{
	class UTexture2D*                                  InTexture;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.SetAdvancedHitAlpha
struct UButtonBase_SetAdvancedHitAlpha_Params
{
	int                                                InAlpha;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBase.IsSelected
struct UButtonBase_IsSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ButtonBase.IsPressed
struct UButtonBase_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ButtonBase.GetSelectedPressedBrush
struct UButtonBase_GetSelectedPressedBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ButtonBase.GetSelectedNormalBrush
struct UButtonBase_GetSelectedNormalBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ButtonBase.GetSelectedHoveredBrush
struct UButtonBase_GetSelectedHoveredBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ButtonBase.GetSelectedFocusedBrush
struct UButtonBase_GetSelectedFocusedBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ButtonBase.GetPressedBrush
struct UButtonBase_GetPressedBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ButtonBase.GetNormalBrush
struct UButtonBase_GetNormalBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ButtonBase.GetHoveredBrush
struct UButtonBase_GetHoveredBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ButtonBase.GetFocusedBrush
struct UButtonBase_GetFocusedBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ButtonBase.GetButtonType
struct UButtonBase_GetButtonType_Params
{
	EButtonType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ButtonBase.AllowsSelectionStateChange
struct UButtonBase_AllowsSelectionStateChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ButtonBaseContainerWidget.OnActivatableChange
struct UButtonBaseContainerWidget_OnActivatableChange_Params
{
	bool                                               bActivatable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBaseSlot.SetVerticalAlignment
struct UButtonBaseSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBaseSlot.SetPadding
struct UButtonBaseSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonBaseSlot.SetHorizontalAlignment
struct UButtonBaseSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CombatCameraComponent.EndCamera
struct UCombatCameraComponent_EndCamera_Params
{
};

// Function Indiana.StatsSkillButtonEntryBase.UpdateButtonBrush
struct UStatsSkillButtonEntryBase_UpdateButtonBrush_Params
{
};

// Function Indiana.CategoryButtonEntryWidget.OnCategoryUnhoveredUnfocused
struct UCategoryButtonEntryWidget_OnCategoryUnhoveredUnfocused_Params
{
};

// Function Indiana.CauseDamageReticleWidget.ShowWeakAnim
struct UCauseDamageReticleWidget_ShowWeakAnim_Params
{
};

// Function Indiana.CauseDamageReticleWidget.ShowKillAnim
struct UCauseDamageReticleWidget_ShowKillAnim_Params
{
};

// Function Indiana.CauseDamageReticleWidget.ShowHitAnim
struct UCauseDamageReticleWidget_ShowHitAnim_Params
{
};

// Function Indiana.CauseDamageReticleWidget.OnCauseDamage
struct UCauseDamageReticleWidget_OnCauseDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CCAppearancePageWidget.SetCharacterDefaults
struct UCCAppearancePageWidget_SetCharacterDefaults_Params
{
};

// Function Indiana.CCAppearancePageWidget.RandomizeCharacter
struct UCCAppearancePageWidget_RandomizeCharacter_Params
{
};

// Function Indiana.CCAppearancePageWidget.OnProgressToNextPage
struct UCCAppearancePageWidget_OnProgressToNextPage_Params
{
};

// Function Indiana.CCAppearancePageWidget.OnExpandableAreaChanged
struct UCCAppearancePageWidget_OnExpandableAreaChanged_Params
{
	class UExpandableAreaBase*                         AreaBaseWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsExpanded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CCAppearancePageWidget.OnBorderMouseDown
struct UCCAppearancePageWidget_OnBorderMouseDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.CCSkillsPageWidget.OnUserScrolled
struct UCCSkillsPageWidget_OnUserScrolled_Params
{
	float                                              ScrollAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterCreationMasterWidget.PlayPartTwoOutroMovie
struct UCharacterCreationMasterWidget_PlayPartTwoOutroMovie_Params
{
	bool                                               bWasSkipped;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterCreationMasterWidget.OnPageBack
struct UCharacterCreationMasterWidget_OnPageBack_Params
{
};

// Function Indiana.CharacterCreationMasterWidget.OnOutroMovieTwoComplete
struct UCharacterCreationMasterWidget_OnOutroMovieTwoComplete_Params
{
	bool                                               bWasSkipped;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterCreationMasterWidget.OnOutroMovieStarted
struct UCharacterCreationMasterWidget_OnOutroMovieStarted_Params
{
};

// Function Indiana.CharacterCreationMasterWidget.OnOutroMoviePartTwoComplete
struct UCharacterCreationMasterWidget_OnOutroMoviePartTwoComplete_Params
{
	bool                                               bWasSkipped;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterCreationMasterWidget.OnOutroMoviePartOneComplete
struct UCharacterCreationMasterWidget_OnOutroMoviePartOneComplete_Params
{
	bool                                               bWasSkipped;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterCreationMasterWidget.OnIntroMovieCompleteImpl
struct UCharacterCreationMasterWidget_OnIntroMovieCompleteImpl_Params
{
	bool                                               bWasSkipped;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterCreationMasterWidget.OnIntroMovieComplete
struct UCharacterCreationMasterWidget_OnIntroMovieComplete_Params
{
	bool                                               bWasSkipped;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterCreationMasterWidget.OnIntroAnimSequenceComplete
struct UCharacterCreationMasterWidget_OnIntroAnimSequenceComplete_Params
{
};

// Function Indiana.CharacterCreationMasterWidget.OnFadeOutContents
struct UCharacterCreationMasterWidget_OnFadeOutContents_Params
{
};

// Function Indiana.CharacterCreationMasterWidget.OnFadeInContents
struct UCharacterCreationMasterWidget_OnFadeInContents_Params
{
};

// Function Indiana.CharacterCreationMasterWidget.OnCharacterCreationUIStart
struct UCharacterCreationMasterWidget_OnCharacterCreationUIStart_Params
{
};

// Function Indiana.DeathClass.Tick
struct UDeathClass_Tick_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DeathClass.FindAudioEvent
struct UDeathClass_FindAudioEvent_Params
{
	struct FGameplayTag                                DeathAudioEvent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.DeathClass.FindAndPostAudioEvent
struct UDeathClass_FindAndPostAudioEvent_Params
{
	struct FGameplayTag                                DeathAudioEvent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.DeathClass.ExecuteOnReload
struct UDeathClass_ExecuteOnReload_Params
{
	class UCharacterDeathComponent*                    InDeathComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.DeathClass.Execute
struct UDeathClass_Execute_Params
{
	class UCharacterDeathComponent*                    InDeathComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.DeathComponent.DeathComplete
struct UDeathComponent_DeathComplete_Params
{
};

// Function Indiana.CharacterDeathComponent.StoreDeathImpact
struct UCharacterDeathComponent_StoreDeathImpact_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterDeathComponent.SpawnAshPile
struct UCharacterDeathComponent_SpawnAshPile_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LootablePileMaterial;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CharacterDeathComponent.RagdollCharacter
struct UCharacterDeathComponent_RagdollCharacter_Params
{
	bool                                               bIgnoreDeathMontages;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterDeathComponent.OnMontageEnded
struct UCharacterDeathComponent_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterDeathComponent.HideProps
struct UCharacterDeathComponent_HideProps_Params
{
};

// Function Indiana.CharacterDeathComponent.HideAppearanceMeshes
struct UCharacterDeathComponent_HideAppearanceMeshes_Params
{
};

// Function Indiana.CharacterDeathComponent.GibCharacter
struct UCharacterDeathComponent_GibCharacter_Params
{
};

// Function Indiana.CharacterDeathComponent.DetachImpactFx
struct UCharacterDeathComponent_DetachImpactFx_Params
{
};

// Function Indiana.CharacterDeathComponent.CalcImpactVector
struct UCharacterDeathComponent_CalcImpactVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CharacterDeathComponent.BreakBone
struct UCharacterDeathComponent_BreakBone_Params
{
};

// Function Indiana.CharacterDeathComponent.BreakAllBones
struct UCharacterDeathComponent_BreakAllBones_Params
{
};

// Function Indiana.CharacterDeathComponent.AttachGoreCaps
struct UCharacterDeathComponent_AttachGoreCaps_Params
{
};

// Function Indiana.CharacterDeathComponent.AttachAllGoreCaps
struct UCharacterDeathComponent_AttachAllGoreCaps_Params
{
};

// Function Indiana.CharacterInfoComponent.UnlockPerksWithRandomLevels_Debug
struct UCharacterInfoComponent_UnlockPerksWithRandomLevels_Debug_Params
{
};

// Function Indiana.CharacterInfoComponent.SetLevel
struct UCharacterInfoComponent_SetLevel_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.PerkRemove
struct UCharacterInfoComponent_PerkRemove_Params
{
	class FString                                      PerkName;                                                 // (Parm, ZeroConstructor)
};

// Function Indiana.CharacterInfoComponent.PerkPurchase
struct UCharacterInfoComponent_PerkPurchase_Params
{
	class FString                                      PerkName;                                                 // (Parm, ZeroConstructor)
};

// Function Indiana.CharacterInfoComponent.PerkPointsAdd
struct UCharacterInfoComponent_PerkPointsAdd_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.OnWeaponEndUnequip
struct UCharacterInfoComponent_OnWeaponEndUnequip_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.OnWeaponEndEquip
struct UCharacterInfoComponent_OnWeaponEndEquip_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.OnStatUpdated
struct UCharacterInfoComponent_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.OnCompanionRegistered
struct UCharacterInfoComponent_OnCompanionRegistered_Params
{
	class AIndianaAiCharacter*                         Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRegister;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.GetName
struct UCharacterInfoComponent_GetName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.CharacterInfoComponent.GetLevelScaledByWorld
struct UCharacterInfoComponent_GetLevelScaledByWorld_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.GetLevelScaledAtLocation
struct UCharacterInfoComponent_GetLevelScaledAtLocation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.GetLevel
struct UCharacterInfoComponent_GetLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.GetGender
struct UCharacterInfoComponent_GetGender_Params
{
	EGender                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CharacterInfoComponent.GetCreatureXPType
struct UCharacterInfoComponent_GetCreatureXPType_Params
{
	ECreatureXPType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.TransferItemsBetweenActorsByTag
struct UInventoryComponent_TransferItemsBetweenActorsByTag_Params
{
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DestinationActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       MatchTags;                                                // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPotentialTheft;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.ShowItemRemovedNotification
struct UInventoryComponent_ShowItemRemovedNotification_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryComponent.ShowItemGainedNotification
struct UInventoryComponent_ShowItemGainedNotification_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryComponent.RemoveItemsFromActorByTag
struct UInventoryComponent_RemoveItemsFromActorByTag_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       MatchTags;                                                // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.RemoveItemFromActor
struct UInventoryComponent_RemoveItemFromActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.RemoveCurrency
struct UInventoryComponent_RemoveCurrency_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVendorInteraction;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryComponent.IsEmpty
struct UInventoryComponent_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.HasItemCountOnActorByTag
struct UInventoryComponent_HasItemCountOnActorByTag_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       MatchTags;                                                // (Parm)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.HasItemCountOnActor
struct UInventoryComponent_HasItemCountOnActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.GetItemCountOnActor
struct UInventoryComponent_GetItemCountOnActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.DebugCreateInventory
struct UInventoryComponent_DebugCreateInventory_Params
{
	int                                                NumToAddPerItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Skip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryComponent.ContainsLoot
struct UInventoryComponent_ContainsLoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryComponent.AddLootFromTable
struct UInventoryComponent_AddLootFromTable_Params
{
	class ULootTableData*                              LootTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryComponent.AddItemToActor
struct UInventoryComponent_AddItemToActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLootable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryComponent.AddItemDebug
struct UInventoryComponent_AddItemDebug_Params
{
	struct FName                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	uint32_t                                           Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryComponent.AddCurrency
struct UInventoryComponent_AddCurrency_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLootable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterMedKitWidget.UpdateDrugSlots
struct UCharacterMedKitWidget_UpdateDrugSlots_Params
{
	int                                                ConsumablesUsed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterMedKitWidget.OnInventoryItemAddedRemoved
struct UCharacterMedKitWidget_OnInventoryItemAddedRemoved_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CharacterMedKitWidget.OnHealthChanged
struct UCharacterMedKitWidget_OnHealthChanged_Params
{
	float                                              HealthChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterMedKitWidget.InhalerModeChanged
struct UCharacterMedKitWidget_InhalerModeChanged_Params
{
	int                                                NewSetting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterMedKitWidget.AbilityControlModeChanged
struct UCharacterMedKitWidget_AbilityControlModeChanged_Params
{
	int                                                NewSetting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterNameplateWidget.OnLevelChanged
struct UCharacterNameplateWidget_OnLevelChanged_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnTTDDisplayModeChanged
struct UCharacterOverviewWidget_OnTTDDisplayModeChanged_Params
{
	int                                                TTDDisplayModeIn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnSurvivalModeChanged
struct UCharacterOverviewWidget_OnSurvivalModeChanged_Params
{
	bool                                               bSurvivalBarVisibilityIn;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnSkillUpdated
struct UCharacterOverviewWidget_OnSkillUpdated_Params
{
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnPreventTTDChanged
struct UCharacterOverviewWidget_OnPreventTTDChanged_Params
{
	bool                                               bPreventTTD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnPlayerStatusBarModeChanged
struct UCharacterOverviewWidget_OnPlayerStatusBarModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnPlayerCombatStateChange
struct UCharacterOverviewWidget_OnPlayerCombatStateChange_Params
{
	bool                                               IsPlayerInCombat;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnInhalerModeChanged
struct UCharacterOverviewWidget_OnInhalerModeChanged_Params
{
	int                                                InhalerModeIn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnHUDVisibilityChanged
struct UCharacterOverviewWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bHUDVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnDodgeDisplayModeChanged
struct UCharacterOverviewWidget_OnDodgeDisplayModeChanged_Params
{
	int                                                DodgeDisplayModeIn;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnDodged
struct UCharacterOverviewWidget_OnDodged_Params
{
	EDodgeDirection                                    EDodgeDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnDifficultyChanged
struct UCharacterOverviewWidget_OnDifficultyChanged_Params
{
	EGameDifficulty                                    DifficultyIn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnCombatStateChange
struct UCharacterOverviewWidget_OnCombatStateChange_Params
{
	bool                                               bCombatIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.OnAbilityControlModeChanged
struct UCharacterOverviewWidget_OnAbilityControlModeChanged_Params
{
	int                                                AbilityControlModeIn;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterOverviewWidget.HideTTDMeter
struct UCharacterOverviewWidget_HideTTDMeter_Params
{
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterLibrary.GetSkillValue
struct UCharacterLibrary_GetSkillValue_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CharacterLibrary.GetAttributeValue
struct UCharacterLibrary_GetAttributeValue_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EAttribute                                         Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CharacterShoutComponent.OnCombatStateChange
struct UCharacterShoutComponent_OnCombatStateChange_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterShoutComponent.OnCharacterDeath
struct UCharacterShoutComponent_OnCharacterDeath_Params
{
	struct FCauseDamageInfo                            CDI;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CharacterShoutComponent.OnAlertStateChange
struct UCharacterShoutComponent_OnAlertStateChange_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        PreviousAlertState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        TargetAlertState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CharacterStatusEffectsWidget.OnRemoveStatusEffect
struct UCharacterStatusEffectsWidget_OnRemoveStatusEffect_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CharacterStatusEffectsWidget.OnAddStatusEffect
struct UCharacterStatusEffectsWidget_OnAddStatusEffect_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.ChatterGameHelpers.PlayChatterEvent
struct UChatterGameHelpers_PlayChatterEvent_Params
{
	class AActor*                                      Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EChatterEventType                                  ChatterEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ChatterManager.OnConversationBegin
struct UChatterManager_OnConversationBegin_Params
{
	class UConversationInstance*                       ConversationInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CheckBoxWidget.UpdateCheckBoxSize
struct UCheckBoxWidget_UpdateCheckBoxSize_Params
{
	int                                                FontSizeModifier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CinematicPlayerWidget.SkipCinematic
struct UCinematicPlayerWidget_SkipCinematic_Params
{
};

// Function Indiana.CinematicPlayerWidget.PlayerInputDetected
struct UCinematicPlayerWidget_PlayerInputDetected_Params
{
};

// Function Indiana.CinematicPlayerWidget.PlayCinematic
struct UCinematicPlayerWidget_PlayCinematic_Params
{
	class UMovieSceneSequencePlayer*                   Cinematic;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CinematicPlayerWidget.PauseCinematic
struct UCinematicPlayerWidget_PauseCinematic_Params
{
};

// Function Indiana.CinematicPlayerWidget.InitiateFadeOut
struct UCinematicPlayerWidget_InitiateFadeOut_Params
{
};

// Function Indiana.CinematicPlayerWidget.InitiateFadeIn
struct UCinematicPlayerWidget_InitiateFadeIn_Params
{
};

// Function Indiana.CinematicPlayerWidget.FinishCinematic
struct UCinematicPlayerWidget_FinishCinematic_Params
{
};

// Function Indiana.CodexJournal.OnAudioLogUnhoveredCB
struct UCodexJournal_OnAudioLogUnhoveredCB_Params
{
	class UButtonBase*                                 ButtonUnhovered;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CodexJournal.OnAudioLogUnfocusedCB
struct UCodexJournal_OnAudioLogUnfocusedCB_Params
{
	class UButtonBase*                                 ButtonUnfocused;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CodexJournal.OnAudioLogListEntryAdded
struct UCodexJournal_OnAudioLogListEntryAdded_Params
{
	class UGenericCollapsableListEntry*                ListEntry;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioLogDataAsset*                          DataAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CodexJournal.OnAudioLogHoveredCB
struct UCodexJournal_OnAudioLogHoveredCB_Params
{
	class UButtonBase*                                 ButtonHovered;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CodexJournal.OnAudioLogFocusedCB
struct UCodexJournal_OnAudioLogFocusedCB_Params
{
	class UButtonBase*                                 ButtonFocused;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.ComboBoxStringBase.SetSelectedOption
struct UComboBoxStringBase_SetSelectedOption_Params
{
	class FString                                      Option;                                                   // (Parm, ZeroConstructor)
};

// Function Indiana.ComboBoxStringBase.RemoveOption
struct UComboBoxStringBase_RemoveOption_Params
{
	class FString                                      Option;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ComboBoxStringBase.RefreshOptions
struct UComboBoxStringBase_RefreshOptions_Params
{
};

// DelegateFunction Indiana.ComboBoxStringBase.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxStringBase_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Indiana.ComboBoxStringBase.OnOpeningEvent__DelegateSignature
struct UComboBoxStringBase_OnOpeningEvent__DelegateSignature_Params
{
};

// Function Indiana.ComboBoxStringBase.GetSelectedOptionIndex
struct UComboBoxStringBase_GetSelectedOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ComboBoxStringBase.GetSelectedOption
struct UComboBoxStringBase_GetSelectedOption_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.ComboBoxStringBase.GetOptionCount
struct UComboBoxStringBase_GetOptionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ComboBoxStringBase.GetOptionAtIndex
struct UComboBoxStringBase_GetOptionAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.ComboBoxStringBase.FindOptionIndex
struct UComboBoxStringBase_FindOptionIndex_Params
{
	class FString                                      Option;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ComboBoxStringBase.ClearSelection
struct UComboBoxStringBase_ClearSelection_Params
{
};

// Function Indiana.ComboBoxStringBase.ClearOptions
struct UComboBoxStringBase_ClearOptions_Params
{
};

// Function Indiana.ComboBoxStringBase.AddOption
struct UComboBoxStringBase_AddOption_Params
{
	class FString                                      Option;                                                   // (Parm, ZeroConstructor)
};

// Function Indiana.CompanionCommandComponent.OnStatUpdated
struct UCompanionCommandComponent_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionCommandComponent.OnCalledShotCameraStep
struct UCompanionCommandComponent_OnCalledShotCameraStep_Params
{
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECalledShotCameraStep                              OldCameraStep;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ECalledShotCameraStep                              NewCameraStep;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionCommandComponent.FillMeter
struct UCompanionCommandComponent_FillMeter_Params
{
};

// Function Indiana.CompanionCommandComponent.CompanionCommandInfinite
struct UCompanionCommandComponent_CompanionCommandInfinite_Params
{
};

// Function Indiana.CompanionComponent.UpdateCompanionState
struct UCompanionComponent_UpdateCompanionState_Params
{
};

// Function Indiana.CompanionComponent.SetOffering
struct UCompanionComponent_SetOffering_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionComponent.OnPlayerExitedAcknowledgeZone
struct UCompanionComponent_OnPlayerExitedAcknowledgeZone_Params
{
	class AActor*                                      ZoneOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionComponent.OnPlayerEnteredAcknowledgeZone
struct UCompanionComponent_OnPlayerEnteredAcknowledgeZone_Params
{
	class AActor*                                      ZoneOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionComponent.OnCombatStateChange
struct UCompanionComponent_OnCombatStateChange_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionComponent.DropOffering
struct UCompanionComponent_DropOffering_Params
{
};

// Function Indiana.CompanionEquipmentWidget.OnItemRemovedFromPlayerInventory
struct UCompanionEquipmentWidget_OnItemRemovedFromPlayerInventory_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CompanionEquipmentWidget.OnItemAddedToPlayerInventory
struct UCompanionEquipmentWidget_OnItemAddedToPlayerInventory_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CompanionEquipmentWidget.OnDragDrop_EquipItem
struct UCompanionEquipmentWidget_OnDragDrop_EquipItem_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManager.SetCompanionWantsToTalk
struct UCompanionManager_SetCompanionWantsToTalk_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToTalk;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManager.IsCompanionUnlocked
struct UCompanionManager_IsCompanionUnlocked_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManager.IsCompanionInRequestedParty
struct UCompanionManager_IsCompanionInRequestedParty_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManager.IsCompanionInActiveParty
struct UCompanionManager_IsCompanionInActiveParty_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManager.IsCompanionDismissed
struct UCompanionManager_IsCompanionDismissed_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManager.HasPlayerUnlockedCompanions
struct UCompanionManager_HasPlayerUnlockedCompanions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManager.GetCompanionWantsToTalk
struct UCompanionManager_GetCompanionWantsToTalk_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManager.GetCompanionMorale
struct UCompanionManager_GetCompanionMorale_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManager.GetCompanionGuid
struct UCompanionManager_GetCompanionGuid_Params
{
	ESpecialObsidianID                                 SpecialID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManager.DebugUnlockCompanion
struct UCompanionManager_DebugUnlockCompanion_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManager.DebugAddCompanionMorale
struct UCompanionManager_DebugAddCompanionMorale_Params
{
	unsigned char                                      Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoraleAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPositiveMorale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManager.ChangeCompanionMorale
struct UCompanionManager_ChangeCompanionMorale_Params
{
	ESpecialObsidianID                                 Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EMoraleContribution                                Contribution;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoraleAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPositiveMorale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActivePartyMembers;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.SetCompanionOutlineMode
struct UCompanionManagerComponent_SetCompanionOutlineMode_Params
{
	ECompanionOutlineMode                              OutlineMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.SendCharacterToShip
struct UCompanionManagerComponent_SendCharacterToShip_Params
{
	class AIndianaAiCharacter*                         Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.ScriptRemoveCompanionFromParty
struct UCompanionManagerComponent_ScriptRemoveCompanionFromParty_Params
{
	class AIndianaAiCharacter*                         Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.ScriptAddCompanionToParty
struct UCompanionManagerComponent_ScriptAddCompanionToParty_Params
{
	class AIndianaAiCharacter*                         Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.OnRestartController
struct UCompanionManagerComponent_OnRestartController_Params
{
	class AIndianaAiCharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.OnPlayerLevelChanged
struct UCompanionManagerComponent_OnPlayerLevelChanged_Params
{
	int                                                PlayerLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.OnPlayerIndividualDetected
struct UCompanionManagerComponent_OnPlayerIndividualDetected_Params
{
	class AIndianaAiCharacter*                         Detector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.OnPlayerCinematicModeChanged
struct UCompanionManagerComponent_OnPlayerCinematicModeChanged_Params
{
	bool                                               bCinematicModeEnabled;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.OnNewStateOfBeing
struct UCompanionManagerComponent_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.OnKill
struct UCompanionManagerComponent_OnKill_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CompanionManagerComponent.OnDifficultyChanged
struct UCompanionManagerComponent_OnDifficultyChanged_Params
{
	EGameDifficulty                                    NewDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.OnDeath
struct UCompanionManagerComponent_OnDeath_Params
{
	struct FCauseDamageInfo                            DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CompanionManagerComponent.OnCauseDamage
struct UCompanionManagerComponent_OnCauseDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CompanionManagerComponent.IsPartyFull
struct UCompanionManagerComponent_IsPartyFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.GetCompanionFromSlot
struct UCompanionManagerComponent_GetCompanionFromSlot_Params
{
	ECompanionSlot                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaAiCharacter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.GetActiveCompanionWithSpecialID
struct UCompanionManagerComponent_GetActiveCompanionWithSpecialID_Params
{
	ESpecialObsidianID                                 SpecialID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaAiCharacter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.CompanionManagerComponent.DebugKillCompanions
struct UCompanionManagerComponent_DebugKillCompanions_Params
{
};

// Function Indiana.CompanionManagerComponent.AddPerkPointsToCompanions
struct UCompanionManagerComponent_AddPerkPointsToCompanions_Params
{
	int                                                Points;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionMoveToWidget.OnNewLocation
struct UCompanionMoveToWidget_OnNewLocation_Params
{
};

// Function Indiana.CompanionMoveToWidget.OnMoveToCancelled
struct UCompanionMoveToWidget_OnMoveToCancelled_Params
{
};

// Function Indiana.CompanionOverviewWidget.OnNoStatusEffect
struct UCompanionOverviewWidget_OnNoStatusEffect_Params
{
};

// Function Indiana.CompanionOverviewWidget.OnMadeInactive
struct UCompanionOverviewWidget_OnMadeInactive_Params
{
};

// Function Indiana.CompanionOverviewWidget.OnMadeActive
struct UCompanionOverviewWidget_OnMadeActive_Params
{
};

// Function Indiana.CompanionOverviewWidget.OnHUDVisibilityChanged
struct UCompanionOverviewWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionOverviewWidget.OnFirstStatusEffect
struct UCompanionOverviewWidget_OnFirstStatusEffect_Params
{
};

// Function Indiana.CompanionOverviewWidget.OnCompanionStatusModeChanged
struct UCompanionOverviewWidget_OnCompanionStatusModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionOverviewWidget.OnCombatStateChanged
struct UCompanionOverviewWidget_OnCombatStateChanged_Params
{
	bool                                               bCombatIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionPositionComponent.RequestForceTeleportCompanions
struct UCompanionPositionComponent_RequestForceTeleportCompanions_Params
{
	struct FVector                                     Position1;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Position2;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.CompanionPositionComponent.OnStealthChange
struct UCompanionPositionComponent_OnStealthChange_Params
{
	bool                                               bStealthed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionPositionComponent.OnPlayerConversationChange
struct UCompanionPositionComponent_OnPlayerConversationChange_Params
{
	class UConversationInstance*                       Instance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEntered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionPositionComponent.OnOccupiedElevatorMove
struct UCompanionPositionComponent_OnOccupiedElevatorMove_Params
{
	class AElevator*                                   Elevator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionPositionComponent.OnOccupiedElevatorChange
struct UCompanionPositionComponent_OnOccupiedElevatorChange_Params
{
	class AElevator*                                   Elevator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOccupied;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionScreenWrapperWidget.FadeInSharedItemViewer
struct UCompanionScreenWrapperWidget_FadeInSharedItemViewer_Params
{
};

// Function Indiana.CompanionScreenWrapperWidget.AddItemToItemViewer
struct UCompanionScreenWrapperWidget_AddItemToItemViewer_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CompanionSelectionWidget.SetCharacterSelected
struct UCompanionSelectionWidget_SetCharacterSelected_Params
{
	int                                                CharacterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionSelectionWidget.SetCharacterAvailable
struct UCompanionSelectionWidget_SetCharacterAvailable_Params
{
	int                                                CharacterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompanionSelectionWidget.SelectionFailed
struct UCompanionSelectionWidget_SelectionFailed_Params
{
	int                                                CharacterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompassEntryWidget.InitProperties
struct UCompassEntryWidget_InitProperties_Params
{
	struct FEntryData                                  EntryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CompassWidget.OnHUDVisibilityChanged
struct UCompassWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bHUDVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompassWidget.OnEnemyRemoved
struct UCompassWidget_OnEnemyRemoved_Params
{
	class AIndianaAiCharacter*                         Detector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompassWidget.OnEnemyAdded
struct UCompassWidget_OnEnemyAdded_Params
{
	class AIndianaAiCharacter*                         Detector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CompassWidget.OnCompassSettingChanged
struct UCompassWidget_OnCompassSettingChanged_Params
{
	int                                                CompassVisibilityModeIn;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ComputerTerminal.UnlockComputer
struct AComputerTerminal_UnlockComputer_Params
{
	bool                                               bFireComputerUnlockedEvent;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ComputerTerminal.LockComputer
struct AComputerTerminal_LockComputer_Params
{
	bool                                               bFireComputerLockedEvent;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ComputerTerminal.GetExactHackDifficulty
struct AComputerTerminal_GetExactHackDifficulty_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ComputerTerminal.GetCurrentState
struct AComputerTerminal_GetCurrentState_Params
{
	EComputerLockState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ComputerTerminal.AttemptUse
struct AComputerTerminal_AttemptUse_Params
{
	class AActor*                                      Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EComputerTerminalResult                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ComputerTerminal.AttemptUnlock
struct AComputerTerminal_AttemptUnlock_Params
{
	class AActor*                                      Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EComputerTerminalResult                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InteractableAudioComponent.StopCustomEventEffect
struct UInteractableAudioComponent_StopCustomEventEffect_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.InteractableAudioComponent.PlayCustomEventEffect
struct UInteractableAudioComponent_PlayCustomEventEffect_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.ComputerTerminalAudioComponent.Stop
struct UComputerTerminalAudioComponent_Stop_Params
{
	EComputerTerminalEventType                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ComputerTerminalAudioComponent.Play
struct UComputerTerminalAudioComponent_Play_Params
{
	EComputerTerminalEventType                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ComputerTerminalContainerWidget.OnConversationStateChange
struct UComputerTerminalContainerWidget_OnConversationStateChange_Params
{
	bool                                               bHasStarted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ComputerTerminalHeaderWidget.FadeInLogoImage
struct UComputerTerminalHeaderWidget_FadeInLogoImage_Params
{
};

// Function Indiana.ConversationBaseWidget.OnSkipInputAction
struct UConversationBaseWidget_OnSkipInputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse9InputAction
struct UConversationBaseWidget_OnResponse9InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse8InputAction
struct UConversationBaseWidget_OnResponse8InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse7InputAction
struct UConversationBaseWidget_OnResponse7InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse6InputAction
struct UConversationBaseWidget_OnResponse6InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse5InputAction
struct UConversationBaseWidget_OnResponse5InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse4InputAction
struct UConversationBaseWidget_OnResponse4InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse3InputAction
struct UConversationBaseWidget_OnResponse3InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse2InputAction
struct UConversationBaseWidget_OnResponse2InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnResponse1InputAction
struct UConversationBaseWidget_OnResponse1InputAction_Params
{
};

// Function Indiana.ConversationBaseWidget.OnPauseInputAction
struct UConversationBaseWidget_OnPauseInputAction_Params
{
};

// Function Indiana.ComputerTerminalWidget.OnExitInputAction
struct UComputerTerminalWidget_OnExitInputAction_Params
{
};

// Function Indiana.ComputerTerminalWidget.OnConversationEnded
struct UComputerTerminalWidget_OnConversationEnded_Params
{
};

// Function Indiana.ComputerTerminalWidgetComponent.OnOwnerStateChange
struct UComputerTerminalWidgetComponent_OnOwnerStateChange_Params
{
	EComputerLockState                                 PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EComputerLockState                                 CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Conditionals.PlayerHasPerk
struct UConditionals_PlayerHasPerk_Params
{
	class FString                                      Perk;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.PlayerHasFlaw
struct UConditionals_PlayerHasFlaw_Params
{
	class FString                                      Flaw;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsWeaponEquipped
struct UConditionals_IsWeaponEquipped_Params
{
	class FString                                      Weapon;                                                   // (Parm, ZeroConstructor)
	bool                                               bIncludeDerivedClasses;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsTrapStateEqual
struct UConditionals_IsTrapStateEqual_Params
{
	struct FGuid                                       TrapObjectID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ETrapTriggerState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsTimeSlice
struct UConditionals_IsTimeSlice_Params
{
	int                                                StartHour;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsSpeakerGender
struct UConditionals_IsSpeakerGender_Params
{
	EGender                                            Gender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsSpeaker
struct UConditionals_IsSpeaker_Params
{
	struct FGuid                                       SpeakerID;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsRestrictedAreaEnabled
struct UConditionals_IsRestrictedAreaEnabled_Params
{
	struct FGuid                                       RestrictedAreaID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestTracked
struct UConditionals_IsQuestTracked_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestStateVisited
struct UConditionals_IsQuestStateVisited_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestStateActive
struct UConditionals_IsQuestStateActive_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestStarted
struct UConditionals_IsQuestStarted_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestMentioned
struct UConditionals_IsQuestMentioned_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestionNodeOnResponseBranch
struct UConditionals_IsQuestionNodeOnResponseBranch_Params
{
	int                                                QuestionNodeID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerResponseNodeID;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestEventTriggered
struct UConditionals_IsQuestEventTriggered_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuestEventID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestEndStateTriggered
struct UConditionals_IsQuestEndStateTriggered_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndStateID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestComplete
struct UConditionals_IsQuestComplete_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestAddendumTriggered
struct UConditionals_IsQuestAddendumTriggered_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddendumID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsQuestActive
struct UConditionals_IsQuestActive_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerTravelDestinationLocked
struct UConditionals_IsPlayerTravelDestinationLocked_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerTravelDestinationHidden
struct UConditionals_IsPlayerTravelDestinationHidden_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerSkillValue
struct UConditionals_IsPlayerSkillValue_Params
{
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCompanionInterjection;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPermanentOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerSkillLevelScaled
struct UConditionals_IsPlayerSkillLevelScaled_Params
{
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterSkillRange                               SkillRange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCompanionInterjection;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerSkill
struct UConditionals_IsPlayerSkill_Params
{
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterSkillRange                               SkillRange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCompanionInterjection;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerShipCurrentAt
struct UConditionals_IsPlayerShipCurrentAt_Params
{
	class FString                                      ShipDestination;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerInStealth
struct UConditionals_IsPlayerInStealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerInCombat
struct UConditionals_IsPlayerInCombat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerDisguisedAs
struct UConditionals_IsPlayerDisguisedAs_Params
{
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerAwareOfTravelDestination
struct UConditionals_IsPlayerAwareOfTravelDestination_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerAwareOfRegion
struct UConditionals_IsPlayerAwareOfRegion_Params
{
	class FString                                      TravelRegion;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerAwareOfPointOfInterest
struct UConditionals_IsPlayerAwareOfPointOfInterest_Params
{
	class FString                                      PointOfInterestData;                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPlayerAttribute
struct UConditionals_IsPlayerAttribute_Params
{
	EAttribute                                         Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterAttributeRange                           AttributeRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPhaseOfDay
struct UConditionals_IsPhaseOfDay_Params
{
	EPhaseOfDay                                        Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsPartyFull
struct UConditionals_IsPartyFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsOCLStateEqual
struct UConditionals_IsOCLStateEqual_Params
{
	struct FGuid                                       OCLObjectID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EOCLState                                          State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsItemQuantity
struct UConditionals_IsItemQuantity_Params
{
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsInterrogationsPassedCount
struct UConditionals_IsInterrogationsPassedCount_Params
{
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsInterrogationInRestrictedArea
struct UConditionals_IsInterrogationInRestrictedArea_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsInterrogationDisguised
struct UConditionals_IsInterrogationDisguised_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsInterrogationCrime
struct UConditionals_IsInterrogationCrime_Params
{
	ECrimeType                                         Crime;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsInMap
struct UConditionals_IsInMap_Params
{
	class FString                                      MapID;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsGlobalValue
struct UConditionals_IsGlobalValue_Params
{
	class FString                                      VariableName;                                             // (ConstParm, Parm, ZeroConstructor)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsFactionReputationRankType
struct UConditionals_IsFactionReputationRankType_Params
{
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
	EReputationRankType                                ReputationRankType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsFactionReputationRank
struct UConditionals_IsFactionReputationRank_Params
{
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
	EReputationRankType                                ReputationRankType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsFactionRelationship
struct UConditionals_IsFactionRelationship_Params
{
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<ETeamAttitude>                         AttitudeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsCurrentActiveCompanionAmount
struct UConditionals_IsCurrentActiveCompanionAmount_Params
{
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsCompanionUnlocked
struct UConditionals_IsCompanionUnlocked_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsCompanionMoral
struct UConditionals_IsCompanionMoral_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoralAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsCompanionDismissed
struct UConditionals_IsCompanionDismissed_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsCompanionActiveInParty
struct UConditionals_IsCompanionActiveInParty_Params
{
	struct FGuid                                       CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsCharacterGrouping
struct UConditionals_IsCharacterGrouping_Params
{
	ECharacterGrouping                                 CharacterGrouping;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsArmorEquipped
struct UConditionals_IsArmorEquipped_Params
{
	class FString                                      ArmorItem;                                                // (Parm, ZeroConstructor)
	bool                                               bIncludeDerivedClasses;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.IsAnyArmorEquipped
struct UConditionals_IsAnyArmorEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HaveMinutesElapsedSinceNamedTimestamp
struct UConditionals_HaveMinutesElapsedSinceNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
	int                                                Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HaveHoursElapsedSinceNamedTimestamp
struct UConditionals_HaveHoursElapsedSinceNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
	int                                                Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HaveDaysElapsedSinceNamedTimestamp
struct UConditionals_HaveDaysElapsedSinceNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
	int                                                Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasQuestStateFailed
struct UConditionals_HasQuestStateFailed_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasQuestFailed
struct UConditionals_HasQuestFailed_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasPlayerVisitedTravelDestination
struct UConditionals_HasPlayerVisitedTravelDestination_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasPlayerVisitedRegion
struct UConditionals_HasPlayerVisitedRegion_Params
{
	class FString                                      TravelRegion;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasPlayerOnlyHeardAboutPointOfInterest
struct UConditionals_HasPlayerOnlyHeardAboutPointOfInterest_Params
{
	class FString                                      PointOfInterestData;                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasPlayerDiscoveredPointOfInterest
struct UConditionals_HasPlayerDiscoveredPointOfInterest_Params
{
	class FString                                      PointOfInterestData;                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasItemValue
struct UConditionals_HasItemValue_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasItemsByTag
struct UConditionals_HasItemsByTag_Params
{
	class FString                                      GameplayTag;                                              // (Parm, ZeroConstructor)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasItem
struct UConditionals_HasItem_Params
{
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasDLC
struct UConditionals_HasDLC_Params
{
	EDownLoadableContent                               DLC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.HasConversationNodeBeenVisited
struct UConditionals_HasConversationNodeBeenVisited_Params
{
	struct FGuid                                       ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.GetOCLState
struct UConditionals_GetOCLState_Params
{
	struct FGuid                                       OCLObjectID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EOCLState                                          State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EBoolResult                                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Conditionals.GetGlobalValue
struct UConditionals_GetGlobalValue_Params
{
	class FString                                      VariableName;                                             // (ConstParm, Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.DoesConversationNodePass
struct UConditionals_DoesConversationNodePass_Params
{
	struct FGuid                                       ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CompareGlobals
struct UConditionals_CompareGlobals_Params
{
	class FString                                      VariableName1;                                            // (ConstParm, Parm, ZeroConstructor)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      VariableName2;                                            // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CompanionWantsToTalk
struct UConditionals_CompanionWantsToTalk_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CompanionHasPerk
struct UConditionals_CompanionHasPerk_Params
{
	struct FGuid                                       CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Perk;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CanPlayerSafelyTakePickup
struct UConditionals_CanPlayerSafelyTakePickup_Params
{
	struct FGuid                                       PickupID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CanPlayerSafelyTakeItemTypeInContainer
struct UConditionals_CanPlayerSafelyTakeItemTypeInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CanPlayerReadRedactions
struct UConditionals_CanPlayerReadRedactions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CanPlayerDiscoverPointOfInterest
struct UConditionals_CanPlayerDiscoverPointOfInterest_Params
{
	class FString                                      PointOfInterestData;                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CanPlayerAccessTravelDestination
struct UConditionals_CanPlayerAccessTravelDestination_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CanBribe
struct UConditionals_CanBribe_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	EBribeDifficulty                                   BribeDifficulty;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.CallGlobalConditional
struct UConditionals_CallGlobalConditional_Params
{
	struct FGuid                                       GlobalScriptID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Conditionals.AlwaysFalse
struct UConditionals_AlwaysFalse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConsumableAmmoPool.GetNextConsumableClass
struct UConsumableAmmoPool_GetNextConsumableClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConsumableItem.OnStatUpdated
struct UConsumableItem_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Container.IsLightEnabled
struct AContainer_IsLightEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Container.HandleItemRemoved
struct AContainer_HandleItemRemoved_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.Container.HandleItemCountChanged
struct AContainer_HandleItemCountChanged_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.Container.HandleItemAdded
struct AContainer_HandleItemAdded_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.Container.GetItemsInContainer
struct AContainer_GetItemsInContainer_Params
{
	TArray<class UItem*>                               OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Indiana.ConversationActorInterface.GetSpeakerGameDataID
struct UConversationActorInterface_GetSpeakerGameDataID_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationActorInterface.GetConversationDescription
struct UConversationActorInterface_GetConversationDescription_Params
{
	struct FConversationDescription                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ConversationBlueprintLibrary.StartSlideshow
struct UConversationBlueprintLibrary_StartSlideshow_Params
{
	class UConversationData*                           Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.StartPlayerControllerConversation
struct UConversationBlueprintLibrary_StartPlayerControllerConversation_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UConversationData*                           ConversationData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartNode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterDescription>               OverrideCharacters;                                       // (Parm, ZeroConstructor)
	bool                                               bAllowedDuringCombat;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.StartConversationWithActorInterface
struct UConversationBlueprintLibrary_StartConversationWithActorInterface_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UConversationActorInterface> Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartNode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.StartConversationByDescriptionAtNode
struct UConversationBlueprintLibrary_StartConversationByDescriptionAtNode_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FConversationDescription                    Description;                                              // (Parm)
	int                                                StartNode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.StartConversationByDescription
struct UConversationBlueprintLibrary_StartConversationByDescription_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FConversationDescription                    Description;                                              // (Parm)
	int                                                InstanceId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.StartConversation
struct UConversationBlueprintLibrary_StartConversation_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UConversationData*                           Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartNode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterDescription>               OverrideCharacters;                                       // (Parm, ZeroConstructor)
	bool                                               bAllowedDuringCombat;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.MakeCharacterDescription
struct UConversationBlueprintLibrary_MakeCharacterDescription_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCharacterDescription                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ConversationBlueprintLibrary.GetSpeakerGameDataReferences
struct UConversationBlueprintLibrary_GetSpeakerGameDataReferences_Params
{
	class UConversationData*                           ConversationData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpeakerGameDataReferenceID>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.ConversationBlueprintLibrary.EndConversation
struct UConversationBlueprintLibrary_EndConversation_Params
{
	int                                                ConversationInstanceID;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.CanStartConversationByDescription
struct UConversationBlueprintLibrary_CanStartConversationByDescription_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FConversationDescription                    Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.CanStartConversation
struct UConversationBlueprintLibrary_CanStartConversation_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UConversationData*                           Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartNode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterDescription>               OverrideCharacters;                                       // (Parm, ZeroConstructor)
	bool                                               bAllowedDuringCombat;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.AssignAllParticipantsAsOverrides
struct UConversationBlueprintLibrary_AssignAllParticipantsAsOverrides_Params
{
	struct FConversationDescription                    Description;                                              // (Parm, OutParm, ReferenceParm)
	class AActor*                                      OverrideActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationBlueprintLibrary.AddConversationEndedDelegate
struct UConversationBlueprintLibrary_AddConversationEndedDelegate_Params
{
	int                                                InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Indiana.ConversationInstance.OnParticipantEndPlay
struct UConversationInstance_OnParticipantEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationInstance.OnCharacterDeath
struct UConversationInstance_OnCharacterDeath_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ConversationInstance.OnCharacterCombatStateChange
struct UConversationInstance_OnCharacterCombatStateChange_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationInstance.IsCurrentSpeakerGameDataReferenceID
struct UConversationInstance_IsCurrentSpeakerGameDataReferenceID_Params
{
	struct FSpeakerGameDataReferenceID                 SpeakerGameData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationInstance.GetPayloadActorChecked
struct UConversationInstance_GetPayloadActorChecked_Params
{
	EPayloadID                                         Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationInstance.GetCurrentSpeakerGameDataReferenceID
struct UConversationInstance_GetCurrentSpeakerGameDataReferenceID_Params
{
	struct FSpeakerGameDataReferenceID                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.ConversationInterface.ConversationStarted
struct UConversationInterface_ConversationStarted_Params
{
	class AActor*                                      Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationInterface.ConversationNodeChanged
struct UConversationInterface_ConversationNodeChanged_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Camera;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Audio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationInterface.ConversationEnded
struct UConversationInterface_ConversationEnded_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SkillCheckInterruption.MontageFinished
struct USkillCheckInterruption_MontageFinished_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationManager.MarkConversationNodeAsRead
struct UConversationManager_MarkConversationNodeAsRead_Params
{
	class UConversationData*                           Conversation;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationManager.HasConversationNodeBeenVisited
struct UConversationManager_HasConversationNodeBeenVisited_Params
{
	class UConversationData*                           Conversation;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationManager.ClearConversationNodeAsRead
struct UConversationManager_ClearConversationNodeAsRead_Params
{
	class UConversationData*                           Conversation;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationMessageWidget.ContentLerpTick
struct UConversationMessageWidget_ContentLerpTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationRegisterComponent.StartConversationByComponent
struct UConversationRegisterComponent_StartConversationByComponent_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ComponentOwner;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationRegisterComponent.OnResumeConversationTimerComplete
struct UConversationRegisterComponent_OnResumeConversationTimerComplete_Params
{
};

// Function Indiana.ConversationRegisterComponent.OnNewStateOfBeing
struct UConversationRegisterComponent_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationRegisterComponent.OnCombatStateChange
struct UConversationRegisterComponent_OnCombatStateChange_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationRegisterComponent.OnChatterComplete
struct UConversationRegisterComponent_OnChatterComplete_Params
{
	class UChatterPlayer*                              ChatterPlayer;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationResponseWidget.OnSetSkillCheckRequiredCompanion
struct UConversationResponseWidget_OnSetSkillCheckRequiredCompanion_Params
{
	bool                                               bSelectable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationResponseWidget.OnSetSelectableOption
struct UConversationResponseWidget_OnSetSelectableOption_Params
{
	bool                                               bSelectable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationResponseWidget.OnResponseSkillsChanged
struct UConversationResponseWidget_OnResponseSkillsChanged_Params
{
	bool                                               bContainsSkillCheck;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationResponseWidget.IsSelectable
struct UConversationResponseWidget_IsSelectable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationWidget.ShouldShowResponseLine
struct UConversationWidget_ShouldShowResponseLine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationWidget.ShouldShowInputLabelLine
struct UConversationWidget_ShouldShowInputLabelLine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ConversationWidget.SetHistoryBackingFillRatio
struct UConversationWidget_SetHistoryBackingFillRatio_Params
{
	float                                              DesiredHistoryHeight;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationWidget.SetConversationBackingFillRatio
struct UConversationWidget_SetConversationBackingFillRatio_Params
{
	float                                              DesiredOverlayHeight;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationWidget.OnHistoryToggleInputAction
struct UConversationWidget_OnHistoryToggleInputAction_Params
{
};

// Function Indiana.ConversationWidget.OnHistoryScroll
struct UConversationWidget_OnHistoryScroll_Params
{
	float                                              InputDelta;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ConversationWidget.OnConversationEnded
struct UConversationWidget_OnConversationEnded_Params
{
};

// Function Indiana.Corpse.HandleItemRemoved
struct ACorpse_HandleItemRemoved_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.Corpse.HandleItemAdded
struct ACorpse_HandleItemAdded_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.Corpse.GetItemsOnCorpse
struct ACorpse_GetItemsOnCorpse_Params
{
	TArray<class UItem*>                               OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Indiana.CustomEventEffect.CustomTrigger
struct UCustomEventEffect_CustomTrigger_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.CustomEventEffect.CustomStop
struct UCustomEventEffect_CustomStop_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CustomHitReceiver.CustomOnHit
struct ACustomHitReceiver_CustomOnHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.CustomMaterialModVisual.CopyParamOverrides
struct UCustomMaterialModVisual_CopyParamOverrides_Params
{
	class UMaterialInstanceDynamic*                    Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DestinationSlotName;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CustomMaterialModVisual.ApplyVectorParamToAll
struct UCustomMaterialModVisual_ApplyVectorParamToAll_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParamValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OnlyApplyIfParamSet;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CustomMaterialModVisual.ApplyVectorParam
struct UCustomMaterialModVisual_ApplyVectorParam_Params
{
	struct FName                                       MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParamValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CustomMaterialModVisual.ApplyTextureParamToAll
struct UCustomMaterialModVisual_ApplyTextureParamToAll_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture>                     ParamValue;                                               // (Parm)
	struct FName                                       OnlyApplyIfParamSet;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CustomMaterialModVisual.ApplyTextureParam
struct UCustomMaterialModVisual_ApplyTextureParam_Params
{
	struct FName                                       MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture>                     ParamValue;                                               // (Parm)
};

// Function Indiana.CustomMaterialModVisual.ApplyScalarParamToAll
struct UCustomMaterialModVisual_ApplyScalarParamToAll_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OnlyApplyIfParamSet;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CustomMaterialModVisual.ApplyScalarParam
struct UCustomMaterialModVisual_ApplyScalarParam_Params
{
	struct FName                                       MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CustomMaterialModVisual.Apply
struct UCustomMaterialModVisual_Apply_Params
{
};

// Function Indiana.CustomModVisual.RemoveVisualsTrigger
struct UCustomModVisual_RemoveVisualsTrigger_Params
{
};

// Function Indiana.CustomModVisual.PermanentlyApplyVisualsTrigger
struct UCustomModVisual_PermanentlyApplyVisualsTrigger_Params
{
	class UObject*                                     NewTargetObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      NewParentComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldWeld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.CustomModVisual.NewMeshAddedBP
struct UCustomModVisual_NewMeshAddedBP_Params
{
	class USkeletalMeshComponent*                      TargetParentComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CustomModVisual.ApplyVisualsTrigger
struct UCustomModVisual_ApplyVisualsTrigger_Params
{
	class UObject*                                     NewTargetObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      NewParentComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CustomModVisual.ApplyToNewMeshTrigger
struct UCustomModVisual_ApplyToNewMeshTrigger_Params
{
	class UMeshComponent*                              NewMesh;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.CustomModVisual.ApplyToNewMeshPermanentlyTrigger
struct UCustomModVisual_ApplyToNewMeshPermanentlyTrigger_Params
{
	class UMeshComponent*                              NewMesh;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.DeathBehavior.GetTargetMesh
struct UDeathBehavior_GetTargetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.DeathBehavior.CustomTrigger
struct UDeathBehavior_CustomTrigger_Params
{
};

// Function Indiana.DeathBehavior.CustomTick
struct UDeathBehavior_CustomTick_Params
{
};

// Function Indiana.DeathBehavior.Complete
struct UDeathBehavior_Complete_Params
{
};

// Function Indiana.DeathMenuWidget.OnQueryLatestSaveFinished
struct UDeathMenuWidget_OnQueryLatestSaveFinished_Params
{
	class FString                                      LatestSaveName;                                           // (Parm, ZeroConstructor)
	bool                                               bHasSaves;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DeathMenuWidget.OnLoadComplete
struct UDeathMenuWidget_OnLoadComplete_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
	ELoadGameResult                                    Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTree.RunSuperDecisionTree
struct UDecisionTree_RunSuperDecisionTree_Params
{
	class AIndianaAiCharacter*                         Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIEventInfo*                                EventInfo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDecisionTreeRequestPriority                       OutPriority;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UDecisionTreeRequestData*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.DecisionTree.RunMetaDecisionTree
struct UDecisionTree_RunMetaDecisionTree_Params
{
	class UClass*                                      DecisionTree;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaAiCharacter*                         Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIEventInfo*                                EventInfo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDecisionTreeRequestPriority                       OutPriority;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UDecisionTreeRequestData*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.DecisionTree.RunDecisionTree
struct UDecisionTree_RunDecisionTree_Params
{
	class AIndianaAiCharacter*                         Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIEventInfo*                                EventInfo;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EDecisionTreeRequestPriority                       OutPriority;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UDecisionTreeRequestData*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.DecisionTreeComponent.OnWeaponPreferenceChange
struct UDecisionTreeComponent_OnWeaponPreferenceChange_Params
{
	EWeaponPreference                                  NewWeaponPreference;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponPreference                                  OldWeaponPreference;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnTether
struct UDecisionTreeComponent_OnTether_Params
{
	bool                                               bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TetherReturnLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnStatusEffectAdded
struct UDecisionTreeComponent_OnStatusEffectAdded_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnStateOfBeingChange
struct UDecisionTreeComponent_OnStateOfBeingChange_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnStartTraverse
struct UDecisionTreeComponent_OnStartTraverse_Params
{
	ETraverseType                                      TraverseType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NavLinkDirection;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AReservableNavLink*                          ReservableNavLink;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ALadder*                                     ClimbLadder;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnScriptedBehaviorCall
struct UDecisionTreeComponent_OnScriptedBehaviorCall_Params
{
	class UAISettings_Behavior*                        ScriptedBehavior;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInterruptible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnReactiveRangeAction
struct UDecisionTreeComponent_OnReactiveRangeAction_Params
{
};

// Function Indiana.DecisionTreeComponent.OnPlayerProximityChange
struct UDecisionTreeComponent_OnPlayerProximityChange_Params
{
	bool                                               bEnteredProximity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnPlayerConversationProximityChange
struct UDecisionTreeComponent_OnPlayerConversationProximityChange_Params
{
	bool                                               bInProximity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnPlayerConversationChange
struct UDecisionTreeComponent_OnPlayerConversationChange_Params
{
	class UConversationInstance*                       Instance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEntered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnNewTarget
struct UDecisionTreeComponent_OnNewTarget_Params
{
};

// Function Indiana.DecisionTreeComponent.OnNearbyInterestPoint
struct UDecisionTreeComponent_OnNearbyInterestPoint_Params
{
	class UFurnitureComponent*                         InterestPoint;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnDefaultBehaviorChange
struct UDecisionTreeComponent_OnDefaultBehaviorChange_Params
{
	class UAISettings_Behavior*                        NewDefaultBehavior;                                       // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFullReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnCombatStateChange
struct UDecisionTreeComponent_OnCombatStateChange_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnBehaviorPhaseChange
struct UDecisionTreeComponent_OnBehaviorPhaseChange_Params
{
	int                                                NewBehaviorPhase;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnAlertStateChange
struct UDecisionTreeComponent_OnAlertStateChange_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        PreviousAlertState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        TargetAlertState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DecisionTreeComponent.OnActionToggled
struct UDecisionTreeComponent_OnActionToggled_Params
{
	ETogglableAction                                   Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bToggled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DestructibleAudioComponent.Stop
struct UDestructibleAudioComponent_Stop_Params
{
	EDestructibleEventType                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DestructibleAudioComponent.Play
struct UDestructibleAudioComponent_Play_Params
{
	EDestructibleEventType                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DestructibleShoutComponent.OnDestructibleDestroyed
struct UDestructibleShoutComponent_OnDestructibleDestroyed_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DevelopmentFunctionality.ToggleTempVO
struct UDevelopmentFunctionality_ToggleTempVO_Params
{
};

// Function Indiana.DevelopmentFunctionality.Task
struct UDevelopmentFunctionality_Task_Params
{
};

// Function Indiana.DevelopmentFunctionality.StartInfoTracking
struct UDevelopmentFunctionality_StartInfoTracking_Params
{
	float                                              TrackRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackStats;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DevelopmentFunctionality.FlushLevelStreaming
struct UDevelopmentFunctionality_FlushLevelStreaming_Params
{
};

// Function Indiana.DevelopmentFunctionality.FlushAsyncLoading
struct UDevelopmentFunctionality_FlushAsyncLoading_Params
{
};

// Function Indiana.DevelopmentFunctionality.EndInfoTracking
struct UDevelopmentFunctionality_EndInfoTracking_Params
{
};

// Function Indiana.DevelopmentFunctionality.DumpNameTable
struct UDevelopmentFunctionality_DumpNameTable_Params
{
};

// Function Indiana.DevelopmentFunctionality.DebugDrawLightmapNamesSummary
struct UDevelopmentFunctionality_DebugDrawLightmapNamesSummary_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LightmapTextureIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeThreshold;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DevelopmentFunctionality.DebugDrawLightmapNamesPerComponent
struct UDevelopmentFunctionality_DebugDrawLightmapNamesPerComponent_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LightmapTextureIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DevelopmentFunctionality.DebugDrawLightmapInfo
struct UDevelopmentFunctionality_DebugDrawLightmapInfo_Params
{
	class FString                                      LightmapName;                                             // (Parm, ZeroConstructor)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DevelopmentFunctionality.Crash
struct UDevelopmentFunctionality_Crash_Params
{
};

// Function Indiana.DevelopmentFunctionality.CharacterMemReport
struct UDevelopmentFunctionality_CharacterMemReport_Params
{
};

// Function Indiana.DevelopmentFunctionality.Bug
struct UDevelopmentFunctionality_Bug_Params
{
};

// Function Indiana.DialogBoxWidget.SetNewBackingMaterialHeight
struct UDialogBoxWidget_SetNewBackingMaterialHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DialogBoxWidget.OnInputConfirm
struct UDialogBoxWidget_OnInputConfirm_Params
{
};

// Function Indiana.DialogBoxWidget.OnInputBack
struct UDialogBoxWidget_OnInputBack_Params
{
};

// Function Indiana.DialogBoxWidget.OnInputAbort
struct UDialogBoxWidget_OnInputAbort_Params
{
};

// Function Indiana.DialogWarningBoxWidget.OnInputConfirm
struct UDialogWarningBoxWidget_OnInputConfirm_Params
{
};

// Function Indiana.DialogWarningBoxWidget.OnInputBack
struct UDialogWarningBoxWidget_OnInputBack_Params
{
};

// Function Indiana.DifficultyManager.SetSurvivalMode
struct UDifficultyManager_SetSurvivalMode_Params
{
	bool                                               IsSurvivalMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DifficultyManager.SetDifficulty
struct UDifficultyManager_SetDifficulty_Params
{
	EGameDifficulty                                    NewDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DifficultyManager.GetGameDifficulty
struct UDifficultyManager_GetGameDifficulty_Params
{
	EGameDifficulty                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.DifficultySelectWidget.ValueChanged
struct UDifficultySelectWidget_ValueChanged_Params
{
	class UUserSetting*                                UserSetting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DifficultySelectWidget.TrasitionToSubtitleComplete
struct UDifficultySelectWidget_TrasitionToSubtitleComplete_Params
{
};

// Function Indiana.DifficultySelectWidget.TransitionToDifficultyComplete
struct UDifficultySelectWidget_TransitionToDifficultyComplete_Params
{
};

// Function Indiana.DifficultySelectWidget.StartTransitionToSubtitleFromDifficulty
struct UDifficultySelectWidget_StartTransitionToSubtitleFromDifficulty_Params
{
};

// Function Indiana.DifficultySelectWidget.StartTransitionToDifficultyFromSubtitle
struct UDifficultySelectWidget_StartTransitionToDifficultyFromSubtitle_Params
{
};

// Function Indiana.DisguiseMeterWidget.UpdateDisguiseMeterInnerAnim
struct UDisguiseMeterWidget_UpdateDisguiseMeterInnerAnim_Params
{
	int                                                CurrentFrame;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.UpdateDisguiseMeterFill
struct UDisguiseMeterWidget_UpdateDisguiseMeterFill_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.ShowDisguiseMeterTip
struct UDisguiseMeterWidget_ShowDisguiseMeterTip_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.OnRestrictedAreaExited
struct UDisguiseMeterWidget_OnRestrictedAreaExited_Params
{
	class ARestrictedArea*                             RestrictedArea;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.OnHUDVisibilityChanged
struct UDisguiseMeterWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.OnEnterRestrictedAreaWithoutDisguise
struct UDisguiseMeterWidget_OnEnterRestrictedAreaWithoutDisguise_Params
{
	class UDisguiseData*                               Disguise;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMissingShroud;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseUnequipped
struct UDisguiseMeterWidget_OnDisguiseUnequipped_Params
{
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseRefilled
struct UDisguiseMeterWidget_OnDisguiseRefilled_Params
{
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseMeterVisibilityChanged
struct UDisguiseMeterWidget_OnDisguiseMeterVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseMeterChanged
struct UDisguiseMeterWidget_OnDisguiseMeterChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseImageLoaded
struct UDisguiseMeterWidget_OnDisguiseImageLoaded_Params
{
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseFailure
struct UDisguiseMeterWidget_OnDisguiseFailure_Params
{
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseEquipped
struct UDisguiseMeterWidget_OnDisguiseEquipped_Params
{
	class UDisguiseData*                               Disguise;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseEnd
struct UDisguiseMeterWidget_OnDisguiseEnd_Params
{
};

// Function Indiana.DisguiseMeterWidget.OnDisguiseBegin
struct UDisguiseMeterWidget_OnDisguiseBegin_Params
{
};

// Function Indiana.DisguiseMeterWidget.HideDisguiseMeterTip
struct UDisguiseMeterWidget_HideDisguiseMeterTip_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DLCManager.OnGlobalVarChanged
struct UDLCManager_OnGlobalVarChanged_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DLCManager.IsINX2Installed
struct UDLCManager_IsINX2Installed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.DLCManager.IsINX1Installed
struct UDLCManager_IsINX1Installed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Door.TriggersTravel
struct ADoor_TriggersTravel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Door.OnOCLStateChange
struct ADoor_OnOCLStateChange_Params
{
	EOCLState                                          PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EOCLState                                          CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DragContainerWidget.OnOperationDrop
struct UDragContainerWidget_OnOperationDrop_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DragContainerWidget.OnOperationDragCancelled
struct UDragContainerWidget_OnOperationDragCancelled_Params
{
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DragContainerWidget.OnDragStarted
struct UDragContainerWidget_OnDragStarted_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DragContainerWidget.OnDragGroupStarted
struct UDragContainerWidget_OnDragGroupStarted_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DragContainerWidget.OnDragGroupDrop
struct UDragContainerWidget_OnDragGroupDrop_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DragContainerWidget.OnDragGroupCancelled
struct UDragContainerWidget_OnDragGroupCancelled_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DragContainerWidget.OnDragConfirmDrop
struct UDragContainerWidget_OnDragConfirmDrop_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DynamicTOD.WeatherTimelineUpdateReverse
struct ADynamicTOD_WeatherTimelineUpdateReverse_Params
{
	float                                              CurrentWeatherAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentMaterialWetness;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DynamicTOD.WeatherTimelineUpdateForward
struct ADynamicTOD_WeatherTimelineUpdateForward_Params
{
	float                                              CurrentWeatherAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentMaterialWetness;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.DynamicTOD.GetWeatherWwiseStateName
struct ADynamicTOD_GetWeatherWwiseStateName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.DynamicTOD.GetWeatherParticleSystem
struct ADynamicTOD_GetWeatherParticleSystem_Params
{
	class UParticleSystem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.DynamicTOD.ForceUpdate
struct ADynamicTOD_ForceUpdate_Params
{
};

// Function Indiana.Elevator.SetCurrentFloor
struct AElevator_SetCurrentFloor_Params
{
	int                                                FloorIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Elevator.OnStartMoveExternalDoors
struct AElevator_OnStartMoveExternalDoors_Params
{
	int                                                DestinationFloor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromStationary;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Elevator.OnEndMoveExternalDoors
struct AElevator_OnEndMoveExternalDoors_Params
{
	int                                                DestinationFloor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Elevator.IsStationary
struct AElevator_IsStationary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Elevator.IsMoving
struct AElevator_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Elevator.GetTargetFloor
struct AElevator_GetTargetFloor_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Elevator.GetCurrentFloor
struct AElevator_GetCurrentFloor_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ElevatorAudioComponent.Stop
struct UElevatorAudioComponent_Stop_Params
{
	EElevatorEventType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ElevatorAudioComponent.Play
struct UElevatorAudioComponent_Play_Params
{
	EElevatorEventType                                 Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ElevatorDisableStatusEffect.OnElevatorMoveEnd
struct UElevatorDisableStatusEffect_OnElevatorMoveEnd_Params
{
	int                                                DestinationFloor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.SetEncounterEnabled
struct AEncounter_SetEncounterEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.ResetActivationFailed
struct AEncounter_ResetActivationFailed_Params
{
};

// Function Indiana.Encounter.RefreshEncounter
struct AEncounter_RefreshEncounter_Params
{
};

// Function Indiana.Encounter.OnNodeBeginSpawning
struct AEncounter_OnNodeBeginSpawning_Params
{
	class ASpawnNodeBase*                              Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.OnNodeActorSpawned
struct AEncounter_OnNodeActorSpawned_Params
{
	class ASpawnNodeBase*                              Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDamageable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstSpawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.OnNodeActorKilled
struct AEncounter_OnNodeActorKilled_Params
{
	class ASpawnNodeBase*                              Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFirstKill;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.OnNodeActorDespawned
struct AEncounter_OnNodeActorDespawned_Params
{
	class ASpawnNodeBase*                              Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.OnNodeActorDamaged
struct AEncounter_OnNodeActorDamaged_Params
{
	class ASpawnNodeBase*                              Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.Encounter.OnNodeActorCombatState
struct AEncounter_OnNodeActorCombatState_Params
{
	class ASpawnNodeBase*                              Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.OnNodeActorAwareOfPlayer
struct AEncounter_OnNodeActorAwareOfPlayer_Params
{
	class ASpawnNodeBase*                              Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.OnNodeActorAlertState
struct AEncounter_OnNodeActorAlertState_Params
{
	class ASpawnNodeBase*                              Node;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.OnActivationEndOverlap
struct AEncounter_OnActivationEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.OnActivationBeginOverlap
struct AEncounter_OnActivationBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Encounter.IterateThroughSpawnedActors
struct AEncounter_IterateThroughSpawnedActors_Params
{
	struct FScriptDelegate                             GenericFunctionCall;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Indiana.Encounter.IsEncounterActive
struct AEncounter_IsEncounterActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Encounter.HasEncounterCompleted
struct AEncounter_HasEncounterCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Encounter.ForceDeactivateEncounter
struct AEncounter_ForceDeactivateEncounter_Params
{
};

// Function Indiana.Encounter.DeactivateEncounter
struct AEncounter_DeactivateEncounter_Params
{
};

// Function Indiana.Encounter.ActivateEncounter
struct AEncounter_ActivateEncounter_Params
{
};

// Function Indiana.EnemyScannerComponent.TimeDilationStart
struct UEnemyScannerComponent_TimeDilationStart_Params
{
};

// Function Indiana.EnemyScannerComponent.TimeDilationEnd
struct UEnemyScannerComponent_TimeDilationEnd_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EnemyScannerWidget.ScanEnded
struct UEnemyScannerWidget_ScanEnded_Params
{
};

// Function Indiana.EnemyScannerWidget.ScanCompleted
struct UEnemyScannerWidget_ScanCompleted_Params
{
};

// Function Indiana.EquipmentComponent.WeaponAdvanceLevelDebug
struct UEquipmentComponent_WeaponAdvanceLevelDebug_Params
{
	int                                                NumLevels;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.UnholsterWeapon
struct UEquipmentComponent_UnholsterWeapon_Params
{
	EHolsterRequestSource                              InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.UnequipAllModsDebug
struct UEquipmentComponent_UnequipAllModsDebug_Params
{
};

// Function Indiana.EquipmentComponent.SetWeaponLevel
struct UEquipmentComponent_SetWeaponLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideWeaponLevels;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.SetCalledShotWeaponLevel
struct UEquipmentComponent_SetCalledShotWeaponLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.SetArmorLevel
struct UEquipmentComponent_SetArmorLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideArmorLevels;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnUnlockAbilityChanged
struct UEquipmentComponent_OnUnlockAbilityChanged_Params
{
	EUnlockAbility                                     Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnUnequipDisguise
struct UEquipmentComponent_OnUnequipDisguise_Params
{
};

// Function Indiana.EquipmentComponent.OnStopClimb
struct UEquipmentComponent_OnStopClimb_Params
{
};

// Function Indiana.EquipmentComponent.OnStatUpdated
struct UEquipmentComponent_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnStartUnholsterWeapon
struct UEquipmentComponent_OnStartUnholsterWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnStartUnequipWeapon
struct UEquipmentComponent_OnStartUnequipWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnStartReloadWeapon
struct UEquipmentComponent_OnStartReloadWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnStartHolsterWeapon
struct UEquipmentComponent_OnStartHolsterWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnStartEquipWeapon
struct UEquipmentComponent_OnStartEquipWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnStartClimb
struct UEquipmentComponent_OnStartClimb_Params
{
};

// Function Indiana.EquipmentComponent.OnMedKitUsed
struct UEquipmentComponent_OnMedKitUsed_Params
{
	int                                                ConsumeablesUsed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnItemRemovedFromInventory
struct UEquipmentComponent_OnItemRemovedFromInventory_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.EquipmentComponent.OnItemAddedToInventory
struct UEquipmentComponent_OnItemAddedToInventory_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.EquipmentComponent.OnEquipDisguise
struct UEquipmentComponent_OnEquipDisguise_Params
{
	class UDisguiseData*                               Disguise;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnEndUnholsterWeapon
struct UEquipmentComponent_OnEndUnholsterWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnEndUnequipWeapon
struct UEquipmentComponent_OnEndUnequipWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnEndReloadWeapon
struct UEquipmentComponent_OnEndReloadWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnEndHolsterWeapon
struct UEquipmentComponent_OnEndHolsterWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.OnEndEquipWeapon
struct UEquipmentComponent_OnEndEquipWeapon_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.LoadAmmoDebug
struct UEquipmentComponent_LoadAmmoDebug_Params
{
	struct FName                                       AmmoName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.HolsterWeapon
struct UEquipmentComponent_HolsterWeapon_Params
{
	EHolsterRequestSource                              InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantHolster;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.GetEquippedWeapon
struct UEquipmentComponent_GetEquippedWeapon_Params
{
	class UWeapon*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipWeaponMicroModDebug
struct UEquipmentComponent_EquipWeaponMicroModDebug_Params
{
	struct FName                                       MicroModName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipWeaponFromSlot
struct UEquipmentComponent_EquipWeaponFromSlot_Params
{
	uint32_t                                           SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantEquip;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipWeaponDebug
struct UEquipmentComponent_EquipWeaponDebug_Params
{
	struct FName                                       WeaponName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipWeapon
struct UEquipmentComponent_EquipWeapon_Params
{
	class UWeapon*                                     WeaponToEquip;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInstantEquip;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipPreviousWeapon
struct UEquipmentComponent_EquipPreviousWeapon_Params
{
};

// Function Indiana.EquipmentComponent.EquipModDebug
struct UEquipmentComponent_EquipModDebug_Params
{
	struct FName                                       ModName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipDefaultWeapon
struct UEquipmentComponent_EquipDefaultWeapon_Params
{
};

// Function Indiana.EquipmentComponent.EquipArmorSetMicroModDebug
struct UEquipmentComponent_EquipArmorSetMicroModDebug_Params
{
	struct FName                                       MicroModName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipArmorModByClassDebug
struct UEquipmentComponent_EquipArmorModByClassDebug_Params
{
	EArmorModSlot                                      ArmorModSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ArmorModItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipArmorDebug
struct UEquipmentComponent_EquipArmorDebug_Params
{
	struct FName                                       ArmorName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EquipmentComponent.EquipArmorByClassDebug
struct UEquipmentComponent_EquipArmorByClassDebug_Params
{
	EArmorSlot                                         ArmorSlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ArmorItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnKillListener.OnKill
struct UOnKillListener_OnKill_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.OnCompanionKillListener.OnKill
struct UOnCompanionKillListener_OnKill_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.OnKillTurnToAshListener.OnKill
struct UOnKillTurnToAshListener_OnKill_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DmgType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnCompanionRegistrationChanged.OnCompanionRegistrationChanged
struct UOnCompanionRegistrationChanged_OnCompanionRegistrationChanged_Params
{
};

// Function Indiana.OnCompanionRegistrationAdded.OnCompanionRegistrationAdded
struct UOnCompanionRegistrationAdded_OnCompanionRegistrationAdded_Params
{
};

// Function Indiana.OnAttackComplete.OnAttackComplete
struct UOnAttackComplete_OnAttackComplete_Params
{
	int                                                AttackID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnCausedDamage.OnCauseDamage
struct UOnCausedDamage_OnCauseDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.OnReceiveDamage.OnDamageEvent
struct UOnReceiveDamage_OnDamageEvent_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.OnReceiveFallingDamage.OnFallingDamage
struct UOnReceiveFallingDamage_OnFallingDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnMeleeHit.OnMeleeHit
struct UOnMeleeHit_OnMeleeHit_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnMeleeActionStart.OnMeleeActionStart
struct UOnMeleeActionStart_OnMeleeActionStart_Params
{
	EMeleeAction                                       ActionStarted;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnMeleeActionEnd.OnMeleeActionEnd
struct UOnMeleeActionEnd_OnMeleeActionEnd_Params
{
	EMeleeAction                                       ActionEnded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnSpellCast.OnSpellCast
struct UOnSpellCast_OnSpellCast_Params
{
	class UClass*                                      Spell;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnSpellRemoved.OnSpellRemoved
struct UOnSpellRemoved_OnSpellRemoved_Params
{
	class UClass*                                      RemovedSpell;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnBlockStart.OnBlockStart
struct UOnBlockStart_OnBlockStart_Params
{
};

// Function Indiana.OnBlockEnd.OnBlockEnd
struct UOnBlockEnd_OnBlockEnd_Params
{
};

// Function Indiana.OnPerfectBlock.OnPerfectBlockEvent
struct UOnPerfectBlock_OnPerfectBlockEvent_Params
{
	class AIndianaCharacter*                           Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnBlockedHit.OnBlockedHitEvent
struct UOnBlockedHit_OnBlockedHitEvent_Params
{
	bool                                               bIsMeleeHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnDetected.OnDetectedEvent
struct UOnDetected_OnDetectedEvent_Params
{
	class AActor*                                      Detector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnIndividualDetected.OnIndividualUnDetectedEvent
struct UOnIndividualDetected_OnIndividualUnDetectedEvent_Params
{
	class AIndianaAiCharacter*                         Detector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnIndividualDetected.OnIndividualDetectedEvent
struct UOnIndividualDetected_OnIndividualDetectedEvent_Params
{
	class AIndianaAiCharacter*                         Detector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPlayerMoveStart.OnPlayerMoveStart
struct UOnPlayerMoveStart_OnPlayerMoveStart_Params
{
};

// Function Indiana.OnPlayerMoveEnd.OnPlayerMoveEnd
struct UOnPlayerMoveEnd_OnPlayerMoveEnd_Params
{
};

// Function Indiana.OnDodgeEvent.OnDodge
struct UOnDodgeEvent_OnDodge_Params
{
	EDodgeDirection                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnStatusEffectAddedEvent.OnAddStatusEffect
struct UOnStatusEffectAddedEvent_OnAddStatusEffect_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffectAdded;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.OnStatusEffectRemovedEvent.OnStatusEffectRemoved
struct UOnStatusEffectRemovedEvent_OnStatusEffectRemoved_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffectRemoved;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.OnNumHostileStatusEffects.OnStatusEffectRemoved
struct UOnNumHostileStatusEffects_OnStatusEffectRemoved_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffectRemoved;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.OnNumHostileStatusEffects.OnStatusEffectAdded
struct UOnNumHostileStatusEffects_OnStatusEffectAdded_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffectAdded;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.HasStatusEffectsEvent.OnAddStatusEffect
struct UHasStatusEffectsEvent_OnAddStatusEffect_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffectAdded;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.OnSkillUsedEvent.OnSkillUsed
struct UOnSkillUsedEvent_OnSkillUsed_Params
{
	ESkill                                             SkillUsed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnSkillEndedEvent.OnSkillEnded
struct UOnSkillEndedEvent_OnSkillEnded_Params
{
	ESkill                                             SkillUsed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnSkillCheckSuccess.OnSkillCheckSuccess
struct UOnSkillCheckSuccess_OnSkillCheckSuccess_Params
{
	EXPGainReason                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPEarned;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkill                                             SkillUsed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnItemConsumed.OnItemConsumed
struct UOnItemConsumed_OnItemConsumed_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.OnSpendMoney.OnMoneySpent
struct UOnSpendMoney_OnMoneySpent_Params
{
	int                                                Money;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bVendorInteraction;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPickPocket.OnPickPocket
struct UOnPickPocket_OnPickPocket_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPickPocketStart.OnPickPocket
struct UOnPickPocketStart_OnPickPocket_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPickPocketEnd.OnPickPocket
struct UOnPickPocketEnd_OnPickPocket_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReputationListener.OnReputationChange
struct UReputationListener_OnReputationChange_Params
{
	class UFactionData*                                FactionData;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EReputationType                                    InReputationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UReputationData*                             ReputationBefore;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UReputationData*                             ReputationAfter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPartyChange.OnPartyChanged
struct UOnPartyChange_OnPartyChanged_Params
{
	class AIndianaAiCharacter*                         Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAdded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPerfectDodge.OnPerfectDodge
struct UOnPerfectDodge_OnPerfectDodge_Params
{
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnBehaviorStateChange.OnBehaviorStateEvent
struct UOnBehaviorStateChange_OnBehaviorStateEvent_Params
{
	EBehaviorState                                     InBehaviorState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EBehaviorStateEventType                            InEventType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnCalledShotCameraChange.OnCameraStepEvent
struct UOnCalledShotCameraChange_OnCameraStepEvent_Params
{
	ECalledShotCameraStep                              CameraStep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnHealthPercentage.OnHealthChanged
struct UOnHealthPercentage_OnHealthChanged_Params
{
	float                                              HealthChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnCompanionKilled.OnCompanionKilled
struct UOnCompanionKilled_OnCompanionKilled_Params
{
	class AActor*                                      Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnCinematicModeChange.OnCinematicModeChange
struct UOnCinematicModeChange_OnCinematicModeChange_Params
{
	bool                                               bCinematicMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnMedKitUsed.OnMedKitUsed
struct UOnMedKitUsed_OnMedKitUsed_Params
{
	int                                                ConsumablesUsed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnRestrictedAreaEntered.OnRestrictedAreaEntered
struct UOnRestrictedAreaEntered_OnRestrictedAreaEntered_Params
{
	class ARestrictedArea*                             RestrictedArea;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnRestrictedAreaExited.OnRestrictedAreaExited
struct UOnRestrictedAreaExited_OnRestrictedAreaExited_Params
{
	class ARestrictedArea*                             RestrictedArea;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnAcrophobiaEnabled.OnAcrophobiaChanged
struct UOnAcrophobiaEnabled_OnAcrophobiaChanged_Params
{
	bool                                               bNowEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnTactialTimeDialationStart.OnTacticalTimeDilationStart
struct UOnTactialTimeDialationStart_OnTacticalTimeDilationStart_Params
{
};

// Function Indiana.OnTactialTimeDialationEnd.OnTacticalTimeDilationEnd
struct UOnTactialTimeDialationEnd_OnTacticalTimeDilationEnd_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnResurrect.OnNewStateOfBeing
struct UOnResurrect_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnRest.OnRest
struct UOnRest_OnRest_Params
{
};

// Function Indiana.OnInteractableSelectionChanged.OnInteractableSelectionChanged
struct UOnInteractableSelectionChanged_OnInteractableSelectionChanged_Params
{
	struct FInteractionDescription                     Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.OnStatUpdated.OnStatUpdated
struct UOnStatUpdated_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnSkillUpdated.OnSkillUpdated
struct UOnSkillUpdated_OnSkillUpdated_Params
{
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnOccupiedElevatorMove.OnOccupiedElevatorMove
struct UOnOccupiedElevatorMove_OnOccupiedElevatorMove_Params
{
	class AElevator*                                   Elevator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnAnimationSpellTrigger.OnAnimationTriggered
struct UOnAnimationSpellTrigger_OnAnimationTriggered_Params
{
	struct FGameplayTag                                TriggerType;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnJump.OnJump
struct UOnJump_OnJump_Params
{
};

// Function Indiana.OnLanded.OnLanded
struct UOnLanded_OnLanded_Params
{
	float                                              FallDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnTTDMeterPercentage.OnTTDMeterChanged
struct UOnTTDMeterPercentage_OnTTDMeterChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnSprintStart.OnSprintStarted
struct UOnSprintStart_OnSprintStarted_Params
{
};

// Function Indiana.OnSprintEnd.OnSprintEnded
struct UOnSprintEnd_OnSprintEnded_Params
{
};

// Function Indiana.OnPlayerFirstAttacked.OnFirstAttacked
struct UOnPlayerFirstAttacked_OnFirstAttacked_Params
{
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPlayerFirstAttack.OnFirstAttack
struct UOnPlayerFirstAttack_OnFirstAttack_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnStateOfBeingChanged.OnStateOfBeingChanged
struct UOnStateOfBeingChanged_OnStateOfBeingChanged_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnObjectBumped.OnBumped
struct UOnObjectBumped_OnBumped_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.OnCombatStateChange.OnCombatStateChange
struct UOnCombatStateChange_OnCombatStateChange_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnGetUp.OnGetUp
struct UOnGetUp_OnGetUp_Params
{
	bool                                               bInBegan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPlayerConversationChange.OnPlayerConversationChange
struct UOnPlayerConversationChange_OnPlayerConversationChange_Params
{
	class UConversationInstance*                       Instance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInEntered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnAddictionTimerEntersMaxed.OnAddictionTimerEntersMaxed
struct UOnAddictionTimerEntersMaxed_OnAddictionTimerEntersMaxed_Params
{
	struct FGameplayTag                                TimerTag;                                                 // (Parm)
};

// Function Indiana.OnAddictionTimerLeavesMaxed.OnAddictionTimerLeavesMaxed
struct UOnAddictionTimerLeavesMaxed_OnAddictionTimerLeavesMaxed_Params
{
	struct FGameplayTag                                TimerTag;                                                 // (Parm)
};

// Function Indiana.OnSellItemNumBits.OnVectorTransaction
struct UOnSellItemNumBits_OnVectorTransaction_Params
{
	int                                                BuyingBalance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SellingBalance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RepairingBalance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemStackSplit                             ItemStackSplit;                                           // (Parm, OutParm)
};

// Function Indiana.OnFlawAccepted.OnFlawAccepted
struct UOnFlawAccepted_OnFlawAccepted_Params
{
	class UClass*                                      Flaw;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnLevelChangedListener.OnLevelChanged
struct UOnLevelChangedListener_OnLevelChanged_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnItemTinkered.OnItemTinkered
struct UOnItemTinkered_OnItemTinkered_Params
{
};

// Function Indiana.OnEncumberedChange.OnEncumberedChange
struct UOnEncumberedChange_OnEncumberedChange_Params
{
	bool                                               bInEncumbered;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnStartCrouch.OnCrouch
struct UOnStartCrouch_OnCrouch_Params
{
};

// Function Indiana.OnStopCrouch.OnStopCrouch
struct UOnStopCrouch_OnStopCrouch_Params
{
};

// Function Indiana.OnInterrogateStartEvent.OnStartInterrogation
struct UOnInterrogateStartEvent_OnStartInterrogation_Params
{
};

// Function Indiana.OnGroinHit.OnGroinHit
struct UOnGroinHit_OnGroinHit_Params
{
};

// Function Indiana.OnPatientNKill.OnPatientNKill
struct UOnPatientNKill_OnPatientNKill_Params
{
};

// Function Indiana.OnMadScientistKill.OnMadScientistKill
struct UOnMadScientistKill_OnMadScientistKill_Params
{
};

// Function Indiana.OnBrandsMatch.OnBrandsMatch
struct UOnBrandsMatch_OnBrandsMatch_Params
{
};

// Function Indiana.OnSharpDressed.OnSharpDressed
struct UOnSharpDressed_OnSharpDressed_Params
{
};

// Function Indiana.OnSpecialPETBenefits.OnSpecialPETBenefits
struct UOnSpecialPETBenefits_OnSpecialPETBenefits_Params
{
};

// Function Indiana.OnUdderGatlingNeedler.OnUdderGatlingNeedler
struct UOnUdderGatlingNeedler_OnUdderGatlingNeedler_Params
{
};

// Function Indiana.OnElementalMaelstrom.OnElementalMaelstrom
struct UOnElementalMaelstrom_OnElementalMaelstrom_Params
{
};

// Function Indiana.OnInterrogateEndEvent.OnEndInterrogation
struct UOnInterrogateEndEvent_OnEndInterrogation_Params
{
	EInterrogationResult                               InterrogationResult;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaAiCharacter*                         Interrogator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ECrimeType                                         InCrime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInDisguised;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InDisguiseInterrogationsPassed;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnMaxPositiveFactions.OnMaxPositiveFactions
struct UOnMaxPositiveFactions_OnMaxPositiveFactions_Params
{
};

// Function Indiana.OnMaxNegativeFactions.OnMaxNegativeFactions
struct UOnMaxNegativeFactions_OnMaxNegativeFactions_Params
{
};

// Function Indiana.OnKillingBlowListener.OnKillingBlow
struct UOnKillingBlowListener_OnKillingBlow_Params
{
};

// Function Indiana.OnQuestCompleteListener.OnQuestComplete
struct UOnQuestCompleteListener_OnQuestComplete_Params
{
	struct FGuid                                       QuestID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.OnModInstalledListener.OnModInstalled
struct UOnModInstalledListener_OnModInstalled_Params
{
};

// Function Indiana.OnWeaponEquipped.OnWeaponEquipped
struct UOnWeaponEquipped_OnWeaponEquipped_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.OnWeaponHolstered.OnWeaponHolstered
struct UOnWeaponHolstered_OnWeaponHolstered_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.OnWeaponUnholstered.OnWeaponUnholstered
struct UOnWeaponUnholstered_OnWeaponUnholstered_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.OnWithinRoboRange.OnRoboWithinRangeStateChanged
struct UOnWithinRoboRange_OnRoboWithinRangeStateChanged_Params
{
};

// Function Indiana.OnPlayerBeginPlay.OnPlayerBeginPlay
struct UOnPlayerBeginPlay_OnPlayerBeginPlay_Params
{
};

// Function Indiana.OnFastTravelInitiated.OnFastTravelInitiated
struct UOnFastTravelInitiated_OnFastTravelInitiated_Params
{
	class UTravelDestinationData*                      TravelData;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimePassed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTravelFromMapLedger;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnRespec.OnRespec
struct UOnRespec_OnRespec_Params
{
};

// Function Indiana.OnCarryWeightChange.OnCarryWeightChange
struct UOnCarryWeightChange_OnCarryWeightChange_Params
{
};

// Function Indiana.OnGlobalVarChanged.OnGlobalVarChanged
struct UOnGlobalVarChanged_OnGlobalVarChanged_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OnPickupAudioLog.OnPickupAudioLog
struct UOnPickupAudioLog_OnPickupAudioLog_Params
{
	class UAudioLogDataAsset*                          AudioLogDataAsset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EvidenceActor.RefreshHasItemEquipped
struct AEvidenceActor_RefreshHasItemEquipped_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.EvidenceActor.RefreshHasItem
struct AEvidenceActor_RefreshHasItem_Params
{
};

// Function Indiana.EvidenceActor.PlayerExitedProximity
struct AEvidenceActor_PlayerExitedProximity_Params
{
};

// Function Indiana.EvidenceActor.PlayerEnteredProximity
struct AEvidenceActor_PlayerEnteredProximity_Params
{
};

// Function Indiana.EvidenceActor.OnVisibilityStateChanged
struct AEvidenceActor_OnVisibilityStateChanged_Params
{
};

// Function Indiana.EvidenceActor.OnConversationStarted
struct AEvidenceActor_OnConversationStarted_Params
{
	class UConversationInstance*                       Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EvidenceActor.OnConversationEnded
struct AEvidenceActor_OnConversationEnded_Params
{
	class UConversationInstance*                       Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EvidenceActor.OnCombatStateChanged
struct AEvidenceActor_OnCombatStateChanged_Params
{
	bool                                               bCombatIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EvidenceActor.OnActivated
struct AEvidenceActor_OnActivated_Params
{
	bool                                               bActivated;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.EvidenceActor.IsVisible
struct AEvidenceActor_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.EvidenceActor.IsInDAConversation
struct AEvidenceActor_IsInDAConversation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.EvidenceActor.HasBeenScanned
struct AEvidenceActor_HasBeenScanned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ExpandableAreaBase.SetIsExpanded_Animated
struct UExpandableAreaBase_SetIsExpanded_Animated_Params
{
	bool                                               IsExpanded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ExpandableAreaBase.SetIsExpanded
struct UExpandableAreaBase_SetIsExpanded_Params
{
	bool                                               IsExpanded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ExpandableAreaBase.GetIsExpanded
struct UExpandableAreaBase_GetIsExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FactionManager.SetRandomReputations_Debug
struct UFactionManager_SetRandomReputations_Debug_Params
{
};

// Function Indiana.FactionManager.SetPositiveReputation_Debug
struct UFactionManager_SetPositiveReputation_Debug_Params
{
	class FString                                      FactionName;                                              // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FactionManager.SetNegativeReputation_Debug
struct UFactionManager_SetNegativeReputation_Debug_Params
{
	class FString                                      FactionName;                                              // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FactionManager.SetFactionEncountered_BP
struct UFactionManager_SetFactionEncountered_BP_Params
{
	class UClass*                                      FactionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FactionManager.IsReputationRankType_BP
struct UFactionManager_IsReputationRankType_BP_Params
{
	class UClass*                                      FactionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EReputationRankType                                InRankType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FactionManager.IsReputationRank_BP
struct UFactionManager_IsReputationRank_BP_Params
{
	class UClass*                                      FactionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EReputationRankType                                InRankType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InRank;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FactionManager.GetReputation_BP
struct UFactionManager_GetReputation_BP_Params
{
	class UClass*                                      FactionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UReputationData*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FactionManager.ClearFactionRecentHostilityToPlayer_BP
struct UFactionManager_ClearFactionRecentHostilityToPlayer_BP_Params
{
	class UClass*                                      FactionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FactionManager.AddReputation_BP
struct UFactionManager_AddReputation_BP_Params
{
	class UClass*                                      FactionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EReputationType                                    ReputationType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EReputationIncrementType                           IncrementType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CustomAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EReputationActionType                              ReputationAction;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FactionManager.AddPositiveReputation_Debug
struct UFactionManager_AddPositiveReputation_Debug_Params
{
	class FString                                      FactionName;                                              // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FactionManager.AddNegativeReputation_Debug
struct UFactionManager_AddNegativeReputation_Debug_Params
{
	class FString                                      FactionName;                                              // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FireMode.UsesCharge
struct UFireMode_UsesCharge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FireMode.ResetCharge
struct UFireMode_ResetCharge_Params
{
};

// Function Indiana.FireMode.OnTimeDilationUpdated
struct UFireMode_OnTimeDilationUpdated_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FireMode.OnStatUpdated
struct UFireMode_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FireMode.IsSpinUp
struct UFireMode_IsSpinUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FireMode.IsSemiAutomatic
struct UFireMode_IsSemiAutomatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FireMode.IsProjectileCharge
struct UFireMode_IsProjectileCharge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FireMode.IsBurst
struct UFireMode_IsBurst_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FireMode.GetChargeProgress
struct UFireMode_GetChargeProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FireMode.CanCharge
struct UFireMode_CanCharge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SpawnNodeBase.OnActorTookDamage
struct ASpawnNodeBase_OnActorTookDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.SpawnNodeBase.OnActorNewStateOfBeing
struct ASpawnNodeBase_OnActorNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SpawnNodeBase.OnActorDespawned
struct ASpawnNodeBase_OnActorDespawned_Params
{
};

// Function Indiana.SpawnNodeBase.OnActorCombatStateChanged
struct ASpawnNodeBase_OnActorCombatStateChanged_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SpawnNodeBase.OnActorAwareOfPlayer
struct ASpawnNodeBase_OnActorAwareOfPlayer_Params
{
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SpawnNodeBase.OnActorAlertStateChanged
struct ASpawnNodeBase_OnActorAlertStateChanged_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        PreviousAlertState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        TargetAlertState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FlipbookWidget.IsPlaying
struct UFlipbookWidget_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FlipbookWidget.EndPlay
struct UFlipbookWidget_EndPlay_Params
{
};

// Function Indiana.FlipbookWidget.BeginPlay
struct UFlipbookWidget_BeginPlay_Params
{
	bool                                               bInShouldLoop;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayFromFrame;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ForcedAnimationComponent.PlayEquippedWeaponInspectionAnimation
struct UForcedAnimationComponent_PlayEquippedWeaponInspectionAnimation_Params
{
};

// Function Indiana.ForcedAnimationComponent.OnWeaponEquipped
struct UForcedAnimationComponent_OnWeaponEquipped_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.FPVAnimInstance.OnHeadbobbingChanged
struct UFPVAnimInstance_OnHeadbobbingChanged_Params
{
	bool                                               bShouldHeadbob;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.FPVAnimInstance.IsAimTransitioning
struct UFPVAnimInstance_IsAimTransitioning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FPVAnimInstance.GetHeadbobWeight
struct UFPVAnimInstance_GetHeadbobWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.FPVCameraComponent.OnFieldOfViewSettingChanged
struct UFPVCameraComponent_OnFieldOfViewSettingChanged_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.RequestUnpauseTime
struct UGameCalendar_RequestUnpauseTime_Params
{
	struct FName                                       RequestContext;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.RequestPauseTime
struct UGameCalendar_RequestPauseTime_Params
{
	struct FName                                       RequestContext;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.LockCalendar
struct UGameCalendar_LockCalendar_Params
{
	bool                                               Block;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_SetupDelayedCallback
struct UGameCalendar_K2_SetupDelayedCallback_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             EventToDelay;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              SecondsToDelay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_RegisterNamedTimestamp
struct UGameCalendar_K2_RegisterNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
};

// Function Indiana.GameCalendar.K2_IsTimeSlice
struct UGameCalendar_K2_IsTimeSlice_Params
{
	int                                                StartHour;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_IsPhaseOfDay
struct UGameCalendar_K2_IsPhaseOfDay_Params
{
	EPhaseOfDay                                        Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_HaveMinutesElapsedSinceNamedTimestamp
struct UGameCalendar_K2_HaveMinutesElapsedSinceNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
	int                                                Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_HaveHoursElapsedSinceNamedTimestamp
struct UGameCalendar_K2_HaveHoursElapsedSinceNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
	int                                                Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_HaveDaysElapsedSinceNamedTimestamp
struct UGameCalendar_K2_HaveDaysElapsedSinceNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
	int                                                Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_GetRawHour
struct UGameCalendar_K2_GetRawHour_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_GetNormalizedTime
struct UGameCalendar_K2_GetNormalizedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_ClearNamedTimestamp
struct UGameCalendar_K2_ClearNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
};

// Function Indiana.GameCalendar.K2_AdvanceToHour
struct UGameCalendar_K2_AdvanceToHour_Params
{
	int                                                TargetHour;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_AdvanceTime
struct UGameCalendar_K2_AdvanceTime_Params
{
	float                                              Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_AdvanceSeconds
struct UGameCalendar_K2_AdvanceSeconds_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_AdvanceMinutes
struct UGameCalendar_K2_AdvanceMinutes_Params
{
	float                                              Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_AdvanceHours
struct UGameCalendar_K2_AdvanceHours_Params
{
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.K2_AdvanceDays
struct UGameCalendar_K2_AdvanceDays_Params
{
	float                                              Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.ForceWeatherStart
struct UGameCalendar_ForceWeatherStart_Params
{
};

// Function Indiana.GameCalendar.ForceWeatherEnd
struct UGameCalendar_ForceWeatherEnd_Params
{
};

// Function Indiana.GameCalendar.AdvanceToHour
struct UGameCalendar_AdvanceToHour_Params
{
	float                                              TargetHour;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.AdvanceTime
struct UGameCalendar_AdvanceTime_Params
{
	float                                              Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.AdvanceSeconds
struct UGameCalendar_AdvanceSeconds_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.AdvanceMinutes
struct UGameCalendar_AdvanceMinutes_Params
{
	float                                              Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.AdvanceHours
struct UGameCalendar_AdvanceHours_Params
{
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GameCalendar.AdvanceDays
struct UGameCalendar_AdvanceDays_Params
{
	float                                              Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GammaSelectionWidget.OnRestoreDefaults
struct UGammaSelectionWidget_OnRestoreDefaults_Params
{
};

// Function Indiana.GammaSelectionWidget.OnLocStringChanged
struct UGammaSelectionWidget_OnLocStringChanged_Params
{
};

// Function Indiana.GammaSelectionWidget.OnGammaChanged
struct UGammaSelectionWidget_OnGammaChanged_Params
{
	struct FSliderEvent                                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.GammaSelectionWidget.OnGammaAccepted
struct UGammaSelectionWidget_OnGammaAccepted_Params
{
};

// Function Indiana.GammaSelectionWidget.ApplyDefaults
struct UGammaSelectionWidget_ApplyDefaults_Params
{
};

// Function Indiana.GenericNotificationEntryWidget.PrepareNextMessage
struct UGenericNotificationEntryWidget_PrepareNextMessage_Params
{
};

// Function Indiana.GenericNotificationEntryWidget.PrepareNewMessage
struct UGenericNotificationEntryWidget_PrepareNewMessage_Params
{
};

// Function Indiana.GenericNotificationEntryWidget.OnStickLayoutChanged
struct UGenericNotificationEntryWidget_OnStickLayoutChanged_Params
{
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GenericNotificationEntryWidget.OnFadeOutComplete
struct UGenericNotificationEntryWidget_OnFadeOutComplete_Params
{
};

// Function Indiana.GenericNotificationEntryWidget.OnFadeInComplete
struct UGenericNotificationEntryWidget_OnFadeInComplete_Params
{
};

// Function Indiana.GenericNotificationWidget.TriggerFadeOut
struct UGenericNotificationWidget_TriggerFadeOut_Params
{
};

// Function Indiana.GenericNotificationWidget.TriggerFadeIn
struct UGenericNotificationWidget_TriggerFadeIn_Params
{
};

// Function Indiana.GenericNotificationWidget.SetBackingMaterialHeight
struct UGenericNotificationWidget_SetBackingMaterialHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GenericNotificationWidget.OnSaveGameComplete
struct UGenericNotificationWidget_OnSaveGameComplete_Params
{
	ESaveGameResult                                    SaveResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ESaveGameType                                      SaveGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GenericNotificationWidget.OnNotificationDurationChanged
struct UGenericNotificationWidget_OnNotificationDurationChanged_Params
{
	float                                              NotificationTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GenericNotificationWidget.OnHUDVisibilityChanged
struct UGenericNotificationWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.GenericNotificationWidget.OnFadeOutComplete
struct UGenericNotificationWidget_OnFadeOutComplete_Params
{
};

// Function Indiana.GravManger.SetLowGravAmbientAudioEnabled
struct AGravManger_SetLowGravAmbientAudioEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ButtonGroup.OnButtonUnFocused
struct UButtonGroup_OnButtonUnFocused_Params
{
	class UButtonBase*                                 Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.ButtonGroup.OnButtonFocused
struct UButtonGroup_OnButtonFocused_Params
{
	class UButtonBase*                                 Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.ButtonGroup.CyclePreviousButton
struct UButtonGroup_CyclePreviousButton_Params
{
};

// Function Indiana.ButtonGroup.CycleNextButton
struct UButtonGroup_CycleNextButton_Params
{
};

// Function Indiana.ScrollingWidgetGroup.OnScrollingComplete
struct UScrollingWidgetGroup_OnScrollingComplete_Params
{
};

// Function Indiana.Hazard.OnActorExited
struct AHazard_OnActorExited_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Hazard.OnActorEntered
struct AHazard_OnActorEntered_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Hazard.ForceSetEnabled
struct AHazard_ForceSetEnabled_Params
{
	bool                                               bNewEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Hazard.CustomUpdate
struct AHazard_CustomUpdate_Params
{
};

// Function Indiana.Hazard.AttemptEnableHazard
struct AHazard_AttemptEnableHazard_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HazardAudioComponent.Stop
struct UHazardAudioComponent_Stop_Params
{
	EHazardEventType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HazardAudioComponent.Play
struct UHazardAudioComponent_Play_Params
{
	EHazardEventType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HeadAndBodyTrackingComponent.OnOccupiedElevatorChange
struct UHeadAndBodyTrackingComponent_OnOccupiedElevatorChange_Params
{
	class AElevator*                                   Elevator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOccupied;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.Suicide
struct UHealthComponent_Suicide_Params
{
};

// Function Indiana.HealthComponent.SetPseudoGod
struct UHealthComponent_SetPseudoGod_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.SetHealthPercentNPC
struct UHealthComponent_SetHealthPercentNPC_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.SetHealthPercent
struct UHealthComponent_SetHealthPercent_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.SetGod
struct UHealthComponent_SetGod_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.PseudoGod
struct UHealthComponent_PseudoGod_Params
{
};

// Function Indiana.HealthComponent.OnStatUpdated
struct UHealthComponent_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.OnAttributeUpdated
struct UHealthComponent_OnAttributeUpdated_Params
{
	EAttribute                                         Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.LevelChanged
struct UHealthComponent_LevelChanged_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.KillNPC
struct UHealthComponent_KillNPC_Params
{
	class AIndianaAiCharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthComponent.HealthFill
struct UHealthComponent_HealthFill_Params
{
};

// Function Indiana.HealthComponent.GodCompanions
struct UHealthComponent_GodCompanions_Params
{
};

// Function Indiana.HealthComponent.God
struct UHealthComponent_God_Params
{
};

// Function Indiana.HealthComponent.GetStateOfBeing
struct UHealthComponent_GetStateOfBeing_Params
{
	EStateOfBeing                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.HealthComponent.GetRegenRatePoints
struct UHealthComponent_GetRegenRatePoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.HealthComponent.GetRegenRate
struct UHealthComponent_GetRegenRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.HealthComponent.GetNormalizedHealth
struct UHealthComponent_GetNormalizedHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.HealthComponent.GetMaxHealth
struct UHealthComponent_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.HealthComponent.GetHealth
struct UHealthComponent_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.HealthComponent.DeathComplete
struct UHealthComponent_DeathComplete_Params
{
	class AActor*                                      DeadActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HealthKitTooltipWidget.FontSizeChanged
struct UHealthKitTooltipWidget_FontSizeChanged_Params
{
	int                                                NewModifier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HitEffectIndicatorComponent.OnTakeDamage
struct UHitEffectIndicatorComponent_OnTakeDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HitEffectIndicatorComponent.OnHit
struct UHitEffectIndicatorComponent_OnHit_Params
{
	float                                              NormalizedAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IncidentAngleRelativeToCameraDegrees;                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HitEffectIndicatorComponent.HitEffectIndicatorEnableDebugKeys
struct UHitEffectIndicatorComponent_HitEffectIndicatorEnableDebugKeys_Params
{
};

// Function Indiana.HUDWidget.QueueLevelUpNotification
struct UHUDWidget_QueueLevelUpNotification_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.HUDWidget.GetCharacterOverview
struct UHUDWidget_GetCharacterOverview_Params
{
	class UCharacterOverviewWidget*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.UpdateOutlines
struct AIndianaCharacter_UpdateOutlines_Params
{
};

// Function Indiana.IndianaCharacter.PlayWeaponEvent
struct AIndianaCharacter_PlayWeaponEvent_Params
{
	class FString                                      WeaponEvent;                                              // (Parm, ZeroConstructor)
};

// Function Indiana.IndianaCharacter.OnRestoredStateOfBeing
struct AIndianaCharacter_OnRestoredStateOfBeing_Params
{
	EStateOfBeing                                      RestoredStateOfBeing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.OnPreStateOfBeingChange
struct AIndianaCharacter_OnPreStateOfBeingChange_Params
{
	EStateOfBeing                                      StateOfBeing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.OnNewStateOfBeing
struct AIndianaCharacter_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.OnLevelChanged
struct AIndianaCharacter_OnLevelChanged_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.OnDifficultyChanged
struct AIndianaCharacter_OnDifficultyChanged_Params
{
	EGameDifficulty                                    NewDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.OnAttack
struct AIndianaCharacter_OnAttack_Params
{
	float                                              DurationScalar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.ItemRemoved
struct AIndianaCharacter_ItemRemoved_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaCharacter.ItemAdded
struct AIndianaCharacter_ItemAdded_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaCharacter.IsWeaponEquipped
struct AIndianaCharacter_IsWeaponEquipped_Params
{
	class UClass*                                      WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.IsArmorEquipped
struct AIndianaCharacter_IsArmorEquipped_Params
{
	class UClass*                                      ArmorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.HasItem
struct AIndianaCharacter_HasItem_Params
{
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.GetStatusEffectManager
struct AIndianaCharacter_GetStatusEffectManager_Params
{
	class UStatusEffectManagerComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.GetItemQuantity
struct AIndianaCharacter_GetItemQuantity_Params
{
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.GetEquipmentComponent
struct AIndianaCharacter_GetEquipmentComponent_Params
{
	class UEquipmentComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.GetCurrentWeapon
struct AIndianaCharacter_GetCurrentWeapon_Params
{
	class UWeapon*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.ExecuteDeath
struct AIndianaCharacter_ExecuteDeath_Params
{
	bool                                               bFromReload;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCharacter.Died
struct AIndianaCharacter_Died_Params
{
	struct FCauseDamageInfo                            CDI;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaCharacter.DamageCaused
struct AIndianaCharacter_DamageCaused_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaCharacter.CastSpellDebugTarget
struct AIndianaCharacter_CastSpellDebugTarget_Params
{
	class FString                                      SpellName;                                                // (Parm, ZeroConstructor)
};

// Function Indiana.IndianaCharacter.CastSpellDebug
struct AIndianaCharacter_CastSpellDebug_Params
{
	class FString                                      SpellName;                                                // (Parm, ZeroConstructor)
};

// Function Indiana.IndianaAiCharacter.SetRagdoll
struct AIndianaAiCharacter_SetRagdoll_Params
{
	bool                                               bInIsRagdoll;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantFreeze;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiCharacter.SetIsInLowGrav
struct AIndianaAiCharacter_SetIsInLowGrav_Params
{
	bool                                               bNewIsInLowGrav;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiCharacter.OnWeaponEndUnequip
struct AIndianaAiCharacter_OnWeaponEndUnequip_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaAiCharacter.OnWeaponEndEquip
struct AIndianaAiCharacter_OnWeaponEndEquip_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaAiCharacter.OnMontageEndDelegate
struct AIndianaAiCharacter_OnMontageEndDelegate_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiCharacter.OnDamageEvent
struct AIndianaAiCharacter_OnDamageEvent_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaAiCharacter.OnAlertStateChange
struct AIndianaAiCharacter_OnAlertStateChange_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        PreviousAlertState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        TargetAlertState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiCharacter.OnActorHiddenChange
struct AIndianaAiCharacter_OnActorHiddenChange_Params
{
	bool                                               bIsHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiCharacter.IsInCombat
struct AIndianaAiCharacter_IsInCombat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaAiCharacter.GetOwningController
struct AIndianaAiCharacter_GetOwningController_Params
{
	class AIndianaAiController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaAiController.OnTakeDamage
struct AIndianaAiController_OnTakeDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaAiController.OnSwitchedTarget
struct AIndianaAiController_OnSwitchedTarget_Params
{
	class AActor*                                      OldTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.OnRestoredStateOfBeing
struct AIndianaAiController_OnRestoredStateOfBeing_Params
{
	EStateOfBeing                                      RestoredStateOfBeing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.OnNewStateOfBeing
struct AIndianaAiController_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.OnMeleeActionEnd
struct AIndianaAiController_OnMeleeActionEnd_Params
{
	EMeleeAction                                       ActionEnded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.OnCombatStateChange
struct AIndianaAiController_OnCombatStateChange_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.OnBehaviorStateChange
struct AIndianaAiController_OnBehaviorStateChange_Params
{
	class UBehaviorStateInfo*                          OldBehaviorStateInfo;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UBehaviorStateInfo*                          NewBehaviorStateInfo;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.GetSightAwarenessIncreaseRate
struct AIndianaAiController_GetSightAwarenessIncreaseRate_Params
{
	bool                                               bIsStealthed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OwnerPerceptionSkill;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSneakSkill;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        InAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTargeting;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaAiController.GetSightAwarenessDecreaseRate
struct AIndianaAiController_GetSightAwarenessDecreaseRate_Params
{
	bool                                               bIsStealthed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OwnerPerceptionSkill;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSneakSkill;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        InAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeadBodyKiller;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaAiController.GetFootstepAwarenessIncrease
struct AIndianaAiController_GetFootstepAwarenessIncrease_Params
{
	bool                                               bIsStealthed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OwnerPerceptionSkill;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetSneakSkill;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        InAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseFootstepAwareness;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SoundRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaAiController.GetCurrentTargetDistance
struct AIndianaAiController_GetCurrentTargetDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptWander
struct AIndianaAiController_AIScriptWander_Params
{
	class AIndianaAiCharacter*                         InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptPatrolInterruptible
struct AIndianaAiController_AIScriptPatrolInterruptible_Params
{
	class AIndianaAiCharacter*                         InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APatrolNode*                                 InPatrolNode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptPatrol
struct AIndianaAiController_AIScriptPatrol_Params
{
	class AIndianaAiCharacter*                         InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APatrolNode*                                 InPatrolNode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptIdle
struct AIndianaAiController_AIScriptIdle_Params
{
	class AIndianaAiCharacter*                         InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptFollowPlayer
struct AIndianaAiController_AIScriptFollowPlayer_Params
{
	class AIndianaAiCharacter*                         InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptEncounterAttackEncounter
struct AIndianaAiController_AIScriptEncounterAttackEncounter_Params
{
	class AEncounter*                                  InEncounter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AEncounter*                                  InTargetEncounter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptEncounterAttack
struct AIndianaAiController_AIScriptEncounterAttack_Params
{
	class AIndianaAiCharacter*                         InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AEncounter*                                  InTargetEncounter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptClearScripts
struct AIndianaAiController_AIScriptClearScripts_Params
{
	class AIndianaAiCharacter*                         InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptCharactersAttackCharacters
struct AIndianaAiController_AIScriptCharactersAttackCharacters_Params
{
	TArray<class AIndianaAiCharacter*>                 InCharacters;                                             // (Parm, ZeroConstructor)
	TArray<class AIndianaAiCharacter*>                 InTargetCharacters;                                       // (Parm, ZeroConstructor)
};

// Function Indiana.IndianaAiController.AIScriptAttackEncounter
struct AIndianaAiController_AIScriptAttackEncounter_Params
{
	class AEncounter*                                  InEncounter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaCharacter*                           InTargetCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAiController.AIScriptAttack
struct AIndianaAiController_AIScriptAttack_Params
{
	class AIndianaAiCharacter*                         InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaCharacter*                           InTargetCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAIPerceptionComponent.OnStatUpdated
struct UIndianaAIPerceptionComponent_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAIPerceptionComponent.OnPerceptionRangeScalarUpdated
struct UIndianaAIPerceptionComponent_OnPerceptionRangeScalarUpdated_Params
{
	struct FGameplayTagContainer                       CreatureType;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaAIPerceptionComponent.OnGodVisionChanged
struct UIndianaAIPerceptionComponent_OnGodVisionChanged_Params
{
	bool                                               bGodVision;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAIPerceptionComponent.OnCombatStateChanged
struct UIndianaAIPerceptionComponent_OnCombatStateChanged_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAIPerceptionComponent.OnCharacterDeath
struct UIndianaAIPerceptionComponent_OnCharacterDeath_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaAIPerceptionComponent.OnBehaviorTreeInitialized
struct UIndianaAIPerceptionComponent_OnBehaviorTreeInitialized_Params
{
};

// Function Indiana.IndianaAudioComponent.OnStopClimb
struct UIndianaAudioComponent_OnStopClimb_Params
{
};

// Function Indiana.IndianaAudioComponent.OnStartClimb
struct UIndianaAudioComponent_OnStartClimb_Params
{
};

// Function Indiana.IndianaAudioComponent.OnSpecialMovementEvent
struct UIndianaAudioComponent_OnSpecialMovementEvent_Params
{
	ESpecialMovementEvent                              SpecialEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysMaterial;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAudioComponent.OnNewStateOfBeing
struct UIndianaAudioComponent_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAudioComponent.OnNewFootstepData
struct UIndianaAudioComponent_OnNewFootstepData_Params
{
	class UFootstepData*                               NewData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAudioComponent.OnLanded
struct UIndianaAudioComponent_OnLanded_Params
{
	float                                              FallDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysMaterial;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAudioComponent.OnFootstep
struct UIndianaAudioComponent_OnFootstep_Params
{
	EFootID                                            FootID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EFootstepType                                      FootstepType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysMaterial;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAudioComponent.OnDodge
struct UIndianaAudioComponent_OnDodge_Params
{
	EDodgeDirection                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysMaterial;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAudioComponent.OnCharacterMovementUpdated
struct UIndianaAudioComponent_OnCharacterMovementUpdated_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaAutoPlayer.StopAutoPlayer
struct UIndianaAutoPlayer_StopAutoPlayer_Params
{
};

// Function Indiana.IndianaAutoPlayer.StartAutoPlayer
struct UIndianaAutoPlayer_StartAutoPlayer_Params
{
};

// Function Indiana.IndianaAutoPlayer.OnAsyncSaveComplete
struct UIndianaAutoPlayer_OnAsyncSaveComplete_Params
{
	ESaveGameResult                                    Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	ESaveGameType                                      SaveType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaBossBar.OnEndBossFight
struct UIndianaBossBar_OnEndBossFight_Params
{
};

// Function Indiana.IndianaBossBar.OnBossHealthChanged
struct UIndianaBossBar_OnBossHealthChanged_Params
{
	float                                              NormalizedHealth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaBossBar.OnBeginBossFight
struct UIndianaBossBar_OnBeginBossFight_Params
{
	class AIndianaCharacter*                           OwnerCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      BossName;                                                 // (Parm, ZeroConstructor)
	float                                              StartingNormalizedHealth;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaBossBar.GetShowAnimation
struct UIndianaBossBar_GetShowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaBossBar.GetHideAnimation
struct UIndianaBossBar_GetHideAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaCharacterDummy.OnWeaponEndEquip
struct AIndianaCharacterDummy_OnWeaponEndEquip_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaCharacterDummy.CopyFromCharacter
struct AIndianaCharacterDummy_CopyFromCharacter_Params
{
	class AIndianaCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCheatManager.SetLevelNPC
struct UIndianaCheatManager_SetLevelNPC_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCheatManager.LootTableDebug
struct UIndianaCheatManager_LootTableDebug_Params
{
	class FString                                      LootTable;                                                // (Parm, ZeroConstructor)
	int                                                NumTimes;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaCheatManager.GivePlayerAllItems
struct UIndianaCheatManager_GivePlayerAllItems_Params
{
};

// Function Indiana.IndianaCheatManager.DropAllItemsDebug
struct UIndianaCheatManager_DropAllItemsDebug_Params
{
	bool                                               bSplitStacks;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaDamageType.TriggerMuzzleFx
struct UIndianaDamageType_TriggerMuzzleFx_Params
{
	class USceneComponent*                             AttachComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaDamageType.SetupSecondaryImpactFx
struct UIndianaDamageType_SetupSecondaryImpactFx_Params
{
	class UParticleSystemComponent*                    ParentEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGraze;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCritical;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeakSpot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRadial;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaDamageType.SetupImpactFx
struct UIndianaDamageType_SetupImpactFx_Params
{
	class UParticleSystemComponent*                    ParentEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGraze;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCritical;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeakSpot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRadial;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaFlybyAkComponent.UpdateEmitterLocation
struct UIndianaFlybyAkComponent_UpdateEmitterLocation_Params
{
};

// Function Indiana.IndianaFlybyAkComponent.InitializeEmitter
struct UIndianaFlybyAkComponent_InitializeEmitter_Params
{
};

// Function Indiana.IndianaFlybyAkComponent.DeactivateEmitter
struct UIndianaFlybyAkComponent_DeactivateEmitter_Params
{
};

// Function Indiana.IndianaFormulas.WorkbenchRepairPartCost
struct UIndianaFormulas_WorkbenchRepairPartCost_Params
{
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EngineerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.VendorRepairCurrencyCost
struct UIndianaFormulas_VendorRepairCurrencyCost_Params
{
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.TrapToughness
struct UIndianaFormulas_TrapToughness_Params
{
	unsigned char                                      ExactTrapDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerEngineeringSkill;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.TrapDisarmNoise
struct UIndianaFormulas_TrapDisarmNoise_Params
{
	unsigned char                                      ExactTrapDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerEngineeringSkill;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.TrapDifficultyRange
struct UIndianaFormulas_TrapDifficultyRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.TrapDifficultyNumRanges
struct UIndianaFormulas_TrapDifficultyNumRanges_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.TrapDifficultyFullRange
struct UIndianaFormulas_TrapDifficultyFullRange_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.TrapDamagePercent
struct UIndianaFormulas_TrapDamagePercent_Params
{
	ETrapDifficulty                                    TrapDifficulty;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.TrapArmNoise
struct UIndianaFormulas_TrapArmNoise_Params
{
	unsigned char                                      ExactTrapDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerEngineeringSkill;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ShouldDrawFireSwitchCompanionTargets
struct UIndianaFormulas_ShouldDrawFireSwitchCompanionTargets_Params
{
	float                                              OldHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldDTBody;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldDTHead;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewDTBody;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewDTHead;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.PlayerSneakEnemyDetectionRage
struct UIndianaFormulas_PlayerSneakEnemyDetectionRage_Params
{
	bool                                               bInterior;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerSneakSkill;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.PickPocketTime
struct UIndianaFormulas_PickPocketTime_Params
{
	int                                                LockpickSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetPerception;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.LockpickToughness
struct UIndianaFormulas_LockpickToughness_Params
{
	unsigned char                                      ExactLockpickDifficulty;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerLockpickSkill;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.LockpickTime
struct UIndianaFormulas_LockpickTime_Params
{
	unsigned char                                      ExactLockpickDifficulty;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerLockpickSkill;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BasePlayerLockpickSkill;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.LockpickNumResources
struct UIndianaFormulas_LockpickNumResources_Params
{
	unsigned char                                      ExactLockpickDifficulty;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerLockpickSkill;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      BasePlayerLockpickSkill;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.LockpickNoise
struct UIndianaFormulas_LockpickNoise_Params
{
	unsigned char                                      ExactLockpickDifficulty;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerLockpickSkill;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.LockpickDifficultyRange
struct UIndianaFormulas_LockpickDifficultyRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.LockpickDifficultyNumRanges
struct UIndianaFormulas_LockpickDifficultyNumRanges_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.LockpickDifficultyFullRange
struct UIndianaFormulas_LockpickDifficultyFullRange_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.HackToughness
struct UIndianaFormulas_HackToughness_Params
{
	unsigned char                                      ExactHackDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerHackSkill;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.HackTime
struct UIndianaFormulas_HackTime_Params
{
	unsigned char                                      ExactHackDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerHackSkill;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.HackRobotTime
struct UIndianaFormulas_HackRobotTime_Params
{
	unsigned char                                      ExactHackDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerHackSkill;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.HackNumResources
struct UIndianaFormulas_HackNumResources_Params
{
	unsigned char                                      ExactHackDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerHackSkill;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.HackNoise
struct UIndianaFormulas_HackNoise_Params
{
	unsigned char                                      ExactHackDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerHackSkill;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.HackDifficultyRange
struct UIndianaFormulas_HackDifficultyRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.HackDifficultyNumRanges
struct UIndianaFormulas_HackDifficultyNumRanges_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.HackDifficultyFullRange
struct UIndianaFormulas_HackDifficultyFullRange_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.GetRespecCost
struct UIndianaFormulas_GetRespecCost_Params
{
	int                                                NumRespecs;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.GetModifiedItemEffectiveness
struct UIndianaFormulas_GetModifiedItemEffectiveness_Params
{
	class UDegradableItem*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.GetInterrogationBribeAmount
struct UIndianaFormulas_GetInterrogationBribeAmount_Params
{
	ECrimeType                                         CrimeType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictedArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisguised;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DisguiseInterrogationsPassed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MerchantSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StolenItemsValue;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.GetDisguiseDrainRate
struct UIndianaFormulas_GetDisguiseDrainRate_Params
{
	int                                                StealthSkill;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMoving;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSprinting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouching;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.GetBribeAmount
struct UIndianaFormulas_GetBribeAmount_Params
{
	EBribeDifficulty                                   BribeDifficulty;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MerchantSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.FieldRepairPartCost
struct UIndianaFormulas_FieldRepairPartCost_Params
{
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EngineerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.DoesHackSkillUnlockRestrictedStock
struct UIndianaFormulas_DoesHackSkillUnlockRestrictedStock_Params
{
	int                                                HackSkill;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.DisarmTime
struct UIndianaFormulas_DisarmTime_Params
{
	unsigned char                                      ExactTrapDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerEngineeringSkill;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ConversationSkillNearMissThreshold
struct UIndianaFormulas_ConversationSkillNearMissThreshold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ConversationNearMissMaxOptions
struct UIndianaFormulas_ConversationNearMissMaxOptions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ConversationAttributeNearMissThreshold
struct UIndianaFormulas_ConversationAttributeNearMissThreshold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ComputeSkillValueToRange
struct UIndianaFormulas_ComputeSkillValueToRange_Params
{
	int                                                SkillValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ECharacterSkillRange                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ComputeSkillPointsForSecondaryAttribute
struct UIndianaFormulas_ComputeSkillPointsForSecondaryAttribute_Params
{
	unsigned char                                      AttributeRank;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ComputeSkillPointsForPrimaryAttribute
struct UIndianaFormulas_ComputeSkillPointsForPrimaryAttribute_Params
{
	unsigned char                                      AttributeRank;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ComputeFallingDamagePercent
struct UIndianaFormulas_ComputeFallingDamagePercent_Params
{
	float                                              DistanceFallen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ComputeExactTrapDifficulty
struct UIndianaFormulas_ComputeExactTrapDifficulty_Params
{
	ETrapDifficulty                                    TrapDifficulty;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ComputeExactLockpickDifficulty
struct UIndianaFormulas_ComputeExactLockpickDifficulty_Params
{
	EOCLDifficulty                                     LockpickDifficulty;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ComputeExactHackDifficulty
struct UIndianaFormulas_ComputeExactHackDifficulty_Params
{
	EOCLDifficulty                                     HackDifficulty;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CanLockpick
struct UIndianaFormulas_CanLockpick_Params
{
	unsigned char                                      ExactLockpickDifficulty;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerLockpickSkill;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CanHack
struct UIndianaFormulas_CanHack_Params
{
	unsigned char                                      ExactComputerDifficulty;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerHackSkill;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CanDisarm
struct UIndianaFormulas_CanDisarm_Params
{
	unsigned char                                      ExactTrapDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerEngineeringSkill;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CanArm
struct UIndianaFormulas_CanArm_Params
{
	unsigned char                                      ExactTrapDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerEngineeringSkill;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateTier3Count
struct UIndianaFormulas_CalculateTier3Count_Params
{
	int                                                ScienceSkill;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateTier2Count
struct UIndianaFormulas_CalculateTier2Count_Params
{
	int                                                ScienceSkill;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateTier1Count
struct UIndianaFormulas_CalculateTier1Count_Params
{
	int                                                ScienceSkill;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculatePartsRecoveredOnBreakdown
struct UIndianaFormulas_CalculatePartsRecoveredOnBreakdown_Params
{
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFieldBreakdown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateMoraleAdjustment
struct UIndianaFormulas_CalculateMoraleAdjustment_Params
{
	float                                              AddedMoral;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CharmAttribute;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TemperamentAttribute;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateMerchantSkillDiscount
struct UIndianaFormulas_CalculateMerchantSkillDiscount_Params
{
	int                                                MerchantSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateItemEffectiveness
struct UIndianaFormulas_CalculateItemEffectiveness_Params
{
	class UDegradableItem*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateItemBasePrice
struct UIndianaFormulas_CalculateItemBasePrice_Params
{
	int                                                BasePrice;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPristine;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateIntialMorale
struct UIndianaFormulas_CalculateIntialMorale_Params
{
	int                                                TemperamentAttribute;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.CalculateGadgetSlots
struct UIndianaFormulas_CalculateGadgetSlots_Params
{
	int                                                ScienceSkill;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.BaseRepairPartCost
struct UIndianaFormulas_BaseRepairPartCost_Params
{
	float                                              Durability;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaFormulas.ArmTime
struct UIndianaFormulas_ArmTime_Params
{
	unsigned char                                      ExactTrapDifficulty;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerEngineeringSkill;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.SetOverridePlayerClass
struct UIndianaGameInstance_SetOverridePlayerClass_Params
{
	class UClass*                                      Override;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.QueueEndGameLoadingScreen
struct UIndianaGameInstance_QueueEndGameLoadingScreen_Params
{
	EEndGameImageType                                  EndGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.QueueCredits
struct UIndianaGameInstance_QueueCredits_Params
{
	bool                                               bShouldQueue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.IsXFHDLCInstalled
struct UIndianaGameInstance_IsXFHDLCInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.IsINX2Installed
struct UIndianaGameInstance_IsINX2Installed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.IsINX2DLCInstalled
struct UIndianaGameInstance_IsINX2DLCInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.IsINX1Installed
struct UIndianaGameInstance_IsINX1Installed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.HasVisitedMainMenu
struct UIndianaGameInstance_HasVisitedMainMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.AreCreditsQueued
struct UIndianaGameInstance_AreCreditsQueued_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameInstance.AreCreditsPlaying
struct UIndianaGameInstance_AreCreditsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.UndilateTime
struct UIndianaGameplayStatics_UndilateTime_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DilatedTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.TeleportPlayerToStart
struct UIndianaGameplayStatics_TeleportPlayerToStart_Params
{
	class AIndianaPlayerStart*                         PlayerStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SuicideActor
struct UIndianaGameplayStatics_SuicideActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SpawnPooledEmitterAttached
struct UIndianaGameplayStatics_SpawnPooledEmitterAttached_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SpawnPooledEmitterAtLocation
struct UIndianaGameplayStatics_SpawnPooledEmitterAtLocation_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SetParticleSystemEmittersEnabled
struct UIndianaGameplayStatics_SetParticleSystemEmittersEnabled_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               EnabledEmitters;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SetMoveIgnoreComponentCollision
struct UIndianaGameplayStatics_SetMoveIgnoreComponentCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ComponentToIgnore;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SetMoveIgnoreActorCollision
struct UIndianaGameplayStatics_SetMoveIgnoreActorCollision_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SetIndianaActorPseudoGod
struct UIndianaGameplayStatics_SetIndianaActorPseudoGod_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPseudoGodMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SetIndianaActorInteractable
struct UIndianaGameplayStatics_SetIndianaActorInteractable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SetIndianaActorGod
struct UIndianaGameplayStatics_SetIndianaActorGod_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGodMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.SetFPVCameraFOV
struct UIndianaGameplayStatics_SetFPVCameraFOV_Params
{
	bool                                               bOverrideCustomFOV;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IsRunningAutomationTest
struct UIndianaGameplayStatics_IsRunningAutomationTest_Params
{
	EBoolResult                                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IsQuestActive
struct UIndianaGameplayStatics_IsQuestActive_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EBoolResult                                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IsItemStackOfClass
struct UIndianaGameplayStatics_IsItemStackOfClass_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IsItemOfClass
struct UIndianaGameplayStatics_IsItemOfClass_Params
{
	class UItem*                                       Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IsGlobalVariableValue
struct UIndianaGameplayStatics_IsGlobalVariableValue_Params
{
	struct FGlobalVariable                             Variable;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EBoolResult                                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IsGlobalVariableValid
struct UIndianaGameplayStatics_IsGlobalVariableValid_Params
{
	struct FGlobalVariable                             Variable;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	EBoolResult                                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IsGlobalValue
struct UIndianaGameplayStatics_IsGlobalValue_Params
{
	class FString                                      VariableName;                                             // (ConstParm, Parm, ZeroConstructor)
	EComparisonOperator                                Operator;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EBoolResult                                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IsCharacterInAnyBarkConversation
struct UIndianaGameplayStatics_IsCharacterInAnyBarkConversation_Params
{
	class AIndianaCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.InitiateTravel
struct UIndianaGameplayStatics_InitiateTravel_Params
{
	class AIndianaPlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTravelFromMapLedger;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerAutosave;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.InheritMeshProperties
struct UIndianaGameplayStatics_InheritMeshProperties_Params
{
	class UMeshComponent*                              ParentMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              ChildMesh;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IndianaCancelAsyncLoadAsset
struct UIndianaGameplayStatics_IndianaCancelAsyncLoadAsset_Params
{
	int                                                Handle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.IndianaAsyncLoadAsset
struct UIndianaGameplayStatics_IndianaAsyncLoadAsset_Params
{
	TSoftObjectPtr<class UObject>                      Asset;                                                    // (Parm)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                HandleOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetWeaponSpinProgress
struct UIndianaGameplayStatics_GetWeaponSpinProgress_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetWeaponSpinningUp
struct UIndianaGameplayStatics_GetWeaponSpinningUp_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetWeaponProjectileCharge
struct UIndianaGameplayStatics_GetWeaponProjectileCharge_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetWeaponIsSwinging
struct UIndianaGameplayStatics_GetWeaponIsSwinging_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetWeaponForceSpin
struct UIndianaGameplayStatics_GetWeaponForceSpin_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetWeaponCurrentCharge
struct UIndianaGameplayStatics_GetWeaponCurrentCharge_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetWeaponCurrentAmmoGaugeAlpha
struct UIndianaGameplayStatics_GetWeaponCurrentAmmoGaugeAlpha_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetSkeletalMeshComponent
struct UIndianaGameplayStatics_GetSkeletalMeshComponent_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EMeshTarget                                        MeshType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetMeshComponent
struct UIndianaGameplayStatics_GetMeshComponent_Params
{
	class AActor*                                      TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EMeshTarget                                        MeshType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetGameCalendar
struct UIndianaGameplayStatics_GetGameCalendar_Params
{
	class UGameCalendar*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetEventEffectPhysicalSurface
struct UIndianaGameplayStatics_GetEventEffectPhysicalSurface_Params
{
	struct FEventEffectParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetEventEffectParam
struct UIndianaGameplayStatics_GetEventEffectParam_Params
{
	struct FEventEffectParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	EEventEffectFloatParams                            Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetEventEffectEnabledEmitters
struct UIndianaGameplayStatics_GetEventEffectEnabledEmitters_Params
{
	struct FEventEffectParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Indiana.IndianaGameplayStatics.GetBlendSpaceLength
struct UIndianaGameplayStatics_GetBlendSpaceLength_Params
{
	class UBlendSpaceBase*                             BlendSpace;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetAllAppearanceRelatedMeshes
struct UIndianaGameplayStatics_GetAllAppearanceRelatedMeshes_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      Meshes;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               bIncludeWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.GetActorBySpeakerName
struct UIndianaGameplayStatics_GetActorBySpeakerName_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SpeakerReference;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.FindFirstChildComponentByTag
struct UIndianaGameplayStatics_FindFirstChildComponentByTag_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ParentComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.FindChildComponentsByTag
struct UIndianaGameplayStatics_FindChildComponentsByTag_Params
{
	class USceneComponent*                             ParentComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     ChildComponents;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.EnableParticleSystemEmitters
struct UIndianaGameplayStatics_EnableParticleSystemEmitters_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               EnabledEmitters;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Indiana.IndianaGameplayStatics.DilateTime
struct UIndianaGameplayStatics_DilateTime_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UndilatedTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.CreateEndGameDialogWidget
struct UIndianaGameplayStatics_CreateEndGameDialogWidget_Params
{
	struct FLocString                                  BodyLocString;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDialogBoxWidget*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.CreateDialogWidget
struct UIndianaGameplayStatics_CreateDialogWidget_Params
{
	struct FLocString                                  BodyLocString;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCancellable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDialogBoxWidget*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.ConstructComponentByClass
struct UIndianaGameplayStatics_ConstructComponentByClass_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InOuter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InClass;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.ClearPlayerCombat
struct UIndianaGameplayStatics_ClearPlayerCombat_Params
{
};

// Function Indiana.IndianaGameplayStatics.CanCharacterUnlockRestrictedStock
struct UIndianaGameplayStatics_CanCharacterUnlockRestrictedStock_Params
{
	class AIndianaCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameplayStatics.ApplyGenericDamage
struct UIndianaGameplayStatics_ApplyGenericDamage_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomDamageDescription;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageDescription                          CustomDamageDescription;                                  // (Parm)
};

// Function Indiana.IndianaGameplayStatics.ApplyCACVisibilityToActorCollision
struct UIndianaGameplayStatics_ApplyCACVisibilityToActorCollision_Params
{
	class UChildActorComponent*                        CAC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetYAxisInverted
struct UIndianaGameUserSettings_SetYAxisInverted_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetXAxisInverted
struct UIndianaGameUserSettings_SetXAxisInverted_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetWeaponTooltipStatMode
struct UIndianaGameUserSettings_SetWeaponTooltipStatMode_Params
{
	EWeaponTooltipStatMode                             Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetWeaponSelectMode
struct UIndianaGameUserSettings_SetWeaponSelectMode_Params
{
	EWeaponSelectMode                                  ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetWeaponSelectAxisMode
struct UIndianaGameUserSettings_SetWeaponSelectAxisMode_Params
{
	EWeaponSelectAxisMode                              ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetVSyncWrapper
struct UIndianaGameUserSettings_SetVSyncWrapper_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetVoiceSoundVolume
struct UIndianaGameUserSettings_SetVoiceSoundVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetViewBaseStats
struct UIndianaGameUserSettings_SetViewBaseStats_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetUISoundVolume
struct UIndianaGameUserSettings_SetUISoundVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetTutorialsEnabled
struct UIndianaGameUserSettings_SetTutorialsEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetTTDDisplayMode
struct UIndianaGameUserSettings_SetTTDDisplayMode_Params
{
	ETTDDisplayMode                                    ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetTooltipDelay
struct UIndianaGameUserSettings_SetTooltipDelay_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetSurvivalMeterMode
struct UIndianaGameUserSettings_SetSurvivalMeterMode_Params
{
	bool                                               bVisibleIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowWaypointMarkers
struct UIndianaGameUserSettings_SetShowWaypointMarkers_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowTutorialNotifications
struct UIndianaGameUserSettings_SetShowTutorialNotifications_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowTTDStatusEffectPreview
struct UIndianaGameUserSettings_SetShowTTDStatusEffectPreview_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowTTDScanner
struct UIndianaGameUserSettings_SetShowTTDScanner_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowTTDReticleMeter
struct UIndianaGameUserSettings_SetShowTTDReticleMeter_Params
{
	ETTDReticleMeterMode                               ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowReticleFeedback
struct UIndianaGameUserSettings_SetShowReticleFeedback_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowPlayerStatusEffects
struct UIndianaGameUserSettings_SetShowPlayerStatusEffects_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowPlayerHelmet
struct UIndianaGameUserSettings_SetShowPlayerHelmet_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowLootTooltips
struct UIndianaGameUserSettings_SetShowLootTooltips_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowLootControls
struct UIndianaGameUserSettings_SetShowLootControls_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowLevelUpReminders
struct UIndianaGameUserSettings_SetShowLevelUpReminders_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowLevelUpNotification
struct UIndianaGameUserSettings_SetShowLevelUpNotification_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowInteractionOutlines
struct UIndianaGameUserSettings_SetShowInteractionOutlines_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowInteractionControls
struct UIndianaGameUserSettings_SetShowInteractionControls_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowFloatingDamageText
struct UIndianaGameUserSettings_SetShowFloatingDamageText_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowEquipmentRepairWarning
struct UIndianaGameUserSettings_SetShowEquipmentRepairWarning_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowEnemyHealthBars
struct UIndianaGameUserSettings_SetShowEnemyHealthBars_Params
{
	EEnemyHealthBarMode                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowEnemyAwarenessMeters
struct UIndianaGameUserSettings_SetShowEnemyAwarenessMeters_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowDisguiseMeter
struct UIndianaGameUserSettings_SetShowDisguiseMeter_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowDirectionalDamageIndicators
struct UIndianaGameUserSettings_SetShowDirectionalDamageIndicators_Params
{
	EDirectionalDamageIndicatorMode                    ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowCompass
struct UIndianaGameUserSettings_SetShowCompass_Params
{
	ECompassVisibilityMode                             ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowCompanionPassiveCD
struct UIndianaGameUserSettings_SetShowCompanionPassiveCD_Params
{
	ECompanionAbilityPassiveCDMode                     ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowCompanionHelmets
struct UIndianaGameUserSettings_SetShowCompanionHelmets_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetShowCombatIndicator
struct UIndianaGameUserSettings_SetShowCombatIndicator_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetRadialSensitivity
struct UIndianaGameUserSettings_SetRadialSensitivity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetQuestUpdateMode
struct UIndianaGameUserSettings_SetQuestUpdateMode_Params
{
	EQuestUpdateMode                                   bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetPseudoGodMode
struct UIndianaGameUserSettings_SetPseudoGodMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetPlayerStatusEffectTextMode
struct UIndianaGameUserSettings_SetPlayerStatusEffectTextMode_Params
{
	EPlayerStatusEffectTextMode                        ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetPlayerStatusBarMode
struct UIndianaGameUserSettings_SetPlayerStatusBarMode_Params
{
	EPlayerStatusBarMode                               ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetOffsetReticle
struct UIndianaGameUserSettings_SetOffsetReticle_Params
{
	bool                                               bUseOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetNotificationDuration
struct UIndianaGameUserSettings_SetNotificationDuration_Params
{
	float                                              DurationIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetMusicSoundVolume
struct UIndianaGameUserSettings_SetMusicSoundVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetMouseSensitivity
struct UIndianaGameUserSettings_SetMouseSensitivity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetMouseADSSensitivity
struct UIndianaGameUserSettings_SetMouseADSSensitivity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetMotionBlurScale
struct UIndianaGameUserSettings_SetMotionBlurScale_Params
{
	float                                              NewMotionBlurScale;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetMedicalInhalerUIMode
struct UIndianaGameUserSettings_SetMedicalInhalerUIMode_Params
{
	EMedicalInhalerMode                                InhalerModeIn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetMasterSoundVolume
struct UIndianaGameUserSettings_SetMasterSoundVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetLanguageMode
struct UIndianaGameUserSettings_SetLanguageMode_Params
{
	ELanguageMode                                      LanguageModeIn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPending;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetIsSimplifiedLockpickHackingMode
struct UIndianaGameUserSettings_SetIsSimplifiedLockpickHackingMode_Params
{
	ESimplifiedLockpickHackingMode                     ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetIsSimplifiedEquipmentRepairWarning
struct UIndianaGameUserSettings_SetIsSimplifiedEquipmentRepairWarning_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetIsFreshUserSettings
struct UIndianaGameUserSettings_SetIsFreshUserSettings_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetInfiniteAmmo
struct UIndianaGameUserSettings_SetInfiniteAmmo_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetHUDVisibility
struct UIndianaGameUserSettings_SetHUDVisibility_Params
{
	bool                                               bVisibilityIn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetHUDMode
struct UIndianaGameUserSettings_SetHUDMode_Params
{
	EHUDMode                                           ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetHeldWeaponDisplayTextMode
struct UIndianaGameUserSettings_SetHeldWeaponDisplayTextMode_Params
{
	EHeldWeaponDisplayText                             ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetHeldWeaponDisplayMode
struct UIndianaGameUserSettings_SetHeldWeaponDisplayMode_Params
{
	EHeldWeaponDisplayMode                             ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetHeadbobbing
struct UIndianaGameUserSettings_SetHeadbobbing_Params
{
	bool                                               bEnabledIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetGraphicsQuality
struct UIndianaGameUserSettings_SetGraphicsQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetGodMode
struct UIndianaGameUserSettings_SetGodMode_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetGammaLevel
struct UIndianaGameUserSettings_SetGammaLevel_Params
{
	float                                              GammaLevelIn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetFullscreenModeThenBroadcast
struct UIndianaGameUserSettings_SetFullscreenModeThenBroadcast_Params
{
	TEnumAsByte<EWindowMode>                           Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetFPSLimit
struct UIndianaGameUserSettings_SetFPSLimit_Params
{
	EFPSLimit                                          FPSLimitIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetFPSIndicatorMode
struct UIndianaGameUserSettings_SetFPSIndicatorMode_Params
{
	EFPSIndicatorMode                                  ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetFOV
struct UIndianaGameUserSettings_SetFOV_Params
{
	float                                              FOVIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetFontSizeModifier
struct UIndianaGameUserSettings_SetFontSizeModifier_Params
{
	int                                                ModifierIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetEffectsSoundVolume
struct UIndianaGameUserSettings_SetEffectsSoundVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetDodgeDisplayMode
struct UIndianaGameUserSettings_SetDodgeDisplayMode_Params
{
	EDodgeDisplayMode                                  ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetDialogSkillMode
struct UIndianaGameUserSettings_SetDialogSkillMode_Params
{
	EDialogSkillMode                                   ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetConversationSubtitleMode
struct UIndianaGameUserSettings_SetConversationSubtitleMode_Params
{
	EConversationSubtitleMode                          Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetConversationResponseVisibleDuringVO
struct UIndianaGameUserSettings_SetConversationResponseVisibleDuringVO_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetConversationContinueOnVOEnd
struct UIndianaGameUserSettings_SetConversationContinueOnVOEnd_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerYAxisInverted
struct UIndianaGameUserSettings_SetControllerYAxisInverted_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerXAxisInverted
struct UIndianaGameUserSettings_SetControllerXAxisInverted_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerSensitivity
struct UIndianaGameUserSettings_SetControllerSensitivity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerRumbleEnabled
struct UIndianaGameUserSettings_SetControllerRumbleEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerRightOuterDeadZone
struct UIndianaGameUserSettings_SetControllerRightOuterDeadZone_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerRightInnerDeadZone
struct UIndianaGameUserSettings_SetControllerRightInnerDeadZone_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerLeftOuterDeadZone
struct UIndianaGameUserSettings_SetControllerLeftOuterDeadZone_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerLeftInnerDeadZone
struct UIndianaGameUserSettings_SetControllerLeftInnerDeadZone_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerAutoSprintEnabled
struct UIndianaGameUserSettings_SetControllerAutoSprintEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetControllerADSSensitivity
struct UIndianaGameUserSettings_SetControllerADSSensitivity_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetCompanionStatusUIMode
struct UIndianaGameUserSettings_SetCompanionStatusUIMode_Params
{
	ECompanionStatusMode                               ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetCompanionPassiveCDNotificationMode
struct UIndianaGameUserSettings_SetCompanionPassiveCDNotificationMode_Params
{
	ECompanionAbilityPassiveNotificationMode           ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetCompanionOutlineMode
struct UIndianaGameUserSettings_SetCompanionOutlineMode_Params
{
	ECompanionOutlineMode                              Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetCompanionAbilityUIMode
struct UIndianaGameUserSettings_SetCompanionAbilityUIMode_Params
{
	ECompanionAbilityUIMode                            ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetCompanionAbilityBindingMode
struct UIndianaGameUserSettings_SetCompanionAbilityBindingMode_Params
{
	ECompanionAbilityBindingMode                       ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetColorblindModeEnabled
struct UIndianaGameUserSettings_SetColorblindModeEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetCinematicSubtitlesVisible
struct UIndianaGameUserSettings_SetCinematicSubtitlesVisible_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetCinematicKillCam
struct UIndianaGameUserSettings_SetCinematicKillCam_Params
{
	bool                                               bEnabledIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetChromaticAberration
struct UIndianaGameUserSettings_SetChromaticAberration_Params
{
	bool                                               bUseChromaticAberration;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetBarkSubtitleMode
struct UIndianaGameUserSettings_SetBarkSubtitleMode_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetAxisKeyBinds
struct UIndianaGameUserSettings_SetAxisKeyBinds_Params
{
	TArray<struct FInputAxisKeyMapping>                OldValues;                                                // (Parm, ZeroConstructor)
	TArray<struct FInputAxisKeyMapping>                NewValues;                                                // (Parm, ZeroConstructor)
};

// Function Indiana.IndianaGameUserSettings.SetAutoCollapseItemViewers
struct UIndianaGameUserSettings_SetAutoCollapseItemViewers_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetAreaNameMode
struct UIndianaGameUserSettings_SetAreaNameMode_Params
{
	EAreaNameMode                                      AreaModeIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetAntiAliasingMethod
struct UIndianaGameUserSettings_SetAntiAliasingMethod_Params
{
	int                                                Method;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetAimingReticleMode
struct UIndianaGameUserSettings_SetAimingReticleMode_Params
{
	EReticleMode                                       ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.SetActionKeyBinds
struct UIndianaGameUserSettings_SetActionKeyBinds_Params
{
	TArray<struct FInputActionKeyMapping>              OldValues;                                                // (Parm, ZeroConstructor)
	TArray<struct FInputActionKeyMapping>              NewValues;                                                // (Parm, ZeroConstructor)
};

// Function Indiana.IndianaGameUserSettings.SetAbilityControlUIMode
struct UIndianaGameUserSettings_SetAbilityControlUIMode_Params
{
	EAbilityControlMode                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.Set3DResolution
struct UIndianaGameUserSettings_Set3DResolution_Params
{
	float                                              ResolutionIn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.ResetAllKeyBinds
struct UIndianaGameUserSettings_ResetAllKeyBinds_Params
{
};

// Function Indiana.IndianaGameUserSettings.OnDetectGraphics
struct UIndianaGameUserSettings_OnDetectGraphics_Params
{
};

// Function Indiana.IndianaGameUserSettings.IsConversationResponseVisibleDuringVO
struct UIndianaGameUserSettings_IsConversationResponseVisibleDuringVO_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetYAxisInverted
struct UIndianaGameUserSettings_GetYAxisInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetXAxisInverted
struct UIndianaGameUserSettings_GetXAxisInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetWeaponTooltipStatMode
struct UIndianaGameUserSettings_GetWeaponTooltipStatMode_Params
{
	EWeaponTooltipStatMode                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetWeaponSelectMode
struct UIndianaGameUserSettings_GetWeaponSelectMode_Params
{
	EWeaponSelectMode                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetWeaponSelectAxisMode
struct UIndianaGameUserSettings_GetWeaponSelectAxisMode_Params
{
	EWeaponSelectAxisMode                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetVSyncWrapper
struct UIndianaGameUserSettings_GetVSyncWrapper_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetVoiceSoundVolume
struct UIndianaGameUserSettings_GetVoiceSoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetViewBaseStats
struct UIndianaGameUserSettings_GetViewBaseStats_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetUISoundVolume
struct UIndianaGameUserSettings_GetUISoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetTutorialsEnabled
struct UIndianaGameUserSettings_GetTutorialsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetTTDDisplayMode
struct UIndianaGameUserSettings_GetTTDDisplayMode_Params
{
	ETTDDisplayMode                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetTooltipDelay
struct UIndianaGameUserSettings_GetTooltipDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetSurvivalMeterMode
struct UIndianaGameUserSettings_GetSurvivalMeterMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowWaypointMarkers
struct UIndianaGameUserSettings_GetShowWaypointMarkers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowTutorialNotifications
struct UIndianaGameUserSettings_GetShowTutorialNotifications_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowTTDStatusEffectPreview
struct UIndianaGameUserSettings_GetShowTTDStatusEffectPreview_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowTTDScanner
struct UIndianaGameUserSettings_GetShowTTDScanner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowTTDReticleMeter
struct UIndianaGameUserSettings_GetShowTTDReticleMeter_Params
{
	ETTDReticleMeterMode                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowReticleFeedback
struct UIndianaGameUserSettings_GetShowReticleFeedback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowPlayerStatusEffects
struct UIndianaGameUserSettings_GetShowPlayerStatusEffects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowPlayerHelmet
struct UIndianaGameUserSettings_GetShowPlayerHelmet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowLootTooltips
struct UIndianaGameUserSettings_GetShowLootTooltips_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowLootControls
struct UIndianaGameUserSettings_GetShowLootControls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowLevelUpReminders
struct UIndianaGameUserSettings_GetShowLevelUpReminders_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowLevelUpNotification
struct UIndianaGameUserSettings_GetShowLevelUpNotification_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowInteractionOutlines
struct UIndianaGameUserSettings_GetShowInteractionOutlines_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowInteractionControls
struct UIndianaGameUserSettings_GetShowInteractionControls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowFloatingDamageText
struct UIndianaGameUserSettings_GetShowFloatingDamageText_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowEquipmentRepairWarning
struct UIndianaGameUserSettings_GetShowEquipmentRepairWarning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowEnemyHealthBars
struct UIndianaGameUserSettings_GetShowEnemyHealthBars_Params
{
	EEnemyHealthBarMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowEnemyAwarenessMeters
struct UIndianaGameUserSettings_GetShowEnemyAwarenessMeters_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowDisguiseMeter
struct UIndianaGameUserSettings_GetShowDisguiseMeter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowDirectionalDamageIndicators
struct UIndianaGameUserSettings_GetShowDirectionalDamageIndicators_Params
{
	EDirectionalDamageIndicatorMode                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowCompass
struct UIndianaGameUserSettings_GetShowCompass_Params
{
	ECompassVisibilityMode                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowCompanionPassiveCD
struct UIndianaGameUserSettings_GetShowCompanionPassiveCD_Params
{
	ECompanionAbilityPassiveCDMode                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowCompanionHelmets
struct UIndianaGameUserSettings_GetShowCompanionHelmets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetShowCombatIndicator
struct UIndianaGameUserSettings_GetShowCombatIndicator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetRadialSensitivity
struct UIndianaGameUserSettings_GetRadialSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetQuestUpdateMode
struct UIndianaGameUserSettings_GetQuestUpdateMode_Params
{
	EQuestUpdateMode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetPseudoGodMode
struct UIndianaGameUserSettings_GetPseudoGodMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetPlayerStatusEffectTextMode
struct UIndianaGameUserSettings_GetPlayerStatusEffectTextMode_Params
{
	EPlayerStatusEffectTextMode                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetPlayerStatusBarMode
struct UIndianaGameUserSettings_GetPlayerStatusBarMode_Params
{
	EPlayerStatusBarMode                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetOffsetReticle
struct UIndianaGameUserSettings_GetOffsetReticle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetNotificationDuration
struct UIndianaGameUserSettings_GetNotificationDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetMusicSoundVolume
struct UIndianaGameUserSettings_GetMusicSoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetMouseSensitivity
struct UIndianaGameUserSettings_GetMouseSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetMouseADSSensitivity
struct UIndianaGameUserSettings_GetMouseADSSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetMotionBlurScale
struct UIndianaGameUserSettings_GetMotionBlurScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetMedicalInhalerUIMode
struct UIndianaGameUserSettings_GetMedicalInhalerUIMode_Params
{
	EMedicalInhalerMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetMasterSoundVolume
struct UIndianaGameUserSettings_GetMasterSoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetLanguageMode
struct UIndianaGameUserSettings_GetLanguageMode_Params
{
	ELanguageMode                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetIsSimplifiedLockpickHackingMode
struct UIndianaGameUserSettings_GetIsSimplifiedLockpickHackingMode_Params
{
	ESimplifiedLockpickHackingMode                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetIsSimplifiedEquipmentRepairWarning
struct UIndianaGameUserSettings_GetIsSimplifiedEquipmentRepairWarning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetIsFreshUserSettings
struct UIndianaGameUserSettings_GetIsFreshUserSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetInfiniteAmmo
struct UIndianaGameUserSettings_GetInfiniteAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetHUDVisibility
struct UIndianaGameUserSettings_GetHUDVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetHUDMode
struct UIndianaGameUserSettings_GetHUDMode_Params
{
	EHUDMode                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetHeldWeaponDisplayTextMode
struct UIndianaGameUserSettings_GetHeldWeaponDisplayTextMode_Params
{
	EHeldWeaponDisplayText                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetHeldWeaponDisplayMode
struct UIndianaGameUserSettings_GetHeldWeaponDisplayMode_Params
{
	EHeldWeaponDisplayMode                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetHeadbobbing
struct UIndianaGameUserSettings_GetHeadbobbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetGraphicsQuality
struct UIndianaGameUserSettings_GetGraphicsQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetGodMode
struct UIndianaGameUserSettings_GetGodMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetGammaLevel
struct UIndianaGameUserSettings_GetGammaLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetFPSLimit
struct UIndianaGameUserSettings_GetFPSLimit_Params
{
	EFPSLimit                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetFPSIndicatorMode
struct UIndianaGameUserSettings_GetFPSIndicatorMode_Params
{
	EFPSIndicatorMode                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetFOV
struct UIndianaGameUserSettings_GetFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetFontSizeModifier
struct UIndianaGameUserSettings_GetFontSizeModifier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetEffectsSoundVolume
struct UIndianaGameUserSettings_GetEffectsSoundVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetDodgeDisplayMode
struct UIndianaGameUserSettings_GetDodgeDisplayMode_Params
{
	EDodgeDisplayMode                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetDialogSkillMode
struct UIndianaGameUserSettings_GetDialogSkillMode_Params
{
	EDialogSkillMode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetConversationSubtitleMode
struct UIndianaGameUserSettings_GetConversationSubtitleMode_Params
{
	EConversationSubtitleMode                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetConversationContinueOnVOEnd
struct UIndianaGameUserSettings_GetConversationContinueOnVOEnd_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerYAxisInverted
struct UIndianaGameUserSettings_GetControllerYAxisInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerXAxisInverted
struct UIndianaGameUserSettings_GetControllerXAxisInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerSensitivity
struct UIndianaGameUserSettings_GetControllerSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerRumbleEnabled
struct UIndianaGameUserSettings_GetControllerRumbleEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerRightOuterDeadZone
struct UIndianaGameUserSettings_GetControllerRightOuterDeadZone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerRightInnerDeadZone
struct UIndianaGameUserSettings_GetControllerRightInnerDeadZone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerLeftOuterDeadZone
struct UIndianaGameUserSettings_GetControllerLeftOuterDeadZone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerLeftInnerDeadZone
struct UIndianaGameUserSettings_GetControllerLeftInnerDeadZone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerAutoSprintEnabled
struct UIndianaGameUserSettings_GetControllerAutoSprintEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetControllerADSSensitivity
struct UIndianaGameUserSettings_GetControllerADSSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetCompanionStatusUIMode
struct UIndianaGameUserSettings_GetCompanionStatusUIMode_Params
{
	ECompanionStatusMode                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetCompanionPassiveCDNotificationMode
struct UIndianaGameUserSettings_GetCompanionPassiveCDNotificationMode_Params
{
	ECompanionAbilityPassiveNotificationMode           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetCompanionOutlineMode
struct UIndianaGameUserSettings_GetCompanionOutlineMode_Params
{
	ECompanionOutlineMode                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetCompanionAbilityUIMode
struct UIndianaGameUserSettings_GetCompanionAbilityUIMode_Params
{
	ECompanionAbilityUIMode                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetCompanionAbilityBindingMode
struct UIndianaGameUserSettings_GetCompanionAbilityBindingMode_Params
{
	ECompanionAbilityBindingMode                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetColorblindModeEnabled
struct UIndianaGameUserSettings_GetColorblindModeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetCinematicSubtitlesVisible
struct UIndianaGameUserSettings_GetCinematicSubtitlesVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetCinematicKillCam
struct UIndianaGameUserSettings_GetCinematicKillCam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetChromaticAberration
struct UIndianaGameUserSettings_GetChromaticAberration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetBarkSubtitlesVisible
struct UIndianaGameUserSettings_GetBarkSubtitlesVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetAxisKeyBinds
struct UIndianaGameUserSettings_GetAxisKeyBinds_Params
{
	struct FName                                       AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.IndianaGameUserSettings.GetAutoCollapseItemViewers
struct UIndianaGameUserSettings_GetAutoCollapseItemViewers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetAreaNameMode
struct UIndianaGameUserSettings_GetAreaNameMode_Params
{
	EAreaNameMode                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetAntiAliasingMethod
struct UIndianaGameUserSettings_GetAntiAliasingMethod_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetAimingReticleMode
struct UIndianaGameUserSettings_GetAimingReticleMode_Params
{
	EReticleMode                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.GetActionKeyBinds
struct UIndianaGameUserSettings_GetActionKeyBinds_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.IndianaGameUserSettings.GetAbilityControlUIMode
struct UIndianaGameUserSettings_GetAbilityControlUIMode_Params
{
	EAbilityControlMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameUserSettings.Get3DResolution
struct UIndianaGameUserSettings_Get3DResolution_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaGameViewportClient.SetSoundOverride
struct UIndianaGameViewportClient_SetSoundOverride_Params
{
};

// Function Indiana.IndianaGlobals.GetTutorialManager
struct UIndianaGlobals_GetTutorialManager_Params
{
	class UTutorialManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaLoadingScreenManager.DebugShowLoadingScreen
struct UIndianaLoadingScreenManager_DebugShowLoadingScreen_Params
{
	struct FName                                       MapName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.IndianaNavigationSystem.UnregisterArea
struct UIndianaNavigationSystem_UnregisterArea_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EOccupationChannel                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaNavigationSystem.TraceOccupation
struct UIndianaNavigationSystem_TraceOccupation_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EOccupationChannel                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaNavigationSystem.RegisterArea
struct UIndianaNavigationSystem_RegisterArea_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EOccupationChannel                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Extents;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Transform;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.IndianaPathFollowingComponent.OnCapsuleSizeChange
struct UIndianaPathFollowingComponent_OnCapsuleSizeChange_Params
{
};

// Function Indiana.IndianaPathFollowingComponent.EndStationaryRotate
struct UIndianaPathFollowingComponent_EndStationaryRotate_Params
{
};

// Function Indiana.IndianaPlayerAudioComponent.TacticalTimeDilationStart
struct UIndianaPlayerAudioComponent_TacticalTimeDilationStart_Params
{
};

// Function Indiana.IndianaPlayerAudioComponent.TacticalTimeDilationEnd
struct UIndianaPlayerAudioComponent_TacticalTimeDilationEnd_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.OnStealthChange
struct UIndianaPlayerAudioComponent_OnStealthChange_Params
{
	bool                                               bStealthed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.OnKillCameraStart
struct UIndianaPlayerAudioComponent_OnKillCameraStart_Params
{
	class AActor*                                      CameraTarget;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.OnKillCameraEnd
struct UIndianaPlayerAudioComponent_OnKillCameraEnd_Params
{
};

// Function Indiana.IndianaPlayerAudioComponent.OnDisguiseUnequipped
struct UIndianaPlayerAudioComponent_OnDisguiseUnequipped_Params
{
};

// Function Indiana.IndianaPlayerAudioComponent.OnDisguiseRefilled
struct UIndianaPlayerAudioComponent_OnDisguiseRefilled_Params
{
};

// Function Indiana.IndianaPlayerAudioComponent.OnDisguiseMeterChanged
struct UIndianaPlayerAudioComponent_OnDisguiseMeterChanged_Params
{
	float                                              Meter;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.OnDisguiseEquipped
struct UIndianaPlayerAudioComponent_OnDisguiseEquipped_Params
{
	class UDisguiseData*                               Disguise;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.OnDisguiseDrainStart
struct UIndianaPlayerAudioComponent_OnDisguiseDrainStart_Params
{
};

// Function Indiana.IndianaPlayerAudioComponent.OnDisguiseDrainEnd
struct UIndianaPlayerAudioComponent_OnDisguiseDrainEnd_Params
{
};

// Function Indiana.IndianaPlayerAudioComponent.OnDetectionChange
struct UIndianaPlayerAudioComponent_OnDetectionChange_Params
{
	EDetectionType                                     DetectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.OnCompanionCommandCooldownEnd
struct UIndianaPlayerAudioComponent_OnCompanionCommandCooldownEnd_Params
{
	ECompanionCommand                                  Command;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.OnCombatStateChanged
struct UIndianaPlayerAudioComponent_OnCombatStateChanged_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.OnCalledShotCameraStep
struct UIndianaPlayerAudioComponent_OnCalledShotCameraStep_Params
{
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECalledShotCameraStep                              OldCameraStep;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ECalledShotCameraStep                              NewCameraStep;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerAudioComponent.GamePauseChanged
struct UIndianaPlayerAudioComponent_GamePauseChanged_Params
{
	bool                                               bPaused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.WasPONRRollbackRecentlyPerformed
struct AIndianaPlayerCharacter_WasPONRRollbackRecentlyPerformed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.TravelToDestination
struct AIndianaPlayerCharacter_TravelToDestination_Params
{
	class UTravelDestinationData*                      Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerAutosave;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.ToggleUnlockTravelPoints
struct AIndianaPlayerCharacter_ToggleUnlockTravelPoints_Params
{
};

// Function Indiana.IndianaPlayerCharacter.TinkerAdvanceWeapon
struct AIndianaPlayerCharacter_TinkerAdvanceWeapon_Params
{
	bool                                               bIgnoreCost;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SuppressInput
struct AIndianaPlayerCharacter_SuppressInput_Params
{
	bool                                               bSuppress;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetVisitedTravelDestination
struct AIndianaPlayerCharacter_SetVisitedTravelDestination_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetVisitedRegion
struct AIndianaPlayerCharacter_SetVisitedRegion_Params
{
	class UTravelRegionData*                           Region;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetTutorialsEnabled
struct AIndianaPlayerCharacter_SetTutorialsEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetTravelDestinationLocked
struct AIndianaPlayerCharacter_SetTravelDestinationLocked_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetTravelDestinationHidden
struct AIndianaPlayerCharacter_SetTravelDestinationHidden_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetMovementEnabled
struct AIndianaPlayerCharacter_SetMovementEnabled_Params
{
	bool                                               bNewIsMovementEnabled;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetIsInLowGravity
struct AIndianaPlayerCharacter_SetIsInLowGravity_Params
{
	bool                                               bNewIsInLowGravity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetCurrentShipLocation
struct AIndianaPlayerCharacter_SetCurrentShipLocation_Params
{
	class UShipDestinationData*                        ShipDest;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetAwareOfTravelDestination
struct AIndianaPlayerCharacter_SetAwareOfTravelDestination_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetAwareOfRegion
struct AIndianaPlayerCharacter_SetAwareOfRegion_Params
{
	class UTravelRegionData*                           Region;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.SetAllLevels
struct AIndianaPlayerCharacter_SetAllLevels_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.PointOfNoReturnRollback
struct AIndianaPlayerCharacter_PointOfNoReturnRollback_Params
{
};

// Function Indiana.IndianaPlayerCharacter.PointOfNoReturnFixQuests
struct AIndianaPlayerCharacter_PointOfNoReturnFixQuests_Params
{
};

// Function Indiana.IndianaPlayerCharacter.PointOfNoReturnFixItems
struct AIndianaPlayerCharacter_PointOfNoReturnFixItems_Params
{
};

// Function Indiana.IndianaPlayerCharacter.PointOfNoReturnFixGlobalVars
struct AIndianaPlayerCharacter_PointOfNoReturnFixGlobalVars_Params
{
};

// Function Indiana.IndianaPlayerCharacter.PointOfNoReturnFixConversations
struct AIndianaPlayerCharacter_PointOfNoReturnFixConversations_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnUndetected
struct AIndianaPlayerCharacter_OnUndetected_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnStopCrouch
struct AIndianaPlayerCharacter_OnStopCrouch_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnSoftCoverExited
struct AIndianaPlayerCharacter_OnSoftCoverExited_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnSoftCoverEntered
struct AIndianaPlayerCharacter_OnSoftCoverEntered_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnPlayerStealthExitedBP
struct AIndianaPlayerCharacter_OnPlayerStealthExitedBP_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnPlayerStealthEnteredBP
struct AIndianaPlayerCharacter_OnPlayerStealthEnteredBP_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnPlayerSoftCoverExitedBP
struct AIndianaPlayerCharacter_OnPlayerSoftCoverExitedBP_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnPlayerSoftCoverEnteredBP
struct AIndianaPlayerCharacter_OnPlayerSoftCoverEnteredBP_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OnPlayerInventoryItemConsumed
struct AIndianaPlayerCharacter_OnPlayerInventoryItemConsumed_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaPlayerCharacter.OnPlayerInventoryItemAdded
struct AIndianaPlayerCharacter_OnPlayerInventoryItemAdded_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaPlayerCharacter.OnPauseStateChanged
struct AIndianaPlayerCharacter_OnPauseStateChanged_Params
{
	bool                                               bIsPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.OnPartyCombatDamageTaken
struct AIndianaPlayerCharacter_OnPartyCombatDamageTaken_Params
{
	struct FCauseDamageInfo                            DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.IndianaPlayerCharacter.OnJumpLanded
struct AIndianaPlayerCharacter_OnJumpLanded_Params
{
	float                                              FallDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.OnHit
struct AIndianaPlayerCharacter_OnHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.OnDodged
struct AIndianaPlayerCharacter_OnDodged_Params
{
	EDodgeDirection                                    EDodgeDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.OnDetected
struct AIndianaPlayerCharacter_OnDetected_Params
{
	class AActor*                                      Detector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.OnCrouchComplete
struct AIndianaPlayerCharacter_OnCrouchComplete_Params
{
};

// Function Indiana.IndianaPlayerCharacter.OffsetReticleChanged
struct AIndianaPlayerCharacter_OffsetReticleChanged_Params
{
	bool                                               bUseOffsetReticle;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.MentionPointOfInterest
struct AIndianaPlayerCharacter_MentionPointOfInterest_Params
{
	class UPointOfInterestData*                        POIData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.MakePointOfInterestDiscoverable
struct AIndianaPlayerCharacter_MakePointOfInterestDiscoverable_Params
{
	class UPointOfInterestData*                        POIData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStillHidden;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.IsTravelDestinationLocked
struct AIndianaPlayerCharacter_IsTravelDestinationLocked_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.IsTravelDestinationHidden
struct AIndianaPlayerCharacter_IsTravelDestinationHidden_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.IsShipCurrentlyAt
struct AIndianaPlayerCharacter_IsShipCurrentlyAt_Params
{
	class UTravelDestinationData*                      ShipDest;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.IsAwareOfTravelDestination
struct AIndianaPlayerCharacter_IsAwareOfTravelDestination_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.IsAwareOfRegion
struct AIndianaPlayerCharacter_IsAwareOfRegion_Params
{
	class UTravelRegionData*                           Region;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.IsAwareOfPointOfInterest
struct AIndianaPlayerCharacter_IsAwareOfPointOfInterest_Params
{
	class UPointOfInterestData*                        POIData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.InitiateTravelToShipLocation
struct AIndianaPlayerCharacter_InitiateTravelToShipLocation_Params
{
};

// Function Indiana.IndianaPlayerCharacter.HidePointOfInterest
struct AIndianaPlayerCharacter_HidePointOfInterest_Params
{
	class UPointOfInterestData*                        POIData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.HeadbobbingChanged
struct AIndianaPlayerCharacter_HeadbobbingChanged_Params
{
	bool                                               bHeadbobbing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.HasVisitedTravelDestination
struct AIndianaPlayerCharacter_HasVisitedTravelDestination_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.HasVisitedRegion
struct AIndianaPlayerCharacter_HasVisitedRegion_Params
{
	class UTravelRegionData*                           Region;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.HasOnlyHeardAboutPointOfInterest
struct AIndianaPlayerCharacter_HasOnlyHeardAboutPointOfInterest_Params
{
	class UPointOfInterestData*                        POIData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.HasDiscoveredPointOfInterest
struct AIndianaPlayerCharacter_HasDiscoveredPointOfInterest_Params
{
	class UPointOfInterestData*                        POIData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.GetIndianaPC
struct AIndianaPlayerCharacter_GetIndianaPC_Params
{
	class AIndianaPlayerCharacter*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.EvidenceScannerActivated
struct AIndianaPlayerCharacter_EvidenceScannerActivated_Params
{
	bool                                               bActivated;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.EquippedWeaponChanged
struct AIndianaPlayerCharacter_EquippedWeaponChanged_Params
{
	class UWeapon*                                     NewlyEquippedWeapon;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DiscoverPointOfInterest
struct AIndianaPlayerCharacter_DiscoverPointOfInterest_Params
{
	class UPointOfInterestData*                        POIData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAwardXP;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugTravel_TravelToDestination
struct AIndianaPlayerCharacter_DebugTravel_TravelToDestination_Params
{
	struct FName                                       TravelDestination;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugTravel_SetVisitedRegion
struct AIndianaPlayerCharacter_DebugTravel_SetVisitedRegion_Params
{
	struct FName                                       Region;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNewVisited;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugTravel_SetVisitedDestination
struct AIndianaPlayerCharacter_DebugTravel_SetVisitedDestination_Params
{
	struct FName                                       TravelDestination;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNewVisited;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugTravel_SetShipLocation
struct AIndianaPlayerCharacter_DebugTravel_SetShipLocation_Params
{
	struct FName                                       ShipLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugTravel_SetDestinationLocked
struct AIndianaPlayerCharacter_DebugTravel_SetDestinationLocked_Params
{
	struct FName                                       TravelDestination;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNewLocked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugTravel_SetDestinationHidden
struct AIndianaPlayerCharacter_DebugTravel_SetDestinationHidden_Params
{
	struct FName                                       TravelDestination;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugTravel_SetAwareRegion
struct AIndianaPlayerCharacter_DebugTravel_SetAwareRegion_Params
{
	struct FName                                       Region;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNewAware;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugTravel_SetAwareDestination
struct AIndianaPlayerCharacter_DebugTravel_SetAwareDestination_Params
{
	struct FName                                       TravelDestination;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bNewAware;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.DebugSoftCoverExited
struct AIndianaPlayerCharacter_DebugSoftCoverExited_Params
{
};

// Function Indiana.IndianaPlayerCharacter.DebugSoftCoverEntered
struct AIndianaPlayerCharacter_DebugSoftCoverEntered_Params
{
};

// Function Indiana.IndianaPlayerCharacter.CanDiscoverPointOfInterest
struct AIndianaPlayerCharacter_CanDiscoverPointOfInterest_Params
{
	class UPointOfInterestData*                        POIData;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.CanAccessTravelDestination
struct AIndianaPlayerCharacter_CanAccessTravelDestination_Params
{
	class UTravelDestinationData*                      TravelDest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerCharacter.AdjustWeaponHealth
struct AIndianaPlayerCharacter_AdjustWeaponHealth_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.UnpinGlobalVariable
struct AIndianaPlayerController_UnpinGlobalVariable_Params
{
	class FString                                      GlobalVariable;                                           // (Parm, ZeroConstructor)
};

// Function Indiana.IndianaPlayerController.ToggleQuestLog
struct AIndianaPlayerController_ToggleQuestLog_Params
{
};

// Function Indiana.IndianaPlayerController.TogglePauseMenu
struct AIndianaPlayerController_TogglePauseMenu_Params
{
};

// Function Indiana.IndianaPlayerController.ToggleMap
struct AIndianaPlayerController_ToggleMap_Params
{
};

// Function Indiana.IndianaPlayerController.ToggleLedger
struct AIndianaPlayerController_ToggleLedger_Params
{
};

// Function Indiana.IndianaPlayerController.ToggleInventory
struct AIndianaPlayerController_ToggleInventory_Params
{
};

// Function Indiana.IndianaPlayerController.ToggleCompanions
struct AIndianaPlayerController_ToggleCompanions_Params
{
};

// Function Indiana.IndianaPlayerController.ToggleCharacterSummary
struct AIndianaPlayerController_ToggleCharacterSummary_Params
{
};

// Function Indiana.IndianaPlayerController.SetYAxisInverted
struct AIndianaPlayerController_SetYAxisInverted_Params
{
	bool                                               bIsInverted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.SetXAxisInverted
struct AIndianaPlayerController_SetXAxisInverted_Params
{
	bool                                               bIsInverted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.SetMouseSensitivity
struct AIndianaPlayerController_SetMouseSensitivity_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.SetMouseADSSensitivity
struct AIndianaPlayerController_SetMouseADSSensitivity_Params
{
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.SetGlobalVariable
struct AIndianaPlayerController_SetGlobalVariable_Params
{
	class FString                                      GlobalVariable;                                           // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.SetControllerYAxisInverted
struct AIndianaPlayerController_SetControllerYAxisInverted_Params
{
	bool                                               bIsInverted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.SetControllerXAxisInverted
struct AIndianaPlayerController_SetControllerXAxisInverted_Params
{
	bool                                               bIsInverted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.SetAutoSprintEnabled
struct AIndianaPlayerController_SetAutoSprintEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.PlayChatterOnTarget
struct AIndianaPlayerController_PlayChatterOnTarget_Params
{
	EChatterEventType                                  ChatterEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.PinGlobalVariable
struct AIndianaPlayerController_PinGlobalVariable_Params
{
	class FString                                      GlobalVariable;                                           // (Parm, ZeroConstructor)
};

// Function Indiana.IndianaPlayerController.OpenQuestLog
struct AIndianaPlayerController_OpenQuestLog_Params
{
};

// Function Indiana.IndianaPlayerController.OpenMap
struct AIndianaPlayerController_OpenMap_Params
{
};

// Function Indiana.IndianaPlayerController.OpenLedger
struct AIndianaPlayerController_OpenLedger_Params
{
};

// Function Indiana.IndianaPlayerController.OpenInventory
struct AIndianaPlayerController_OpenInventory_Params
{
};

// Function Indiana.IndianaPlayerController.OpenCompanions
struct AIndianaPlayerController_OpenCompanions_Params
{
};

// Function Indiana.IndianaPlayerController.OpenCharacterSummary
struct AIndianaPlayerController_OpenCharacterSummary_Params
{
};

// Function Indiana.IndianaPlayerController.OnRestoredStateOfBeing
struct AIndianaPlayerController_OnRestoredStateOfBeing_Params
{
	EStateOfBeing                                      RestoredStateOfBeing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.OnKeyBindsReset
struct AIndianaPlayerController_OnKeyBindsReset_Params
{
};

// Function Indiana.IndianaPlayerController.OnAxisMappingRemoved
struct AIndianaPlayerController_OnAxisMappingRemoved_Params
{
	struct FInputAxisKeyMapping                        Value;                                                    // (Parm)
};

// Function Indiana.IndianaPlayerController.OnAxisMappingAdded
struct AIndianaPlayerController_OnAxisMappingAdded_Params
{
	struct FInputAxisKeyMapping                        Value;                                                    // (Parm)
};

// Function Indiana.IndianaPlayerController.OnActionMappingRemoved
struct AIndianaPlayerController_OnActionMappingRemoved_Params
{
	struct FInputActionKeyMapping                      Value;                                                    // (Parm)
};

// Function Indiana.IndianaPlayerController.OnActionMappingAdded
struct AIndianaPlayerController_OnActionMappingAdded_Params
{
	struct FInputActionKeyMapping                      Value;                                                    // (Parm)
};

// Function Indiana.IndianaPlayerController.IsYAxisInverted
struct AIndianaPlayerController_IsYAxisInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.IsXAxisInverted
struct AIndianaPlayerController_IsXAxisInverted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.InputAxis
struct AIndianaPlayerController_InputAxis_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSamples;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.GetMouseSensitivity
struct AIndianaPlayerController_GetMouseSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.GetMouseADSSensitivity
struct AIndianaPlayerController_GetMouseADSSensitivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.GetInteractHoldTime
struct AIndianaPlayerController_GetInteractHoldTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.GetIndianaPlayerController
struct AIndianaPlayerController_GetIndianaPlayerController_Params
{
	class AIndianaPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.DebugSpawnCompanion
struct AIndianaPlayerController_DebugSpawnCompanion_Params
{
	struct FName                                       CompanionName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.DebugSpawnAICharacter
struct AIndianaPlayerController_DebugSpawnAICharacter_Params
{
	struct FName                                       AICharacterAssetName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaAiCharacter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.DebugRevertDutchAngle
struct AIndianaPlayerController_DebugRevertDutchAngle_Params
{
	float                                              Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.DebugDynamicallyReplaceCompanion
struct AIndianaPlayerController_DebugDynamicallyReplaceCompanion_Params
{
	struct FName                                       OldCompanionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewCompanionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.DebugDutchAngleAdjustment
struct AIndianaPlayerController_DebugDutchAngleAdjustment_Params
{
	float                                              Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.CloseLedger
struct AIndianaPlayerController_CloseLedger_Params
{
};

// Function Indiana.IndianaPlayerController.AsyncSpawnCompanion
struct AIndianaPlayerController_AsyncSpawnCompanion_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaAiCharacter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.AddStickYawInput
struct AIndianaPlayerController_AddStickYawInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.AddStickRollInput
struct AIndianaPlayerController_AddStickRollInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerController.AddStickPitchInput
struct AIndianaPlayerController_AddStickPitchInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaPlayerStart.OnPlayerPawnOverlappedVisited
struct AIndianaPlayerStart_OnPlayerPawnOverlappedVisited_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerStart.OnPlayerPawnOverlappedAwareness
struct AIndianaPlayerStart_OnPlayerPawnOverlappedAwareness_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.IndianaPlayerStart.GetDebugString
struct AIndianaPlayerStart_GetDebugString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.IndianaPlayerStart.GetCompanionSpawnLocation
struct AIndianaPlayerStart_GetCompanionSpawnLocation_Params
{
	class FString                                      CompanionCapsuleName;                                     // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFeetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUI.ToggleSafeSpace
struct AIndianaUI_ToggleSafeSpace_Params
{
};

// Function Indiana.IndianaUI.ToggleResurrect
struct AIndianaUI_ToggleResurrect_Params
{
};

// Function Indiana.IndianaUI.ToggleDamageTextVisibility
struct AIndianaUI_ToggleDamageTextVisibility_Params
{
};

// Function Indiana.IndianaUI.StartWorkbench
struct AIndianaUI_StartWorkbench_Params
{
};

// Function Indiana.IndianaUI.ShowItemOnDisplay
struct AIndianaUI_ShowItemOnDisplay_Params
{
	class UClass*                                      ItemIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaUI.SetSoundMixVolume
struct AIndianaUI_SetSoundMixVolume_Params
{
	class USoundMix*                                   SoundMix;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaUI.SetHudVisible
struct AIndianaUI_SetHudVisible_Params
{
	bool                                               bNewVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaUI.RemoveSubtitleManagerInstance
struct AIndianaUI_RemoveSubtitleManagerInstance_Params
{
	class USubtitleManagerWidget*                      ManagerWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.OverlayCycle
struct AIndianaUI_OverlayCycle_Params
{
};

// Function Indiana.IndianaUI.GetUserWidget
struct AIndianaUI_GetUserWidget_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UIndianaInterfaceUserWidget*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.GetSlideshowWidget
struct AIndianaUI_GetSlideshowWidget_Params
{
	class USlideshowWidget*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.GetHUD
struct AIndianaUI_GetHUD_Params
{
	class UHUDWidget*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.ForceHUDHidden
struct AIndianaUI_ForceHUDHidden_Params
{
	bool                                               bForceHidden;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaUI.FontSizeModifierChanged
struct AIndianaUI_FontSizeModifierChanged_Params
{
	int                                                ModifierIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaUI.DebugToggleDLC
struct AIndianaUI_DebugToggleDLC_Params
{
};

// Function Indiana.IndianaUI.DebugStringTables
struct AIndianaUI_DebugStringTables_Params
{
};

// Function Indiana.IndianaUI.DebugStringIDsAndTables
struct AIndianaUI_DebugStringIDsAndTables_Params
{
};

// Function Indiana.IndianaUI.DebugStringIDs
struct AIndianaUI_DebugStringIDs_Params
{
};

// Function Indiana.IndianaUI.DebugSetFontScaling
struct AIndianaUI_DebugSetFontScaling_Params
{
	int                                                ModifierIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaUI.CreateSubtitleManagerInstanceForMSSP
struct AIndianaUI_CreateSubtitleManagerInstanceForMSSP_Params
{
	class UMovieSceneSequencePlayer*                   MovieSceneSequencePlayer;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USubtitleManagerWidget*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.CreateSubtitleManagerInstance
struct AIndianaUI_CreateSubtitleManagerInstance_Params
{
	class UMediaPlayer*                                MediaPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USubtitleManagerWidget*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.CreateGenericMoviePlayer
struct AIndianaUI_CreateGenericMoviePlayer_Params
{
	class UMoviePlayerWidget*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.CreateExaminable
struct AIndianaUI_CreateExaminable_Params
{
	struct FLocString                                  NameString;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLocString                                  DescriptionString;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLocString                                  ActionString;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       RemoteEventOnExaminationEnd;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.IndianaUI.CreateCinematicPlayer
struct AIndianaUI_CreateCinematicPlayer_Params
{
	class UCinematicPlayerWidget*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.ConstructUserWidget
struct AIndianaUI_ConstructUserWidget_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UIndianaInterfaceUserWidget*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.IndianaUI.ColorblindMode
struct AIndianaUI_ColorblindMode_Params
{
	EColorVisionDeficiency                             Deficiency;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Severity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCorrection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCorrectionPreview;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.IndianaUI.CloseWorkbench
struct AIndianaUI_CloseWorkbench_Params
{
};

// Function Indiana.IndianaUI.CloseGenericMoviePlayer
struct AIndianaUI_CloseGenericMoviePlayer_Params
{
};

// Function Indiana.IndianaUIFunctionLibrary.GetOpacityForComponentByType
struct UIndianaUIFunctionLibrary_GetOpacityForComponentByType_Params
{
	EIndianaUIOpacityType                              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUIFunctionLibrary.GetIndianaUI
struct UIndianaUIFunctionLibrary_GetIndianaUI_Params
{
	ECheckBranches                                     Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AIndianaUI*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaUIFunctionLibrary.GetColorByType
struct UIndianaUIFunctionLibrary_GetColorByType_Params
{
	EIndianaUIColorType                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.IndianaWorldSettings.K2_IsCurrentMap
struct AIndianaWorldSettings_K2_IsCurrentMap_Params
{
	class UMapInformation*                             MapInfo;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InputGuideWidget.OnInteractionProgressChange
struct UInputGuideWidget_OnInteractionProgressChange_Params
{
	float                                              CurrentProgressRatio;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InputGuideWidget.InteractChanged
struct UInputGuideWidget_InteractChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InputGuideWidget.GetContentWidth
struct UInputGuideWidget_GetContentWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InputLabelHoldWidget.UpdateFill
struct UInputLabelHoldWidget_UpdateFill_Params
{
};

// Function Indiana.InputLabelHoldWidget.SetWidth
struct UInputLabelHoldWidget_SetWidth_Params
{
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InputLabelHoldWidget.SetRadialFill
struct UInputLabelHoldWidget_SetRadialFill_Params
{
	float                                              FillRatio;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InteractableComponent.GetInteractableComponent
struct UInteractableComponent_GetInteractableComponent_Params
{
	class UChildActorComponent*                        ChildActorComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractableComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.InteractionInterface.GetInteractLocString
struct UInteractionInterface_GetInteractLocString_Params
{
	struct FLocString                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.InteractionInterface.GetInteraction
struct UInteractionInterface_GetInteraction_Params
{
	struct FInteractionDescription                     Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInteractPayload                            Payload;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              InteractDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InteractionInterface.CanInteract
struct UInteractionInterface_CanInteract_Params
{
	class AIndianaCharacter*                           Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInteractPayload                            Payload;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryPageWidget.OnItemCompare
struct UInventoryPageWidget_OnItemCompare_Params
{
	bool                                               bCompared;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryArmorPageWidget.SetEquippedArmorSlot
struct UInventoryArmorPageWidget_SetEquippedArmorSlot_Params
{
	EArmorSlot                                         ArmorSlotIn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemViewerItemWidget.OnButtonUnhovered
struct UItemViewerItemWidget_OnButtonUnhovered_Params
{
};

// Function Indiana.ItemViewerItemWidget.OnButtonPressed
struct UItemViewerItemWidget_OnButtonPressed_Params
{
};

// Function Indiana.ItemViewerItemWidget.OnButtonHovered
struct UItemViewerItemWidget_OnButtonHovered_Params
{
};

// Function Indiana.ItemViewerItemWidget.OnButtonFocusLost
struct UItemViewerItemWidget_OnButtonFocusLost_Params
{
};

// Function Indiana.ItemViewerItemWidget.OnButtonFocused
struct UItemViewerItemWidget_OnButtonFocused_Params
{
};

// Function Indiana.ItemViewerItemWidget.OnButtonClicked
struct UItemViewerItemWidget_OnButtonClicked_Params
{
};

// Function Indiana.InventoryItemWidget.GetDamageType
struct UInventoryItemWidget_GetDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.InventoryWeaponAmmoGroupWidget.OnHighlightChange
struct UInventoryWeaponAmmoGroupWidget_OnHighlightChange_Params
{
	bool                                               bHighlight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWeaponAmmoWidget.SetIcon
struct UInventoryWeaponAmmoWidget_SetIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnWeaponStartEquip
struct UInventoryWidget_OnWeaponStartEquip_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnScrollingPageChangeStart
struct UInventoryWidget_OnScrollingPageChangeStart_Params
{
	class UIndianaUserWidget*                          UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnScrollingPageChangeComplete
struct UInventoryWidget_OnScrollingPageChangeComplete_Params
{
	class UIndianaUserWidget*                          UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnItemRemoved
struct UInventoryWidget_OnItemRemoved_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.InventoryWidget.OnItemJunkStatusChanged
struct UInventoryWidget_OnItemJunkStatusChanged_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.InventoryWidget.OnItemCountChanged
struct UInventoryWidget_OnItemCountChanged_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.InventoryWidget.OnItemAdded
struct UInventoryWidget_OnItemAdded_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.InventoryWidget.OnDragDrop_SwapWeaponSlot
struct UInventoryWidget_OnDragDrop_SwapWeaponSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_SwapGadgetSlot
struct UInventoryWidget_OnDragDrop_SwapGadgetSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_SwapDrugSlot
struct UInventoryWidget_OnDragDrop_SwapDrugSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_SetWeaponSlot
struct UInventoryWidget_OnDragDrop_SetWeaponSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_ItemViewerWeaponSwap
struct UInventoryWidget_OnDragDrop_ItemViewerWeaponSwap_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_ItemViewerInternalSwap
struct UInventoryWidget_OnDragDrop_ItemViewerInternalSwap_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_ItemViewerArmorSwap
struct UInventoryWidget_OnDragDrop_ItemViewerArmorSwap_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_DropItem
struct UInventoryWidget_OnDragDrop_DropItem_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_ClearGadgetSlot
struct UInventoryWidget_OnDragDrop_ClearGadgetSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_ClearDrugSlot
struct UInventoryWidget_OnDragDrop_ClearDrugSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_AssignGadgetSlot
struct UInventoryWidget_OnDragDrop_AssignGadgetSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.InventoryWidget.OnDragDrop_AssignDrugSlot
struct UInventoryWidget_OnDragDrop_AssignDrugSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemContainerWidget.ShowContainer
struct UItemContainerWidget_ShowContainer_Params
{
};

// Function Indiana.ItemContainerWidget.OnItemRemoved
struct UItemContainerWidget_OnItemRemoved_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemContainerWidget.OnItemCountChanged
struct UItemContainerWidget_OnItemCountChanged_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemContainerWidget.OnItemAdded
struct UItemContainerWidget_OnItemAdded_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemContainerWidget.HideContainer
struct UItemContainerWidget_HideContainer_Params
{
};

// Function Indiana.ItemDegradationAlertWidget.WeaponDamageStatusChanged
struct UItemDegradationAlertWidget_WeaponDamageStatusChanged_Params
{
	EItemDegradationState                              DegradationState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemDegradationAlertWidget.OnUnequippedArmor
struct UItemDegradationAlertWidget_OnUnequippedArmor_Params
{
	EArmorSlot                                         ArmorSlotIn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemDegradationAlertWidget.OnHUDVisibilityChanged
struct UItemDegradationAlertWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemDegradationAlertWidget.OnEquipmentRepairVisibilityChanged
struct UItemDegradationAlertWidget_OnEquipmentRepairVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemDegradationAlertWidget.HeadArmorDamageStatusChanged
struct UItemDegradationAlertWidget_HeadArmorDamageStatusChanged_Params
{
	EItemDegradationState                              DegradationState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemDegradationAlertWidget.BodyArmorDamageStatusChanged
struct UItemDegradationAlertWidget_BodyArmorDamageStatusChanged_Params
{
	EItemDegradationState                              DegradationState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemDegradationEntryWidget.PlaySevereDamageAnim
struct UItemDegradationEntryWidget_PlaySevereDamageAnim_Params
{
};

// Function Indiana.ItemDegradationEntryWidget.PlayIntroDamagedAnim
struct UItemDegradationEntryWidget_PlayIntroDamagedAnim_Params
{
};

// Function Indiana.ItemDegradationEntryWidget.KillAllAnims
struct UItemDegradationEntryWidget_KillAllAnims_Params
{
};

// Function Indiana.ItemInspectorWidget.ZoomToggled
struct UItemInspectorWidget_ZoomToggled_Params
{
	bool                                               bFullZoom;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemInspectorWidget.OnZoomToggled
struct UItemInspectorWidget_OnZoomToggled_Params
{
	bool                                               bFullZoom;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemInspectorWidget.OnInputBack
struct UItemInspectorWidget_OnInputBack_Params
{
};

// Function Indiana.ItemInspectorWidget.MouseScroll
struct UItemInspectorWidget_MouseScroll_Params
{
	float                                              MouseInput;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemInspectorWidget.GamepadScroll
struct UItemInspectorWidget_GamepadScroll_Params
{
	float                                              GamepadInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemModdingWidget.OnInstallMod
struct UItemModdingWidget_OnInstallMod_Params
{
};

// Function Indiana.ItemModdingWidget.OnInputBack
struct UItemModdingWidget_OnInputBack_Params
{
};

// Function Indiana.ItemRepairWidget.OnRepair
struct UItemRepairWidget_OnRepair_Params
{
};

// Function Indiana.ItemRepairWidget.OnInputBack
struct UItemRepairWidget_OnInputBack_Params
{
};

// Function Indiana.ItemStatsWidget.OnAlternateChanged
struct UItemStatsWidget_OnAlternateChanged_Params
{
};

// Function Indiana.ItemToolTipWidget.SetBackgroundBrush
struct UItemToolTipWidget_SetBackgroundBrush_Params
{
};

// Function Indiana.ItemToolTipWidget.FontSizeChanged
struct UItemToolTipWidget_FontSizeChanged_Params
{
	int                                                NewModifier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ItemTransferWidget.OnPlayerItemRemoved
struct UItemTransferWidget_OnPlayerItemRemoved_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemTransferWidget.OnPlayerItemAdded
struct UItemTransferWidget_OnPlayerItemAdded_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemTransferWidget.OnPlayerCountChanged
struct UItemTransferWidget_OnPlayerCountChanged_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemTransferWidget.OnItemCountChanged
struct UItemTransferWidget_OnItemCountChanged_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemTransferWidget.OnInventoryItemRemoved
struct UItemTransferWidget_OnInventoryItemRemoved_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemTransferWidget.OnInventoryItemAdded
struct UItemTransferWidget_OnInventoryItemAdded_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ItemViewerPageWidget.PlayCollapseAnimation
struct UItemViewerPageWidget_PlayCollapseAnimation_Params
{
};

// Function Indiana.ItemViewerWidget.OnScrollingComplete
struct UItemViewerWidget_OnScrollingComplete_Params
{
};

// Function Indiana.JumpBehaviorStateInfo.OnOutroAnimationComplete
struct UJumpBehaviorStateInfo_OnOutroAnimationComplete_Params
{
};

// Function Indiana.JumpBehaviorStateInfo.OnIntroAnimationComplete
struct UJumpBehaviorStateInfo_OnIntroAnimationComplete_Params
{
};

// Function Indiana.KeybindDialogBoxWidget.SetNewBackingMaterialHeight
struct UKeybindDialogBoxWidget_SetNewBackingMaterialHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.KeybindDialogBoxWidget.OnInputPress
struct UKeybindDialogBoxWidget_OnInputPress_Params
{
};

// Function Indiana.KeybindDialogBoxWidget.OnInputBack
struct UKeybindDialogBoxWidget_OnInputBack_Params
{
};

// Function Indiana.KeyBindsMenuWidget.OnBackButtonClicked
struct UKeyBindsMenuWidget_OnBackButtonClicked_Params
{
};

// Function Indiana.KeyBindsMenuWidget.CreateRestoreDefaultsDialogBox
struct UKeyBindsMenuWidget_CreateRestoreDefaultsDialogBox_Params
{
};

// Function Indiana.KillCameraComponent.OnKill
struct UKillCameraComponent_OnKill_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.LedgerMapWidget.OnCompanionSelectionClosed
struct ULedgerMapWidget_OnCompanionSelectionClosed_Params
{
};

// Function Indiana.LedgerMapWidget.OnBorderMouseDown
struct ULedgerMapWidget_OnBorderMouseDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.LedgerMapWidget.InitiateFastTravelFromCompanionSelect
struct ULedgerMapWidget_InitiateFastTravelFromCompanionSelect_Params
{
};

// Function Indiana.LedgerMapWidget.ActiveQuestChanged
struct ULedgerMapWidget_ActiveQuestChanged_Params
{
};

// Function Indiana.LedgerWidget.UpdateCompanionTabs
struct ULedgerWidget_UpdateCompanionTabs_Params
{
};

// Function Indiana.LedgerWidget.OnSetCurrentPage
struct ULedgerWidget_OnSetCurrentPage_Params
{
	ELedgerPages                                       Page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.LedgerWidget.OnItemAdded
struct ULedgerWidget_OnItemAdded_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.LedgerWidget.FadeInSharedItemViewer
struct ULedgerWidget_FadeInSharedItemViewer_Params
{
};

// Function Indiana.LevelOptionsWidget.OnControllerBack
struct ULevelOptionsWidget_OnControllerBack_Params
{
};

// Function Indiana.LevelUpNotificationWidget.PlayerCombatStateChanged
struct ULevelUpNotificationWidget_PlayerCombatStateChanged_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.OnTextAndSunFadeOutComplete
struct ULevelUpNotificationWidget_OnTextAndSunFadeOutComplete_Params
{
};

// Function Indiana.LevelUpNotificationWidget.OnSkillUpdated
struct ULevelUpNotificationWidget_OnSkillUpdated_Params
{
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.OnProgressToSkillsPage
struct ULevelUpNotificationWidget_OnProgressToSkillsPage_Params
{
};

// Function Indiana.LevelUpNotificationWidget.OnProgressToPerksPage
struct ULevelUpNotificationWidget_OnProgressToPerksPage_Params
{
};

// Function Indiana.LevelUpNotificationWidget.OnPrimaryTextAndSunFadeInComplete
struct ULevelUpNotificationWidget_OnPrimaryTextAndSunFadeInComplete_Params
{
};

// Function Indiana.LevelUpNotificationWidget.OnPerkAdded
struct ULevelUpNotificationWidget_OnPerkAdded_Params
{
};

// Function Indiana.LevelUpNotificationWidget.OnLevelUpReminderVisibilityChanged
struct ULevelUpNotificationWidget_OnLevelUpReminderVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.OnLevelUpNotificationVisibilityChanged
struct ULevelUpNotificationWidget_OnLevelUpNotificationVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.OnLevelUpComplete
struct ULevelUpNotificationWidget_OnLevelUpComplete_Params
{
};

// Function Indiana.LevelUpNotificationWidget.OnHUDVisibilityChanged
struct ULevelUpNotificationWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.OnGlowShrinkComplete
struct ULevelUpNotificationWidget_OnGlowShrinkComplete_Params
{
};

// Function Indiana.LevelUpNotificationWidget.OnGlowGrowComplete
struct ULevelUpNotificationWidget_OnGlowGrowComplete_Params
{
};

// Function Indiana.LevelUpNotificationWidget.OnGlowballComplete
struct ULevelUpNotificationWidget_OnGlowballComplete_Params
{
};

// Function Indiana.LevelUpNotificationWidget.GetTextAndSunFadeOutAnimation
struct ULevelUpNotificationWidget_GetTextAndSunFadeOutAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetSunSpinAnimation
struct ULevelUpNotificationWidget_GetSunSpinAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetSecondaryTextFadeInAnimation
struct ULevelUpNotificationWidget_GetSecondaryTextFadeInAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetPrimaryTextGrowAnimation
struct ULevelUpNotificationWidget_GetPrimaryTextGrowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetPrimaryTextAndSunFadeInAnimation
struct ULevelUpNotificationWidget_GetPrimaryTextAndSunFadeInAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetLevelUpReminderAnimation
struct ULevelUpNotificationWidget_GetLevelUpReminderAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetGlowShrinkAnimation
struct ULevelUpNotificationWidget_GetGlowShrinkAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetGlowGrowAnimation
struct ULevelUpNotificationWidget_GetGlowGrowAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetGlowFadeAnimation
struct ULevelUpNotificationWidget_GetGlowFadeAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LevelUpNotificationWidget.GetGlowballAnimation
struct ULevelUpNotificationWidget_GetGlowballAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.LogList.AddNewFoundLog
struct ULogList_AddNewFoundLog_Params
{
	struct FLocString                                  ExaminableName;                                           // (Parm)
	struct FLocString                                  ExaminableDescription;                                    // (Parm)
};

// Function Indiana.MainMenuDLCManagerWidget.RefreshEntitlements
struct UMainMenuDLCManagerWidget_RefreshEntitlements_Params
{
};

// Function Indiana.MainMenuDLCWidget.OnButtonUnhoveredUnfocused
struct UMainMenuDLCWidget_OnButtonUnhoveredUnfocused_Params
{
};

// Function Indiana.MainMenuDLCWidget.OnButtonHoveredFocused
struct UMainMenuDLCWidget_OnButtonHoveredFocused_Params
{
};

// Function Indiana.MainMenuWidget.StartAutosaveSplash
struct UMainMenuWidget_StartAutosaveSplash_Params
{
};

// Function Indiana.MainMenuWidget.OpenMainScreen
struct UMainMenuWidget_OpenMainScreen_Params
{
};

// Function Indiana.MainMenuWidget.OpenExtrasScreen
struct UMainMenuWidget_OpenExtrasScreen_Params
{
};

// Function Indiana.MainMenuWidget.OpenDeliverablesScreen
struct UMainMenuWidget_OpenDeliverablesScreen_Params
{
};

// Function Indiana.MainMenuWidget.OpenCredits
struct UMainMenuWidget_OpenCredits_Params
{
};

// Function Indiana.MainMenuWidget.OnStartShowMainOptions
struct UMainMenuWidget_OnStartShowMainOptions_Params
{
};

// Function Indiana.MainMenuWidget.OnStartShowGammaSelection
struct UMainMenuWidget_OnStartShowGammaSelection_Params
{
};

// Function Indiana.MainMenuWidget.OnStartHideGammaSelection
struct UMainMenuWidget_OnStartHideGammaSelection_Params
{
};

// Function Indiana.MainMenuWidget.OnStartHideAnyTextPrompt
struct UMainMenuWidget_OnStartHideAnyTextPrompt_Params
{
};

// Function Indiana.MainMenuWidget.OnShowMainOptionsComplete
struct UMainMenuWidget_OnShowMainOptionsComplete_Params
{
};

// Function Indiana.MainMenuWidget.OnShowMainOptions
struct UMainMenuWidget_OnShowMainOptions_Params
{
};

// Function Indiana.MainMenuWidget.OnShowLogo
struct UMainMenuWidget_OnShowLogo_Params
{
};

// Function Indiana.MainMenuWidget.OnShowInterface
struct UMainMenuWidget_OnShowInterface_Params
{
	bool                                               bShouldChangeLogo;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MainMenuWidget.OnShowAnyTextPrompt
struct UMainMenuWidget_OnShowAnyTextPrompt_Params
{
};

// Function Indiana.MainMenuWidget.OnOfflineDLCCheckComplete
struct UMainMenuWidget_OnOfflineDLCCheckComplete_Params
{
};

// Function Indiana.MainMenuWidget.OnLoadUserGameSettingsComplete
struct UMainMenuWidget_OnLoadUserGameSettingsComplete_Params
{
};

// Function Indiana.MainMenuWidget.OnHideMainOptionsStart
struct UMainMenuWidget_OnHideMainOptionsStart_Params
{
};

// Function Indiana.MainMenuWidget.OnHideMainOptionsComplete
struct UMainMenuWidget_OnHideMainOptionsComplete_Params
{
};

// Function Indiana.MainMenuWidget.OnHideLogo
struct UMainMenuWidget_OnHideLogo_Params
{
};

// Function Indiana.MainMenuWidget.OnHideInterface
struct UMainMenuWidget_OnHideInterface_Params
{
};

// Function Indiana.MainMenuWidget.OnGammaSelectionOpened
struct UMainMenuWidget_OnGammaSelectionOpened_Params
{
};

// Function Indiana.MainMenuWidget.OnGammaSelectionClosed
struct UMainMenuWidget_OnGammaSelectionClosed_Params
{
};

// Function Indiana.MainMenuWidget.OnExternalMenuOpened
struct UMainMenuWidget_OnExternalMenuOpened_Params
{
};

// Function Indiana.MainMenuWidget.OnExternalMenuClosed
struct UMainMenuWidget_OnExternalMenuClosed_Params
{
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MainMenuWidget.OnDLCCheckComplete
struct UMainMenuWidget_OnDLCCheckComplete_Params
{
};

// Function Indiana.MainMenuWidget.OnCreditsInterfaceOpened
struct UMainMenuWidget_OnCreditsInterfaceOpened_Params
{
};

// Function Indiana.MainMenuWidget.OnCreditsInterfaceClosed
struct UMainMenuWidget_OnCreditsInterfaceClosed_Params
{
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MainMenuWidget.OnAutosaveSplashComplete
struct UMainMenuWidget_OnAutosaveSplashComplete_Params
{
};

// Function Indiana.MainMenuWidget.OnAnyTextPromptHideComplete
struct UMainMenuWidget_OnAnyTextPromptHideComplete_Params
{
};

// Function Indiana.MainMenuWidget.OnActiveUserChanged
struct UMainMenuWidget_OnActiveUserChanged_Params
{
	EActiveUserChangeType                              ChangeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MainOptionsWidget.OnSettingsMenuClosed
struct UMainOptionsWidget_OnSettingsMenuClosed_Params
{
};

// Function Indiana.MainOptionsWidget.OnQueryLatestSaveFinished
struct UMainOptionsWidget_OnQueryLatestSaveFinished_Params
{
	class FString                                      LatestSaveName;                                           // (Parm, ZeroConstructor)
	bool                                               bHasSaves;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MainOptionsWidget.OnLoadSaveMenuClosed
struct UMainOptionsWidget_OnLoadSaveMenuClosed_Params
{
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MainOptionsWidget.OnLoadComplete
struct UMainOptionsWidget_OnLoadComplete_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
	ELoadGameResult                                    Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MainOptionsWidget.OnActiveUserChanged
struct UMainOptionsWidget_OnActiveUserChanged_Params
{
	EActiveUserChangeType                              ChangeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MainOptionsWidget.InquireDLC2
struct UMainOptionsWidget_InquireDLC2_Params
{
};

// Function Indiana.MainOptionsWidget.InquireDLC1
struct UMainOptionsWidget_InquireDLC1_Params
{
};

// Function Indiana.MapRenderer.TakeRender
struct AMapRenderer_TakeRender_Params
{
};

// Function Indiana.MapTransitionNotification.StartAnimation
struct UMapTransitionNotification_StartAnimation_Params
{
};

// Function Indiana.MapTransitionNotification.OnHUDVisibilityChanged
struct UMapTransitionNotification_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MapTransitionNotification.OnAreaNameModeChanged
struct UMapTransitionNotification_OnAreaNameModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MedKitAbilityWidget.UpdateDrugSlots
struct UMedKitAbilityWidget_UpdateDrugSlots_Params
{
	int                                                ConsumablesUsed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MedKitComponent.StartMedkit
struct UMedKitComponent_StartMedkit_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.MedKitComponent.OnAnimNotifyEvent
struct UMedKitComponent_OnAnimNotifyEvent_Params
{
	EAnimNotify                                        AnimNotifyEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MedKitComponent.OnAbilityMontageEnded
struct UMedKitComponent_OnAbilityMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MeleeMode.OnStatUpdated
struct UMeleeMode_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MeleeSequencer.OnStatUpdated
struct UMeleeSequencer_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MeleeSequencer.OnAbilityUnlocked
struct UMeleeSequencer_OnAbilityUnlocked_Params
{
	EUnlockAbility                                     Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MeleeSlotManagerComponent.OnAttackerNumMeleeSlotsRequiredChanged
struct UMeleeSlotManagerComponent_OnAttackerNumMeleeSlotsRequiredChanged_Params
{
	class AIndianaAiController*                        AttackerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.UninitializeBP
struct UWeaponVisuals_UninitializeBP_Params
{
};

// Function Indiana.WeaponVisuals.TriggerEventBP
struct UWeaponVisuals_TriggerEventBP_Params
{
	EWeaponEvent                                       WeaponEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.WeaponVisuals.TriggerDamageTypeMuzzleFx
struct UWeaponVisuals_TriggerDamageTypeMuzzleFx_Params
{
};

// Function Indiana.WeaponVisuals.TriggerCustomEventBP
struct UWeaponVisuals_TriggerCustomEventBP_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.WeaponVisuals.TriggerCustomEvent
struct UWeaponVisuals_TriggerCustomEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.TickBP
struct UWeaponVisuals_TickBP_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.StopCustomEventBP
struct UWeaponVisuals_StopCustomEventBP_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.StopCustomEvent
struct UWeaponVisuals_StopCustomEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.LeaveStateBP
struct UWeaponVisuals_LeaveStateBP_Params
{
	EWeaponState                                       WeaponState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.LeaveCustomStateBP
struct UWeaponVisuals_LeaveCustomStateBP_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.LeaveCustomState
struct UWeaponVisuals_LeaveCustomState_Params
{
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.InterruptEventBP
struct UWeaponVisuals_InterruptEventBP_Params
{
	EWeaponEvent                                       WeaponEvent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.InitializeBP
struct UWeaponVisuals_InitializeBP_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWeapon*                                     NewWeapon;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.EnterStateBP
struct UWeaponVisuals_EnterStateBP_Params
{
	EWeaponState                                       WeaponState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.WeaponVisuals.EnterCustomStateBP
struct UWeaponVisuals_EnterCustomStateBP_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FEventEffectParams                          Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.WeaponVisuals.EnterCustomState
struct UWeaponVisuals_EnterCustomState_Params
{
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WeaponVisuals.CreateLerpTimer
struct UWeaponVisuals_CreateLerpTimer_Params
{
	struct FLerpTimer                                  TimerProperties;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.WeaponVisuals.ClearLerpTimers
struct UWeaponVisuals_ClearLerpTimers_Params
{
};

// Function Indiana.MoveToBehaviorStateInfo.OnTakeDamage
struct UMoveToBehaviorStateInfo_OnTakeDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.MoviePlayerWidget.StopMovie
struct UMoviePlayerWidget_StopMovie_Params
{
	bool                                               bWasSkipped;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MoviePlayerWidget.PlayMovie
struct UMoviePlayerWidget_PlayMovie_Params
{
	class UFileMediaSource*                            Movie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MoviePlayerWidget.PauseMovie
struct UMoviePlayerWidget_PauseMovie_Params
{
};

// Function Indiana.MoviePlayerWidget.OnMovieFinished
struct UMoviePlayerWidget_OnMovieFinished_Params
{
};

// Function Indiana.MoviePlayerWidget.OnAttemptCancel
struct UMoviePlayerWidget_OnAttemptCancel_Params
{
};

// Function Indiana.MoviePlayerWidget.InitiateFadeOut
struct UMoviePlayerWidget_InitiateFadeOut_Params
{
};

// Function Indiana.MoviePlayerWidget.InitiateFadeIn
struct UMoviePlayerWidget_InitiateFadeIn_Params
{
};

// Function Indiana.MultiStatusEffect.OnChildCleared
struct UMultiStatusEffect_OnChildCleared_Params
{
	class UStatusEffect*                               ChildEffect;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.MusicManager.SetMusicOverride_BP
struct UMusicManager_SetMusicOverride_BP_Params
{
	class UMusicTrackData*                             OverrideTrack;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.MusicManager.OnPreMapLoad
struct UMusicManager_OnPreMapLoad_Params
{
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Indiana.MusicManager.OnPostMapLoad
struct UMusicManager_OnPostMapLoad_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ObjectiveWaypointGameDataReference.GetOverridesPreviousWaypoint
struct UObjectiveWaypointGameDataReference_GetOverridesPreviousWaypoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ObjectiveWaypointGameDataReference.GetGameObject
struct UObjectiveWaypointGameDataReference_GetGameObject_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ObjectiveWaypointGameDataReference.GetDisplayOverrideWithGender
struct UObjectiveWaypointGameDataReference_GetDisplayOverrideWithGender_Params
{
	EGender                                            CharacterGender;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.ObjectiveWaypointGameDataReference.GetDisplayOverrideID
struct UObjectiveWaypointGameDataReference_GetDisplayOverrideID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ObjectiveWaypointGameDataReference.GetDisplayOverride
struct UObjectiveWaypointGameDataReference_GetDisplayOverride_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.OCLAudioComponent.Stop
struct UOCLAudioComponent_Stop_Params
{
	EOCLEventType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OCLAudioComponent.Play
struct UOCLAudioComponent_Play_Params
{
	EOCLEventType                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OCLComponent.UnsealOCL
struct UOCLComponent_UnsealOCL_Params
{
	bool                                               bFireOCLUnsealedEvent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OCLComponent.UnlockOCL
struct UOCLComponent_UnlockOCL_Params
{
	bool                                               bFireOCLUnlockedEvent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OCLComponent.UnbarOCL
struct UOCLComponent_UnbarOCL_Params
{
	bool                                               bFireOCLUnbarredEvent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnterLockedState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OCLComponent.SignalOCLAnimationComplete
struct UOCLComponent_SignalOCLAnimationComplete_Params
{
};

// Function Indiana.OCLComponent.SealOCL
struct UOCLComponent_SealOCL_Params
{
	bool                                               bFireOCLSealedEvent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OCLComponent.LockOCL
struct UOCLComponent_LockOCL_Params
{
	bool                                               bFireOCLLockedEvent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OCLComponent.IsSealing
struct UOCLComponent_IsSealing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.IsSealed
struct UOCLComponent_IsSealed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.IsOpening
struct UOCLComponent_IsOpening_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.IsOpen
struct UOCLComponent_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.IsLocked
struct UOCLComponent_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.IsClosing
struct UOCLComponent_IsClosing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.IsClosed
struct UOCLComponent_IsClosed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.IsBarred
struct UOCLComponent_IsBarred_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.GetExactLockpickDifficulty
struct UOCLComponent_GetExactLockpickDifficulty_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.GetCurrentState
struct UOCLComponent_GetCurrentState_Params
{
	EOCLState                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.BarOCL
struct UOCLComponent_BarOCL_Params
{
	bool                                               bFireOCLBarredEvent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.OCLComponent.AttemptUnlock
struct UOCLComponent_AttemptUnlock_Params
{
	class AActor*                                      Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EOCLResult                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.AttemptOpen
struct UOCLComponent_AttemptOpen_Params
{
	class AActor*                                      Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSeal;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreLockStatus;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreStartEvent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreEndEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSound;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantAnimation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EOCLResult                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OCLComponent.AttemptClose
struct UOCLComponent_AttemptClose_Params
{
	class AActor*                                      Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Block;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSeal;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreLockStatus;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreStartEvent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreEndEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSound;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantAnimation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EOCLResult                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OnRailsComponent.OnCompHit
struct UOnRailsComponent_OnCompHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.OnRailsComponent.OnCharacterDeath
struct UOnRailsComponent_OnCharacterDeath_Params
{
	struct FCauseDamageInfo                            CDI;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.OnRailsComponent.IsMovingForward
struct UOnRailsComponent_IsMovingForward_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OnRailsComponent.IsMoving
struct UOnRailsComponent_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OnRailsComponent.HasVantageForActor
struct UOnRailsComponent_HasVantageForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OnRailsComponent.FurthestLocationOnSpline
struct UOnRailsComponent_FurthestLocationOnSpline_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OnRailsComponent.FindVantageForLocation
struct UOnRailsComponent_FindVantageForLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OnRailsComponent.FindVantageForActor
struct UOnRailsComponent_FindVantageForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.OptionSliderWidget.OnSliderValueChanged
struct UOptionSliderWidget_OnSliderValueChanged_Params
{
	struct FSliderEvent                                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ParticlePool.ParticleFreed
struct UParticlePool_ParticleFreed_Params
{
	class UParticleSystemComponent*                    Particle;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.PauseMenuWidget.OnSettingsMenuClosed
struct UPauseMenuWidget_OnSettingsMenuClosed_Params
{
};

// Function Indiana.PauseMenuWidget.OnSaveLoadMenuClosed
struct UPauseMenuWidget_OnSaveLoadMenuClosed_Params
{
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PauseMenuWidget.OnSaveGameComplete
struct UPauseMenuWidget_OnSaveGameComplete_Params
{
	ESaveGameResult                                    SaveResult;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ESaveGameType                                      SaveType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PauseMenuWidget.OnInputBack
struct UPauseMenuWidget_OnInputBack_Params
{
};

// Function Indiana.PerksListEntry.UpdateButtonBrush
struct UPerksListEntry_UpdateButtonBrush_Params
{
	bool                                               bPendingPurchase;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActuallyPurchased;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PerksListEntry.OnPerkClickedValid
struct UPerksListEntry_OnPerkClickedValid_Params
{
};

// Function Indiana.PerksListEntry.GetUnpurchasedIcon
struct UPerksListEntry_GetUnpurchasedIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PerksListEntry.GetSuppressedIcon
struct UPerksListEntry_GetSuppressedIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PerksListEntry.GetPurchasedIcon
struct UPerksListEntry_GetPurchasedIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PerksTierWidget.GetTextOpacity
struct UPerksTierWidget_GetTextOpacity_Params
{
	bool                                               bUnlocked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PerksTierWidget.GetImageOpacity
struct UPerksTierWidget_GetImageOpacity_Params
{
	bool                                               bUnlocked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PerksTierWidget.GetColorType
struct UPerksTierWidget_GetColorType_Params
{
	bool                                               bUnlocked;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EIndianaUIColorType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PersonalSpaceComponent.OnNewStateOfBeing
struct UPersonalSpaceComponent_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PersuadeBehaviorStateInfo.OnTakeDamage
struct UPersuadeBehaviorStateInfo_OnTakeDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.Pickup.ShutdownDropPhysics
struct APickup_ShutdownDropPhysics_Params
{
	bool                                               bUpdateTransforms;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Pickup.SetupDropPhysics
struct APickup_SetupDropPhysics_Params
{
};

// Function Indiana.Pickup.OnPhysicsWake
struct APickup_OnPhysicsWake_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Pickup.OnPhysicsSleep
struct APickup_OnPhysicsSleep_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Pickup.GetItem
struct APickup_GetItem_Params
{
	class UItem*                                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.PlayAnimationAction.OnMontageBlendingOut
struct UPlayAnimationAction_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerDeathComponent.OnLanded
struct UPlayerDeathComponent_OnLanded_Params
{
	float                                              DistanceFallen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerDeathComponent.OnAnimNotifyEvent
struct UPlayerDeathComponent_OnAnimNotifyEvent_Params
{
	EAnimNotify                                        AnimNotifyEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerDeathComponent.FadeToBlackComplete
struct UPlayerDeathComponent_FadeToBlackComplete_Params
{
};

// Function Indiana.PlayerDeathComponent.DeathAnimComplete
struct UPlayerDeathComponent_DeathAnimComplete_Params
{
};

// Function Indiana.PlayerEnvironmentInteractionComponent.OnOccupiedNavAreaChanged
struct UPlayerEnvironmentInteractionComponent_OnOccupiedNavAreaChanged_Params
{
	class UClass*                                      PrevOccupiedArea;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentOccupiedArea;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerEnvironmentInteractionComponent.OnCombatStateChange
struct UPlayerEnvironmentInteractionComponent_OnCombatStateChange_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.SurvivalModeUpdated
struct UPlayerHealthComponent_SurvivalModeUpdated_Params
{
	bool                                               bSurvivalMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.PlayerWaitInitiated
struct UPlayerHealthComponent_PlayerWaitInitiated_Params
{
	float                                              SecondsPassed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ERestType                                          RestType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetThirst
struct UPlayerHealthComponent_GetThirst_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetMaxFastTravelThirst
struct UPlayerHealthComponent_GetMaxFastTravelThirst_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetMaxFastTravelHunger
struct UPlayerHealthComponent_GetMaxFastTravelHunger_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetMaxFastTravelExhaustion
struct UPlayerHealthComponent_GetMaxFastTravelExhaustion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetLethalThirst
struct UPlayerHealthComponent_GetLethalThirst_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetLethalHunger
struct UPlayerHealthComponent_GetLethalHunger_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetLethalExhaustion
struct UPlayerHealthComponent_GetLethalExhaustion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetHunger
struct UPlayerHealthComponent_GetHunger_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.GetExhaustion
struct UPlayerHealthComponent_GetExhaustion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.FastTravelInitiated
struct UPlayerHealthComponent_FastTravelInitiated_Params
{
	class UTravelDestinationData*                      TravelData;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimePassed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTravelFromMapLedger;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.AdjustThirst
struct UPlayerHealthComponent_AdjustThirst_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromFastTravel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTravelFromMapLedger;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.AdjustSurvivalStats
struct UPlayerHealthComponent_AdjustSurvivalStats_Params
{
	float                                              HungerGained;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThirstGained;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExhaustionGained;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromFastTravel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTravelFromMapLedger;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.AdjustHunger
struct UPlayerHealthComponent_AdjustHunger_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromFastTravel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTravelFromMapLedger;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.AdjustExhaustion
struct UPlayerHealthComponent_AdjustExhaustion_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromFastTravel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTravelFromMapLedger;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.AddThirst
struct UPlayerHealthComponent_AddThirst_Params
{
	float                                              Thirst;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.AddHunger
struct UPlayerHealthComponent_AddHunger_Params
{
	float                                              Hunger;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerHealthComponent.AddExhaustion
struct UPlayerHealthComponent_AddExhaustion_Params
{
	float                                              Exhaustion;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.StopCurrentAudioLog
struct UPlayerInfoComponent_StopCurrentAudioLog_Params
{
};

// Function Indiana.PlayerInfoComponent.SetGenderDebug
struct UPlayerInfoComponent_SetGenderDebug_Params
{
	EGender                                            GenderIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.SetFlawAsOfferable
struct UPlayerInfoComponent_SetFlawAsOfferable_Params
{
	class UClass*                                      Flaw;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OfferChance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTimer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.SetAptitudeDebug
struct UPlayerInfoComponent_SetAptitudeDebug_Params
{
	class FString                                      AptitudeName;                                             // (Parm, ZeroConstructor)
};

// Function Indiana.PlayerInfoComponent.ResumeCurrentAudioLog
struct UPlayerInfoComponent_ResumeCurrentAudioLog_Params
{
};

// Function Indiana.PlayerInfoComponent.RespecSkillPoints
struct UPlayerInfoComponent_RespecSkillPoints_Params
{
};

// Function Indiana.PlayerInfoComponent.RespecPerks
struct UPlayerInfoComponent_RespecPerks_Params
{
	bool                                               bNoCost;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.ResetQuest
struct UPlayerInfoComponent_ResetQuest_Params
{
	class FString                                      QuestName;                                                // (Parm, ZeroConstructor)
	TArray<int>                                        ResetEventIDs;                                            // (Parm, ZeroConstructor)
};

// Function Indiana.PlayerInfoComponent.ResetFlawOfferTimer
struct UPlayerInfoComponent_ResetFlawOfferTimer_Params
{
};

// Function Indiana.PlayerInfoComponent.QuestTriggerAddendum
struct UPlayerInfoComponent_QuestTriggerAddendum_Params
{
	class FString                                      QuestName;                                                // (Parm, ZeroConstructor)
	int                                                AddendumNode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.QuestStart
struct UPlayerInfoComponent_QuestStart_Params
{
	class FString                                      QuestName;                                                // (Parm, ZeroConstructor)
};

// Function Indiana.PlayerInfoComponent.QuestListAll
struct UPlayerInfoComponent_QuestListAll_Params
{
};

// Function Indiana.PlayerInfoComponent.QuestFail
struct UPlayerInfoComponent_QuestFail_Params
{
	class FString                                      QuestName;                                                // (Parm, ZeroConstructor)
};

// Function Indiana.PlayerInfoComponent.QuestComplete
struct UPlayerInfoComponent_QuestComplete_Params
{
	class FString                                      QuestName;                                                // (Parm, ZeroConstructor)
};

// Function Indiana.PlayerInfoComponent.PlayAudioLog
struct UPlayerInfoComponent_PlayAudioLog_Params
{
	int                                                AudioLogIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.PauseCurrentAudioLog
struct UPlayerInfoComponent_PauseCurrentAudioLog_Params
{
};

// Function Indiana.PlayerInfoComponent.OnCombatStateChanged
struct UPlayerInfoComponent_OnCombatStateChanged_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.IsPlayingAudioLog
struct UPlayerInfoComponent_IsPlayingAudioLog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.FlawOfferRejectDebug
struct UPlayerInfoComponent_FlawOfferRejectDebug_Params
{
};

// Function Indiana.PlayerInfoComponent.FlawOfferDebug
struct UPlayerInfoComponent_FlawOfferDebug_Params
{
	class FString                                      FlawName;                                                 // (Parm, ZeroConstructor)
};

// Function Indiana.PlayerInfoComponent.FlawOfferAcceptDebug
struct UPlayerInfoComponent_FlawOfferAcceptDebug_Params
{
};

// Function Indiana.PlayerInfoComponent.FlawClearOfferDebug
struct UPlayerInfoComponent_FlawClearOfferDebug_Params
{
};

// Function Indiana.PlayerInfoComponent.FlawClearDebug
struct UPlayerInfoComponent_FlawClearDebug_Params
{
	class FString                                      FlawName;                                                 // (Parm, ZeroConstructor)
};

// Function Indiana.PlayerInfoComponent.FlawAddDebug
struct UPlayerInfoComponent_FlawAddDebug_Params
{
	class FString                                      FlawName;                                                 // (Parm, ZeroConstructor)
};

// Function Indiana.PlayerInfoComponent.EnableFlawOffers
struct UPlayerInfoComponent_EnableFlawOffers_Params
{
};

// Function Indiana.PlayerInfoComponent.DisableFlawOffers
struct UPlayerInfoComponent_DisableFlawOffers_Params
{
};

// Function Indiana.PlayerInfoComponent.AddXPDebug
struct UPlayerInfoComponent_AddXPDebug_Params
{
	int                                                XP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInfoComponent.AddAudioLog
struct UPlayerInfoComponent_AddAudioLog_Params
{
	struct FAudioLogDefinition                         AudioLogDefinition;                                       // (Parm, OutParm)
};

// Function Indiana.PlayerInteractionComponent.OnHUDVisibilityChanged
struct UPlayerInteractionComponent_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInteractionComponent.OnHighlightModeChanged
struct UPlayerInteractionComponent_OnHighlightModeChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInteractionComponent.OnDiscrepencyAmplifierActivated
struct UPlayerInteractionComponent_OnDiscrepencyAmplifierActivated_Params
{
	bool                                               bActivated;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.VendorRepairItemDebug
struct UPlayerInventoryComponent_VendorRepairItemDebug_Params
{
	struct FName                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.SetWeaponHealthDebug
struct UPlayerInventoryComponent_SetWeaponHealthDebug_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.SetItemHealthDebug
struct UPlayerInventoryComponent_SetItemHealthDebug_Params
{
	struct FName                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.SetHelmetHealthDebug
struct UPlayerInventoryComponent_SetHelmetHealthDebug_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.SetArmorHealthDebug
struct UPlayerInventoryComponent_SetArmorHealthDebug_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.RepairItemDebug
struct UPlayerInventoryComponent_RepairItemDebug_Params
{
	struct FName                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bFieldRepair;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.OnStatUpdated
struct UPlayerInventoryComponent_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.OnCompanionRegistered
struct UPlayerInventoryComponent_OnCompanionRegistered_Params
{
	class AIndianaAiCharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAdded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.IgnoreEncumbrance
struct UPlayerInventoryComponent_IgnoreEncumbrance_Params
{
	bool                                               bIgnored;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerInventoryComponent.GiveTools
struct UPlayerInventoryComponent_GiveTools_Params
{
};

// Function Indiana.PlayerInventoryComponent.BreakDownItemDebug
struct UPlayerInventoryComponent_BreakDownItemDebug_Params
{
	struct FName                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bFieldBreakdown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerMovementComponent.OnUnlockAbilityChanged
struct UPlayerMovementComponent_OnUnlockAbilityChanged_Params
{
	EUnlockAbility                                     Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerMovementComponent.OnTakeFallingDamage
struct UPlayerMovementComponent_OnTakeFallingDamage_Params
{
	float                                              FallingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerMovementComponent.ControllerSensitivityUpdated
struct UPlayerMovementComponent_ControllerSensitivityUpdated_Params
{
	float                                              SensitivityIn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerMovementComponent.ControllerADSSensitivityUpdated
struct UPlayerMovementComponent_ControllerADSSensitivityUpdated_Params
{
	float                                              SensititivityIn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerMovementComponent.AcrophobiaEnableDebug
struct UPlayerMovementComponent_AcrophobiaEnableDebug_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerShoutComponent.OnCombatStateChange
struct UPlayerShoutComponent_OnCombatStateChange_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerStatsWidget.SetXPRatio
struct UPlayerStatsWidget_SetXPRatio_Params
{
	float                                              XPRatio;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerStatsWidget.OnPlayerWeightChange
struct UPlayerStatsWidget_OnPlayerWeightChange_Params
{
};

// Function Indiana.PlayerStatsWidget.OnLevelChanged
struct UPlayerStatsWidget_OnLevelChanged_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerStatsWidget.OnItemPartsChanged
struct UPlayerStatsWidget_OnItemPartsChanged_Params
{
	int                                                WeaponParts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArmorParts;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PlayerStatsWidget.OnItemEquipped
struct UPlayerStatsWidget_OnItemEquipped_Params
{
	class UItem*                                       ItemEquipped;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.PlayerTargetingComponent.KillTarget
struct UPlayerTargetingComponent_KillTarget_Params
{
};

// Function Indiana.PlayerTargetingComponent.DrawPlayerTargetingTrace
struct UPlayerTargetingComponent_DrawPlayerTargetingTrace_Params
{
	float                                              PersistTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PointOfInterest.OnBeginOverlap
struct APointOfInterest_OnBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.PointOfNoReturnRollbackData.FixQuestsBP
struct UPointOfNoReturnRollbackData_FixQuestsBP_Params
{
};

// Function Indiana.PointOfNoReturnRollbackData.FixItemsBP
struct UPointOfNoReturnRollbackData_FixItemsBP_Params
{
};

// Function Indiana.PointOfNoReturnRollbackData.FixGlobalVarsBP
struct UPointOfNoReturnRollbackData_FixGlobalVarsBP_Params
{
};

// Function Indiana.PointOfNoReturnRollbackData.FixConversationsBP
struct UPointOfNoReturnRollbackData_FixConversationsBP_Params
{
};

// Function Indiana.Projectile.OnHit
struct AProjectile_OnHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Projectile.OnDamageEndOverlap
struct AProjectile_OnDamageEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Projectile.OnDamageBeginOverlap
struct AProjectile_OnDamageBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Projectile.OnBounce
struct AProjectile_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Projectile.GetOverlapCollisionSize
struct AProjectile_GetOverlapCollisionSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Projectile.GetCollisionSize
struct AProjectile_GetCollisionSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Projectile.GetChargeAmount
struct AProjectile_GetChargeAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.QuestAddendumWidget.OnObjectiveStatusChange
struct UQuestAddendumWidget_OnObjectiveStatusChange_Params
{
	ECompletionStatus                                  ObjectiveCompletion;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.QuestJournalWidget.OnQuestImageLoaded
struct UQuestJournalWidget_OnQuestImageLoaded_Params
{
};

// Function Indiana.QuestListEntryWidget.SetQuestCompletionStatus
struct UQuestListEntryWidget_SetQuestCompletionStatus_Params
{
	EQuestState                                        QuestState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.QuestListEntryWidget.SetActiveQuest
struct UQuestListEntryWidget_SetActiveQuest_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.QuestLogComboBoxWidget.OnValueChanged
struct UQuestLogComboBoxWidget_OnValueChanged_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.QuestLogComboBoxWidget.OnSortOptionIncrement
struct UQuestLogComboBoxWidget_OnSortOptionIncrement_Params
{
};

// Function Indiana.QuestLogEntryWidget.OnQuestUpdated
struct UQuestLogEntryWidget_OnQuestUpdated_Params
{
};

// Function Indiana.QuestLogEntryWidget.OnQuestTextFadeOutComplete
struct UQuestLogEntryWidget_OnQuestTextFadeOutComplete_Params
{
};

// Function Indiana.QuestLogEntryWidget.OnQuestTextFadeInComplete
struct UQuestLogEntryWidget_OnQuestTextFadeInComplete_Params
{
};

// Function Indiana.QuestLogEntryWidget.OnQuestFailed
struct UQuestLogEntryWidget_OnQuestFailed_Params
{
};

// Function Indiana.QuestLogEntryWidget.OnQuestCompleted
struct UQuestLogEntryWidget_OnQuestCompleted_Params
{
};

// Function Indiana.QuestLogEntryWidget.OnQuestAnimationStartOrUpdateComplete
struct UQuestLogEntryWidget_OnQuestAnimationStartOrUpdateComplete_Params
{
};

// Function Indiana.QuestLogEntryWidget.OnQuestAnimationFinishedComplete
struct UQuestLogEntryWidget_OnQuestAnimationFinishedComplete_Params
{
};

// Function Indiana.QuestLogEntryWidget.FadeOutQuestText
struct UQuestLogEntryWidget_FadeOutQuestText_Params
{
};

// Function Indiana.QuestLogEntryWidget.FadeInQuestText
struct UQuestLogEntryWidget_FadeInQuestText_Params
{
};

// Function Indiana.QuestLogWidget.OnQuestUpdateModeChanged
struct UQuestLogWidget_OnQuestUpdateModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.QuestLogWidget.OnHUDVisibilityChanged
struct UQuestLogWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisibleIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.QuestLogWidget.OnFadeOutComplete
struct UQuestLogWidget_OnFadeOutComplete_Params
{
};

// Function Indiana.QuestLogWidget.OnFadeInComplete
struct UQuestLogWidget_OnFadeInComplete_Params
{
};

// Function Indiana.QuestLogWidget.FadeOutContents
struct UQuestLogWidget_FadeOutContents_Params
{
};

// Function Indiana.QuestLogWidget.FadeInContents
struct UQuestLogWidget_FadeInContents_Params
{
};

// Function Indiana.QuestObjectiveEntryWidget.StartFailAnim
struct UQuestObjectiveEntryWidget_StartFailAnim_Params
{
};

// Function Indiana.QuestObjectiveEntryWidget.StartCompleteAnim
struct UQuestObjectiveEntryWidget_StartCompleteAnim_Params
{
};

// Function Indiana.QuestObjectiveEntryWidget.OnOutroComplete
struct UQuestObjectiveEntryWidget_OnOutroComplete_Params
{
};

// Function Indiana.QuestObjectiveEntryWidget.OnObjectiveUpdateAnimComplete
struct UQuestObjectiveEntryWidget_OnObjectiveUpdateAnimComplete_Params
{
};

// Function Indiana.QuestObjectiveEntryWidget.OnObjectiveMadeInactive
struct UQuestObjectiveEntryWidget_OnObjectiveMadeInactive_Params
{
};

// Function Indiana.QuestObjectiveEntryWidget.OnObjectiveMadeActive
struct UQuestObjectiveEntryWidget_OnObjectiveMadeActive_Params
{
};

// Function Indiana.QuestObjectiveEntryWidget.OnIntroComplete
struct UQuestObjectiveEntryWidget_OnIntroComplete_Params
{
};

// Function Indiana.QuestObjectiveTitleWidget.OnObjectiveStatusChange
struct UQuestObjectiveTitleWidget_OnObjectiveStatusChange_Params
{
	ECompletionStatus                                  ObjectiveStatus;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.QuestObjectiveWidget.OnObjectiveStatusChange
struct UQuestObjectiveWidget_OnObjectiveStatusChange_Params
{
	ECompletionStatus                                  ObjectiveStatus;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.RadialContextMenuWidget.OnRadialMenuSelection
struct URadialContextMenuWidget_OnRadialMenuSelection_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.RadialWidget.OnSectionConfirmedAux
struct URadialWidget_OnSectionConfirmedAux_Params
{
};

// Function Indiana.RadialWidget.OnSectionConfirmed
struct URadialWidget_OnSectionConfirmed_Params
{
};

// Function Indiana.RadialWidget.OnRadialScroll
struct URadialWidget_OnRadialScroll_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReactionComponent.TriggerDebugCameraShake
struct UReactionComponent_TriggerDebugCameraShake_Params
{
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReactionComponent.OnTakeDamage
struct UReactionComponent_OnTakeDamage_Params
{
	struct FCauseDamageInfo                            CDI;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.ReputationSummaryWidget.RemoveReputationBackgroundOnMinimize
struct UReputationSummaryWidget_RemoveReputationBackgroundOnMinimize_Params
{
};

// Function Indiana.ReputationSummaryWidget.OnFactionReputationChanged
struct UReputationSummaryWidget_OnFactionReputationChanged_Params
{
	class UFactionData*                                FactionData;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EReputationType                                    ReputationType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UReputationData*                             ReputationBefore;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UReputationData*                             ReputationAfter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReputationSummaryWidget.InitReputationBackgroundOnMaximize
struct UReputationSummaryWidget_InitReputationBackgroundOnMaximize_Params
{
};

// Function Indiana.RestrictedArea.IsEnabled
struct ARestrictedArea_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.ReticleWidget.ShrinkTTDRotator
struct UReticleWidget_ShrinkTTDRotator_Params
{
};

// Function Indiana.ReticleWidget.SetTTDProgressRatio
struct UReticleWidget_SetTTDProgressRatio_Params
{
	float                                              NewTTDRatio;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReticleWidget.OnTTDTargetLost
struct UReticleWidget_OnTTDTargetLost_Params
{
};

// Function Indiana.ReticleWidget.OnTTDTargetAcquired
struct UReticleWidget_OnTTDTargetAcquired_Params
{
};

// Function Indiana.ReticleWidget.OnTTDReticleMeterModeChanged
struct UReticleWidget_OnTTDReticleMeterModeChanged_Params
{
	int                                                bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReticleWidget.OnReticleModeChanged
struct UReticleWidget_OnReticleModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReticleWidget.OnHUDVisibilityChanged
struct UReticleWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReticleWidget.OnCombatStateChanged
struct UReticleWidget_OnCombatStateChanged_Params
{
	bool                                               bCombatIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ReticleWidget.ExpandTTDRotator
struct UReticleWidget_ExpandTTDRotator_Params
{
};

// Function Indiana.RpgStatComponent.SetModifier
struct URpgStatComponent_SetModifier_Params
{
	class UObject*                                     SourceObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatModifierDescription                    StatModifier;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.RpgStatComponent.RpgStatShowStat
struct URpgStatComponent_RpgStatShowStat_Params
{
	class FString                                      Stat;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.RpgStatComponent.RpgStatShowAll
struct URpgStatComponent_RpgStatShowAll_Params
{
};

// Function Indiana.RpgStatComponent.RpgStatRemoveModifierDebug
struct URpgStatComponent_RpgStatRemoveModifierDebug_Params
{
	struct FName                                       Stat;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.RpgStatComponent.RpgStatAddModifierDebug
struct URpgStatComponent_RpgStatAddModifierDebug_Params
{
	struct FName                                       Stat;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.RpgStatComponent.RemoveModifier
struct URpgStatComponent_RemoveModifier_Params
{
	class UObject*                                     SourceObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStatModifierDescription                    StatModifier;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.RpgStatComponent.OnCollectionStatUpdated
struct URpgStatComponent_OnCollectionStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.RpgStatComponent.GetValue
struct URpgStatComponent_GetValue_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ERpgStatGroupMask                                  StatGroupMask;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SaveGameManager.SaveUserGameSettings
struct USaveGameManager_SaveUserGameSettings_Params
{
	bool                                               bSettingsPotentiallyChanged;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SaveGameManager.SaveGame
struct USaveGameManager_SaveGame_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bIgnoreSuperNova;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ESaveGameType                                      SaveGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ESaveGameResult                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SaveGameManager.RequestPostGameSave
struct USaveGameManager_RequestPostGameSave_Params
{
};

// Function Indiana.SaveGameManager.RequestPointOfNoReturnSave
struct USaveGameManager_RequestPointOfNoReturnSave_Params
{
};

// Function Indiana.SaveGameManager.RequestPointOfNoReturnRollbackSave
struct USaveGameManager_RequestPointOfNoReturnRollbackSave_Params
{
};

// Function Indiana.SaveGameManager.RequestBeforeSkipSave
struct USaveGameManager_RequestBeforeSkipSave_Params
{
};

// Function Indiana.SaveGameManager.RequestBeforeEVTransitionSave
struct USaveGameManager_RequestBeforeEVTransitionSave_Params
{
};

// Function Indiana.SaveGameManager.RequestAutosave
struct USaveGameManager_RequestAutosave_Params
{
	bool                                               bAllowOnSuperNova;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SaveGameManager.Quicksave
struct USaveGameManager_Quicksave_Params
{
	ESaveGameResult                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SaveGameManager.Quickload
struct USaveGameManager_Quickload_Params
{
	ELoadGameResult                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SaveGameManager.PointOfNoReturnSave
struct USaveGameManager_PointOfNoReturnSave_Params
{
};

// Function Indiana.SaveGameManager.PointOfNoReturnRollbackSave
struct USaveGameManager_PointOfNoReturnRollbackSave_Params
{
};

// Function Indiana.SaveGameManager.OnPromptedSaveSaveMenuClosed
struct USaveGameManager_OnPromptedSaveSaveMenuClosed_Params
{
	bool                                               bForced;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SaveGameManager.OnActorDestroyed
struct USaveGameManager_OnActorDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SaveGameManager.LoadUserGameSettings
struct USaveGameManager_LoadUserGameSettings_Params
{
};

// Function Indiana.SaveGameManager.LoadGame
struct USaveGameManager_LoadGame_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bPreValidateMetadata;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ELoadGameResult                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SaveGameManager.EnsureSignIn
struct USaveGameManager_EnsureSignIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SaveGameManager.DisableSaves
struct USaveGameManager_DisableSaves_Params
{
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SaveGameManager.DeleteGame
struct USaveGameManager_DeleteGame_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
	EDeleteGameResult                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SaveGameManager.CheckCanSaveGame
struct USaveGameManager_CheckCanSaveGame_Params
{
};

// Function Indiana.SaveGameManager.BeforeEVTransitionSave
struct USaveGameManager_BeforeEVTransitionSave_Params
{
};

// Function Indiana.SaveGameManager.Autosave
struct USaveGameManager_Autosave_Params
{
	EAutoSaveType                                      AutoSaveType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSuperNova;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SaveLoadMenuWidget.OnSaveDataRequestFinished
struct USaveLoadMenuWidget_OnSaveDataRequestFinished_Params
{
};

// Function Indiana.SaveLoadMenuWidget.OnPS4LoadInturrupted
struct USaveLoadMenuWidget_OnPS4LoadInturrupted_Params
{
	class FString                                      SaveName;                                                 // (Parm, ZeroConstructor)
};

// Function Indiana.SaveLoadMenuWidget.OnLoadComplete
struct USaveLoadMenuWidget_OnLoadComplete_Params
{
	class FString                                      Filename;                                                 // (Parm, ZeroConstructor)
	ELoadGameResult                                    Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SaveLoadMenuWidget.OnExitInterface
struct USaveLoadMenuWidget_OnExitInterface_Params
{
};

// Function Indiana.SaveLoadMenuWidget.OnActiveUserChanged
struct USaveLoadMenuWidget_OnActiveUserChanged_Params
{
	EActiveUserChangeType                              ChangeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SaveLoadMenuWidget.DeleteSave
struct USaveLoadMenuWidget_DeleteSave_Params
{
};

// Function Indiana.SavingWidget.ShowSavingWidget
struct USavingWidget_ShowSavingWidget_Params
{
};

// Function Indiana.SavingWidget.OnHUDVisibilityChanged
struct USavingWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SavingWidget.HideSavingWidget
struct USavingWidget_HideSavingWidget_Params
{
	ESaveGameResult                                    SaveGameResult;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ESaveGameType                                      SaveGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.ScalableImage.SizeSettingChanged
struct UScalableImage_SizeSettingChanged_Params
{
	int                                                SizeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.UnsealOCL
struct UScripts_UnsealOCL_Params
{
	struct FGuid                                       OCLObjectID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.UnlockOCL
struct UScripts_UnlockOCL_Params
{
	struct FGuid                                       OCLObjectID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.UnlockComputer
struct UScripts_UnlockComputer_Params
{
	struct FGuid                                       ComputerObjectID;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.UnlockCompanion
struct UScripts_UnlockCompanion_Params
{
	struct FGuid                                       CompanionID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.UnbarOCL
struct UScripts_UnbarOCL_Params
{
	struct FGuid                                       OCLObjectID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.TriggerQuestFailState
struct UScripts_TriggerQuestFailState_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndStateID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.TriggerQuestEndState
struct UScripts_TriggerQuestEndState_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndStateID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.TriggerQuestAddendum
struct UScripts_TriggerQuestAddendum_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddendumID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.TravelToDestination
struct UScripts_TravelToDestination_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
	bool                                               bTriggerAutosave;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.TakeItemValue
struct UScripts_TakeItemValue_Params
{
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.StartQuestWithAlternateDescription
struct UScripts_StartQuestWithAlternateDescription_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuestDescriptionID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.StartQuest
struct UScripts_StartQuest_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ShowBeacon
struct UScripts_ShowBeacon_Params
{
	struct FGuid                                       BeaconObjectID;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.SetTrackedQuest
struct UScripts_SetTrackedQuest_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetTeamRelationship
struct UScripts_SetTeamRelationship_Params
{
	class FString                                      SourceTeam;                                               // (Parm, ZeroConstructor)
	class FString                                      OtherTeam;                                                // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ETeamAttitude>                         Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMutual;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetTalkIdleOverride
struct UScripts_SetTalkIdleOverride_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TalkIdleOverrideName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetSpeakersTalkIdleOverride
struct UScripts_SetSpeakersTalkIdleOverride_Params
{
	struct FName                                       TalkIdleOverrideName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetSpeakersEmotionWithDelay
struct UScripts_SetSpeakersEmotionWithDelay_Params
{
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmotionDelay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetSpeakersEmotionFull
struct UScripts_SetSpeakersEmotionFull_Params
{
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeadStrength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AffectHead;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AffectBody;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetSpeakersEmotion
struct UScripts_SetSpeakersEmotion_Params
{
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetSpeakersDefaultEmotion
struct UScripts_SetSpeakersDefaultEmotion_Params
{
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetSlideshowImageKey
struct UScripts_SetSlideshowImageKey_Params
{
	class FString                                      ImageKey;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Indiana.Scripts.SetQuestAlternateDescription
struct UScripts_SetQuestAlternateDescription_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuestDescriptionID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPosture
struct UScripts_SetPosture_Params
{
	EPosture                                           Posture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPointOfInterestDiscovered
struct UScripts_SetPointOfInterestDiscovered_Params
{
	class FString                                      PointOfInterestData;                                      // (Parm, ZeroConstructor)
	bool                                               bCanAwardXP;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPlayerVisitedTravelDestination
struct UScripts_SetPlayerVisitedTravelDestination_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.SetPlayerVisitedRegion
struct UScripts_SetPlayerVisitedRegion_Params
{
	class FString                                      TravelRegion;                                             // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.SetPlayerTravelDestinationLocked
struct UScripts_SetPlayerTravelDestinationLocked_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPlayerTravelDestinationHidden
struct UScripts_SetPlayerTravelDestinationHidden_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
	bool                                               bHidden;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPlayerShipLocation
struct UScripts_SetPlayerShipLocation_Params
{
	class FString                                      ShipDestination;                                          // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.SetPlayerRelationshipToHostile
struct UScripts_SetPlayerRelationshipToHostile_Params
{
	struct FGuid                                       CharacterID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.SetPlayerOwnershipOfItemTypeInContainer
struct UScripts_SetPlayerOwnershipOfItemTypeInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	bool                                               bPlayerOwned;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearNonPlayerOwnership;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPlayerOwnershipOfItemsInContainer
struct UScripts_SetPlayerOwnershipOfItemsInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bPlayerOwned;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearNonPlayerOwnership;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPlayerAwareOfTravelDestination
struct UScripts_SetPlayerAwareOfTravelDestination_Params
{
	class FString                                      TravelDestination;                                        // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.SetPlayerAwareOfRegion
struct UScripts_SetPlayerAwareOfRegion_Params
{
	class FString                                      TravelRegion;                                             // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.SetPickupPlayerOwnership
struct UScripts_SetPickupPlayerOwnership_Params
{
	struct FGuid                                       PickupID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bPlayerOwned;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearNonPlayerOwnership;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPickupNonPlayerOwnership
struct UScripts_SetPickupNonPlayerOwnership_Params
{
	struct FGuid                                       PickupID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGuid                                       Actor;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetPickupFactionOwnership
struct UScripts_SetPickupFactionOwnership_Params
{
	struct FGuid                                       PickupID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetObjectiveAlternateDescription
struct UScripts_SetObjectiveAlternateDescription_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveDescriptionID;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetNonPlayerOwnershipOfItemTypeInContainer
struct UScripts_SetNonPlayerOwnershipOfItemTypeInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	struct FGuid                                       Actor;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetNonPlayerOwnershipOfItemsInContainer
struct UScripts_SetNonPlayerOwnershipOfItemsInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGuid                                       Actor;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetMusicOverride
struct UScripts_SetMusicOverride_Params
{
	class FString                                      OverrideTrack;                                            // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.SetInterrogationComplete
struct UScripts_SetInterrogationComplete_Params
{
	EInterrogationResult                               Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetGlobalVariableValue
struct UScripts_SetGlobalVariableValue_Params
{
	struct FGlobalVariable                             Variable;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetGlobalValue
struct UScripts_SetGlobalValue_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetGlobalIfGlobal
struct UScripts_SetGlobalIfGlobal_Params
{
	class FString                                      ConditionVariableName;                                    // (Parm, ZeroConstructor)
	int                                                ConditionValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetFactionOwnershipOfItemTypeInContainer
struct UScripts_SetFactionOwnershipOfItemTypeInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetFactionOwnershipOfItemsInContainer
struct UScripts_SetFactionOwnershipOfItemsInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetFactionEncountered
struct UScripts_SetFactionEncountered_Params
{
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.SetEmotionWithDelay
struct UScripts_SetEmotionWithDelay_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmotionDelay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetEmotionFull
struct UScripts_SetEmotionFull_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeadStrength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AffectHead;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AffectBody;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetEmotion
struct UScripts_SetEmotion_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetDefaultEmotion
struct UScripts_SetDefaultEmotion_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetConversationTargetActor
struct UScripts_SetConversationTargetActor_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateBody;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStickyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetConversationHeadTargetActor
struct UScripts_SetConversationHeadTargetActor_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStickyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetConversationEyesTargetActor
struct UScripts_SetConversationEyesTargetActor_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStickyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetConversationBodyTargetActor
struct UScripts_SetConversationBodyTargetActor_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStickyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetCompanionWantsToTalk
struct UScripts_SetCompanionWantsToTalk_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToTalk;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.SetCharacterTeam_AvoidUsingThis
struct UScripts_SetCharacterTeam_AvoidUsingThis_Params
{
	struct FGuid                                       CharacterID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Team;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.SealOCL
struct UScripts_SealOCL_Params
{
	struct FGuid                                       OCLObjectID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.ResumeMusic
struct UScripts_ResumeMusic_Params
{
};

// Function Indiana.Scripts.ResetRPGSystems
struct UScripts_ResetRPGSystems_Params
{
};

// Function Indiana.Scripts.ReplaceCompanionInSlot
struct UScripts_ReplaceCompanionInSlot_Params
{
	struct FGuid                                       PotientalCompanionID;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ECompanionSlot                                     CommpanionSlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.RemoveItemFromActor
struct UScripts_RemoveItemFromActor_Params
{
	struct FGuid                                       ActorId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.RemoveItem
struct UScripts_RemoveItem_Params
{
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.RemoveCurrency
struct UScripts_RemoveCurrency_Params
{
	struct FGuid                                       ActorId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.RemoveCompanionFromParty
struct UScripts_RemoveCompanionFromParty_Params
{
	struct FGuid                                       CompanionID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.RemoteEvent
struct UScripts_RemoteEvent_Params
{
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.RegisterNamedTimestamp
struct UScripts_RegisterNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.RandomizeGlobalValueWithGlobals
struct UScripts_RandomizeGlobalValueWithGlobals_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	class FString                                      MinValueGlobal;                                           // (Parm, ZeroConstructor)
	class FString                                      MaxValueGlobal;                                           // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.RandomizeGlobalValue
struct UScripts_RandomizeGlobalValue_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	int                                                MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.PlayConversationChatterEvent
struct UScripts_PlayConversationChatterEvent_Params
{
	EChatterEventType                                  ChatterEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConversationNode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.PauseMusic
struct UScripts_PauseMusic_Params
{
};

// Function Indiana.Scripts.OpenOCL
struct UScripts_OpenOCL_Params
{
	struct FGuid                                       OCLObjectID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.MentionQuest
struct UScripts_MentionQuest_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.MentionPointOfInterest
struct UScripts_MentionPointOfInterest_Params
{
	class FString                                      PointOfInterestData;                                      // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.MarkConversationNodeAsRead
struct UScripts_MarkConversationNodeAsRead_Params
{
	struct FGuid                                       ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.MakePointOfInterestDiscoverable
struct UScripts_MakePointOfInterestDiscoverable_Params
{
	class FString                                      PointOfInterestData;                                      // (Parm, ZeroConstructor)
	bool                                               bStillHidden;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.LockOCL
struct UScripts_LockOCL_Params
{
	struct FGuid                                       OCLObjectID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.LockComputer
struct UScripts_LockComputer_Params
{
	struct FGuid                                       ComputerObjectID;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.KillNPC
struct UScripts_KillNPC_Params
{
	struct FGuid                                       Character;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.IncrementGlobalValue
struct UScripts_IncrementGlobalValue_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
	int                                                IncrementValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.HidePointOfInterest
struct UScripts_HidePointOfInterest_Params
{
	class FString                                      PointOfInterestData;                                      // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.HideBeacon
struct UScripts_HideBeacon_Params
{
	struct FGuid                                       BeaconObjectID;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.GivePerkToActor
struct UScripts_GivePerkToActor_Params
{
	struct FGuid                                       ActorId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Perk;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.GiveLoot
struct UScripts_GiveLoot_Params
{
	class FString                                      LootTableData;                                            // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.GiveItemToActor
struct UScripts_GiveItemToActor_Params
{
	struct FGuid                                       ActorIdID;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.GiveItem
struct UScripts_GiveItem_Params
{
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.GiveCurrency
struct UScripts_GiveCurrency_Params
{
	struct FGuid                                       ActorId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.GetCompanionMoral
struct UScripts_GetCompanionMoral_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Scripts.DynamicallyReplaceCompanion
struct UScripts_DynamicallyReplaceCompanion_Params
{
	ESpecialObsidianID                                 OldCompanionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ESpecialObsidianID                                 NewCompanionID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.DismissCompanion
struct UScripts_DismissCompanion_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.DisarmTrap
struct UScripts_DisarmTrap_Params
{
	struct FGuid                                       TrapObjectID;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.DebugPrintMessage
struct UScripts_DebugPrintMessage_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.DebugAdvanceQuest
struct UScripts_DebugAdvanceQuest_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.CloseOCL
struct UScripts_CloseOCL_Params
{
	struct FGuid                                       OCLObjectID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Block;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSeal;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearTalkIdleOverrideOnNextEmotionChange
struct UScripts_ClearTalkIdleOverrideOnNextEmotionChange_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearTalkIdleOverride
struct UScripts_ClearTalkIdleOverride_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearSpeakersTalkIdleOverrideOnNextEmotionChange
struct UScripts_ClearSpeakersTalkIdleOverrideOnNextEmotionChange_Params
{
};

// Function Indiana.Scripts.ClearSpeakersTalkIdleOverride
struct UScripts_ClearSpeakersTalkIdleOverride_Params
{
	EEmotion                                           Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Persist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearSpeakersDefaultEmotion
struct UScripts_ClearSpeakersDefaultEmotion_Params
{
};

// Function Indiana.Scripts.ClearPickupOwnerships
struct UScripts_ClearPickupOwnerships_Params
{
	struct FGuid                                       PickupID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearNonPlayerOwnership;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearOwnershipsOfItemTypeInContainer
struct UScripts_ClearOwnershipsOfItemTypeInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      Item;                                                     // (Parm, ZeroConstructor)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearNonPlayerOwnership;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearOwnershipsOfItemsInContainer
struct UScripts_ClearOwnershipsOfItemsInContainer_Params
{
	struct FGuid                                       ContainerID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bClearPlayerOwnership;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearNonPlayerOwnership;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearNamedTimestamp
struct UScripts_ClearNamedTimestamp_Params
{
	class FString                                      TimestampName;                                            // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.ClearMusicOverride
struct UScripts_ClearMusicOverride_Params
{
};

// Function Indiana.Scripts.ClearFactionRecentHostilityToPlayer
struct UScripts_ClearFactionRecentHostilityToPlayer_Params
{
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.ClearEmotion
struct UScripts_ClearEmotion_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearDefaultEmotion
struct UScripts_ClearDefaultEmotion_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearConversationTargetActor
struct UScripts_ClearConversationTargetActor_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStickyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearConversationNodeAsRead
struct UScripts_ClearConversationNodeAsRead_Params
{
	struct FGuid                                       ConversationID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NodeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearConversationHeadTargetActor
struct UScripts_ClearConversationHeadTargetActor_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStickyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearConversationEyesTargetActor
struct UScripts_ClearConversationEyesTargetActor_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStickyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ClearConversationBodyTargetActor
struct UScripts_ClearConversationBodyTargetActor_Params
{
	struct FGuid                                       Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStickyTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.CallGlobalScript
struct UScripts_CallGlobalScript_Params
{
	struct FGuid                                       GlobalScriptID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.Bribe
struct UScripts_Bribe_Params
{
	class FString                                      VariableName;                                             // (Parm, ZeroConstructor)
};

// Function Indiana.Scripts.BeginTradeWithSpeaker
struct UScripts_BeginTradeWithSpeaker_Params
{
};

// Function Indiana.Scripts.BarOCL
struct UScripts_BarOCL_Params
{
	struct FGuid                                       OCLObjectID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.AttemptEnableHazard
struct UScripts_AttemptEnableHazard_Params
{
	struct FGuid                                       HazardActorID;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.ArmTrap
struct UScripts_ArmTrap_Params
{
	struct FGuid                                       TrapObjectID;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.AdvanceToHour
struct UScripts_AdvanceToHour_Params
{
	int                                                TargetHour;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AdvanceTime
struct UScripts_AdvanceTime_Params
{
	float                                              Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AdvanceSeconds
struct UScripts_AdvanceSeconds_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AdvanceQuest
struct UScripts_AdvanceQuest_Params
{
	struct FGuid                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AdvanceMinutes
struct UScripts_AdvanceMinutes_Params
{
	float                                              Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AdvanceHours
struct UScripts_AdvanceHours_Params
{
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AdvanceDays
struct UScripts_AdvanceDays_Params
{
	float                                              Days;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AdjustFactionReputation
struct UScripts_AdjustFactionReputation_Params
{
	class FString                                      Faction;                                                  // (Parm, ZeroConstructor)
	EReputationType                                    ReputationType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EReputationIncrementType                           IncrementType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CustomAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AdjustCompanionMoral
struct UScripts_AdjustCompanionMoral_Params
{
	ESpecialObsidianID                                 CompanionID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPositiveMoralAdjustment;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EMoraleContribution                                Contribution;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CustomAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyActivePartyMembers;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AddCompanionToParty
struct UScripts_AddCompanionToParty_Params
{
	struct FGuid                                       CompanionID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Scripts.AddAudioLogBP
struct UScripts_AddAudioLogBP_Params
{
	class UAudioLogDataAsset*                          audiolog;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayOnPickup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AddAudioLog
struct UScripts_AddAudioLog_Params
{
	class FString                                      audiolog;                                                 // (Parm, ZeroConstructor)
	bool                                               bPlayOnPickup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AchievementIncrement
struct UScripts_AchievementIncrement_Params
{
	struct FName                                       AchievementName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Scripts.AchievementGameOver
struct UScripts_AchievementGameOver_Params
{
};

// Function Indiana.Scripts.AchievementCompleted
struct UScripts_AchievementCompleted_Params
{
	struct FName                                       AchievementName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.SelectedNotificationWidget.StopFadeOutAnimation
struct USelectedNotificationWidget_StopFadeOutAnimation_Params
{
};

// Function Indiana.SelectedNotificationWidget.PlayNotificationAnimation
struct USelectedNotificationWidget_PlayNotificationAnimation_Params
{
};

// Function Indiana.SelectedNotificationWidget.PlayFadeOutAnimation
struct USelectedNotificationWidget_PlayFadeOutAnimation_Params
{
};

// Function Indiana.SelectedNotificationWidget.OnFadeRightAnimationEnd
struct USelectedNotificationWidget_OnFadeRightAnimationEnd_Params
{
};

// Function Indiana.SelectedNotificationWidget.OnFadeOutAnimationEnd
struct USelectedNotificationWidget_OnFadeOutAnimationEnd_Params
{
};

// Function Indiana.SettingsMenuButtonSlotWidget.OnButtonClicked
struct USettingsMenuButtonSlotWidget_OnButtonClicked_Params
{
};

// Function Indiana.SettingsMenuCheckBoxWidget.OnValueChanged
struct USettingsMenuCheckBoxWidget_OnValueChanged_Params
{
	class UButtonBase*                                 Button;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.SettingsMenuComboBoxWidget.OnValueChanged
struct USettingsMenuComboBoxWidget_OnValueChanged_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuInputKeySelector.OnRightClicked
struct USettingsMenuInputKeySelector_OnRightClicked_Params
{
};

// Function Indiana.SettingsMenuInputKeySelector.OnClicked
struct USettingsMenuInputKeySelector_OnClicked_Params
{
};

// Function Indiana.SettingsMenuKeyRebindWidget.OnSecondaryIsSelectingKeyChanged
struct USettingsMenuKeyRebindWidget_OnSecondaryIsSelectingKeyChanged_Params
{
	bool                                               bIsSelectingKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuKeyRebindWidget.OnPrimaryIsSelectingKeyChanged
struct USettingsMenuKeyRebindWidget_OnPrimaryIsSelectingKeyChanged_Params
{
	bool                                               bIsSelectingKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuKeyRebindWidget.OnKeySelected
struct USettingsMenuKeyRebindWidget_OnKeySelected_Params
{
	struct FInputChord                                 InputChord;                                               // (Parm)
};

// Function Indiana.SettingsMenuKeyRebindWidget.OnContainerClicked
struct USettingsMenuKeyRebindWidget_OnContainerClicked_Params
{
};

// Function Indiana.SettingsMenuKeyRebindWidget.OnBack
struct USettingsMenuKeyRebindWidget_OnBack_Params
{
};

// Function Indiana.SettingsMenuOptionPresenterWdgt.OnValueChanged
struct USettingsMenuOptionPresenterWdgt_OnValueChanged_Params
{
	int                                                SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuSliderWidget.OnValueChanged
struct USettingsMenuSliderWidget_OnValueChanged_Params
{
	struct FSliderEvent                                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.SettingsMenuWidget.ValueChanged
struct USettingsMenuWidget_ValueChanged_Params
{
	class UUserSetting*                                UserSetting;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.UpdateDialogTimerText
struct USettingsMenuWidget_UpdateDialogTimerText_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetVisualEffectQuality
struct USettingsMenuWidget_SetVisualEffectQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetViewDistanceQuality
struct USettingsMenuWidget_SetViewDistanceQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetTextureQuality
struct USettingsMenuWidget_SetTextureQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetShadowQuality
struct USettingsMenuWidget_SetShadowQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetPostProcessingQuality
struct USettingsMenuWidget_SetPostProcessingQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetGraphicsQuality
struct USettingsMenuWidget_SetGraphicsQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetFoliageQuality
struct USettingsMenuWidget_SetFoliageQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetAntiAliasingQuality
struct USettingsMenuWidget_SetAntiAliasingQuality_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.SetAntiAliasingMethod
struct USettingsMenuWidget_SetAntiAliasingMethod_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SettingsMenuWidget.QueueRefreshHUDMode
struct USettingsMenuWidget_QueueRefreshHUDMode_Params
{
};

// Function Indiana.SettingsMenuWidget.OnOpenPCKeyBinds
struct USettingsMenuWidget_OnOpenPCKeyBinds_Params
{
};

// Function Indiana.SettingsMenuWidget.OnOpenGamepadLayout
struct USettingsMenuWidget_OnOpenGamepadLayout_Params
{
};

// Function Indiana.SettingsMenuWidget.OnInputBack
struct USettingsMenuWidget_OnInputBack_Params
{
};

// Function Indiana.SettingsMenuWidget.OnDetectGraphics
struct USettingsMenuWidget_OnDetectGraphics_Params
{
};

// Function Indiana.SettingsMenuWidget.OnCyclePageRight
struct USettingsMenuWidget_OnCyclePageRight_Params
{
};

// Function Indiana.SettingsMenuWidget.OnCyclePageLeft
struct USettingsMenuWidget_OnCyclePageLeft_Params
{
};

// Function Indiana.SettingsMenuWidget.EmptyHandler
struct USettingsMenuWidget_EmptyHandler_Params
{
};

// Function Indiana.SettingsMenuWidget.DefaultsActionHandler
struct USettingsMenuWidget_DefaultsActionHandler_Params
{
};

// Function Indiana.ShipLocation.ShipLocationDeactivated
struct AShipLocation_ShipLocationDeactivated_Params
{
};

// Function Indiana.ShipLocation.ShipLocationActivated
struct AShipLocation_ShipLocationActivated_Params
{
};

// Function Indiana.ShipLocation.OnShipLocationChanged
struct AShipLocation_OnShipLocationChanged_Params
{
	class UShipDestinationData*                        NewLocation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SkillGroupDetailWidget.OnSkillSelected
struct USkillGroupDetailWidget_OnSkillSelected_Params
{
};

// Function Indiana.SkillStatusEffect.OnSpawnedEffectCleared
struct USkillStatusEffect_OnSpawnedEffectCleared_Params
{
	class UStatusEffect*                               SpawnedEffect;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.SliderBase.SetValue
struct USliderBase_SetValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SliderBase.SetStepSize
struct USliderBase_SetStepSize_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SliderBase.SetLocked
struct USliderBase_SetLocked_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SliderBase.SetIndentHandle
struct USliderBase_SetIndentHandle_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SliderBase.SetAndCommitValue
struct USliderBase_SetAndCommitValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SliderBase.ModifySliderValue
struct USliderBase_ModifySliderValue_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SliderBase.GetValue
struct USliderBase_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SlideshowWidget.SetSlideshowImagesAsset
struct USlideshowWidget_SetSlideshowImagesAsset_Params
{
	class USlideshowImageSet*                          ImageSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SlideshowWidget.SetSlideshowImageKey
struct USlideshowWidget_SetSlideshowImageKey_Params
{
	class FString                                      ImageKey;                                                 // (Parm, ZeroConstructor)
};

// Function Indiana.SlideshowWidget.OnSlideshowEnd
struct USlideshowWidget_OnSlideshowEnd_Params
{
	class UConversationInstance*                       Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SlideshowWidget.OnCinematicSubtitleSettingChanged
struct USlideshowWidget_OnCinematicSubtitleSettingChanged_Params
{
	bool                                               bVisibleIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SpeakerGameDataReference.GetWwiseChatterVoiceOverride
struct USpeakerGameDataReference_GetWwiseChatterVoiceOverride_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.SpeakerGameDataReference.GetWwiseChatterEventOverride
struct USpeakerGameDataReference_GetWwiseChatterEventOverride_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.SpeakerGameDataReference.GetInGameNameWithGender
struct USpeakerGameDataReference_GetInGameNameWithGender_Params
{
	EGender                                            CharacterGender;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.SpeakerGameDataReference.GetInGameNameID
struct USpeakerGameDataReference_GetInGameNameID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SpeakerGameDataReference.GetInGameName
struct USpeakerGameDataReference_GetInGameName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.SpeakerGameDataReference.GetGender
struct USpeakerGameDataReference_GetGender_Params
{
	EGender                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SpeakerGameDataReference.GetChatterPrefix
struct USpeakerGameDataReference_GetChatterPrefix_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.SpeakerGameDataReference.GetChatterFile
struct USpeakerGameDataReference_GetChatterFile_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SpeakerGameDataReference.GetCharacterGrouping
struct USpeakerGameDataReference_GetCharacterGrouping_Params
{
	ECharacterGrouping                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.SpreadManagerComponent.OnCombatStateChange
struct USpreadManagerComponent_OnCombatStateChange_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SpreadManagerComponent.OnAttack
struct USpreadManagerComponent_OnAttack_Params
{
	float                                              DurationScalar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StackSplittingWidget.SetNewBackingMaterialHeight
struct UStackSplittingWidget_SetNewBackingMaterialHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StackSplittingWidget.OnStackSplitMin
struct UStackSplittingWidget_OnStackSplitMin_Params
{
};

// Function Indiana.StackSplittingWidget.OnStackSplitMax
struct UStackSplittingWidget_OnStackSplitMax_Params
{
};

// Function Indiana.StackSplittingWidget.OnSliderValueChanged
struct UStackSplittingWidget_OnSliderValueChanged_Params
{
	struct FSliderEvent                                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.StackSplittingWidget.OnInputConfirm
struct UStackSplittingWidget_OnInputConfirm_Params
{
};

// Function Indiana.StackSplittingWidget.OnInputBack
struct UStackSplittingWidget_OnInputBack_Params
{
};

// Function Indiana.StaminaComponent.StaminaReplenish
struct UStaminaComponent_StaminaReplenish_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StaminaComponent.StaminaConsume
struct UStaminaComponent_StaminaConsume_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StaminaComponent.OnCauseDamage
struct UStaminaComponent_OnCauseDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.StaminaComponent.GetValue
struct UStaminaComponent_GetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.StaminaComponent.GetNormalizedValue
struct UStaminaComponent_GetNormalizedValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.StaminaComponent.GetMaxValue
struct UStaminaComponent_GetMaxValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.StatModifierStatusEffect.OnSkillUpdated
struct UStatModifierStatusEffect_OnSkillUpdated_Params
{
	ESkill                                             UpdatedSkill;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatsPerksPageWidget.OnRevertAllocationsClicked
struct UStatsPerksPageWidget_OnRevertAllocationsClicked_Params
{
};

// Function Indiana.StatsPerksPageWidget.OnInputBack
struct UStatsPerksPageWidget_OnInputBack_Params
{
};

// Function Indiana.StatsPerksPageWidget.OnDeallocation
struct UStatsPerksPageWidget_OnDeallocation_Params
{
};

// Function Indiana.StatsPerksPageWidget.OnAllocation
struct UStatsPerksPageWidget_OnAllocation_Params
{
};

// Function Indiana.StatsPerksPageWidget.OnAcceptAllocations
struct UStatsPerksPageWidget_OnAcceptAllocations_Params
{
};

// Function Indiana.StatsSkillsPageWidget.OnSkillUpdated
struct UStatsSkillsPageWidget_OnSkillUpdated_Params
{
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatsSkillsPageWidget.OnResetAllAllocations
struct UStatsSkillsPageWidget_OnResetAllAllocations_Params
{
};

// Function Indiana.StatsSkillsPageWidget.OnPlayerLevelUp
struct UStatsSkillsPageWidget_OnPlayerLevelUp_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatsSkillsPageWidget.OnLedgerToggle
struct UStatsSkillsPageWidget_OnLedgerToggle_Params
{
};

// Function Indiana.StatsSkillsPageWidget.OnInputBack
struct UStatsSkillsPageWidget_OnInputBack_Params
{
};

// Function Indiana.StatsSkillsPageWidget.OnAllocation
struct UStatsSkillsPageWidget_OnAllocation_Params
{
};

// Function Indiana.StatusEffectBarEntryWidget.ResetWidgetState
struct UStatusEffectBarEntryWidget_ResetWidgetState_Params
{
	float                                              DesiredRenderOpacity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectBarEntryWidget.OnAnimComplete
struct UStatusEffectBarEntryWidget_OnAnimComplete_Params
{
};

// Function Indiana.StatusEffectBarEntryWidget.AnimateOut
struct UStatusEffectBarEntryWidget_AnimateOut_Params
{
};

// Function Indiana.StatusEffectBarEntryWidget.AnimateIn
struct UStatusEffectBarEntryWidget_AnimateIn_Params
{
};

// Function Indiana.StatusEffectBarWidget.OnStatusEffectRemoved
struct UStatusEffectBarWidget_OnStatusEffectRemoved_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.StatusEffectBarWidget.OnStatusEffectAdded
struct UStatusEffectBarWidget_OnStatusEffectAdded_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.RemoveStatusEffectsOfClass
struct UStatusEffectManagerComponent_RemoveStatusEffectsOfClass_Params
{
	class UClass*                                      Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.PreventHostileStatusEffectsOnCompanions
struct UStatusEffectManagerComponent_PreventHostileStatusEffectsOnCompanions_Params
{
	bool                                               bPreventHostileStatusEffectsIn;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldClear;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.PreventHostileStatusEffectsNPC
struct UStatusEffectManagerComponent_PreventHostileStatusEffectsNPC_Params
{
	bool                                               bPreventHostileStatusEffectsIn;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldClear;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.PreventHostileStatusEffects
struct UStatusEffectManagerComponent_PreventHostileStatusEffects_Params
{
	bool                                               bPreventHostileStatusEffectsIn;                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldClear;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.PreventAllStatusEffectsOnCompanions
struct UStatusEffectManagerComponent_PreventAllStatusEffectsOnCompanions_Params
{
	bool                                               bPreventStatusEffectsIn;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldClear;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.PreventAllStatusEffectsNPC
struct UStatusEffectManagerComponent_PreventAllStatusEffectsNPC_Params
{
	bool                                               bPreventStatusEffectsIn;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldClear;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.PreventAllStatusEffects
struct UStatusEffectManagerComponent_PreventAllStatusEffects_Params
{
	bool                                               bPreventStatusEffectsIn;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldClear;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.OnRestoredStateOfBeing
struct UStatusEffectManagerComponent_OnRestoredStateOfBeing_Params
{
	EStateOfBeing                                      RestoredStateOfBeing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.OnNewStateOfBeing
struct UStatusEffectManagerComponent_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.ClearStatusEffectOnCompanions
struct UStatusEffectManagerComponent_ClearStatusEffectOnCompanions_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.StatusEffectManagerComponent.ClearStatusEffectNPC
struct UStatusEffectManagerComponent_ClearStatusEffectNPC_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.StatusEffectManagerComponent.ClearStatusEffect
struct UStatusEffectManagerComponent_ClearStatusEffect_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.StatusEffectManagerComponent.ClearAllStatusEffectsOnCompanions
struct UStatusEffectManagerComponent_ClearAllStatusEffectsOnCompanions_Params
{
	bool                                               bOnlyHostile;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.ClearAllStatusEffectsNPC
struct UStatusEffectManagerComponent_ClearAllStatusEffectsNPC_Params
{
	bool                                               bOnlyHostile;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.ClearAllStatusEffects
struct UStatusEffectManagerComponent_ClearAllStatusEffects_Params
{
	bool                                               bOnlyHostile;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.BPAddEffect
struct UStatusEffectManagerComponent_BPAddEffect_Params
{
	class UClass*                                      Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UStatusEffectOrigin>        Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDynamicEffectProperties                    AddProperties;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UStatusEffect*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.StatusEffectManagerComponent.AddStatusEffectToCompanions
struct UStatusEffectManagerComponent_AddStatusEffectToCompanions_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.StatusEffectManagerComponent.AddStatusEffectNPC
struct UStatusEffectManagerComponent_AddStatusEffectNPC_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.StatusEffectManagerComponent.AddStatusEffect
struct UStatusEffectManagerComponent_AddStatusEffect_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Indiana.StatusEffectTagEntryWidget.OnImageSet
struct UStatusEffectTagEntryWidget_OnImageSet_Params
{
};

// Function Indiana.StatusEffectTagWidget.OnStatusEffectRemoved
struct UStatusEffectTagWidget_OnStatusEffectRemoved_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.StatusEffectTagWidget.OnStatusEffectAdded
struct UStatusEffectTagWidget_OnStatusEffectAdded_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.StatusTagAwarenessWidget.SetTextures
struct UStatusTagAwarenessWidget_SetTextures_Params
{
	class UTexture2D*                                  BackingTexture;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FillTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusTagAwarenessWidget.SetTalkImage
struct UStatusTagAwarenessWidget_SetTalkImage_Params
{
	class UTexture2D*                                  TalkTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusTagWidget.OnSetPlayerTargeted
struct UStatusTagWidget_OnSetPlayerTargeted_Params
{
	bool                                               bIsTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusTagWidget.OnMeterVisibilityChanged
struct UStatusTagWidget_OnMeterVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusTagWidget.OnHUDVisibilityChanged
struct UStatusTagWidget_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusTagWidget.OnHealthBarModeChanged
struct UStatusTagWidget_OnHealthBarModeChanged_Params
{
	int                                                ModeIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StatusTagWidget.OnCombatStateChanged
struct UStatusTagWidget_OnCombatStateChanged_Params
{
	bool                                               bCombatIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StealthComponent.OnStopStealth
struct UStealthComponent_OnStopStealth_Params
{
};

// Function Indiana.StealthComponent.OnStartStealth
struct UStealthComponent_OnStartStealth_Params
{
};

// Function Indiana.StealthComponent.OnPickpocketDetectionChange
struct UStealthComponent_OnPickpocketDetectionChange_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        PreviousAlertState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EAlertState                                        TargetAlertState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.StealthComponent.OnBumped
struct UStealthComponent_OnBumped_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.SubtitleManagerWidget.OnCinematicSubtitleVisibilityChanged
struct USubtitleManagerWidget_OnCinematicSubtitleVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SubtitlesWidget.SetSizeBoxRatio
struct USubtitlesWidget_SetSizeBoxRatio_Params
{
	float                                              HorizontalRatio;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VerticalRatio;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SubtitlesWidget.OnBarkSubtitleVisibilityChanged
struct USubtitlesWidget_OnBarkSubtitleVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SurvivalBarGroupWidget.OnSubSurvivalBarUpdated
struct USurvivalBarGroupWidget_OnSubSurvivalBarUpdated_Params
{
};

// Function Indiana.SurvivalBarGroupWidget.OnDifficultyChanged
struct USurvivalBarGroupWidget_OnDifficultyChanged_Params
{
	EGameDifficulty                                    NewDifficulty;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SurvivalBarWidget.OnDifficultyChanged
struct USurvivalBarWidget_OnDifficultyChanged_Params
{
	EGameDifficulty                                    DifficultyIn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Switch.SetCurrentState
struct ASwitch_SetCurrentState_Params
{
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Switch.GetCurrentState
struct ASwitch_GetCurrentState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Switch.CycleNextState
struct ASwitch_CycleNextState_Params
{
	class AActor*                                      Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SwitchAudioComponent.Stop
struct USwitchAudioComponent_Stop_Params
{
	ESwitchEventType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SwitchAudioComponent.Play
struct USwitchAudioComponent_Play_Params
{
	ESwitchEventType                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.SystemMapSelectionEntryWidget.OnEntryUnhoveredUnfocused
struct USystemMapSelectionEntryWidget_OnEntryUnhoveredUnfocused_Params
{
};

// Function Indiana.SystemMapSelectionEntryWidget.OnEntryHoveredFocused
struct USystemMapSelectionEntryWidget_OnEntryHoveredFocused_Params
{
};

// Function Indiana.TacticalTimeDilationComponent.PreventTTD
struct UTacticalTimeDilationComponent_PreventTTD_Params
{
	bool                                               bPrevent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TacticalTimeDilationComponent.OnStatUpdated
struct UTacticalTimeDilationComponent_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TacticalTimeDilationComponent.OnPlayerConversationChange
struct UTacticalTimeDilationComponent_OnPlayerConversationChange_Params
{
	class UConversationInstance*                       Instance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEntered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TacticalTimeDilationComponent.OnDeath
struct UTacticalTimeDilationComponent_OnDeath_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TacticalTimeDilationComponent.OnAttack
struct UTacticalTimeDilationComponent_OnAttack_Params
{
	float                                              DurationScalar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TacticalTimeDilationComponent.EnableTimeDilation
struct UTacticalTimeDilationComponent_EnableTimeDilation_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstant;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TacticalTimeDilationComponent.AttributeUpdated
struct UTacticalTimeDilationComponent_AttributeUpdated_Params
{
	EAttribute                                         Attribute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TargetableComponent.OnStateOfBeingChanged
struct UTargetableComponent_OnStateOfBeingChanged_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TargetableComponent.OnActionToggled
struct UTargetableComponent_OnActionToggled_Params
{
	ETogglableAction                                   ToggleActionType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsToggled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TeamComponent.SetRelationshipToPlayer
struct UTeamComponent_SetRelationshipToPlayer_Params
{
	TEnumAsByte<ETeamAttitude>                         InRelationship;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EChangeRelationshipSource                          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECrimeType                                         InCrimeType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TeamComponent.OnTakeDamage
struct UTeamComponent_OnTakeDamage_Params
{
	struct FCauseDamageInfo                            DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TeamComponent.OnDetectedPlayerCrime
struct UTeamComponent_OnDetectedPlayerCrime_Params
{
	ECrimeType                                         InCrimeType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayerDisguised;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EInterrogationResult                               InInterrogationResult;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TeamComponent.OnDeath
struct UTeamComponent_OnDeath_Params
{
	struct FCauseDamageInfo                            DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TeamComponent.GetRelationshipWithTeam
struct UTeamComponent_GetRelationshipWithTeam_Params
{
	class UClass*                                      InTeamData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TeamComponent.GetRelationshipWithPlayer
struct UTeamComponent_GetRelationshipWithPlayer_Params
{
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TeamComponent.GetRelationship
struct UTeamComponent_GetRelationship_Params
{
	class AActor*                                      InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TeamComponent.ClearRelationshipToPlayer
struct UTeamComponent_ClearRelationshipToPlayer_Params
{
	EChangeRelationshipSource                          InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TeamComponent.BPSetRelationshipToPlayer
struct UTeamComponent_BPSetRelationshipToPlayer_Params
{
	class AIndianaAiCharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TeamComponent.BPClearRelationshipToPlayer
struct UTeamComponent_BPClearRelationshipToPlayer_Params
{
	class AIndianaAiCharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TeamManager.BPSetRelationship
struct UTeamManager_BPSetRelationship_Params
{
	class UClass*                                      SourceTeamData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OtherTeamData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMutual;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TeamManager.BPGetRelationship
struct UTeamManager_BPGetRelationship_Params
{
	class UClass*                                      SourceTeamData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OtherTeamData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETeamAttitude>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TelemetryComponent.OnVendorTransactionComplete
struct UTelemetryComponent_OnVendorTransactionComplete_Params
{
	int                                                BuyingBalance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SellingBalance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RepairingBalance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemStackSplit                             ItemStackSplit;                                           // (Parm, OutParm)
};

// Function Indiana.TelemetryComponent.OnTakeDamage
struct UTelemetryComponent_OnTakeDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TelemetryComponent.OnTacticalTimeDialationStarted
struct UTelemetryComponent_OnTacticalTimeDialationStarted_Params
{
};

// Function Indiana.TelemetryComponent.OnTacticalTimeDialationEnded
struct UTelemetryComponent_OnTacticalTimeDialationEnded_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TelemetryComponent.OnStartGameSession
struct UTelemetryComponent_OnStartGameSession_Params
{
	struct FGuid                                       Guid;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Indiana.TelemetryComponent.OnPlayerZoneChange
struct UTelemetryComponent_OnPlayerZoneChange_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      NewMapName;                                               // (Parm, ZeroConstructor)
	class FString                                      OldMapName;                                               // (Parm, ZeroConstructor)
};

// Function Indiana.TelemetryComponent.OnPlayerMove
struct UTelemetryComponent_OnPlayerMove_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Indiana.TelemetryComponent.OnMedKitUsed
struct UTelemetryComponent_OnMedKitUsed_Params
{
	int                                                ConsumablesUsed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TelemetryComponent.OnLevelChanged
struct UTelemetryComponent_OnLevelChanged_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TelemetryComponent.OnEndGameSession
struct UTelemetryComponent_OnEndGameSession_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TelemetryComponent.OnCombatStateChanged
struct UTelemetryComponent_OnCombatStateChanged_Params
{
	bool                                               bInCombat;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TelemetryComponent.OnCharacterKilled
struct UTelemetryComponent_OnCharacterKilled_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TelemetryManager.SendDataKeys
struct UTelemetryManager_SendDataKeys_Params
{
};

// Function Indiana.TestAudioDataTypeReference.GetTestAudioState
struct UTestAudioDataTypeReference_GetTestAudioState_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.TestAudioDataTypeReference.GetTestAudioEvent
struct UTestAudioDataTypeReference_GetTestAudioEvent_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.TestAudioDataTypeReference.GetTestAudioEnvironment
struct UTestAudioDataTypeReference_GetTestAudioEnvironment_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.TestAudioDataTypeReference.GetTestAudioBank
struct UTestAudioDataTypeReference_GetTestAudioBank_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.TextBlockBase.UseTextStyleShadowOffset
struct UTextBlockBase_UseTextStyleShadowOffset_Params
{
	bool                                               bShouldUse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TextBlockBase.UseTextStyleOutline
struct UTextBlockBase_UseTextStyleOutline_Params
{
	bool                                               bShouldUse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TextBlockBase.SetTextByLocString
struct UTextBlockBase_SetTextByLocString_Params
{
	struct FLocString                                  LocString;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TextBlockBase.SetText
struct UTextBlockBase_SetText_Params
{
	class FString                                      inString;                                                 // (Parm, ZeroConstructor)
};

// Function Indiana.TextBlockBase.SetShadowOffset
struct UTextBlockBase_SetShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TextBlockBase.SetShadowColorAndOpacity
struct UTextBlockBase_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TextBlockBase.SetOutline
struct UTextBlockBase_SetOutline_Params
{
	struct FFontOutlineSettings                        OutlineSettings;                                          // (Parm)
};

// Function Indiana.TextBlockBase.SetOpacity
struct UTextBlockBase_SetOpacity_Params
{
	float                                              InOpacity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TextBlockBase.SetJustification
struct UTextBlockBase_SetJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TextBlockBase.SetFont
struct UTextBlockBase_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               // (Parm)
};

// Function Indiana.TextBlockBase.SetColorAndOpacity
struct UTextBlockBase_SetColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                        // (Parm)
};

// Function Indiana.TextBlockBase.IsEmpty
struct UTextBlockBase_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TextBlockBase.GetText
struct UTextBlockBase_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.TextBlockBase.GetFont
struct UTextBlockBase_GetFont_Params
{
	struct FSlateFontInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.TextBlockBase.GetColorAndOpacity
struct UTextBlockBase_GetColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Indiana.TextEntryWidget.OnTextfieldCommitted
struct UTextEntryWidget_OnTextfieldCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TextEntryWidget.OnTextfieldChanged
struct UTextEntryWidget_OnTextfieldChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TimeDilationComponent.TimeDilatePlayer
struct UTimeDilationComponent_TimeDilatePlayer_Params
{
	float                                              Dilation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TimeDilationComponent.SlomoWorld
struct UTimeDilationComponent_SlomoWorld_Params
{
	float                                              Dilation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TimeDilationComponent.OnTimeDilationStart
struct UTimeDilationComponent_OnTimeDilationStart_Params
{
};

// Function Indiana.TimeDilationComponent.OnTimeDilationEnd
struct UTimeDilationComponent_OnTimeDilationEnd_Params
{
};

// Function Indiana.TinkeringWidget.SetNewBackingMaterialHeight
struct UTinkeringWidget_SetNewBackingMaterialHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Trap.OnStatUpdated
struct ATrap_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Trap.OnNewStateOfBeing
struct ATrap_OnNewStateOfBeing_Params
{
	EStateOfBeing                                      NewStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStateOfBeing                                      OldStateOfBeing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Trap.OnActivatorTrackingShapeEndOverlap
struct ATrap_OnActivatorTrackingShapeEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Trap.OnActivatorTrackingShapeBeginOverlap
struct ATrap_OnActivatorTrackingShapeBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Trap.OnActivationShapeEndOverlap
struct ATrap_OnActivationShapeEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Trap.OnActivationShapeBeginOverlap
struct ATrap_OnActivationShapeBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.Trap.IsRearming
struct ATrap_IsRearming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Trap.IsDetonationPending
struct ATrap_IsDetonationPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Trap.GetExactTrapDifficulty
struct ATrap_GetExactTrapDifficulty_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Trap.GetCurrentState
struct ATrap_GetCurrentState_Params
{
	ETrapState                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Trap.GetActivatorTrackingShapeComponent
struct ATrap_GetActivatorTrackingShapeComponent_Params
{
	class UShapeComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Trap.GetActivationShapeComponent
struct ATrap_GetActivationShapeComponent_Params
{
	class UShapeComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Trap.DisarmTrap
struct ATrap_DisarmTrap_Params
{
	class AIndianaCharacter*                           Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireTrapDisarmedEvent;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Trap.DeactivateTrap
struct ATrap_DeactivateTrap_Params
{
	class AIndianaCharacter*                           Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireTrapDeactivatedEvent;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Trap.ArmTrap
struct ATrap_ArmTrap_Params
{
	class AIndianaCharacter*                           Initiator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireTrapArmedEvent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TrapAudioComponent.Stop
struct UTrapAudioComponent_Stop_Params
{
	ETrapEventType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TrapAudioComponent.Play
struct UTrapAudioComponent_Play_Params
{
	ETrapEventType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TrapEffectSource.ReceiveTriggerUntripped
struct UTrapEffectSource_ReceiveTriggerUntripped_Params
{
};

// Function Indiana.TrapEffectSource.ReceiveTriggerTripped
struct UTrapEffectSource_ReceiveTriggerTripped_Params
{
};

// Function Indiana.TrapEffectSource.ReceiveTriggerDisarmed
struct UTrapEffectSource_ReceiveTriggerDisarmed_Params
{
};

// Function Indiana.TrapEffectSource.ReceiveTriggerArmed
struct UTrapEffectSource_ReceiveTriggerArmed_Params
{
};

// Function Indiana.TrapEffectSource.ReceivePreDeploy
struct UTrapEffectSource_ReceivePreDeploy_Params
{
};

// Function Indiana.TrapEffectSource.ReceiveDeployOrder
struct UTrapEffectSource_ReceiveDeployOrder_Params
{
};

// Function Indiana.TrapEffectSource.GetCurrentActivators
struct UTrapEffectSource_GetCurrentActivators_Params
{
	TArray<class AIndianaCharacter*>                   OutActivators;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Indiana.TrapTrigger.OnActivatorTrackingShapeEndOverlap
struct ATrapTrigger_OnActivatorTrackingShapeEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TrapTrigger.OnActivatorTrackingShapeBeginOverlap
struct ATrapTrigger_OnActivatorTrackingShapeBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.TrapTrigger.OnActivationShapeEndOverlap
struct ATrapTrigger_OnActivationShapeEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TrapTrigger.OnActivationShapeBeginOverlap
struct ATrapTrigger_OnActivationShapeBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Indiana.TrapTrigger.IsRearming
struct ATrapTrigger_IsRearming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TrapTrigger.IsDeploymentPending
struct ATrapTrigger_IsDeploymentPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TrapTrigger.GetCurrentState
struct ATrapTrigger_GetCurrentState_Params
{
	ETrapTriggerState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TrapTrigger.DisarmTrapTrigger
struct ATrapTrigger_DisarmTrapTrigger_Params
{
	bool                                               bAlertEffectSources;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TrapTrigger.ChangeState
struct ATrapTrigger_ChangeState_Params
{
	ETrapTriggerState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TrapTrigger.ArmTrapTrigger
struct ATrapTrigger_ArmTrapTrigger_Params
{
};

// Function Indiana.TravelDestinationData.GetDebugString
struct UTravelDestinationData_GetDebugString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.TravelTriggerComponent.OnOverlapActor
struct UTravelTriggerComponent_OnOverlapActor_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TravelTriggerComponent.OnOpen
struct UTravelTriggerComponent_OnOpen_Params
{
	class AActor*                                      OpeningActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TravelTriggerComponent.OnInteract
struct UTravelTriggerComponent_OnInteract_Params
{
	struct FInteractionDescription                     Description;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TravelTriggerComponent.GetDebugString
struct UTravelTriggerComponent_GetDebugString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.TravelTriggerComponent.GetAreaName
struct UTravelTriggerComponent_GetAreaName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.TravelTriggerComponent.GetAreaDescription
struct UTravelTriggerComponent_GetAreaDescription_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Indiana.TTDEnemyScanner.StopFactionImageAnimation
struct UTTDEnemyScanner_StopFactionImageAnimation_Params
{
};

// Function Indiana.TTDEnemyScanner.ScanEnded
struct UTTDEnemyScanner_ScanEnded_Params
{
};

// Function Indiana.TTDEnemyScanner.ScanCompleted
struct UTTDEnemyScanner_ScanCompleted_Params
{
};

// Function Indiana.TTDEnemyScanner.OnTTDScannerVisibilityChanged
struct UTTDEnemyScanner_OnTTDScannerVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TTDEnemyScanner.OnMakeVisible
struct UTTDEnemyScanner_OnMakeVisible_Params
{
};

// Function Indiana.TTDEnemyScanner.OnMakeInvisible
struct UTTDEnemyScanner_OnMakeInvisible_Params
{
};

// Function Indiana.TTDEnemyScanner.OnMadeInvisible
struct UTTDEnemyScanner_OnMadeInvisible_Params
{
};

// Function Indiana.TTDEnemyScanner.OnHUDVisibilityChanged
struct UTTDEnemyScanner_OnHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TTDEnemyScanner.OnFactionImageLoaded
struct UTTDEnemyScanner_OnFactionImageLoaded_Params
{
};

// Function Indiana.TTDEnemyScanner.OnActiveScannerTargetChanged
struct UTTDEnemyScanner_OnActiveScannerTargetChanged_Params
{
};

// Function Indiana.TTDStatusEffectsWidget.OnStatusEffectRemoved
struct UTTDStatusEffectsWidget_OnStatusEffectRemoved_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.TTDStatusEffectsWidget.OnStatusEffectAdded
struct UTTDStatusEffectsWidget_OnStatusEffectAdded_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.TutorialList.AddNewCompletedTutorial
struct UTutorialList_AddNewCompletedTutorial_Params
{
	ETutorialEvent                                     TutorialEvent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.ShowTutorialEventMessage
struct UTutorialManager_ShowTutorialEventMessage_Params
{
	ETutorialEvent                                     TutorialEvent;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOncePerSession;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerTargetChange
struct UTutorialManager_PlayerTargetChange_Params
{
	bool                                               bAdded;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerTakeDamage
struct UTutorialManager_PlayerTakeDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TutorialManager.PlayerSkillUpdated
struct UTutorialManager_PlayerSkillUpdated_Params
{
	ESkill                                             Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerSkillCheckSuccess
struct UTutorialManager_PlayerSkillCheckSuccess_Params
{
	EXPGainReason                                      Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                XPEarned;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ESkill                                             SkillUsed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerMedKitUsed
struct UTutorialManager_PlayerMedKitUsed_Params
{
};

// Function Indiana.TutorialManager.PlayerLevelChanged
struct UTutorialManager_PlayerLevelChanged_Params
{
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerLanded
struct UTutorialManager_PlayerLanded_Params
{
	float                                              DistanceFell;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerKill
struct UTutorialManager_PlayerKill_Params
{
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TutorialManager.PlayerItemAdded
struct UTutorialManager_PlayerItemAdded_Params
{
	struct FItemStack                                  Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TutorialManager.PlayerHealthChanged
struct UTutorialManager_PlayerHealthChanged_Params
{
	float                                              HealthChanged;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerFinishedEquipping
struct UTutorialManager_PlayerFinishedEquipping_Params
{
	class UWeapon*                                     Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerEnteredRestrictedArea
struct UTutorialManager_PlayerEnteredRestrictedArea_Params
{
	class ARestrictedArea*                             RestrictedArea;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerEncumberedChanged
struct UTutorialManager_PlayerEncumberedChanged_Params
{
	bool                                               bEncumbered;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerDisguiseDrainEnd
struct UTutorialManager_PlayerDisguiseDrainEnd_Params
{
};

// Function Indiana.TutorialManager.PlayerCompanionKilled
struct UTutorialManager_PlayerCompanionKilled_Params
{
	class AActor*                                      Companion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerCompanionAdded
struct UTutorialManager_PlayerCompanionAdded_Params
{
	class AIndianaAiCharacter*                         NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRegister;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerCombatStateChanged
struct UTutorialManager_PlayerCombatStateChanged_Params
{
	bool                                               bIsInCombat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.PlayerCausedDamage
struct UTutorialManager_PlayerCausedDamage_Params
{
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.TutorialManager.MarkTutorialEventComplete
struct UTutorialManager_MarkTutorialEventComplete_Params
{
	ETutorialEvent                                     TutorialEvent;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.ItemDamageStatusChange
struct UTutorialManager_ItemDamageStatusChange_Params
{
	EItemDegradationState                              DegredationState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialManager.IsTutorialEventCompleted
struct UTutorialManager_IsTutorialEventCompleted_Params
{
	ETutorialEvent                                     TutorialEvent;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.TutorialManager.HideTutorialEventMessage
struct UTutorialManager_HideTutorialEventMessage_Params
{
	ETutorialEvent                                     TutorialEvent;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialPopupStyleWidget.SetNewBackingMaterialHeight
struct UTutorialPopupStyleWidget_SetNewBackingMaterialHeight_Params
{
	float                                              NewHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.TutorialPopupStyleWidget.FadeInMascotImage
struct UTutorialPopupStyleWidget_FadeInMascotImage_Params
{
};

// Function Indiana.VendorComponent.SetVendorContainer
struct UVendorComponent_SetVendorContainer_Params
{
	class AContainer*                                  Container;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.VendorWidget.UpdateSubnavigationActivation
struct UVendorWidget_UpdateSubnavigationActivation_Params
{
};

// Function Indiana.VendorWidget.OnStoreItemRemoved
struct UVendorWidget_OnStoreItemRemoved_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.VendorWidget.OnStoreItemAdded
struct UVendorWidget_OnStoreItemAdded_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.VendorWidget.OnSetCurrentPage
struct UVendorWidget_OnSetCurrentPage_Params
{
	EVendorPages                                       Page;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.VendorWidget.OnPlayerItemRemoved
struct UVendorWidget_OnPlayerItemRemoved_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.VendorWidget.OnPlayerItemAdded
struct UVendorWidget_OnPlayerItemAdded_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.VendorWidget.OnItemInspectorClosed
struct UVendorWidget_OnItemInspectorClosed_Params
{
	class UItemInspectorWidget*                        ItemInspectorWidget;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Indiana.VendorWidget.OnAnimationSoldJunk
struct UVendorWidget_OnAnimationSoldJunk_Params
{
};

// Function Indiana.VendorWidget.OnAnimationSoldItem
struct UVendorWidget_OnAnimationSoldItem_Params
{
};

// Function Indiana.VendorWidget.OnAnimationRepairedItem
struct UVendorWidget_OnAnimationRepairedItem_Params
{
};

// Function Indiana.VendorWidget.OnAnimationBoughtItem
struct UVendorWidget_OnAnimationBoughtItem_Params
{
};

// Function Indiana.VendorWidget.FadeInFactionImage
struct UVendorWidget_FadeInFactionImage_Params
{
};

// Function Indiana.WaitTimeSliderWidget.OnValueChanged
struct UWaitTimeSliderWidget_OnValueChanged_Params
{
	struct FSliderEvent                                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.WaitTimeWidget.OnSliderValueChanged
struct UWaitTimeWidget_OnSliderValueChanged_Params
{
	struct FSliderEvent                                Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.WaitTimeWidget.OnInputConfirm
struct UWaitTimeWidget_OnInputConfirm_Params
{
};

// Function Indiana.WaitTimeWidget.OnInputBack
struct UWaitTimeWidget_OnInputBack_Params
{
};

// Function Indiana.WorkbenchPageWidget.OnItemRemoved
struct UWorkbenchPageWidget_OnItemRemoved_Params
{
	struct FItemStack                                  ItemStack;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Indiana.WorkbenchPageWidget.OnDragDrop_SwapWeaponSlot
struct UWorkbenchPageWidget_OnDragDrop_SwapWeaponSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WorkbenchPageWidget.OnDragDrop_SetWeaponSlot
struct UWorkbenchPageWidget_OnDragDrop_SetWeaponSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.WorkbenchPageWidget.OnDragDrop_ClearArmorSlot
struct UWorkbenchPageWidget_OnDragDrop_ClearArmorSlot_Params
{
	class UIndianaDragDropOperation*                   Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Weapon.OnStatUpdated
struct UWeapon_OnStatUpdated_Params
{
	class URpgStat*                                    Stat;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Weapon.OnAnimNotifyEvent
struct UWeapon_OnAnimNotifyEvent_Params
{
	EAnimNotify                                        AnimNotifyEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Indiana.Weapon.IsUnequipping
struct UWeapon_IsUnequipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Weapon.IsOnActiveWorld
struct UWeapon_IsOnActiveWorld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Weapon.IsNearbyEvidence
struct UWeapon_IsNearbyEvidence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Weapon.IsHealGun
struct UWeapon_IsHealGun_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Weapon.IsEquipping
struct UWeapon_IsEquipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Weapon.GetWeaponModContainer
struct UWeapon_GetWeaponModContainer_Params
{
	class UWeaponModContainer*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Weapon.GetStats
struct UWeapon_GetStats_Params
{
	class URpgStatComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Weapon.GetRadialDamageOuterRadius
struct UWeapon_GetRadialDamageOuterRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Weapon.GetProjectileCollisionRadius
struct UWeapon_GetProjectileCollisionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.Weapon.GetPrimaryMode
struct UWeapon_GetPrimaryMode_Params
{
	class UWeaponMode*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Weapon.GetMesh
struct UWeapon_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Weapon.GetCurrentVisuals
struct UWeapon_GetCurrentVisuals_Params
{
	class UPrimaryWeaponVisuals*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Weapon.GetCurrentMode
struct UWeapon_GetCurrentMode_Params
{
	class UWeaponMode*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Weapon.GetCharacterInfoComponent
struct UWeapon_GetCharacterInfoComponent_Params
{
	class UCharacterInfoComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Weapon.GetAmmoPool
struct UWeapon_GetAmmoPool_Params
{
	class UAmmoPoolBase*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Indiana.Weapon.GetAISettings
struct UWeapon_GetAISettings_Params
{
	class AIndianaAiCharacter*                         InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAISettings_Weapon*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponAnimInstance.WeaponCharging
struct UWeaponAnimInstance_WeaponCharging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponSelectWidget.OnInputBack
struct UWeaponSelectWidget_OnInputBack_Params
{
};

// Function Indiana.WeaponSelectWidget.IsWeaponSectionValid
struct UWeaponSelectWidget_IsWeaponSectionValid_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponSelectWidget.IsSectionValid
struct UWeaponSelectWidget_IsSectionValid_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponSelectWidget.IsAmmoSectionValid
struct UWeaponSelectWidget_IsAmmoSectionValid_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Indiana.WeaponSelectWidget.HasAmmo
struct UWeaponSelectWidget_HasAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
