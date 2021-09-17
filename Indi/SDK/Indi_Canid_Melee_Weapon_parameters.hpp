#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Canid_Melee_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Canid_Melee_Weapon.Canid_Melee_Weapon_C.UserConstructionScript
struct UCanid_Melee_Weapon_C_UserConstructionScript_Params
{
};

// Function Canid_Melee_Weapon.Canid_Melee_Weapon_C.ReceiveBeginPlay
struct UCanid_Melee_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function Canid_Melee_Weapon.Canid_Melee_Weapon_C.ReceiveActorBeginOverlap
struct UCanid_Melee_Weapon_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canid_Melee_Weapon.Canid_Melee_Weapon_C.ReceiveTick
struct UCanid_Melee_Weapon_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Canid_Melee_Weapon.Canid_Melee_Weapon_C.ExecuteUbergraph_Canid_Melee_Weapon
struct UCanid_Melee_Weapon_C_ExecuteUbergraph_Canid_Melee_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
