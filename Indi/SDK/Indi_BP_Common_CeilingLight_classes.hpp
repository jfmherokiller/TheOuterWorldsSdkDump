#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Common_CeilingLight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Common_CeilingLight.BP_Common_CeilingLight_C
// 0x0039 (0x03C1 - 0x0388)
class ABP_Common_CeilingLight_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x39];                                      // 0x0388(0x0039) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Common_CeilingLight.BP_Common_CeilingLight_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Common_CeilingLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
