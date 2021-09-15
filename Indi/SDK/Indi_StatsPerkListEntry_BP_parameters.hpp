#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatsPerkListEntry_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.UpdateButtonBrush
struct UStatsPerkListEntry_BP_C_UpdateButtonBrush_Params
{
	bool*                                              bPendingPurchase;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bActuallyPurchased;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuppressed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.ExecuteUbergraph_StatsPerkListEntry_BP
struct UStatsPerkListEntry_BP_C_ExecuteUbergraph_StatsPerkListEntry_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
