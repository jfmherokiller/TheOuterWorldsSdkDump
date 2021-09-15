#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_NRay_Pulse_Visual_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_NRay_Pulse_Visual.CE_NRay_Pulse_Visual_C
// 0x0008 (0x0190 - 0x0188)
class UCE_NRay_Pulse_Visual_C : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_NRay_Pulse_Visual.CE_NRay_Pulse_Visual_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ExecuteUbergraph_CE_NRay_Pulse_Visual(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
