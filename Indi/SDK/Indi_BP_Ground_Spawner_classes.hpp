#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Ground_Spawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ground_Spawner.BP_Ground_Spawner_C
// 0x0040 (0x03C8 - 0x0388)
class ABP_Ground_Spawner_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0388(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ground_Spawner.BP_Ground_Spawner_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Ground_Spawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
