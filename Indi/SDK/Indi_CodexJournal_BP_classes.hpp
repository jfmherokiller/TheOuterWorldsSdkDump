#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CodexJournal_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CodexJournal_BP.CodexJournal_BP_C
// 0x0018 (0x0388 - 0x0370)
class UCodexJournal_BP_C : public UCodexJournal
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CodexJournal_BP.CodexJournal_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
