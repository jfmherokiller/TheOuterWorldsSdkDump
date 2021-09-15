#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ledger_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ledger_BP.Ledger_BP_C.OnOutro
struct ULedger_BP_C_OnOutro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ledger_BP.Ledger_BP_C.OnIntro
struct ULedger_BP_C_OnIntro_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ledger_BP.Ledger_BP_C.OnMaximize
struct ULedger_BP_C_OnMaximize_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ledger_BP.Ledger_BP_C.OnMinimize
struct ULedger_BP_C_OnMinimize_Params
{
	struct FScriptDelegate*                            AnimationCompleteCallback;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ledger_BP.Ledger_BP_C.SetupMaterialInstances
struct ULedger_BP_C_SetupMaterialInstances_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              SizeX;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              SizeY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Ledger_BP.Ledger_BP_C.Construct
struct ULedger_BP_C_Construct_Params
{
};

// Function Ledger_BP.Ledger_BP_C.Tick
struct ULedger_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ledger_BP.Ledger_BP_C.OnFinalizeMaximize
struct ULedger_BP_C_OnFinalizeMaximize_Params
{
};

// Function Ledger_BP.Ledger_BP_C.OnFinalizeMinimize
struct ULedger_BP_C_OnFinalizeMinimize_Params
{
};

// Function Ledger_BP.Ledger_BP_C.OnSetCurrentPage
struct ULedger_BP_C_OnSetCurrentPage_Params
{
	ELedgerPages*                                      Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ledger_BP.Ledger_BP_C.FadeInSharedItemViewer
struct ULedger_BP_C_FadeInSharedItemViewer_Params
{
};

// Function Ledger_BP.Ledger_BP_C.ExecuteUbergraph_Ledger_BP
struct ULedger_BP_C_ExecuteUbergraph_Ledger_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
