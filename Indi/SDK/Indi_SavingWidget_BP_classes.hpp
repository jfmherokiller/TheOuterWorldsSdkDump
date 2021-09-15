#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SavingWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SavingWidget_BP.SavingWidget_BP_C
// 0x0028 (0x02F0 - 0x02C8)
class USavingWidget_BP_C : public USavingWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SavingWidget_BP.SavingWidget_BP_C");
		return ptr;
	}


	bool OnMinimize(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnMaximize(struct FScriptDelegate* AnimationCompleteCallback);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
