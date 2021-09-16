#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Imp_Shovel_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Imp_Shovel_Weapon.Imp_Shovel_Weapon_C.UserConstructionScript
struct UImp_Shovel_Weapon_C_UserConstructionScript_Params
{
};

// Function Imp_Shovel_Weapon.Imp_Shovel_Weapon_C.ReceiveBeginPlay
struct UImp_Shovel_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function Imp_Shovel_Weapon.Imp_Shovel_Weapon_C.ReceiveActorBeginOverlap
struct UImp_Shovel_Weapon_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Imp_Shovel_Weapon.Imp_Shovel_Weapon_C.ReceiveTick
struct UImp_Shovel_Weapon_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Imp_Shovel_Weapon.Imp_Shovel_Weapon_C.ExecuteUbergraph_Imp_Shovel_Weapon
struct UImp_Shovel_Weapon_C_ExecuteUbergraph_Imp_Shovel_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
