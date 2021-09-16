#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Switch_Sound_Elevator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Switch_Sound_Elevator.Switch_Sound_Elevator_C
// 0x0008 (0x01E0 - 0x01D8)
class USwitch_Sound_Elevator_C : public USwitchAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Switch_Sound_Elevator.Switch_Sound_Elevator_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Switch_Sound_Elevator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
