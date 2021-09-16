#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LockerContainer_A_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LockerContainer_A_BP.LockerContainer_A_BP_C
// 0x0010 (0x0638 - 0x0628)
class ALockerContainer_A_BP_C : public ASimpleContainer_BP_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0628(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LockerContainer_A_BP.LockerContainer_A_BP_C");
		return ptr;
	}


	void STATIC_GetLightingConfig(class UStaticMeshComponent** Mesh, struct FName* MaterialSlot);
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
