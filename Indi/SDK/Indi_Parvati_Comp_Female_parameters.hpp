#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Parvati_Comp_Female_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Parvati_Comp_Female.Parvati_Comp_Female_C.UserConstructionScript
struct AParvati_Comp_Female_C_UserConstructionScript_Params
{
};

// Function Parvati_Comp_Female.Parvati_Comp_Female_C.ReceiveBeginPlay
struct AParvati_Comp_Female_C_ReceiveBeginPlay_Params
{
};

// Function Parvati_Comp_Female.Parvati_Comp_Female_C.DEATH_PARVATI
struct AParvati_Comp_Female_C_DEATH_PARVATI_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCauseDamageInfo                            CauseDamageInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Parvati_Comp_Female.Parvati_Comp_Female_C.OnCompanionDismissed_Event_1
struct AParvati_Comp_Female_C_OnCompanionDismissed_Event_1_Params
{
	bool                                               bCompanionDied;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Parvati_Comp_Female.Parvati_Comp_Female_C.ExecuteUbergraph_Parvati_Comp_Female
struct AParvati_Comp_Female_C_ExecuteUbergraph_Parvati_Comp_Female_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
