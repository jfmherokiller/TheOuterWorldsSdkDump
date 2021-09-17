#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_SplineEmitter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SplineEmitter.BP_SplineEmitter_C
// 0x002D (0x03B5 - 0x0388)
class ABP_SplineEmitter_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D];                                      // 0x0388(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplineEmitter.BP_SplineEmitter_C");
		return ptr;
	}


	void STATIC_SmoothEmitterJump(const struct FVector& NewEmitterWorldLocation, float DeltaTime, float SmoothSpeed, struct FVector* SmoothedEmitterWorldLocation);
	void STATIC_GetEmitterLocationDeltaLength(const struct FVector& NewEmitterWorldLocation, float* EmitterWorldLocationDeltaLength);
	void STATIC_GetPlayerWorldLocation(struct FVector* PlayerWorldLocation);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_SplineEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
