#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LngGn_BoltRifle_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass LngGn_BoltRifle_AnimBlueprint.LngGn_BoltRifle_AnimBlueprint_C
// 0x00B0 (0x0460 - 0x03B0)
class ULngGn_BoltRifle_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x03B0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LngGn_BoltRifle_AnimBlueprint.LngGn_BoltRifle_AnimBlueprint_C");
		return ptr;
	}


	void STATIC_ExecuteUbergraph_LngGn_BoltRifle_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
