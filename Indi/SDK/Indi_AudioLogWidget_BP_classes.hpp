#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AudioLogWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AudioLogWidget_BP.AudioLogWidget_BP_C
// 0x0018 (0x0358 - 0x0340)
class UAudioLogWidget_BP_C : public UAudioLogWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0340(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AudioLogWidget_BP.AudioLogWidget_BP_C");
		return ptr;
	}


	void STATIC_ShowAudioLog(bool* bShow, float* CurrentRenderOpacity);
	void STATIC_ExecuteUbergraph_AudioLogWidget_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
