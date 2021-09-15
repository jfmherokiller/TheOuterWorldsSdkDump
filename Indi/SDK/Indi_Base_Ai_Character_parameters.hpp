#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Ai_Character_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_Ai_Character.Base_Ai_Character_C.SetEmotion
struct ABase_Ai_Character_C_SetEmotion_Params
{
	EEmotion                                           NewEmotion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Ai_Character.Base_Ai_Character_C.UserConstructionScript
struct ABase_Ai_Character_C_UserConstructionScript_Params
{
};

// Function Base_Ai_Character.Base_Ai_Character_C.ReceiveBeginPlay
struct ABase_Ai_Character_C_ReceiveBeginPlay_Params
{
};

// Function Base_Ai_Character.Base_Ai_Character_C.ExecuteUbergraph_Base_Ai_Character
struct ABase_Ai_Character_C_ExecuteUbergraph_Base_Ai_Character_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
