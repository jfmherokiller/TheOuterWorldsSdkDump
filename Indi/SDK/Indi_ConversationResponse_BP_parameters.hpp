#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ConversationResponse_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConversationResponse_BP.ConversationResponse_BP_C.Construct
struct UConversationResponse_BP_C_Construct_Params
{
};

// Function ConversationResponse_BP.ConversationResponse_BP_C.OnResponseSkillsChanged
struct UConversationResponse_BP_C_OnResponseSkillsChanged_Params
{
	bool*                                              bContainsSkillCheck;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConversationResponse_BP.ConversationResponse_BP_C.OnSetSelectableOption
struct UConversationResponse_BP_C_OnSetSelectableOption_Params
{
	bool*                                              bSelectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConversationResponse_BP.ConversationResponse_BP_C.OnSetSkillCheckRequiredCompanion
struct UConversationResponse_BP_C_OnSetSkillCheckRequiredCompanion_Params
{
	bool*                                              bSelectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConversationResponse_BP.ConversationResponse_BP_C.ExecuteUbergraph_ConversationResponse_BP
struct UConversationResponse_BP_C_ExecuteUbergraph_ConversationResponse_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
