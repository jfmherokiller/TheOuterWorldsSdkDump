#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaFormulas_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetOCLSkillCheckValue
struct UIndianaFormulas_BP_C_GetOCLSkillCheckValue_Params
{
	unsigned char                                      OCLDifficulty;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OCLSkillCheckValue;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetRespecCost
struct UIndianaFormulas_BP_C_GetRespecCost_Params
{
	int*                                               NumRespecs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.VendorRepairCurrencyCost
struct UIndianaFormulas_BP_C_VendorRepairCurrencyCost_Params
{
	float*                                             Durability;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.WorkbenchRepairPartCost
struct UIndianaFormulas_BP_C_WorkbenchRepairPartCost_Params
{
	float*                                             Durability;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               EngineerSkill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.FieldRepairPartCost
struct UIndianaFormulas_BP_C_FieldRepairPartCost_Params
{
	float*                                             Durability;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               EngineerSkill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.BaseRepairPartCost
struct UIndianaFormulas_BP_C_BaseRepairPartCost_Params
{
	float*                                             Durability;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanUseOCL
struct UIndianaFormulas_BP_C_CanUseOCL_Params
{
	int                                                Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxDelta;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.OCLToughness
struct UIndianaFormulas_BP_C_OCLToughness_Params
{
	int                                                Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerSkill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackRobotTime
struct UIndianaFormulas_BP_C_HackRobotTime_Params
{
	unsigned char*                                     ExactHackDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerHackSkill;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetDisguiseDrainRate
struct UIndianaFormulas_BP_C_GetDisguiseDrainRate_Params
{
	int*                                               StealthSkill;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bMoving;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSprinting;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCrouching;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationNearMissMaxOptions
struct UIndianaFormulas_BP_C_ConversationNearMissMaxOptions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationAttributeNearMissThreshold
struct UIndianaFormulas_BP_C_ConversationAttributeNearMissThreshold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillValueToRange
struct UIndianaFormulas_BP_C_ComputeSkillValueToRange_Params
{
	int*                                               SkillValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterSkillRange                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationSkillNearMissThreshold
struct UIndianaFormulas_BP_C_ConversationSkillNearMissThreshold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetBribeAmount
struct UIndianaFormulas_BP_C_GetBribeAmount_Params
{
	EBribeDifficulty*                                  BribeDifficulty;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MerchantSkill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetInterrogationBribeAmount
struct UIndianaFormulas_BP_C_GetInterrogationBribeAmount_Params
{
	ECrimeType*                                        CrimeType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestrictedArea;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDisguised;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DisguiseInterrogationsPassed;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MerchantSkill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StolenItemsValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CalculateMoraleAdjustment
struct UIndianaFormulas_BP_C_CalculateMoraleAdjustment_Params
{
	float*                                             AddedMoral;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CharmAttribute;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TemperamentAttribute;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CalculateIntialMorale
struct UIndianaFormulas_BP_C_CalculateIntialMorale_Params
{
	int*                                               TemperamentAttribute;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ShouldDrawFireSwitchCompanionTargets
struct UIndianaFormulas_BP_C_ShouldDrawFireSwitchCompanionTargets_Params
{
	float*                                             OldHealth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OldDTBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OldDTHead;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewHealth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewDTBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewDTHead;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.PickPocketTime
struct UIndianaFormulas_BP_C_PickPocketTime_Params
{
	int*                                               LockpickSkill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TargetPerception;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeFallingDamagePercent
struct UIndianaFormulas_BP_C_ComputeFallingDamagePercent_Params
{
	float*                                             DistanceFallen;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillPointsForSecondaryAttribute
struct UIndianaFormulas_BP_C_ComputeSkillPointsForSecondaryAttribute_Params
{
	unsigned char*                                     AttributeRank;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillPointsForPrimaryAttribute
struct UIndianaFormulas_BP_C_ComputeSkillPointsForPrimaryAttribute_Params
{
	unsigned char*                                     AttributeRank;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.PlayerSneakEnemyDetectionRage
struct UIndianaFormulas_BP_C_PlayerSneakEnemyDetectionRage_Params
{
	bool*                                              bInterior;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerSneakSkill;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDamagePercent
struct UIndianaFormulas_BP_C_TrapDamagePercent_Params
{
	ETrapDifficulty*                                   TrapDifficulty;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyRange
struct UIndianaFormulas_BP_C_TrapDifficultyRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyNumRanges
struct UIndianaFormulas_BP_C_TrapDifficultyNumRanges_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyFullRange
struct UIndianaFormulas_BP_C_TrapDifficultyFullRange_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactTrapDifficulty
struct UIndianaFormulas_BP_C_ComputeExactTrapDifficulty_Params
{
	ETrapDifficulty*                                   TrapDifficulty;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanDisarm
struct UIndianaFormulas_BP_C_CanDisarm_Params
{
	unsigned char*                                     ExactTrapDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerEngineeringSkill;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanArm
struct UIndianaFormulas_BP_C_CanArm_Params
{
	unsigned char*                                     ExactTrapDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerEngineeringSkill;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDisarmNoise
struct UIndianaFormulas_BP_C_TrapDisarmNoise_Params
{
	unsigned char*                                     ExactTrapDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerEngineeringSkill;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapArmNoise
struct UIndianaFormulas_BP_C_TrapArmNoise_Params
{
	unsigned char*                                     ExactTrapDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerEngineeringSkill;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.DisarmTime
struct UIndianaFormulas_BP_C_DisarmTime_Params
{
	unsigned char*                                     ExactTrapDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerEngineeringSkill;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ArmTime
struct UIndianaFormulas_BP_C_ArmTime_Params
{
	unsigned char*                                     ExactTrapDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerEngineeringSkill;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapToughness
struct UIndianaFormulas_BP_C_TrapToughness_Params
{
	unsigned char*                                     ExactTrapDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerEngineeringSkill;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanHack
struct UIndianaFormulas_BP_C_CanHack_Params
{
	unsigned char*                                     ExactComputerDifficulty;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerHackSkill;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactHackDifficulty
struct UIndianaFormulas_BP_C_ComputeExactHackDifficulty_Params
{
	EOCLDifficulty*                                    HackDifficulty;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyFullRange
struct UIndianaFormulas_BP_C_HackDifficultyFullRange_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyNumRanges
struct UIndianaFormulas_BP_C_HackDifficultyNumRanges_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyRange
struct UIndianaFormulas_BP_C_HackDifficultyRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackNoise
struct UIndianaFormulas_BP_C_HackNoise_Params
{
	unsigned char*                                     ExactHackDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerHackSkill;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackTime
struct UIndianaFormulas_BP_C_HackTime_Params
{
	unsigned char*                                     ExactHackDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerHackSkill;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackNumResources
struct UIndianaFormulas_BP_C_HackNumResources_Params
{
	unsigned char*                                     ExactHackDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerHackSkill;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackToughness
struct UIndianaFormulas_BP_C_HackToughness_Params
{
	unsigned char*                                     ExactHackDifficulty;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerHackSkill;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactLockpickDifficulty
struct UIndianaFormulas_BP_C_ComputeExactLockpickDifficulty_Params
{
	EOCLDifficulty*                                    LockpickDifficulty;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyRange
struct UIndianaFormulas_BP_C_LockpickDifficultyRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyNumRanges
struct UIndianaFormulas_BP_C_LockpickDifficultyNumRanges_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyFullRange
struct UIndianaFormulas_BP_C_LockpickDifficultyFullRange_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanLockpick
struct UIndianaFormulas_BP_C_CanLockpick_Params
{
	unsigned char*                                     ExactLockpickDifficulty;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerLockpickSkill;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickNumResources
struct UIndianaFormulas_BP_C_LockpickNumResources_Params
{
	unsigned char*                                     ExactLockpickDifficulty;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerLockpickSkill;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     BasePlayerLockpickSkill;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickNoise
struct UIndianaFormulas_BP_C_LockpickNoise_Params
{
	unsigned char*                                     ExactLockpickDifficulty;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerLockpickSkill;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickTime
struct UIndianaFormulas_BP_C_LockpickTime_Params
{
	unsigned char*                                     ExactLockpickDifficulty;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerLockpickSkill;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     BasePlayerLockpickSkill;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickToughness
struct UIndianaFormulas_BP_C_LockpickToughness_Params
{
	unsigned char*                                     ExactLockpickDifficulty;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PlayerLockpickSkill;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
