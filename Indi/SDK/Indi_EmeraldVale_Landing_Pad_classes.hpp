#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EmeraldVale_Landing_Pad_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmeraldVale_Landing_Pad.EmeraldVale_Landing_Pad_C
// 0x0000 (0x0390 - 0x0390)
class AEmeraldVale_Landing_Pad_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EmeraldVale_Landing_Pad.EmeraldVale_Landing_Pad_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
