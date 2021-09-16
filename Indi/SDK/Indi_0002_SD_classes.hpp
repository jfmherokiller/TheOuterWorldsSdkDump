#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_SD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_SD.0002_SD_C
// 0x0040 (0x03D0 - 0x0390)
class A0002_SD_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0390(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_SD.0002_SD_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_sfx_scr_vicar_max_reading_open();
	void STATIC_sfx_scr_vicar_max_reading_close();
	void STATIC_SFX_Transformer_Query();
	void STATIC_SFX_Failed_Shutdown();
	void STATIC_SFX_Query_Bounties();
	void STATIC_sfx_scr_ev_town_sickhouse_knocking();
	void STATIC_sfx_ui_companion_gained_max();
	void STATIC_sfx_ui_companion_gained_parvati();
	void STATIC_ExecuteUbergraph_0002_SD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
