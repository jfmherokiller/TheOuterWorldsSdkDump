#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_StackSplitting_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StackSplitting_BP.StackSplitting_BP_C
// 0x0040 (0x04B0 - 0x0470)
class UStackSplitting_BP_C : public UStackSplittingWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0470(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackSplitting_BP.StackSplitting_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetNewBackingMaterialHeight(float* NewHeight);
	void STATIC_ExecuteUbergraph_StackSplitting_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
