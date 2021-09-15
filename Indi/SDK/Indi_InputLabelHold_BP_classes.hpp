#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InputLabelHold_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InputLabelHold_BP.InputLabelHold_BP_C
// 0x0020 (0x0380 - 0x0360)
class UInputLabelHold_BP_C : public UInputLabelHoldWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputLabelHold_BP.InputLabelHold_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetRadialFill(float* FillRatio, float* Opacity);
	void STATIC_SetWidth(float* Width);
	void STATIC_ExecuteUbergraph_InputLabelHold_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
