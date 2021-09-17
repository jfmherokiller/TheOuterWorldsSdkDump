#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Primal_Ravager_Melee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Primal_Ravager_Melee.Primal_Ravager_Melee_C
// 0x0008 (0x05B0 - 0x05A8)
class UPrimal_Ravager_Melee_C : public UWeapon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Primal_Ravager_Melee.Primal_Ravager_Melee_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveActorBeginOverlap(class AActor* OtherActor);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_Primal_Ravager_Melee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
