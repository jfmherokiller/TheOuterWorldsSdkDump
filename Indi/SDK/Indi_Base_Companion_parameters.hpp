#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Companion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_Companion.Base_Companion_C.UserConstructionScript
struct ABase_Companion_C_UserConstructionScript_Params
{
};

// Function Base_Companion.Base_Companion_C.ReceiveBeginPlay
struct ABase_Companion_C_ReceiveBeginPlay_Params
{
};

// Function Base_Companion.Base_Companion_C.CompanionOutline
struct ABase_Companion_C_CompanionOutline_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Companion.Base_Companion_C.Cinematic_Mode_Change
struct ABase_Companion_C_Cinematic_Mode_Change_Params
{
	bool                                               bCinematicMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Companion.Base_Companion_C.ExecuteUbergraph_Base_Companion
struct ABase_Companion_C_ExecuteUbergraph_Base_Companion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
