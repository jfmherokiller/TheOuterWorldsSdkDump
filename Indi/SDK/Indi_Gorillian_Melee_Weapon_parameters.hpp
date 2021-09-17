#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Gorillian_Melee_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gorillian_Melee_Weapon.Gorillian_Melee_Weapon_C.UserConstructionScript
struct UGorillian_Melee_Weapon_C_UserConstructionScript_Params
{
};

// Function Gorillian_Melee_Weapon.Gorillian_Melee_Weapon_C.ReceiveBeginPlay
struct UGorillian_Melee_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function Gorillian_Melee_Weapon.Gorillian_Melee_Weapon_C.ReceiveActorBeginOverlap
struct UGorillian_Melee_Weapon_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gorillian_Melee_Weapon.Gorillian_Melee_Weapon_C.ReceiveTick
struct UGorillian_Melee_Weapon_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gorillian_Melee_Weapon.Gorillian_Melee_Weapon_C.ExecuteUbergraph_Gorillian_Melee_Weapon
struct UGorillian_Melee_Weapon_C_ExecuteUbergraph_Gorillian_Melee_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
