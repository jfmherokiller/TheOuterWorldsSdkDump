#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Elevator_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Elevator_BP.Elevator_BP_C
// 0x0068 (0x0530 - 0x04C8)
class AElevator_BP_C : public AElevatorBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x04C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Elevator_BP.Elevator_BP_C");
		return ptr;
	}


	void STATIC_CheckCurrentState();
	void STATIC_UserConstructionScript();
	void STATIC_Timeline_0__FinishedFunc();
	void STATIC_Timeline_0__UpdateFunc();
	void STATIC_Timeline_1__FinishedFunc();
	void STATIC_Timeline_1__UpdateFunc();
	void STATIC_ReceiveBeginPlay();
	void STATIC_StopGearAnimation();
	void STATIC_ForwardGearAnimation();
	void STATIC_ReverseGearAnimation();
	void STATIC_OnElevatorMoveStart_Event_1(int* DestinationFloor, bool* FromStationary);
	void STATIC_OnElevatorMoveEnd_Event_1(int* DestinationFloor);
	void STATIC_ExecuteUbergraph_Elevator_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
