#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComTower_Holo_BP_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ComTower_Holo_BP_B.ComTower_Holo_BP_B_C
// 0x001C (0x03A4 - 0x0388)
class AComTower_Holo_BP_B_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0388(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ComTower_Holo_BP_B.ComTower_Holo_BP_B_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ExecuteUbergraph_ComTower_Holo_BP_B(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
