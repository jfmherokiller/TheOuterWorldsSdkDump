#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Tinkering_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Tinkering_BP.Tinkering_BP_C
// 0x0030 (0x0378 - 0x0348)
class UTinkering_BP_C : public UTinkeringWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0348(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Tinkering_BP.Tinkering_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetNewBackingMaterialHeight(float* NewHeight);
	void STATIC_ExecuteUbergraph_Tinkering_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
