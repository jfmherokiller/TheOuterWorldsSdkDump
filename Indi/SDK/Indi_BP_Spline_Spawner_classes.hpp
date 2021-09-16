#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Spline_Spawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spline_Spawner.BP_Spline_Spawner_C
// 0x0119 (0x04A1 - 0x0388)
class ABP_Spline_Spawner_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x119];                                     // 0x0388(0x0119) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spline_Spawner.BP_Spline_Spawner_C");
		return ptr;
	}


	void STATIC_Sound_Initialize_Emitters(int SelectedElement, TArray<struct FName>* SFXSocketNames);
	void STATIC_Sort_Socket_Names(TArray<struct FName>* SocketNamesToSort, TArray<struct FName>* VFXSocketNames, TArray<struct FName>* SFXSocketNames);
	void STATIC_Random_Mesh_Selection(bool SpecifyShip, int ShipSlot, int* ArrayElement);
	void STATIC_UserConstructionScript();
	void STATIC_Spline_Traverse__FinishedFunc();
	void STATIC_Spline_Traverse__UpdateFunc();
	void STATIC_Spline_Traverse__Spline_End__EventFunc();
	void STATIC_Spline_Traverse__Spline_Start__EventFunc();
	void STATIC_Spline_Traverse_Mesh__FinishedFunc();
	void STATIC_Spline_Traverse_Mesh__UpdateFunc();
	void STATIC_Spline_Traverse_Mesh__Spline_End__EventFunc();
	void STATIC_Spline_Traverse_Mesh__Spline_Start__EventFunc();
	void STATIC_Level_Spline();
	void STATIC_Stop();
	void STATIC_Trigger();
	void STATIC_ReceiveBeginPlay();
	void STATIC_Trigger_Enter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void STATIC_ExecuteUbergraph_BP_Spline_Spawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
