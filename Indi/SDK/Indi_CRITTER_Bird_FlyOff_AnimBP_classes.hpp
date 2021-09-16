#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CRITTER_Bird_FlyOff_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CRITTER_Bird_FlyOff_AnimBP.CRITTER_Bird_FlyOff_AnimBP_C
// 0x0449 (0x07C9 - 0x0380)
class UCRITTER_Bird_FlyOff_AnimBP_C : public UReactiveEnvironmentAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x449];                                     // 0x0380(0x0449) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CRITTER_Bird_FlyOff_AnimBP.CRITTER_Bird_FlyOff_AnimBP_C");
		return ptr;
	}


	void STATIC_AnimNotify_RandomIdle();
	void STATIC_ExecuteUbergraph_CRITTER_Bird_FlyOff_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
