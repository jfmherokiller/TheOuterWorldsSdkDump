#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Trigger_Volume_Bound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C
// 0x004A (0x03D2 - 0x0388)
class ABP_Trigger_Volume_Bound_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4A];                                      // 0x0388(0x004A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trigger_Volume_Bound.BP_Trigger_Volume_Bound_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void STATIC_Actor_End_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_Actor_Begin_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_Bind();
	void STATIC_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_BndEvt__Box_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void STATIC_ExecuteUbergraph_BP_Trigger_Volume_Bound(int EntryPoint);
	void STATIC_Disp_End_Overlap__DelegateSignature();
	void STATIC_Disp_Begin_Overlap__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
