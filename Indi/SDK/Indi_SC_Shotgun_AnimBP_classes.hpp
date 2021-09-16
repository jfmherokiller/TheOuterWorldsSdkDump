#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_Shotgun_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SC_Shotgun_AnimBP.SC_Shotgun_AnimBP_C
// 0x00B0 (0x0460 - 0x03B0)
class USC_Shotgun_AnimBP_C : public UWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x03B0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SC_Shotgun_AnimBP.SC_Shotgun_AnimBP_C");
		return ptr;
	}


	void STATIC_ExecuteUbergraph_SC_Shotgun_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
