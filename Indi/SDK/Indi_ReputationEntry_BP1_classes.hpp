#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ReputationEntry_BP1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ReputationEntry_BP1.ReputationEntry_BP1_C
// 0x0008 (0x02E0 - 0x02D8)
class UReputationEntry_BP1_C : public UReputationEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReputationEntry_BP1.ReputationEntry_BP1_C");
		return ptr;
	}


	void STATIC_SetFocusChanged(bool IsFocused);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_ExecuteUbergraph_ReputationEntry_BP1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
