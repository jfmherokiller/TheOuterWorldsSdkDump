#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ElevatorBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElevatorBase_BP.ElevatorBase_BP_C
// 0x0018 (0x04C8 - 0x04B0)
class AElevatorBase_BP_C : public AElevator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorBase_BP.ElevatorBase_BP_C");
		return ptr;
	}


	void STATIC_IsOnGround(bool* OnGround);
	void STATIC_UserConstructionScript();
	void STATIC_PlayStartAudio();
	void STATIC_PlayStopAudio();
	void STATIC_OnElevatorMoveStart_Event_1(int DestinationFloor, bool FromStationary);
	void STATIC_OnElevatorMoveEnd_Event_1(int DestinationFloor);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_ElevatorBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
