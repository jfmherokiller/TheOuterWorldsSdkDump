#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Blinding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Blinding.CE_Blinding_C
// 0x0018 (0x01D0 - 0x01B8)
class UCE_Blinding_C : public UMultiStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Blinding.CE_Blinding_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ReceiveClearEffect(class AActor** Target);
	void STATIC_ExecuteUbergraph_CE_Blinding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
