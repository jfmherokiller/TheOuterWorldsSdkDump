#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Bleed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Bleed.CE_Bleed_C
// 0x0008 (0x01C0 - 0x01B8)
class UCE_Bleed_C : public UMultiStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Bleed.CE_Bleed_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ReceiveClearEffect(class AActor** Target);
	void STATIC_ExecuteUbergraph_CE_Bleed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
