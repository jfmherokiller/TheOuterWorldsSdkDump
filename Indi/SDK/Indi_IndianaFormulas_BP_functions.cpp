// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaFormulas_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetOCLSkillCheckValue
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic, Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast)
// Parameters:
// unsigned char                  OCLDifficulty                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OCLSkillCheckValue             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIndianaFormulas_BP_C::STATIC_GetOCLSkillCheckValue(unsigned char OCLDifficulty, unsigned char* OCLSkillCheckValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetOCLSkillCheckValue");

	UIndianaFormulas_BP_C_GetOCLSkillCheckValue_Params params;
	params.OCLDifficulty = OCLDifficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OCLSkillCheckValue != nullptr)
		*OCLSkillCheckValue = params.OCLSkillCheckValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetRespecCost
// (BlueprintAuthorityOnly)
// Parameters:
// int*                           NumRespecs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::GetRespecCost(int* NumRespecs)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetRespecCost");

	UIndianaFormulas_BP_C_GetRespecCost_Params params;
	params.NumRespecs = NumRespecs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.VendorRepairCurrencyCost
// (BlueprintCosmetic)
// Parameters:
// float*                         Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::VendorRepairCurrencyCost(float* Durability, int* ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.VendorRepairCurrencyCost");

	UIndianaFormulas_BP_C_VendorRepairCurrencyCost_Params params;
	params.Durability = Durability;
	params.ItemLevel = ItemLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.WorkbenchRepairPartCost
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// float*                         Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           EngineerSkill                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::WorkbenchRepairPartCost(float* Durability, int* ItemLevel, int* EngineerSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.WorkbenchRepairPartCost");

	UIndianaFormulas_BP_C_WorkbenchRepairPartCost_Params params;
	params.Durability = Durability;
	params.ItemLevel = ItemLevel;
	params.EngineerSkill = EngineerSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.FieldRepairPartCost
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// float*                         Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           EngineerSkill                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::FieldRepairPartCost(float* Durability, int* ItemLevel, int* EngineerSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.FieldRepairPartCost");

	UIndianaFormulas_BP_C_FieldRepairPartCost_Params params;
	params.Durability = Durability;
	params.ItemLevel = ItemLevel;
	params.EngineerSkill = EngineerSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.BaseRepairPartCost
