#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompassEntry_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CompassEntry_BP.CompassEntry_BP_C.SetDistanceValue
struct UCompassEntry_BP_C_SetDistanceValue_Params
{
};

// Function CompassEntry_BP.CompassEntry_BP_C.Construct
struct UCompassEntry_BP_C_Construct_Params
{
};

// Function CompassEntry_BP.CompassEntry_BP_C.InitProperties
struct UCompassEntry_BP_C_InitProperties_Params
{
	struct FEntryData*                                 EntryData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CompassEntry_BP.CompassEntry_BP_C.ExecuteUbergraph_CompassEntry_BP
struct UCompassEntry_BP_C_ExecuteUbergraph_CompassEntry_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
