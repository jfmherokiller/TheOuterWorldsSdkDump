#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Primal_Behem_Melee_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.UserConstructionScript
struct UPrimal_Behem_Melee_Weapon_C_UserConstructionScript_Params
{
};

// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveBeginPlay
struct UPrimal_Behem_Melee_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveActorBeginOverlap
struct UPrimal_Behem_Melee_Weapon_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ReceiveTick
struct UPrimal_Behem_Melee_Weapon_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Primal_Behem_Melee_Weapon.Primal_Behem_Melee_Weapon_C.ExecuteUbergraph_Primal_Behem_Melee_Weapon
struct UPrimal_Behem_Melee_Weapon_C_ExecuteUbergraph_Primal_Behem_Melee_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
