#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Stagger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Stagger.CE_Stagger_C
// 0x0048 (0x0200 - 0x01B8)
class UCE_Stagger_C : public UMultiStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Stagger.CE_Stagger_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ReceiveClearEffect(class AActor** Target);
	void STATIC_ExecuteUbergraph_CE_Stagger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
