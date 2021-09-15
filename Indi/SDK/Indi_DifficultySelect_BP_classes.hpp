#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DifficultySelect_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DifficultySelect_BP.DifficultySelect_BP_C
// 0x0068 (0x0490 - 0x0428)
class UDifficultySelect_BP_C : public UDifficultySelectWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0428(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DifficultySelect_BP.DifficultySelect_BP_C");
		return ptr;
	}


	void STATIC_BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__EasyButton_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__EasyButton_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__EasyButton_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__NormalButton_K2Node_ComponentBoundEvent_4_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__NormalButton_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__NormalButton_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__NormalButton_K2Node_ComponentBoundEvent_7_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__HardButton_K2Node_ComponentBoundEvent_8_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__HardButton_K2Node_ComponentBoundEvent_9_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__HardButton_K2Node_ComponentBoundEvent_10_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__HardButton_K2Node_ComponentBoundEvent_11_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_12_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_13_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_14_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_15_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_OnTransitionToSubtitleComplete();
	void STATIC_OnTransitionToDifficultyComplete();
	void STATIC_StartTransitionToDifficultyFromSubtitle();
	void STATIC_StartTransitionToSubtitleFromDifficulty();
	void STATIC_ExecuteUbergraph_DifficultySelect_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
