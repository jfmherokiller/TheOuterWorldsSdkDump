#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SaveLoadDetail_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SaveLoadDetail_BP.SaveLoadDetail_BP_C
// 0x0008 (0x03A8 - 0x03A0)
class USaveLoadDetail_BP_C : public USaveLoadDetailWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SaveLoadDetail_BP.SaveLoadDetail_BP_C");
		return ptr;
	}


	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_ExecuteUbergraph_SaveLoadDetail_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
