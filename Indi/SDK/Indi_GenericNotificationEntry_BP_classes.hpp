#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_GenericNotificationEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GenericNotificationEntry_BP.GenericNotificationEntry_BP_C
// 0x0018 (0x0400 - 0x03E8)
class UGenericNotificationEntry_BP_C : public UGenericNotificationEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericNotificationEntry_BP.GenericNotificationEntry_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_PrepareNewMessage();
	void STATIC_OnFadeOutFinished();
	void STATIC_PrepareNextMessage();
	void STATIC_OnFadeInFinished();
	void STATIC_ExecuteUbergraph_GenericNotificationEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
