#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Burn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CE_Burn.CE_Burn_C.ReceiveClearEffect
struct UCE_Burn_C_ReceiveClearEffect_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CE_Burn.CE_Burn_C.ReceiveApplyEffect
struct UCE_Burn_C_ReceiveApplyEffect_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestoredFromSave;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CE_Burn.CE_Burn_C.ExecuteUbergraph_CE_Burn
struct UCE_Burn_C_ExecuteUbergraph_CE_Burn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
