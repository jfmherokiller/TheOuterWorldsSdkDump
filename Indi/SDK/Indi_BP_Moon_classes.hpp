#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Moon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Moon.BP_Moon_C
// 0x0028 (0x03C0 - 0x0398)
class ABP_Moon_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0398(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Moon.BP_Moon_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ExecuteUbergraph_BP_Moon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
