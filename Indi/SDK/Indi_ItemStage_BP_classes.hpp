#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemStage_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ItemStage_BP.ItemStage_BP_C
// 0x0038 (0x04A0 - 0x0468)
class AItemStage_BP_C : public AActorStage_BP_Base_C
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0468(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ItemStage_BP.ItemStage_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
