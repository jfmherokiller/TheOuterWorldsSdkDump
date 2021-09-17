#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_SD_Sub_13_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0001_SD_Sub_13.0001_SD_Sub_C
// 0x0010 (0x03A0 - 0x0390)
class A0001_SD_Sub_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0001_SD_Sub_13.0001_SD_Sub_C");
		return ptr;
	}


	void STATIC_ShipPowerOn();
	void STATIC_SFX_Print_Captain_Cartridge();
	void STATIC_ExecuteUbergraph_0001_SD_Sub_13(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
