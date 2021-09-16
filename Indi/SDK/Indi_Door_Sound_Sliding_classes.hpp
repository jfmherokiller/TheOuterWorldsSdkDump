#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Door_Sound_Sliding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Door_Sound_Sliding.Door_Sound_Sliding_C
// 0x0008 (0x01E0 - 0x01D8)
class UDoor_Sound_Sliding_C : public UOCLAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_Sound_Sliding.Door_Sound_Sliding_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Door_Sound_Sliding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
