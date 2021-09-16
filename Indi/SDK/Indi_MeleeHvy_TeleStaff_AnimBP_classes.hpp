#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MeleeHvy_TeleStaff_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MeleeHvy_TeleStaff_AnimBP.MeleeHvy_TeleStaff_AnimBP_C
// 0x0150 (0x0500 - 0x03B0)
class UMeleeHvy_TeleStaff_AnimBP_C : public UWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x03B0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MeleeHvy_TeleStaff_AnimBP.MeleeHvy_TeleStaff_AnimBP_C");
		return ptr;
	}


	void STATIC_ExecuteUbergraph_MeleeHvy_TeleStaff_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
