#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Table_Tungsten_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Table_Tungsten.BP_Table_Tungsten_C
// 0x0031 (0x03B9 - 0x0388)
class ABP_Table_Tungsten_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x31];                                      // 0x0388(0x0031) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Table_Tungsten.BP_Table_Tungsten_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
