#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SettingsMenuKeyRebind_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C
// 0x0010 (0x0320 - 0x0310)
class USettingsMenuKeyRebind_BP_C : public USettingsMenuKeyRebindWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C");
		return ptr;
	}


	void STATIC_BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void STATIC_ExecuteUbergraph_SettingsMenuKeyRebind_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
