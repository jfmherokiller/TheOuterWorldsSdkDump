#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ConversationWidget_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConversationWidget_BP.ConversationWidget_BP_C.OnIntro
struct UConversationWidget_BP_C_OnIntro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConversationWidget_BP.ConversationWidget_BP_C.Get_Line0_Visibility_1
struct UConversationWidget_BP_C_Get_Line0_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConversationWidget_BP.ConversationWidget_BP_C.Get_Line1_Visibility_1
struct UConversationWidget_BP_C_Get_Line1_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConversationWidget_BP.ConversationWidget_BP_C.SetConversationBackingFillRatio
struct UConversationWidget_BP_C_SetConversationBackingFillRatio_Params
{
	float*                                             DesiredOverlayHeight;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConversationWidget_BP.ConversationWidget_BP_C.SetHistoryBackingFillRatio
struct UConversationWidget_BP_C_SetHistoryBackingFillRatio_Params
{
	float*                                             DesiredHistoryHeight;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConversationWidget_BP.ConversationWidget_BP_C.Construct
struct UConversationWidget_BP_C_Construct_Params
{
};

// Function ConversationWidget_BP.ConversationWidget_BP_C.ExecuteUbergraph_ConversationWidget_BP
struct UConversationWidget_BP_C_ExecuteUbergraph_ConversationWidget_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
