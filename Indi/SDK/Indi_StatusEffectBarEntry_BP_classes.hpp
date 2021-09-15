#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StatusEffectBarEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C
// 0x0020 (0x02E8 - 0x02C8)
class UStatusEffectBarEntry_BP_C : public UStatusEffectBarEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C");
		return ptr;
	}


	void STATIC_AnimateIn();
	void STATIC_ResetWidgetState(float* DesiredRenderOpacity);
	void STATIC_BndEvt__AnimateContentsIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_BndEvt__AnimateContentsOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void STATIC_AnimateOut();
	void STATIC_ExecuteUbergraph_StatusEffectBarEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
