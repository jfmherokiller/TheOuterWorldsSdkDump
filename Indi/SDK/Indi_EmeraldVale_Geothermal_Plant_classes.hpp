#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EmeraldVale_Geothermal_Plant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmeraldVale_Geothermal_Plant.EmeraldVale_Geothermal_Plant_C
// 0x0000 (0x0390 - 0x0390)
class AEmeraldVale_Geothermal_Plant_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EmeraldVale_Geothermal_Plant.EmeraldVale_Geothermal_Plant_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
