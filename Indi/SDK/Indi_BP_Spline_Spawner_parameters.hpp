#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Spline_Spawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Sound_Initialize_Emitters
struct ABP_Spline_Spawner_C_Sound_Initialize_Emitters_Params
{
	TArray<struct FName>                               SFXSocketNames;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectedElement;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Sort_Socket_Names
struct ABP_Spline_Spawner_C_Sort_Socket_Names_Params
{
	TArray<struct FName>                               SocketNamesToSort;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               VFXSocketNames;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               SFXSocketNames;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Random_Mesh_Selection
struct ABP_Spline_Spawner_C_Random_Mesh_Selection_Params
{
	bool                                               SpecifyShip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShipSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ArrayElement;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.UserConstructionScript
struct ABP_Spline_Spawner_C_UserConstructionScript_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__FinishedFunc
struct ABP_Spline_Spawner_C_Spline_Traverse__FinishedFunc_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__UpdateFunc
struct ABP_Spline_Spawner_C_Spline_Traverse__UpdateFunc_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__Spline_End__EventFunc
struct ABP_Spline_Spawner_C_Spline_Traverse__Spline_End__EventFunc_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse__Spline_Start__EventFunc
struct ABP_Spline_Spawner_C_Spline_Traverse__Spline_Start__EventFunc_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__FinishedFunc
struct ABP_Spline_Spawner_C_Spline_Traverse_Mesh__FinishedFunc_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__UpdateFunc
struct ABP_Spline_Spawner_C_Spline_Traverse_Mesh__UpdateFunc_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__Spline_End__EventFunc
struct ABP_Spline_Spawner_C_Spline_Traverse_Mesh__Spline_End__EventFunc_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Spline_Traverse_Mesh__Spline_Start__EventFunc
struct ABP_Spline_Spawner_C_Spline_Traverse_Mesh__Spline_Start__EventFunc_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Level_Spline
struct ABP_Spline_Spawner_C_Level_Spline_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Stop
struct ABP_Spline_Spawner_C_Stop_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Trigger
struct ABP_Spline_Spawner_C_Trigger_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.ReceiveBeginPlay
struct ABP_Spline_Spawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.Trigger_Enter
struct ABP_Spline_Spawner_C_Trigger_Enter_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Spline_Spawner.BP_Spline_Spawner_C.ExecuteUbergraph_BP_Spline_Spawner
struct ABP_Spline_Spawner_C_ExecuteUbergraph_BP_Spline_Spawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
