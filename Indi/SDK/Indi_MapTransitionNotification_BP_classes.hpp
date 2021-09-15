#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MapTransitionNotification_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapTransitionNotification_BP.MapTransitionNotification_BP_C
// 0x0010 (0x02D0 - 0x02C0)
class UMapTransitionNotification_BP_C : public UMapTransitionNotification
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapTransitionNotification_BP.MapTransitionNotification_BP_C");
		return ptr;
	}


	void STATIC_StartAnimation();
	void STATIC_ExecuteUbergraph_MapTransitionNotification_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
