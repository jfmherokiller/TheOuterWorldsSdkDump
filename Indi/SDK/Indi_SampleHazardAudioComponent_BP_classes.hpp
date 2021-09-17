#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SampleHazardAudioComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SampleHazardAudioComponent_BP.SampleHazardAudioComponent_BP_C
// 0x0000 (0x01D8 - 0x01D8)
class USampleHazardAudioComponent_BP_C : public UHazardAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SampleHazardAudioComponent_BP.SampleHazardAudioComponent_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
