#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TutorialPopupStyle_Simple_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C
// 0x0038 (0x03E0 - 0x03A8)
class UTutorialPopupStyle_Simple_BP_C : public UTutorialPopupStyleWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetNewBackingMaterialHeight(float* NewHeight);
	void STATIC_FadeInMascotImage();
	void STATIC_ExecuteUbergraph_TutorialPopupStyle_Simple_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
