#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_TTDScanner_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TTDScanner_BP.TTDScanner_BP_C
// 0x0028 (0x0390 - 0x0368)
class UTTDScanner_BP_C : public UTTDEnemyScanner
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0368(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TTDScanner_BP.TTDScanner_BP_C");
		return ptr;
	}


	void STATIC_OnFactionImageLoaded();
	void STATIC_OnMakeVisible();
	void STATIC_OnMakeInvisible();
	void STATIC_BndEvt__FadeOutContents_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_StopFactionImageAnimation();
	void STATIC_ExecuteUbergraph_TTDScanner_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
