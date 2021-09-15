#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BeaconTag_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BeaconTag_BP.BeaconTag_BP_C
// 0x0008 (0x0320 - 0x0318)
class UBeaconTag_BP_C : public UBeaconTagWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BeaconTag_BP.BeaconTag_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_ExecuteUbergraph_BeaconTag_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
