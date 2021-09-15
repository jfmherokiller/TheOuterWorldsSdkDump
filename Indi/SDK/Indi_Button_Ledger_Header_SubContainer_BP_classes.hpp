#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Button_Ledger_Header_SubContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Button_Ledger_Header_SubContainer_BP.Button_Ledger_Header_SubContainer_BP_C
// 0x0009 (0x0261 - 0x0258)
class UButton_Ledger_Header_SubContainer_BP_C : public UButtonBaseContainerWidget
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0258(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_Ledger_Header_SubContainer_BP.Button_Ledger_Header_SubContainer_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_25_NoParamMCD__DelegateSignature();
	void STATIC_BndEvt__Button_K2Node_ComponentBoundEvent_51_NoParamMCD__DelegateSignature();
	void STATIC_ExecuteUbergraph_Button_Ledger_Header_SubContainer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
