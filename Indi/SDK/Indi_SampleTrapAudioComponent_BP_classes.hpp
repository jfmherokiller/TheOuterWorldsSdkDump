#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SampleTrapAudioComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SampleTrapAudioComponent_BP.SampleTrapAudioComponent_BP_C
// 0x0000 (0x01D8 - 0x01D8)
class USampleTrapAudioComponent_BP_C : public UTrapAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SampleTrapAudioComponent_BP.SampleTrapAudioComponent_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
