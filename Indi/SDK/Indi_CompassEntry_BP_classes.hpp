#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompassEntry_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CompassEntry_BP.CompassEntry_BP_C
// 0x001C (0x0264 - 0x0248)
class UCompassEntry_BP_C : public UCompassEntryWidget
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0248(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CompassEntry_BP.CompassEntry_BP_C");
		return ptr;
	}


	void STATIC_SetDistanceValue();
	void STATIC_Construct();
	void STATIC_InitProperties(struct FEntryData* EntryData);
	void STATIC_ExecuteUbergraph_CompassEntry_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
