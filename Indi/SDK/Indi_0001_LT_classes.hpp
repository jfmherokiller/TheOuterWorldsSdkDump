#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_LT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0001_LT.0001_LT_C
// 0x0040 (0x03D0 - 0x0390)
class A0001_LT_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0390(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0001_LT.0001_LT_C");
		return ptr;
	}


	void STATIC_HandleEdgewaterLightingChanges();
	void STATIC_HandleBotanicalLabLightingChanges();
	void STATIC_WeatherEnable();
	void STATIC_ReceiveBeginPlay();
	void STATIC_WeatherStop();
	void STATIC_ExecuteUbergraph_0001_LT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
