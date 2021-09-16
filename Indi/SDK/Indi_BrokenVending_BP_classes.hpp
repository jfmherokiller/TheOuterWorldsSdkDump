#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BrokenVending_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BrokenVending_BP.BrokenVending_BP_C
// 0x00A0 (0x0428 - 0x0388)
class ABrokenVending_BP_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0388(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BrokenVending_BP.BrokenVending_BP_C");
		return ptr;
	}


	void STATIC_ApplyLight();
	void STATIC_GetLightingConfig(class UStaticMeshComponent** Mesh, struct FName* MaterialSlot);
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
