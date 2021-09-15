#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Reticle_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Reticle_BP.Reticle_BP_C
// 0x0050 (0x0398 - 0x0348)
class UReticle_BP_C : public UReticleWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0348(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Reticle_BP.Reticle_BP_C");
		return ptr;
	}


	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_ExpandTTDRotator();
	void STATIC_ShrinkTTDRotator();
	void STATIC_SetTTDProgressRatio(float* NewTTDRatio);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_Reticle_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
