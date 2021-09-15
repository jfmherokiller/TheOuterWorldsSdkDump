#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_RenderThreadLoadingScreen_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass RenderThreadLoadingScreen_BP.RenderThreadLoadingScreen_BP_C
// 0x0008 (0x03E8 - 0x03E0)
class URenderThreadLoadingScreen_BP_C : public URenderThreadLoadingScreenWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RenderThreadLoadingScreen_BP.RenderThreadLoadingScreen_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
