#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_LT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_LT.0002_LT_C
// 0x0010 (0x03A0 - 0x0390)
class A0002_LT_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_LT.0002_LT_C");
		return ptr;
	}


	void STATIC_HandleLightingChanges();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_0002_LT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
