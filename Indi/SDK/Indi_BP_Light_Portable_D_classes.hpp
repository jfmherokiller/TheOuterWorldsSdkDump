#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Light_Portable_D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Light_Portable_D.BP_Light_Portable_D_C
// 0x0009 (0x0391 - 0x0388)
class ABP_Light_Portable_D_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0388(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Light_Portable_D.BP_Light_Portable_D_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
