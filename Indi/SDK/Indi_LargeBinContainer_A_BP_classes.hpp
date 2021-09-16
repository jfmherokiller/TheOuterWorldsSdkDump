#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_LargeBinContainer_A_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LargeBinContainer_A_BP.LargeBinContainer_A_BP_C
// 0x0000 (0x0628 - 0x0628)
class ALargeBinContainer_A_BP_C : public ASimpleContainer_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LargeBinContainer_A_BP.LargeBinContainer_A_BP_C");
		return ptr;
	}


	void STATIC_GetLightingConfig(class UStaticMeshComponent** Mesh, struct FName* MaterialSlot);
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
