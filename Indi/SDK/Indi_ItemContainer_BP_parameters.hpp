#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemContainer_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemContainer_BP.ItemContainer_BP_C.OnOutro
struct UItemContainer_BP_C_OnOutro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemContainer_BP.ItemContainer_BP_C.OnIntro
struct UItemContainer_BP_C_OnIntro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemContainer_BP.ItemContainer_BP_C.Construct
struct UItemContainer_BP_C_Construct_Params
{
};

// Function ItemContainer_BP.ItemContainer_BP_C.OnCancelShutdown
struct UItemContainer_BP_C_OnCancelShutdown_Params
{
};

// Function ItemContainer_BP.ItemContainer_BP_C.ShowContainer
struct UItemContainer_BP_C_ShowContainer_Params
{
};

// Function ItemContainer_BP.ItemContainer_BP_C.HideContainer
struct UItemContainer_BP_C_HideContainer_Params
{
};

// Function ItemContainer_BP.ItemContainer_BP_C.OnIntroStart
struct UItemContainer_BP_C_OnIntroStart_Params
{
};

// Function ItemContainer_BP.ItemContainer_BP_C.OnOutroEnd
struct UItemContainer_BP_C_OnOutroEnd_Params
{
};

// Function ItemContainer_BP.ItemContainer_BP_C.ExecuteUbergraph_ItemContainer_BP
struct UItemContainer_BP_C_ExecuteUbergraph_ItemContainer_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
