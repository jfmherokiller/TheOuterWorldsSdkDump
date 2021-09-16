#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Imp_TossballStick_Weapon_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Imp_TossballStick_Weapon_Base.Imp_TossballStick_Weapon_Base_C.UserConstructionScript
struct UImp_TossballStick_Weapon_Base_C_UserConstructionScript_Params
{
};

// Function Imp_TossballStick_Weapon_Base.Imp_TossballStick_Weapon_Base_C.ReceiveBeginPlay
struct UImp_TossballStick_Weapon_Base_C_ReceiveBeginPlay_Params
{
};

// Function Imp_TossballStick_Weapon_Base.Imp_TossballStick_Weapon_Base_C.ReceiveActorBeginOverlap
struct UImp_TossballStick_Weapon_Base_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Imp_TossballStick_Weapon_Base.Imp_TossballStick_Weapon_Base_C.ReceiveTick
struct UImp_TossballStick_Weapon_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Imp_TossballStick_Weapon_Base.Imp_TossballStick_Weapon_Base_C.ExecuteUbergraph_Imp_TossballStick_Weapon_Base
struct UImp_TossballStick_Weapon_Base_C_ExecuteUbergraph_Imp_TossballStick_Weapon_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
