#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Imp_TossballStick_Weapon_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Imp_TossballStick_Weapon_Base.Imp_TossballStick_Weapon_Base_C
// 0x0008 (0x05B0 - 0x05A8)
class UImp_TossballStick_Weapon_Base_C : public UWeapon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Imp_TossballStick_Weapon_Base.Imp_TossballStick_Weapon_Base_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveActorBeginOverlap(class AActor* OtherActor);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_ExecuteUbergraph_Imp_TossballStick_Weapon_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
