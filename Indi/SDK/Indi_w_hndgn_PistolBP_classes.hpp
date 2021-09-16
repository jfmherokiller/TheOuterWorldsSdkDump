#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_w_hndgn_PistolBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass w_hndgn_PistolBP.w_hndgn_PistolBP_C
// 0x00B0 (0x0460 - 0x03B0)
class Uw_hndgn_PistolBP_C : public UWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x03B0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass w_hndgn_PistolBP.w_hndgn_PistolBP_C");
		return ptr;
	}


	void STATIC_ExecuteUbergraph_w_hndgn_PistolBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
