#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_MID_Creation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MID_Creation.BP_MID_Creation_C
// 0x0100 (0x0488 - 0x0388)
class ABP_MID_Creation_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0388(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MID_Creation.BP_MID_Creation_C");
		return ptr;
	}


	void STATIC_Actor_Param_Adjustment();
	void STATIC_Set_Material_Parameters();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_MID_Param_Set();
	void STATIC_PS_MID_Creation();
	void STATIC_Bind();
	void STATIC_Entered();
	void STATIC_Exited();
	void STATIC_ExecuteUbergraph_BP_MID_Creation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
