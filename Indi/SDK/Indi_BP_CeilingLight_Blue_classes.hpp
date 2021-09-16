#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_CeilingLight_Blue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CeilingLight_Blue.BP_CeilingLight_Blue_C
// 0x0081 (0x0409 - 0x0388)
class ABP_CeilingLight_Blue_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x81];                                      // 0x0388(0x0081) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CeilingLight_Blue.BP_CeilingLight_Blue_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_CeilingLight_Blue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
