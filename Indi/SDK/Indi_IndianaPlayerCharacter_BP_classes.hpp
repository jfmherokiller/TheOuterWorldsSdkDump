#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaPlayerCharacter_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C
// 0x00D8 (0x1A48 - 0x1970)
class AIndianaPlayerCharacter_BP_C : public AIndianaPlayerCharacter
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x1970(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndianaPlayerCharacter_BP.IndianaPlayerCharacter_BP_C");
		return ptr;
	}


	void STATIC_CheckVodka();
	void STATIC_UserConstructionScript();
	void STATIC_BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature(const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_BndEvt__PlayerHealth_K2Node_ComponentBoundEvent_2_NewStateOfBeingEvent__DelegateSignature(EStateOfBeing NewStateOfBeing, EStateOfBeing OldStateOfBeing);
	void STATIC_PP_Update();
	void STATIC_MPC_Update();
	void STATIC_OnPlayerStealthEnteredBP();
	void STATIC_OnPlayerStealthExitedBP();
	void STATIC_OnPlayerSoftCoverEnteredBP();
	void STATIC_OnPlayerSoftCoverExitedBP();
	void STATIC_Stealth();
	void STATIC_Stealth_Exit();
	void STATIC_ReceiveBeginPlay();
	void STATIC_PlayerCinematicChange(bool bCinematicMode);
	void STATIC_ItemAcquired(const struct FItemStack& Item);
	void STATIC_VodkaItemBind();
	void STATIC_ExecuteUbergraph_IndianaPlayerCharacter_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
