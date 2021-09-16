#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Common_CeilingLight_Dim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Common_CeilingLight_Dim.BP_Common_CeilingLight_Dim_C
// 0x0049 (0x03D1 - 0x0388)
class ABP_Common_CeilingLight_Dim_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x49];                                      // 0x0388(0x0049) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Common_CeilingLight_Dim.BP_Common_CeilingLight_Dim_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Common_CeilingLight_Dim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
