#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_CE_Chilled_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_CE_Chilled.XFH_CE_Chilled_C
// 0x001C (0x01D4 - 0x01B8)
class UXFH_CE_Chilled_C : public UMultiStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x01B8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_CE_Chilled.XFH_CE_Chilled_C");
		return ptr;
	}


	void STATIC_ReceiveClearEffect(class AActor** Target);
	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ExecuteUbergraph_XFH_CE_Chilled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
