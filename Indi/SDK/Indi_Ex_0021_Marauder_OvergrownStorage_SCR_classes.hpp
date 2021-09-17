#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0021_Marauder_OvergrownStorage_SCR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ex_0021_Marauder_OvergrownStorage_SCR.Ex_0021_Marauder_OvergrownStorage_SCR_C
// 0x0018 (0x03A8 - 0x0390)
class AEx_0021_Marauder_OvergrownStorage_SCR_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0390(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ex_0021_Marauder_OvergrownStorage_SCR.Ex_0021_Marauder_OvergrownStorage_SCR_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_BndEvt__Enc_MarauderCamp_Crates_K2Node_ActorBoundEvent_1_EncounterActorCombatChanged__DelegateSignature(class AActor* Actor, bool bInCombat, bool bRestoring);
	void STATIC_HandleBertieSpawning();
	void STATIC_BndEvt__SQ_0003_BountiedMarauder03_1822_K2Node_ActorBoundEvent_0_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item);
	void STATIC_ExecuteUbergraph_Ex_0021_Marauder_OvergrownStorage_SCR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
