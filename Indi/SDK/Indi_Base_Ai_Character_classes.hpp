#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Ai_Character_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Ai_Character.Base_Ai_Character_C
// 0x0050 (0x1100 - 0x10B0)
class ABase_Ai_Character_C : public AIndianaAiCharacter
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x10B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Ai_Character.Base_Ai_Character_C");
		return ptr;
	}


	void STATIC_SetEmotion(EEmotion NewEmotion);
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Base_Ai_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
