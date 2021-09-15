#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CinematicPlayer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CinematicPlayer_BP.CinematicPlayer_BP_C
// 0x0010 (0x0300 - 0x02F0)
class UCinematicPlayer_BP_C : public UCinematicPlayerWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CinematicPlayer_BP.CinematicPlayer_BP_C");
		return ptr;
	}


	void STATIC_InitiateFadeIn();
	void STATIC_InitiateFadeOut();
	void STATIC_ExecuteUbergraph_CinematicPlayer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
