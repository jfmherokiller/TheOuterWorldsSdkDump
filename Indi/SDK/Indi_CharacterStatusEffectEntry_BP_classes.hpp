#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CharacterStatusEffectEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C
// 0x0008 (0x02D8 - 0x02D0)
class UCharacterStatusEffectEntry_BP_C : public UStatusEffectEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterStatusEffectEntry_BP.CharacterStatusEffectEntry_BP_C");
		return ptr;
	}


	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature();
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_36_NoParamMCD__DelegateSignature();
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_56_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_ExecuteUbergraph_CharacterStatusEffectEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
