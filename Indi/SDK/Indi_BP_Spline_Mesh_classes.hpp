#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Spline_Mesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spline_Mesh.BP_Spline_Mesh_C
// 0x0104 (0x048C - 0x0388)
class ABP_Spline_Mesh_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x104];                                     // 0x0388(0x0104) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spline_Mesh.BP_Spline_Mesh_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_Lerp_Timeline__FinishedFunc();
	void STATIC_Lerp_Timeline__UpdateFunc();
	void STATIC_Spline_Travers_Timeline__FinishedFunc();
	void STATIC_Spline_Travers_Timeline__UpdateFunc();
	void STATIC_Spline_Travers_Timeline__Spline_End__EventFunc();
	void STATIC_Spline_Travers_Timeline__Spline_Start__EventFunc();
	void STATIC_Timeline_0__FinishedFunc();
	void STATIC_Timeline_0__UpdateFunc();
	void STATIC_Update_Spline();
	void STATIC_Update_Play_Rate();
	void STATIC_Trigger();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Spline_Mesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
