#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Fill_Volume_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Fill_Volume.BP_Fill_Volume_C
// 0x0064 (0x03EC - 0x0388)
class ABP_Fill_Volume_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0388(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fill_Volume.BP_Fill_Volume_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
