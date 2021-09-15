#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_NewSave_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass NewSave_BP.NewSave_BP_C
// 0x0010 (0x0240 - 0x0230)
class UNewSave_BP_C : public UNewSaveWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewSave_BP.NewSave_BP_C");
		return ptr;
	}


	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_ExecuteUbergraph_NewSave_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
