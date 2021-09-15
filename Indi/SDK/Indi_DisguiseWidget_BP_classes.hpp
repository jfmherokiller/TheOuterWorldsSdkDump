#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DisguiseWidget_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DisguiseWidget_BP.DisguiseWidget_BP_C
// 0x0068 (0x0440 - 0x03D8)
class UDisguiseWidget_BP_C : public UDisguiseMeterWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03D8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DisguiseWidget_BP.DisguiseWidget_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_OnDisguiseBegin();
	void STATIC_OnDisguiseEnd();
	void STATIC_OnDisguiseImageLoaded();
	void STATIC_UpdateDisguiseMeterFill(float* NewValue);
	void STATIC_UpdateDisguiseMeterInnerAnim(int* CurrentFrame);
	void STATIC_ShowDisguiseMeterTip(float* StartTime);
	void STATIC_HideDisguiseMeterTip(float* StartTime);
	void STATIC_ExecuteUbergraph_DisguiseWidget_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
