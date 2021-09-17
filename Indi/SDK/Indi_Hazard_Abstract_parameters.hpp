#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Hazard_Abstract_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Hazard_Abstract.Hazard_Abstract_C.Setup VFX to Volume
struct AHazard_Abstract_C_Setup_VFX_to_Volume_Params
{
};

// Function Hazard_Abstract.Hazard_Abstract_C.UserConstructionScript
struct AHazard_Abstract_C_UserConstructionScript_Params
{
};

// Function Hazard_Abstract.Hazard_Abstract_C.ReceiveBeginPlay
struct AHazard_Abstract_C_ReceiveBeginPlay_Params
{
};

// Function Hazard_Abstract.Hazard_Abstract_C.OnHazardDisabled_Event_Base
struct AHazard_Abstract_C_OnHazardDisabled_Event_Base_Params
{
};

// Function Hazard_Abstract.Hazard_Abstract_C.OnHazardEnabled_Event_Base
struct AHazard_Abstract_C_OnHazardEnabled_Event_Base_Params
{
};

// Function Hazard_Abstract.Hazard_Abstract_C.OnHazardEnabling_Event_Base
struct AHazard_Abstract_C_OnHazardEnabling_Event_Base_Params
{
};

// Function Hazard_Abstract.Hazard_Abstract_C.OnHazardDisabling_Event_Base
struct AHazard_Abstract_C_OnHazardDisabling_Event_Base_Params
{
};

// Function Hazard_Abstract.Hazard_Abstract_C.ExecuteUbergraph_Hazard_Abstract
struct AHazard_Abstract_C_ExecuteUbergraph_Hazard_Abstract_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
