#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PC_Sound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PC_Sound.PC_Sound_C
// 0x0044 (0x042C - 0x03E8)
class UPC_Sound_C : public UIndianaPlayerAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x03E8(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PC_Sound.PC_Sound_C");
		return ptr;
	}


	void STATIC_DebugDrawEmitterVisualization(class UAkComponent* EmitterToVisualize, const struct FVector& ListenerWorldLocation, const struct FLinearColor& DataColor);
	void STATIC_DebugVisualizeEmitters();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_AudioDebug_ShowAmbientEmitters(float MaxVisRange);
	void STATIC_AudioDebug_HideAmbientEmitters();
	void STATIC_AudioDebug_ShowCharacterEmitters(float MaxVisRange);
	void STATIC_AudioDebug_HideCharacterEmitters();
	void STATIC_AudioDebug_SetVisParams(bool ShowEmitterName, bool ShowAssociatedEvent, bool ShowDistance, float MaxVisRange);
	void STATIC_AudioDebug_SetMaxVisRange(float MaxVisRange);
	void STATIC_Cuil(float CuilLevel);
	void STATIC_AudioDebug_SetCharacterDataColor(float R, float G, float B);
	void STATIC_AudioDebug_SetAmbientDataColor(float R, float G, float B);
	void STATIC_ExecuteUbergraph_PC_Sound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
