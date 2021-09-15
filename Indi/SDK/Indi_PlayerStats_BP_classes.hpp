#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerStats_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerStats_BP.PlayerStats_BP_C
// 0x0018 (0x0308 - 0x02F0)
class UPlayerStats_BP_C : public UPlayerStatsWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerStats_BP.PlayerStats_BP_C");
		return ptr;
	}


	void STATIC_Construct();
	void STATIC_SetXPRatio(float* XPRatio);
	void STATIC_ExecuteUbergraph_PlayerStats_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
