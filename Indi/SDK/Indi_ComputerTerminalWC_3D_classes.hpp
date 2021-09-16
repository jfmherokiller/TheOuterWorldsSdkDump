#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComputerTerminalWC_3D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ComputerTerminalWC_3D.ComputerTerminalWC_3D_C
// 0x0000 (0x0780 - 0x0780)
class UComputerTerminalWC_3D_C : public UComputerTerminalWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ComputerTerminalWC_3D.ComputerTerminalWC_3D_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
