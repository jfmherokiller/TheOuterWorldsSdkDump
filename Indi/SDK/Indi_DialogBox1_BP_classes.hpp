#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DialogBox1_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DialogBox1_BP.DialogBox1_BP_C
// 0x0030 (0x0390 - 0x0360)
class UDialogBox1_BP_C : public UDialogBoxWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DialogBox1_BP.DialogBox1_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetNewBackingMaterialHeight(float* NewHeight);
	void STATIC_ExecuteUbergraph_DialogBox1_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
