#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_03_ADA_Speaker_Blueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 03_ADA_Speaker_Blueprint.03_ADA_Speaker_Blueprint_C
// 0x0020 (0x03A8 - 0x0388)
class A03_ADA_Speaker_Blueprint_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 03_ADA_Speaker_Blueprint.03_ADA_Speaker_Blueprint_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
