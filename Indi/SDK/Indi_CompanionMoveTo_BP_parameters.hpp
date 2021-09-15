#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionMoveTo_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnAnimationEnd
struct UCompanionMoveTo_BP_C_OnAnimationEnd_Params
{
};

// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnNewLocation
struct UCompanionMoveTo_BP_C_OnNewLocation_Params
{
};

// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.Tick
struct UCompanionMoveTo_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.Construct
struct UCompanionMoveTo_BP_C_Construct_Params
{
};

// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.OnMoveToCancelled
struct UCompanionMoveTo_BP_C_OnMoveToCancelled_Params
{
};

// Function CompanionMoveTo_BP.CompanionMoveTo_BP_C.ExecuteUbergraph_CompanionMoveTo_BP
struct UCompanionMoveTo_BP_C_ExecuteUbergraph_CompanionMoveTo_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
