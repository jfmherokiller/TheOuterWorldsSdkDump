#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ButtonWorkbenchHeaderContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C
// 0x0011 (0x0269 - 0x0258)
class UButtonWorkbenchHeaderContainer_BP_C : public UButtonBaseContainerWidget
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0258(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ButtonWorkbenchHeaderContainer_BP.ButtonWorkbenchHeaderContainer_BP_C");
		return ptr;
	}


	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_25_NoParamMCD__DelegateSignature();
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_51_NoParamMCD__DelegateSignature();
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_96_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_132_ButtonEventMCD__DelegateSignature(const struct FButtonEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_157_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_OnActivatableChange(bool* bActivatable);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_ButtonWorkbenchHeaderContainer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
