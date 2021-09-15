#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Chilled_PostProcess_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Chilled_PostProcess.CE_Chilled_PostProcess_C
// 0x0008 (0x0210 - 0x0208)
class UCE_Chilled_PostProcess_C : public UPostProcessStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Chilled_PostProcess.CE_Chilled_PostProcess_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ExecuteUbergraph_CE_Chilled_PostProcess(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
