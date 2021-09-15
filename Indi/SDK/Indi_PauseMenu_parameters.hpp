#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PauseMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PauseMenu.PauseMenu_C.Construct
struct UPauseMenu_C_Construct_Params
{
};

// Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
struct UPauseMenu_C_ExecuteUbergraph_PauseMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
