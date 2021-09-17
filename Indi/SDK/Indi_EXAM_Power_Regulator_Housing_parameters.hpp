#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EXAM_Power_Regulator_Housing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.GetInteraction
struct AEXAM_Power_Regulator_Housing_C_GetInteraction_Params
{
	struct FInteractionDescription*                    Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInteractPayload*                           Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float*                                             InteractDistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EInteractionType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.GetInteractLocString
struct AEXAM_Power_Regulator_Housing_C_GetInteractLocString_Params
{
	struct FLocString                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C.UserConstructionScript
struct AEXAM_Power_Regulator_Housing_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
