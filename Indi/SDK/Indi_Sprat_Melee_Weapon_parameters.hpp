#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Sprat_Melee_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sprat_Melee_Weapon.Sprat_Melee_Weapon_C.UserConstructionScript
struct USprat_Melee_Weapon_C_UserConstructionScript_Params
{
};

// Function Sprat_Melee_Weapon.Sprat_Melee_Weapon_C.ReceiveBeginPlay
struct USprat_Melee_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function Sprat_Melee_Weapon.Sprat_Melee_Weapon_C.ReceiveActorBeginOverlap
struct USprat_Melee_Weapon_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sprat_Melee_Weapon.Sprat_Melee_Weapon_C.ReceiveTick
struct USprat_Melee_Weapon_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sprat_Melee_Weapon.Sprat_Melee_Weapon_C.ExecuteUbergraph_Sprat_Melee_Weapon
struct USprat_Melee_Weapon_C_ExecuteUbergraph_Sprat_Melee_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
