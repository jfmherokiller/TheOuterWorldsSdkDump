#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_IndianaUserWidgetLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndianaUserWidgetLibrary.IndianaUserWidgetLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UIndianaUserWidgetLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndianaUserWidgetLibrary.IndianaUserWidgetLibrary_C");
		return ptr;
	}


	void STATIC_ContinueAnimationWithCallback(class UUserWidget* Target, class UWidgetAnimation* InAnimation, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, const struct FScriptDelegate& Event, class UObject* __WorldContext);
	float GetRelativePlaybackTime(class UUserWidget* UserWidget, class UWidgetAnimation* Animation, TEnumAsByte<EUMGSequencePlayMode> PlayMode, class UObject* __WorldContext);
	void STATIC_PlayAnimationWithCallback(class UUserWidget* UserWidget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_ContinueAnimation(class UUserWidget* Target, class UWidgetAnimation* InAnimation, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
