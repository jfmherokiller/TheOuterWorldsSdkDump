#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemContainer_BP.ItemContainer_BP_C
// 0x0024 (0x0334 - 0x0310)
class UItemContainer_BP_C : public UItemContainerWidget
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0310(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemContainer_BP.ItemContainer_BP_C");
		return ptr;
	}


	bool OnOutro(struct FScriptDelegate* AnimationCompleteCallback);
	bool OnIntro(struct FScriptDelegate* AnimationCompleteCallback);
	void STATIC_Construct();
	void STATIC_OnCancelShutdown();
	void STATIC_ShowContainer();
	void STATIC_HideContainer();
	void STATIC_OnIntroStart();
	void STATIC_OnOutroEnd();
	void STATIC_ExecuteUbergraph_ItemContainer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
