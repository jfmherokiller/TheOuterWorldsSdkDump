#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Lab_DeskLamp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lab_DeskLamp.BP_Lab_DeskLamp_C
// 0x0041 (0x03C9 - 0x0388)
class ABP_Lab_DeskLamp_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x41];                                      // 0x0388(0x0041) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lab_DeskLamp.BP_Lab_DeskLamp_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Lab_DeskLamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