// (BlueprintCosmetic)
// Parameters:
// float*                         Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::BaseRepairPartCost(float* Durability, int* ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.BaseRepairPartCost");

	UIndianaFormulas_BP_C_BaseRepairPartCost_Params params;
	params.Durability = Durability;
	params.ItemLevel = ItemLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanUseOCL
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxDelta                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIndianaFormulas_BP_C::CanUseOCL(int Difficulty, int PlayerSkill, int MaxDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanUseOCL");

	UIndianaFormulas_BP_C_CanUseOCL_Params params;
	params.Difficulty = Difficulty;
	params.PlayerSkill = PlayerSkill;
	params.MaxDelta = MaxDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.OCLToughness
// (BlueprintCosmetic)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::OCLToughness(int Difficulty, int PlayerSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.OCLToughness");

	UIndianaFormulas_BP_C_OCLToughness_Params params;
	params.Difficulty = Difficulty;
	params.PlayerSkill = PlayerSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackRobotTime
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactHackDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerHackSkill                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::HackRobotTime(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackRobotTime");

	UIndianaFormulas_BP_C_HackRobotTime_Params params;
	params.ExactHackDifficulty = ExactHackDifficulty;
	params.PlayerHackSkill = PlayerHackSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetDisguiseDrainRate
// (BlueprintCosmetic)
// Parameters:
// int*                           StealthSkill                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMoving                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSprinting                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCrouching                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::GetDisguiseDrainRate(int* StealthSkill, bool* bMoving, bool* bSprinting, bool* bCrouching)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetDisguiseDrainRate");

	UIndianaFormulas_BP_C_GetDisguiseDrainRate_Params params;
	params.StealthSkill = StealthSkill;
	params.bMoving = bMoving;
	params.bSprinting = bSprinting;
	params.bCrouching = bCrouching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationNearMissMaxOptions
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::ConversationNearMissMaxOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationNearMissMaxOptions");

	UIndianaFormulas_BP_C_ConversationNearMissMaxOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationAttributeNearMissThreshold
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::ConversationAttributeNearMissThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationAttributeNearMissThreshold");

	UIndianaFormulas_BP_C_ConversationAttributeNearMissThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillValueToRange
// (BlueprintAuthorityOnly)
// Parameters:
// int*                           SkillValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterSkillRange           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECharacterSkillRange UIndianaFormulas_BP_C::ComputeSkillValueToRange(int* SkillValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillValueToRange");

	UIndianaFormulas_BP_C_ComputeSkillValueToRange_Params params;
	params.SkillValue = SkillValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationSkillNearMissThreshold
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::ConversationSkillNearMissThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ConversationSkillNearMissThreshold");

	UIndianaFormulas_BP_C_ConversationSkillNearMissThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetBribeAmount
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// EBribeDifficulty*              BribeDifficulty                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MerchantSkill                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::GetBribeAmount(EBribeDifficulty* BribeDifficulty, int* Level, int* MerchantSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetBribeAmount");

	UIndianaFormulas_BP_C_GetBribeAmount_Params params;
	params.BribeDifficulty = BribeDifficulty;
	params.Level = Level;
	params.MerchantSkill = MerchantSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetInterrogationBribeAmount
// (BlueprintAuthorityOnly)
// Parameters:
// ECrimeType*                    CrimeType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRestrictedArea                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDisguised                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DisguiseInterrogationsPassed   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MerchantSkill                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StolenItemsValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::GetInterrogationBribeAmount(ECrimeType* CrimeType, bool* bRestrictedArea, bool* bDisguised, int* DisguiseInterrogationsPassed, int* PlayerLevel, int* MerchantSkill, int* StolenItemsValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.GetInterrogationBribeAmount");

	UIndianaFormulas_BP_C_GetInterrogationBribeAmount_Params params;
	params.CrimeType = CrimeType;
	params.bRestrictedArea = bRestrictedArea;
	params.bDisguised = bDisguised;
	params.DisguiseInterrogationsPassed = DisguiseInterrogationsPassed;
	params.PlayerLevel = PlayerLevel;
	params.MerchantSkill = MerchantSkill;
	params.StolenItemsValue = StolenItemsValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CalculateMoraleAdjustment
// (BlueprintAuthorityOnly, BlueprintCosmetic)
// Parameters:
// float*                         AddedMoral                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CharmAttribute                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TemperamentAttribute           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::CalculateMoraleAdjustment(float* AddedMoral, int* CharmAttribute, int* TemperamentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.CalculateMoraleAdjustment");

	UIndianaFormulas_BP_C_CalculateMoraleAdjustment_Params params;
	params.AddedMoral = AddedMoral;
	params.CharmAttribute = CharmAttribute;
	params.TemperamentAttribute = TemperamentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CalculateIntialMorale
// (BlueprintAuthorityOnly)
// Parameters:
// int*                           TemperamentAttribute           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::CalculateIntialMorale(int* TemperamentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.CalculateIntialMorale");

	UIndianaFormulas_BP_C_CalculateIntialMorale_Params params;
	params.TemperamentAttribute = TemperamentAttribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ShouldDrawFireSwitchCompanionTargets
// (BlueprintCosmetic)
// Parameters:
// float*                         OldHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         OldDTBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         OldDTHead                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewDTBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewDTHead                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIndianaFormulas_BP_C::ShouldDrawFireSwitchCompanionTargets(float* OldHealth, float* OldDTBody, float* OldDTHead, float* NewHealth, float* NewDTBody, float* NewDTHead)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ShouldDrawFireSwitchCompanionTargets");

	UIndianaFormulas_BP_C_ShouldDrawFireSwitchCompanionTargets_Params params;
	params.OldHealth = OldHealth;
	params.OldDTBody = OldDTBody;
	params.OldDTHead = OldDTHead;
	params.NewHealth = NewHealth;
	params.NewDTBody = NewDTBody;
	params.NewDTHead = NewDTHead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.PickPocketTime
// (BlueprintCosmetic)
// Parameters:
// int*                           LockpickSkill                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TargetPerception               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::PickPocketTime(int* LockpickSkill, int* TargetPerception)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.PickPocketTime");

	UIndianaFormulas_BP_C_PickPocketTime_Params params;
	params.LockpickSkill = LockpickSkill;
	params.TargetPerception = TargetPerception;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeFallingDamagePercent
// (BlueprintAuthorityOnly)
// Parameters:
// float*                         DistanceFallen                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::ComputeFallingDamagePercent(float* DistanceFallen)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeFallingDamagePercent");

	UIndianaFormulas_BP_C_ComputeFallingDamagePercent_Params params;
	params.DistanceFallen = DistanceFallen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillPointsForSecondaryAttribute
// (BlueprintAuthorityOnly)
// Parameters:
// unsigned char*                 AttributeRank                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::ComputeSkillPointsForSecondaryAttribute(unsigned char* AttributeRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillPointsForSecondaryAttribute");

	UIndianaFormulas_BP_C_ComputeSkillPointsForSecondaryAttribute_Params params;
	params.AttributeRank = AttributeRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillPointsForPrimaryAttribute
// (BlueprintAuthorityOnly)
// Parameters:
// unsigned char*                 AttributeRank                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UIndianaFormulas_BP_C::ComputeSkillPointsForPrimaryAttribute(unsigned char* AttributeRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeSkillPointsForPrimaryAttribute");

	UIndianaFormulas_BP_C_ComputeSkillPointsForPrimaryAttribute_Params params;
	params.AttributeRank = AttributeRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.PlayerSneakEnemyDetectionRage
// (BlueprintAuthorityOnly)
// Parameters:
// bool*                          bInterior                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerSneakSkill               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::PlayerSneakEnemyDetectionRage(bool* bInterior, unsigned char* PlayerSneakSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.PlayerSneakEnemyDetectionRage");

	UIndianaFormulas_BP_C_PlayerSneakEnemyDetectionRage_Params params;
	params.bInterior = bInterior;
	params.PlayerSneakSkill = PlayerSneakSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDamagePercent
// (BlueprintAuthorityOnly)
// Parameters:
// ETrapDifficulty*               TrapDifficulty                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::TrapDamagePercent(ETrapDifficulty* TrapDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDamagePercent");

	UIndianaFormulas_BP_C_TrapDamagePercent_Params params;
	params.TrapDifficulty = TrapDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyRange
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::TrapDifficultyRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyRange");

	UIndianaFormulas_BP_C_TrapDifficultyRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyNumRanges
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::TrapDifficultyNumRanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyNumRanges");

	UIndianaFormulas_BP_C_TrapDifficultyNumRanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyFullRange
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::TrapDifficultyFullRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDifficultyFullRange");

	UIndianaFormulas_BP_C_TrapDifficultyFullRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactTrapDifficulty
// (Final)
// Parameters:
// ETrapDifficulty*               TrapDifficulty                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::ComputeExactTrapDifficulty(ETrapDifficulty* TrapDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactTrapDifficulty");

	UIndianaFormulas_BP_C_ComputeExactTrapDifficulty_Params params;
	params.TrapDifficulty = TrapDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanDisarm
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactTrapDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerEngineeringSkill         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIndianaFormulas_BP_C::CanDisarm(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanDisarm");

	UIndianaFormulas_BP_C_CanDisarm_Params params;
	params.ExactTrapDifficulty = ExactTrapDifficulty;
	params.PlayerEngineeringSkill = PlayerEngineeringSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanArm
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactTrapDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerEngineeringSkill         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIndianaFormulas_BP_C::CanArm(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanArm");

	UIndianaFormulas_BP_C_CanArm_Params params;
	params.ExactTrapDifficulty = ExactTrapDifficulty;
	params.PlayerEngineeringSkill = PlayerEngineeringSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDisarmNoise
// (BlueprintAuthorityOnly)
// Parameters:
// unsigned char*                 ExactTrapDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerEngineeringSkill         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::TrapDisarmNoise(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapDisarmNoise");

	UIndianaFormulas_BP_C_TrapDisarmNoise_Params params;
	params.ExactTrapDifficulty = ExactTrapDifficulty;
	params.PlayerEngineeringSkill = PlayerEngineeringSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapArmNoise
// (BlueprintAuthorityOnly)
// Parameters:
// unsigned char*                 ExactTrapDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerEngineeringSkill         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::TrapArmNoise(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapArmNoise");

	UIndianaFormulas_BP_C_TrapArmNoise_Params params;
	params.ExactTrapDifficulty = ExactTrapDifficulty;
	params.PlayerEngineeringSkill = PlayerEngineeringSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.DisarmTime
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactTrapDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerEngineeringSkill         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::DisarmTime(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.DisarmTime");

	UIndianaFormulas_BP_C_DisarmTime_Params params;
	params.ExactTrapDifficulty = ExactTrapDifficulty;
	params.PlayerEngineeringSkill = PlayerEngineeringSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ArmTime
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactTrapDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerEngineeringSkill         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::ArmTime(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ArmTime");

	UIndianaFormulas_BP_C_ArmTime_Params params;
	params.ExactTrapDifficulty = ExactTrapDifficulty;
	params.PlayerEngineeringSkill = PlayerEngineeringSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapToughness
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactTrapDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerEngineeringSkill         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::TrapToughness(unsigned char* ExactTrapDifficulty, unsigned char* PlayerEngineeringSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.TrapToughness");

	UIndianaFormulas_BP_C_TrapToughness_Params params;
	params.ExactTrapDifficulty = ExactTrapDifficulty;
	params.PlayerEngineeringSkill = PlayerEngineeringSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanHack
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactComputerDifficulty        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerHackSkill                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIndianaFormulas_BP_C::CanHack(unsigned char* ExactComputerDifficulty, unsigned char* PlayerHackSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanHack");

	UIndianaFormulas_BP_C_CanHack_Params params;
	params.ExactComputerDifficulty = ExactComputerDifficulty;
	params.PlayerHackSkill = PlayerHackSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactHackDifficulty
// (Final)
// Parameters:
// EOCLDifficulty*                HackDifficulty                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::ComputeExactHackDifficulty(EOCLDifficulty* HackDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactHackDifficulty");

	UIndianaFormulas_BP_C_ComputeExactHackDifficulty_Params params;
	params.HackDifficulty = HackDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyFullRange
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::HackDifficultyFullRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyFullRange");

	UIndianaFormulas_BP_C_HackDifficultyFullRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyNumRanges
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::HackDifficultyNumRanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyNumRanges");

	UIndianaFormulas_BP_C_HackDifficultyNumRanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyRange
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::HackDifficultyRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackDifficultyRange");

	UIndianaFormulas_BP_C_HackDifficultyRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackNoise
// (BlueprintAuthorityOnly)
// Parameters:
// unsigned char*                 ExactHackDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerHackSkill                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::HackNoise(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackNoise");

	UIndianaFormulas_BP_C_HackNoise_Params params;
	params.ExactHackDifficulty = ExactHackDifficulty;
	params.PlayerHackSkill = PlayerHackSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackTime
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactHackDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerHackSkill                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::HackTime(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackTime");

	UIndianaFormulas_BP_C_HackTime_Params params;
	params.ExactHackDifficulty = ExactHackDifficulty;
	params.PlayerHackSkill = PlayerHackSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackNumResources
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactHackDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerHackSkill                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::HackNumResources(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackNumResources");

	UIndianaFormulas_BP_C_HackNumResources_Params params;
	params.ExactHackDifficulty = ExactHackDifficulty;
	params.PlayerHackSkill = PlayerHackSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackToughness
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactHackDifficulty            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerHackSkill                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::HackToughness(unsigned char* ExactHackDifficulty, unsigned char* PlayerHackSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.HackToughness");

	UIndianaFormulas_BP_C_HackToughness_Params params;
	params.ExactHackDifficulty = ExactHackDifficulty;
	params.PlayerHackSkill = PlayerHackSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactLockpickDifficulty
// (Final)
// Parameters:
// EOCLDifficulty*                LockpickDifficulty             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::ComputeExactLockpickDifficulty(EOCLDifficulty* LockpickDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.ComputeExactLockpickDifficulty");

	UIndianaFormulas_BP_C_ComputeExactLockpickDifficulty_Params params;
	params.LockpickDifficulty = LockpickDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyRange
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::LockpickDifficultyRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyRange");

	UIndianaFormulas_BP_C_LockpickDifficultyRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyNumRanges
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::LockpickDifficultyNumRanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyNumRanges");

	UIndianaFormulas_BP_C_LockpickDifficultyNumRanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyFullRange
// ()
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::LockpickDifficultyFullRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickDifficultyFullRange");

	UIndianaFormulas_BP_C_LockpickDifficultyFullRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanLockpick
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactLockpickDifficulty        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerLockpickSkill            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIndianaFormulas_BP_C::CanLockpick(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.CanLockpick");

	UIndianaFormulas_BP_C_CanLockpick_Params params;
	params.ExactLockpickDifficulty = ExactLockpickDifficulty;
	params.PlayerLockpickSkill = PlayerLockpickSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickNumResources
// (Final, RequiredAPI)
// Parameters:
// unsigned char*                 ExactLockpickDifficulty        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerLockpickSkill            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 BasePlayerLockpickSkill        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::LockpickNumResources(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill, unsigned char* BasePlayerLockpickSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickNumResources");

	UIndianaFormulas_BP_C_LockpickNumResources_Params params;
	params.ExactLockpickDifficulty = ExactLockpickDifficulty;
	params.PlayerLockpickSkill = PlayerLockpickSkill;
	params.BasePlayerLockpickSkill = BasePlayerLockpickSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickNoise
// (BlueprintAuthorityOnly)
// Parameters:
// unsigned char*                 ExactLockpickDifficulty        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerLockpickSkill            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::LockpickNoise(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickNoise");

	UIndianaFormulas_BP_C_LockpickNoise_Params params;
	params.ExactLockpickDifficulty = ExactLockpickDifficulty;
	params.PlayerLockpickSkill = PlayerLockpickSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickTime
// (BlueprintAuthorityOnly)
// Parameters:
// unsigned char*                 ExactLockpickDifficulty        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerLockpickSkill            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 BasePlayerLockpickSkill        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIndianaFormulas_BP_C::LockpickTime(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill, unsigned char* BasePlayerLockpickSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickTime");

	UIndianaFormulas_BP_C_LockpickTime_Params params;
	params.ExactLockpickDifficulty = ExactLockpickDifficulty;
	params.PlayerLockpickSkill = PlayerLockpickSkill;
	params.BasePlayerLockpickSkill = BasePlayerLockpickSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickToughness
// (RequiredAPI)
// Parameters:
// unsigned char*                 ExactLockpickDifficulty        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PlayerLockpickSkill            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UIndianaFormulas_BP_C::LockpickToughness(unsigned char* ExactLockpickDifficulty, unsigned char* PlayerLockpickSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function IndianaFormulas_BP.IndianaFormulas_BP_C.LockpickToughness");

	UIndianaFormulas_BP_C_LockpickToughness_Params params;
	params.ExactLockpickDifficulty = ExactLockpickDifficulty;
	params.PlayerLockpickSkill = PlayerLockpickSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
