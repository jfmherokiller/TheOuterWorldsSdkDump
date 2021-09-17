#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Ex_0022_LP_Ship_SCR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ex_0022_LP_Ship_SCR.Ex_0022_LP_Ship_SCR_C
// 0x0008 (0x0398 - 0x0390)
class AEx_0022_LP_Ship_SCR_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ex_0022_LP_Ship_SCR.Ex_0022_LP_Ship_SCR_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_Ex_0022_LP_Ship_SCR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
