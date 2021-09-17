#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VideoScreen_ShipAI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VideoScreen_ShipAI.VideoScreen_ShipAI_C
// 0x0130 (0x0510 - 0x03E0)
class UVideoScreen_ShipAI_C : public UConversationInstance
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x03E0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VideoScreen_ShipAI.VideoScreen_ShipAI_C");
		return ptr;
	}


	void STATIC_Play_Screen_Off();
	void STATIC_Play_Screen_On();
	bool ConversationNodeChanged(class AActor** Character, class AActor** Camera, class AActor** Audio, int* NodeID);
	bool ConversationEnded(struct FGuid* Guid);
	bool ConversationStarted(class AActor** Speaker, struct FGuid* Guid, int* NodeID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
