#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DialogBoxKeybind_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DialogBoxKeybind_BP.DialogBoxKeybind_BP_C
// 0x0030 (0x0368 - 0x0338)
class UDialogBoxKeybind_BP_C : public UKeybindDialogBoxWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0338(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DialogBoxKeybind_BP.DialogBoxKeybind_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetNewBackingMaterialHeight(float* NewHeight);
	void STATIC_ExecuteUbergraph_DialogBoxKeybind_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
