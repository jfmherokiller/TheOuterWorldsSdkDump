#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Max_Comp_Male_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Max_Comp_Male.Max_Comp_Male_C.UserConstructionScript
struct AMax_Comp_Male_C_UserConstructionScript_Params
{
};

// Function Max_Comp_Male.Max_Comp_Male_C.BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature
struct AMax_Comp_Male_C_BndEvt__PersonalSpaceComponent_K2Node_ComponentBoundEvent_0_PlayerEnteredZone__DelegateSignature_Params
{
	class AActor*                                      ZoneOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Max_Comp_Male.Max_Comp_Male_C.ReceiveBeginPlay
struct AMax_Comp_Male_C_ReceiveBeginPlay_Params
{
};

// Function Max_Comp_Male.Max_Comp_Male_C.DEATH_MAX
struct AMax_Comp_Male_C_DEATH_MAX_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Max_Comp_Male.Max_Comp_Male_C.OnCompanionDismissed_Event_1
struct AMax_Comp_Male_C_OnCompanionDismissed_Event_1_Params
{
	bool                                               bCompanionDied;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Max_Comp_Male.Max_Comp_Male_C.ExecuteUbergraph_Max_Comp_Male
struct AMax_Comp_Male_C_ExecuteUbergraph_Max_Comp_Male_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
