#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TerminalResponse_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TerminalResponse_BP.TerminalResponse_BP_C.Construct
struct UTerminalResponse_BP_C_Construct_Params
{
};

// Function TerminalResponse_BP.TerminalResponse_BP_C.OnResponseSkillsChanged
struct UTerminalResponse_BP_C_OnResponseSkillsChanged_Params
{
	bool*                                              bContainsSkillCheck;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerminalResponse_BP.TerminalResponse_BP_C.OnSetSelectableOption
struct UTerminalResponse_BP_C_OnSetSelectableOption_Params
{
	bool*                                              bSelectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerminalResponse_BP.TerminalResponse_BP_C.OnSetSkillCheckRequiredCompanion
struct UTerminalResponse_BP_C_OnSetSkillCheckRequiredCompanion_Params
{
	bool*                                              bSelectable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerminalResponse_BP.TerminalResponse_BP_C.ExecuteUbergraph_TerminalResponse_BP
struct UTerminalResponse_BP_C_ExecuteUbergraph_TerminalResponse_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
