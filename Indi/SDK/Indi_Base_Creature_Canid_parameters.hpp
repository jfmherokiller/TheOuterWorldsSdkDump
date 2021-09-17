#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Creature_Canid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_Creature_Canid.Base_Creature_Canid_C.UserConstructionScript
struct ABase_Creature_Canid_C_UserConstructionScript_Params
{
};

// Function Base_Creature_Canid.Base_Creature_Canid_C.Timeline_0__FinishedFunc
struct ABase_Creature_Canid_C_Timeline_0__FinishedFunc_Params
{
};

// Function Base_Creature_Canid.Base_Creature_Canid_C.Timeline_0__UpdateFunc
struct ABase_Creature_Canid_C_Timeline_0__UpdateFunc_Params
{
};

// Function Base_Creature_Canid.Base_Creature_Canid_C.ReceiveBeginPlay
struct ABase_Creature_Canid_C_ReceiveBeginPlay_Params
{
};

// Function Base_Creature_Canid.Base_Creature_Canid_C.CombatStateChange
struct ABase_Creature_Canid_C_CombatStateChange_Params
{
	bool                                               bIsInCombat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoring;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_Creature_Canid.Base_Creature_Canid_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_0_OnAddStatusEffect__DelegateSignature
struct ABase_Creature_Canid_C_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_0_OnAddStatusEffect__DelegateSignature_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Base_Creature_Canid.Base_Creature_Canid_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_OnRemoveStatusEffect__DelegateSignature
struct ABase_Creature_Canid_C_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_OnRemoveStatusEffect__DelegateSignature_Params
{
	class UStatusEffectManagerComponent*               Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStatusEffect*                               StatusEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Base_Creature_Canid.Base_Creature_Canid_C.ExecuteUbergraph_Base_Creature_Canid
struct ABase_Creature_Canid_C_ExecuteUbergraph_Base_Creature_Canid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
