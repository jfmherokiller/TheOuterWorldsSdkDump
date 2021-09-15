#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_MoviePlayer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MoviePlayer_BP.MoviePlayer_BP_C
// 0x0020 (0x0330 - 0x0310)
class UMoviePlayer_BP_C : public UMoviePlayerWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0310(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MoviePlayer_BP.MoviePlayer_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_InitiateFadeIn();
	void STATIC_InitiateFadeOut();
	void STATIC_ExecuteUbergraph_MoviePlayer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
