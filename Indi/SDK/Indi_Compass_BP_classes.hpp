#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Compass_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Compass_BP.Compass_BP_C
// 0x0028 (0x10C0 - 0x1098)
class UCompass_BP_C : public UCompassWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x1098(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Compass_BP.Compass_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_ExecuteUbergraph_Compass_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
