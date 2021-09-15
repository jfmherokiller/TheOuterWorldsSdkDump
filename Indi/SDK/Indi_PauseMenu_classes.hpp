#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PauseMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PauseMenu.PauseMenu_C
// 0x0048 (0x0360 - 0x0318)
class UPauseMenu_C : public UPauseMenuWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0318(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PauseMenu.PauseMenu_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_PauseMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
