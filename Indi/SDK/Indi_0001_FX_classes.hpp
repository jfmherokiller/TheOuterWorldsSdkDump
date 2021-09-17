#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_FX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0001_FX.0001_FX_C
// 0x0048 (0x03D8 - 0x0390)
class A0001_FX_C : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0390(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0001_FX.0001_FX_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_Activate_Ash(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_Deactivate_Ash(class AActor* OverlappedActor, class AActor* OtherActor);
	void STATIC_ExecuteUbergraph_0001_FX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
