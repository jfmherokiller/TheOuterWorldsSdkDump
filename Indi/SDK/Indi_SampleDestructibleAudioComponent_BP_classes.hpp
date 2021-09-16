#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SampleDestructibleAudioComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SampleDestructibleAudioComponent_BP.SampleDestructibleAudioComponent_BP_C
// 0x0000 (0x01D8 - 0x01D8)
class USampleDestructibleAudioComponent_BP_C : public UDestructibleAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SampleDestructibleAudioComponent_BP.SampleDestructibleAudioComponent_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
