#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Weaken_PostProcess_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Weaken_PostProcess.CE_Weaken_PostProcess_C
// 0x0508 (0x0710 - 0x0208)
class UCE_Weaken_PostProcess_C : public UPostProcessStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x508];                                     // 0x0208(0x0508) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Weaken_PostProcess.CE_Weaken_PostProcess_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ReceiveClearEffect(class AActor** Target);
	void STATIC_ExecuteUbergraph_CE_Weaken_PostProcess(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
