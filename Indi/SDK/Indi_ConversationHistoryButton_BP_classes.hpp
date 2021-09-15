#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ConversationHistoryButton_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ConversationHistoryButton_BP.ConversationHistoryButton_BP_C
// 0x0000 (0x0B08 - 0x0B08)
class UConversationHistoryButton_BP_C : public UButtonBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConversationHistoryButton_BP.ConversationHistoryButton_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
