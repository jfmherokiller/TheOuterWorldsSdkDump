#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SecurityDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SecurityDoor_BP.SecurityDoor_BP_C.UserConstructionScript
struct ASecurityDoor_BP_C_UserConstructionScript_Params
{
};

// Function SecurityDoor_BP.SecurityDoor_BP_C.AnimateDoors__FinishedFunc
struct ASecurityDoor_BP_C_AnimateDoors__FinishedFunc_Params
{
};

// Function SecurityDoor_BP.SecurityDoor_BP_C.AnimateDoors__UpdateFunc
struct ASecurityDoor_BP_C_AnimateDoors__UpdateFunc_Params
{
};

// Function SecurityDoor_BP.SecurityDoor_BP_C.OnAnimateOpen
struct ASecurityDoor_BP_C_OnAnimateOpen_Params
{
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityDoor_BP.SecurityDoor_BP_C.OnAnimateClose
struct ASecurityDoor_BP_C_OnAnimateClose_Params
{
	bool*                                              IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecurityDoor_BP.SecurityDoor_BP_C.ExecuteUbergraph_SecurityDoor_BP
struct ASecurityDoor_BP_C_ExecuteUbergraph_SecurityDoor_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
