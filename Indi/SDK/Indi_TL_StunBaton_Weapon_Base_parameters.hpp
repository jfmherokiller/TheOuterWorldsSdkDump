#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TL_StunBaton_Weapon_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.UserConstructionScript
struct UTL_StunBaton_Weapon_Base_C_UserConstructionScript_Params
{
};

// Function TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.ReceiveBeginPlay
struct UTL_StunBaton_Weapon_Base_C_ReceiveBeginPlay_Params
{
};

// Function TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.ReceiveActorBeginOverlap
struct UTL_StunBaton_Weapon_Base_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.ReceiveTick
struct UTL_StunBaton_Weapon_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C.ExecuteUbergraph_TL_StunBaton_Weapon_Base
struct UTL_StunBaton_Weapon_Base_C_ExecuteUbergraph_TL_StunBaton_Weapon_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
