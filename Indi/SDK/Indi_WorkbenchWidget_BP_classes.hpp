#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WorkbenchWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WorkbenchWidget_BP.WorkbenchWidget_BP_C
// 0x0030 (0x0330 - 0x0300)
class UWorkbenchWidget_BP_C : public UWorkbenchWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0300(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WorkbenchWidget_BP.WorkbenchWidget_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
