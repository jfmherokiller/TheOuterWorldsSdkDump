#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InputGuide_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InputGuide_BP.InputGuide_BP_C
// 0x0078 (0x0498 - 0x0420)
class UInputGuide_BP_C : public UInputGuideWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0420(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputGuide_BP.InputGuide_BP_C");
		return ptr;
	}


	void STATIC_InteractChanged(bool* bVisible);
	void STATIC_OnInteractionProgressChange(float* CurrentProgressRatio);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_InputGuide_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
