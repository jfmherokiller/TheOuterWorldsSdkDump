#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_AreaBeaconEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AreaBeaconEntry_BP.AreaBeaconEntry_BP_C
// 0x0000 (0x0230 - 0x0230)
class UAreaBeaconEntry_BP_C : public UMapAreaBeaconWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AreaBeaconEntry_BP.AreaBeaconEntry_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
