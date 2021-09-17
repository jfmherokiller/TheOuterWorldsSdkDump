#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Creature_Canid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Creature_Canid.Base_Creature_Canid_C
// 0x0070 (0x1170 - 0x1100)
class ABase_Creature_Canid_C : public ABase_Ai_Character_C
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x1100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Creature_Canid.Base_Creature_Canid_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_Timeline_0__FinishedFunc();
	void STATIC_Timeline_0__UpdateFunc();
	void STATIC_ReceiveBeginPlay();
	void STATIC_CombatStateChange(bool bIsInCombat, bool bRestoring);
	void STATIC_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_0_OnAddStatusEffect__DelegateSignature(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
	void STATIC_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_OnRemoveStatusEffect__DelegateSignature(class UStatusEffectManagerComponent* Sender, class UStatusEffect* StatusEffect);
	void STATIC_ExecuteUbergraph_Base_Creature_Canid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
