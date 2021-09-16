#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_FX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_FX.0002_FX_C
// 0x0040 (0x03D0 - 0x0390)
class A0002_FX_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0390(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_FX.0002_FX_C");
		return ptr;
	}


	void STATIC_Fog__FinishedFunc();
	void STATIC_Fog__UpdateFunc();
	void STATIC_Fog_Check_Start(EPhaseOfDay NewPhase);
	void STATIC_Fog_Check();
	void STATIC_Fog_Check_Reverse();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_0002_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
