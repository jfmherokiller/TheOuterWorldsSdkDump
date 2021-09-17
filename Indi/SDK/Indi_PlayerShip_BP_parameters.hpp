#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerShip_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerShip_BP.PlayerShip_BP_C.UserConstructionScript
struct APlayerShip_BP_C_UserConstructionScript_Params
{
};

// Function PlayerShip_BP.PlayerShip_BP_C.ReceiveBeginPlay
struct APlayerShip_BP_C_ReceiveBeginPlay_Params
{
};

// Function PlayerShip_BP.PlayerShip_BP_C.ReceiveTick
struct APlayerShip_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerShip_BP.PlayerShip_BP_C.OnShipMeshLoaded
struct APlayerShip_BP_C_OnShipMeshLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerShip_BP.PlayerShip_BP_C.OnShipDoorLoaded
struct APlayerShip_BP_C_OnShipDoorLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerShip_BP.PlayerShip_BP_C.ShipLocationActivated
struct APlayerShip_BP_C_ShipLocationActivated_Params
{
};

// Function PlayerShip_BP.PlayerShip_BP_C.ShipLocationDeactivated
struct APlayerShip_BP_C_ShipLocationDeactivated_Params
{
};

// Function PlayerShip_BP.PlayerShip_BP_C.ExecuteUbergraph_PlayerShip_BP
struct APlayerShip_BP_C_ExecuteUbergraph_PlayerShip_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
