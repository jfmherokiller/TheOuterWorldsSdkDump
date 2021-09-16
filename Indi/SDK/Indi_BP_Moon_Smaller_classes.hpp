#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Moon_Smaller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Moon_Smaller.BP_Moon_Smaller_C
// 0x0020 (0x03B8 - 0x0398)
class ABP_Moon_Smaller_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0398(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Moon_Smaller.BP_Moon_Smaller_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_Moon_Smaller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
