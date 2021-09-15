#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ExaminableWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ExaminableWidget_BP.ExaminableWidget_BP_C
// 0x0010 (0x0308 - 0x02F8)
class UExaminableWidget_BP_C : public UExaminableWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExaminableWidget_BP.ExaminableWidget_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
