#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DialogBoxRespec_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DialogBoxRespec_BP.DialogBoxRespec_BP_C
// 0x0038 (0x03B0 - 0x0378)
class UDialogBoxRespec_BP_C : public UDialogBoxRespecWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0378(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DialogBoxRespec_BP.DialogBoxRespec_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetNewBackingMaterialHeight(float* NewHeight);
	void STATIC_ExecuteUbergraph_DialogBoxRespec_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
