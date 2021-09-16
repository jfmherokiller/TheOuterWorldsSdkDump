#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Parvati_Comp_Female_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Parvati_Comp_Female.Parvati_Comp_Female_C
// 0x0008 (0x1140 - 0x1138)
class AParvati_Comp_Female_C : public ABase_Companion_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parvati_Comp_Female.Parvati_Comp_Female_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_DEATH_PARVATI(class AActor* Instigator, const struct FCauseDamageInfo& CauseDamageInfo);
	void STATIC_OnCompanionDismissed_Event_1(bool bCompanionDied);
	void STATIC_ExecuteUbergraph_Parvati_Comp_Female(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
