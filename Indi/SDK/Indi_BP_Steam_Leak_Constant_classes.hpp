#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Steam_Leak_Constant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Steam_Leak_Constant.BP_Steam_Leak_Constant_C
// 0x0030 (0x03B8 - 0x0388)
class ABP_Steam_Leak_Constant_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0388(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Steam_Leak_Constant.BP_Steam_Leak_Constant_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Steam_Leak_Constant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
