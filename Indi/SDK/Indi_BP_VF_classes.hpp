#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_VF_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VF.BP_VF_C
// 0x0028 (0x03B0 - 0x0388)
class ABP_VF_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0388(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VF.BP_VF_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_Update();
	void STATIC_ExecuteUbergraph_BP_VF(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
