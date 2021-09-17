#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Wall_TungstenBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wall_TungstenBase.BP_Wall_TungstenBase_C
// 0x0051 (0x03D9 - 0x0388)
class ABP_Wall_TungstenBase_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x51];                                      // 0x0388(0x0051) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wall_TungstenBase.BP_Wall_TungstenBase_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Wall_TungstenBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
