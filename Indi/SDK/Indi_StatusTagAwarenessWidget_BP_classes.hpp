#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatusTagAwarenessWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C
// 0x0010 (0x0380 - 0x0370)
class UStatusTagAwarenessWidget_BP_C : public UStatusTagAwarenessWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusTagAwarenessWidget_BP.StatusTagAwarenessWidget_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetTextures(class UTexture2D** BackingTexture, class UTexture2D** FillTexture);
	void STATIC_ExecuteUbergraph_StatusTagAwarenessWidget_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
