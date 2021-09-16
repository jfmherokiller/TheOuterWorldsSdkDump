#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BigWallMachine_E_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BigWallMachine_E.BigWallMachine_E_C.UserConstructionScript
struct ABigWallMachine_E_C_UserConstructionScript_Params
{
};

// Function BigWallMachine_E.BigWallMachine_E_C.ReceiveTick
struct ABigWallMachine_E_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BigWallMachine_E.BigWallMachine_E_C.ExecuteUbergraph_BigWallMachine_E
struct ABigWallMachine_E_C_ExecuteUbergraph_BigWallMachine_E_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
