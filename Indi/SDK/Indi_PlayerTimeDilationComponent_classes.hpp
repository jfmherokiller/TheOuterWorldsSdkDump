#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PlayerTimeDilationComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerTimeDilationComponent.PlayerTimeDilationComponent_C
// 0x0501 (0x06C1 - 0x01C0)
class UPlayerTimeDilationComponent_C : public UTimeDilationComponent
{
public:
	unsigned char                                      UnknownData00[0x501];                                     // 0x01C0(0x0501) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerTimeDilationComponent.PlayerTimeDilationComponent_C");
		return ptr;
	}


	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_OnTimeDilationEnd();
	void STATIC_TTD_Start();
	void STATIC_ReceiveBeginPlay();
	void STATIC_TTD_End(float Duration);
	void STATIC_ExecuteUbergraph_PlayerTimeDilationComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
