#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_OuterWalls_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_OuterWalls.0002_OuterWalls_C
// 0x0038 (0x03C8 - 0x0390)
class A0002_OuterWalls_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0390(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_OuterWalls.0002_OuterWalls_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_StopSignsOnLowPower();
	void STATIC_ExecuteUbergraph_0002_OuterWalls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
