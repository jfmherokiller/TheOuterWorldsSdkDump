#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_LT_TOD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_LT_TOD.0002_LT_TOD_C
// 0x0008 (0x0398 - 0x0390)
class A0002_LT_TOD_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_LT_TOD.0002_LT_TOD_C");
		return ptr;
	}


	void STATIC_Rain_Start();
	void STATIC_Rain_End();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_0002_LT_TOD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
