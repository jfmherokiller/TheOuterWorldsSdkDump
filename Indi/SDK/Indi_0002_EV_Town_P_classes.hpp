#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_EV_Town_P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_EV_Town_P.0002_EV_Town_P_C
// 0x0008 (0x0398 - 0x0390)
class A0002_EV_Town_P_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_EV_Town_P.0002_EV_Town_P_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_0002_EV_Town_P(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
