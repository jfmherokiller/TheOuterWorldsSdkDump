#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaFormulas_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndianaFormulas_BP.IndianaFormulas_BP_C
// 0x0000 (0x0158 - 0x0158)
class UIndianaFormulas_BP_C : public UIndianaFormulas
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndianaFormulas_BP.IndianaFormulas_BP_C");
		return ptr;
	}


	void STATIC_GetOCLSkillCheckValue(unsigned char OCLDifficulty, unsigned char* OCLSkillCheckValue);
	int GetRespecCost(int* NumRespecs);
	int VendorRepairCurrencyCost(float* Durability, int* ItemLevel);
	int WorkbenchRepairPartCost(float* Durability, int* ItemLevel, int* EngineerSkill);
	int FieldRepairPartCost(float* Durability, int* ItemLevel, int* EngineerSkill);
	float BaseRepairPartCost(float* Durability, int* ItemLevel);
	bool CanUseOCL(int Difficulty, int PlayerSkill, int MaxDelta);
	unsigned char OCLToughness(int Difficulty, int PlayerSkill);
	unsigned char HackRobotTime(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill);
	float GetDisguiseDrainRate(int* StealthSkill, bool* bMoving, bool* bSprinting, bool* bCrouching);
	int ConversationNearMissMaxOptions();
	int ConversationAttributeNearMissThreshold();
	ECharacterSkillRange ComputeSkillValueToRange(int* SkillValue);
	int ConversationSkillNearMissThreshold();
	int GetBribeAmount(EBribeDifficulty* BribeDifficulty, int* Level, int* MerchantSkill);
	int GetInterrogationBribeAmount(ECrimeType* CrimeType, bool* bRestrictedArea, bool* bDisguised, int* DisguiseInterrogationsPassed, int* PlayerLevel, int* MerchantSkill, int* StolenItemsValue);
	float CalculateMoraleAdjustment(float* AddedMoral, int* CharmAttribute, int* TemperamentAttribute);
	float CalculateIntialMorale(int* TemperamentAttribute);
	bool ShouldDrawFireSwitchCompanionTargets(float* OldHealth, float* OldDTBody, float* OldDTHead, float* NewHealth, float* NewDTBody, float* NewDTHead);
	float PickPocketTime(int* LockpickSkill, int* TargetPerception);
	float ComputeFallingDamagePercent(float* DistanceFallen);
	int ComputeSkillPointsForSecondaryAttribute(unsigned char* AttributeRank);
	int ComputeSkillPointsForPrimaryAttribute(unsigned char* AttributeRank);
	float PlayerSneakEnemyDetectionRage(bool* bInterior, unsigned char* PlayerSneakSkill);
	float TrapDamagePercent(ETrapDifficulty* TrapDifficulty);
	float TrapDifficultyRange();
	unsigned char TrapDifficultyNumRanges();
	unsigned char TrapDifficultyFullRange();
	unsigned char ComputeExactTrapDifficulty(ETrapDifficulty* TrapDifficulty);
	bool CanDisarm(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill);
	bool CanArm(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill);
	float TrapDisarmNoise(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill);
	float TrapArmNoise(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill);
	unsigned char DisarmTime(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill);
	unsigned char ArmTime(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill);
	unsigned char TrapToughness(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill);
	bool CanHack(unsigned char* ExactComputerDifficulty, unsigned char* PlayerHackSkill);
	unsigned char ComputeExactHackDifficulty(EOCLDifficulty* HackDifficulty);
	unsigned char HackDifficultyFullRange();
	unsigned char HackDifficultyNumRanges();
	float HackDifficultyRange();
	float HackNoise(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill);
	unsigned char HackTime(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill);
	unsigned char HackNumResources(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill);
	unsigned char HackToughness(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill);
	unsigned char ComputeExactLockpickDifficulty(EOCLDifficulty* LockpickDifficulty);
	float LockpickDifficultyRange();
	unsigned char LockpickDifficultyNumRanges();
	unsigned char LockpickDifficultyFullRange();
	bool CanLockpick(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill);
	unsigned char LockpickNumResources(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill, unsigned char* BasePlayerLockpickSkill);
	float LockpickNoise(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill);
	float LockpickTime(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill, unsigned char* BasePlayerLockpickSkill);
	unsigned char LockpickToughness(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
