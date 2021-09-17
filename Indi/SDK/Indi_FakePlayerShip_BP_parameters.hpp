#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FakePlayerShip_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.UserConstructionScript
struct AFakePlayerShip_BP_C_UserConstructionScript_Params
{
};

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.OnShipMeshLoaded
struct AFakePlayerShip_BP_C_OnShipMeshLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ReceiveTick
struct AFakePlayerShip_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.OnShipDoorLoaded
struct AFakePlayerShip_BP_C_OnShipDoorLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ReceiveBeginPlay
struct AFakePlayerShip_BP_C_ReceiveBeginPlay_Params
{
};

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ShipLocationActivated
struct AFakePlayerShip_BP_C_ShipLocationActivated_Params
{
};

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ShipLocationDeactivated
struct AFakePlayerShip_BP_C_ShipLocationDeactivated_Params
{
};

// Function FakePlayerShip_BP.FakePlayerShip_BP_C.ExecuteUbergraph_FakePlayerShip_BP
struct AFakePlayerShip_BP_C_ExecuteUbergraph_FakePlayerShip_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
