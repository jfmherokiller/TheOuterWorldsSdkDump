#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DeathMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DeathMenu.DeathMenu_C
// 0x0040 (0x0348 - 0x0308)
class UDeathMenu_C : public UDeathMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0308(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeathMenu.DeathMenu_C");
		return ptr;
	}


	void STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_DeathMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
