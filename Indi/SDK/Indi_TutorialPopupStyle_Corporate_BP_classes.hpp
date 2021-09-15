#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TutorialPopupStyle_Corporate_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TutorialPopupStyle_Corporate_BP.TutorialPopupStyle_Corporate_BP_C
// 0x0060 (0x0408 - 0x03A8)
class UTutorialPopupStyle_Corporate_BP_C : public UTutorialPopupStyleWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03A8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialPopupStyle_Corporate_BP.TutorialPopupStyle_Corporate_BP_C");
		return ptr;
	}


	void STATIC_SetNewBackingMaterialHeight(float* NewHeight);
	void STATIC_Construct();
	void STATIC_FadeInMascotImage();
	void STATIC_ExecuteUbergraph_TutorialPopupStyle_Corporate_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
