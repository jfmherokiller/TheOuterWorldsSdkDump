#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Elevator_A_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Elevator_A_BP.Elevator_A_BP_C
// 0x0010 (0x0540 - 0x0530)
class AElevator_A_BP_C : public AElevator_BP_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0530(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Elevator_A_BP.Elevator_A_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
