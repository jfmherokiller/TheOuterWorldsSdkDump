#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_NRay_Pulse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_NRay_Pulse.CE_NRay_Pulse_C
// 0x0008 (0x0218 - 0x0210)
class UCE_NRay_Pulse_C : public UDamageStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_NRay_Pulse.CE_NRay_Pulse_C");
		return ptr;
	}


	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ExecuteUbergraph_CE_NRay_Pulse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
