#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Joch_Flamethrower_Weapon_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.UserConstructionScript
struct UJoch_Flamethrower_Weapon_Base_C_UserConstructionScript_Params
{
};

// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveBeginPlay
struct UJoch_Flamethrower_Weapon_Base_C_ReceiveBeginPlay_Params
{
};

// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveActorBeginOverlap
struct UJoch_Flamethrower_Weapon_Base_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveTick
struct UJoch_Flamethrower_Weapon_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ExecuteUbergraph_Joch_Flamethrower_Weapon_Base
struct UJoch_Flamethrower_Weapon_Base_C_ExecuteUbergraph_Joch_Flamethrower_Weapon_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
