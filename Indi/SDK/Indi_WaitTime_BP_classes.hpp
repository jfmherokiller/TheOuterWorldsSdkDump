#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_WaitTime_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WaitTime_BP.WaitTime_BP_C
// 0x0010 (0x0358 - 0x0348)
class UWaitTime_BP_C : public UWaitTimeWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0348(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WaitTime_BP.WaitTime_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
