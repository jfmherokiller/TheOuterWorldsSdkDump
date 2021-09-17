#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Cleo_CeilingLight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cleo_CeilingLight.BP_Cleo_CeilingLight_C
// 0x0059 (0x03E1 - 0x0388)
class ABP_Cleo_CeilingLight_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x59];                                      // 0x0388(0x0059) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cleo_CeilingLight.BP_Cleo_CeilingLight_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Cleo_CeilingLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
