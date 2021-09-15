#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_LightPistol_Weapon_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.UserConstructionScript
struct USC_LightPistol_Weapon_Base_C_UserConstructionScript_Params
{
};

// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveBeginPlay
struct USC_LightPistol_Weapon_Base_C_ReceiveBeginPlay_Params
{
};

// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveActorBeginOverlap
struct USC_LightPistol_Weapon_Base_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ReceiveTick
struct USC_LightPistol_Weapon_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SC_LightPistol_Weapon_Base.SC_LightPistol_Weapon_Base_C.ExecuteUbergraph_SC_LightPistol_Weapon_Base
struct USC_LightPistol_Weapon_Base_C_ExecuteUbergraph_SC_LightPistol_Weapon_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
