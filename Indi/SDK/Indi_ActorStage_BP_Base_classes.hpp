#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ActorStage_BP_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActorStage_BP_Base.ActorStage_BP_Base_C
// 0x0018 (0x0468 - 0x0450)
class AActorStage_BP_Base_C : public AActorStage
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0450(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActorStage_BP_Base.ActorStage_BP_Base_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
