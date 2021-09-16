#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EVLightSwitch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EVLightSwitch.EVLightSwitch_C
// 0x0088 (0x0410 - 0x0388)
class AEVLightSwitch_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0388(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EVLightSwitch.EVLightSwitch_C");
		return ptr;
	}


	void STATIC_Update();
	void STATIC_UpdateIfSettingsChanged();
	void STATIC_UserConstructionScript();
	void STATIC_Low_Power_Mode();
	void STATIC_High_Power_Mode();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_Normal_Mode__Reset_();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_EVLightSwitch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
