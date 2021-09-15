#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Main_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Main.Main_C
// 0x0030 (0x03C0 - 0x0390)
class AMain_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0390(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Main.Main_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ExecuteUbergraph_Main(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
