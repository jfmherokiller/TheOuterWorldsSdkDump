#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SentrySabre_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SentrySabre_AnimBP.SentrySabre_AnimBP_C
// 0x00B0 (0x0460 - 0x03B0)
class USentrySabre_AnimBP_C : public UWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x03B0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SentrySabre_AnimBP.SentrySabre_AnimBP_C");
		return ptr;
	}


	void STATIC_ExecuteUbergraph_SentrySabre_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
