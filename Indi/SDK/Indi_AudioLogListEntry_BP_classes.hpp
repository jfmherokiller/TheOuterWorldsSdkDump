#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AudioLogListEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AudioLogListEntry_BP.AudioLogListEntry_BP_C
// 0x0000 (0x0248 - 0x0248)
class UAudioLogListEntry_BP_C : public UAudioLogListEntryWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AudioLogListEntry_BP.AudioLogListEntry_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
