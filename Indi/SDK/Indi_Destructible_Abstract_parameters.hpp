#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Destructible_Abstract_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Destructible_Abstract.Destructible_Abstract_C.UserConstructionScript
struct ADestructible_Abstract_C_UserConstructionScript_Params
{
};

// Function Destructible_Abstract.Destructible_Abstract_C.ReceiveBeginPlay
struct ADestructible_Abstract_C_ReceiveBeginPlay_Params
{
};

// Function Destructible_Abstract.Destructible_Abstract_C.ReceiveDeployOrder
struct ADestructible_Abstract_C_ReceiveDeployOrder_Params
{
};

// Function Destructible_Abstract.Destructible_Abstract_C.OnDestructiblePristine_Event_Base
struct ADestructible_Abstract_C_OnDestructiblePristine_Event_Base_Params
{
};

// Function Destructible_Abstract.Destructible_Abstract_C.OnDestructibleDamaged_Event_Base
struct ADestructible_Abstract_C_OnDestructibleDamaged_Event_Base_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Destructible_Abstract.Destructible_Abstract_C.OnDestructibleDestroyed_Event_Base
struct ADestructible_Abstract_C_OnDestructibleDestroyed_Event_Base_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Destructible_Abstract.Destructible_Abstract_C.ExecuteUbergraph_Destructible_Abstract
struct ADestructible_Abstract_C_ExecuteUbergraph_Destructible_Abstract_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
