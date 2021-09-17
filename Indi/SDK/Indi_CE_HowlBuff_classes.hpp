#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_HowlBuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_HowlBuff.CE_HowlBuff_C
// 0x0008 (0x01C0 - 0x01B8)
class UCE_HowlBuff_C : public UMultiStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_HowlBuff.CE_HowlBuff_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ExecuteUbergraph_CE_HowlBuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
