#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_ENV_RES_Wallsconse_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ENV_RES_Wallsconse_01.BP_ENV_RES_Wallsconse_01_C
// 0x000A (0x03A2 - 0x0398)
class ABP_ENV_RES_Wallsconse_01_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0xA];                                       // 0x0398(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ENV_RES_Wallsconse_01.BP_ENV_RES_Wallsconse_01_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
