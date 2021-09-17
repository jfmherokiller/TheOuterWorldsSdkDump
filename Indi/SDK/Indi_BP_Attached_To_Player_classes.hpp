#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Attached_To_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Attached_To_Player.BP_Attached_To_Player_C
// 0x0100 (0x0488 - 0x0388)
class ABP_Attached_To_Player_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0388(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Attached_To_Player.BP_Attached_To_Player_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_Begin_Overlap_Entrance(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_Begin_Overlap_Exit(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_Begin_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_End_Overlap_Container(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void STATIC_Activate();
	void STATIC_Bind();
	void STATIC_Entered();
	void STATIC_Exited();
	void STATIC_Grab_Triggers_Event();
	void STATIC_ExecuteUbergraph_BP_Attached_To_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
