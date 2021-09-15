#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComputerTerminal_DefaultHeader_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C
// 0x0010 (0x0398 - 0x0388)
class UComputerTerminal_DefaultHeader_BP_C : public UComputerTerminalHeaderWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ComputerTerminal_DefaultHeader_BP.ComputerTerminal_DefaultHeader_BP_C");
		return ptr;
	}


	void STATIC_FadeInLogoImage();
	void STATIC_ExecuteUbergraph_ComputerTerminal_DefaultHeader_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
