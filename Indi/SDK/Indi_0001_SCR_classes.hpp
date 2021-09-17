#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_SCR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0001_SCR.0001_SCR_C
// 0x0048 (0x03D8 - 0x0390)
class A0001_SCR_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0390(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0001_SCR.0001_SCR_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_HandleParvatiAfterReedKilled();
	void STATIC_SetZoeReturned();
	void STATIC_StopSignsOnLowPower();
	void STATIC_ParvatiBarksAboutSpeakingToVicar();
	void STATIC_MakeParvatiBarkAboutSpeakingToVicar();
	void STATIC_ParvatiAfterReedKilled();
	void STATIC_ExecuteUbergraph_0001_SCR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
