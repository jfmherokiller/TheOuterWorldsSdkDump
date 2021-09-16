#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Res_UnderCabinet_Light_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Res_UnderCabinet_Light.BP_Res_UnderCabinet_Light_C
// 0x0011 (0x0399 - 0x0388)
class ABP_Res_UnderCabinet_Light_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0388(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Res_UnderCabinet_Light.BP_Res_UnderCabinet_Light_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
