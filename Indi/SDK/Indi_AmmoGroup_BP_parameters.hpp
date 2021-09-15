#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AmmoGroup_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AmmoGroup_BP.AmmoGroup_BP_C.Construct
struct UAmmoGroup_BP_C_Construct_Params
{
};

// Function AmmoGroup_BP.AmmoGroup_BP_C.OnHighlightChange
struct UAmmoGroup_BP_C_OnHighlightChange_Params
{
	bool*                                              bHighlight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmmoGroup_BP.AmmoGroup_BP_C.ExecuteUbergraph_AmmoGroup_BP
struct UAmmoGroup_BP_C_ExecuteUbergraph_AmmoGroup_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
