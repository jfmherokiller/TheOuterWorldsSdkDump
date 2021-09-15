#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_LegCripple_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_LegCripple.CE_LegCripple_C
// 0x0028 (0x01E0 - 0x01B8)
class UCE_LegCripple_C : public UMultiStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_LegCripple.CE_LegCripple_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ReceiveClearEffect(class AActor** Target);
	void STATIC_ExecuteUbergraph_CE_LegCripple(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
