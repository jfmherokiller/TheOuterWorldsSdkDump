#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CharacterStage_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterStage_BP.CharacterStage_BP_C
// 0x0040 (0x04A8 - 0x0468)
class ACharacterStage_BP_C : public AActorStage_BP_Base_C
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0468(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterStage_BP.CharacterStage_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
