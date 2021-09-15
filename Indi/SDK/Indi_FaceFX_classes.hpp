#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_FaceFX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FaceFX.FaceFXAsset
// 0x0000 (0x0030 - 0x0030)
class UFaceFXAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAsset");
		return ptr;
	}

};


// Class FaceFX.FaceFXActor
// 0x0020 (0x0050 - 0x0030)
class UFaceFXActor : public UFaceFXAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXActor");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnim
// 0x00E8 (0x0118 - 0x0030)
class UFaceFXAnim : public UFaceFXAsset
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0030(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnim");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnimationSection
// 0x0060 (0x0148 - 0x00E8)
class UFaceFXAnimationSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00E8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnimationSection");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnimationTrack
// 0x0010 (0x0070 - 0x0060)
class UFaceFXAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnimationTrack");
		return ptr;
	}

};


// Class FaceFX.FaceFXCharacter
// 0x0148 (0x0178 - 0x0030)
class UFaceFXCharacter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0030(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXCharacter");
		return ptr;
	}

};


// Class FaceFX.FaceFXComponent
// 0x0040 (0x0158 - 0x0118)
class UFaceFXComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0118(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXComponent");
		return ptr;
	}


	void STATIC_StopAll();
	bool Stop(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool Setup(class USkeletalMeshComponent* SkelMeshComp, class UActorComponent* AudioComponent, class UFaceFXActor* Asset, bool IsAutoPlaySound, bool IsDisableMorphTargets, bool IsDisableMaterialParameters, class UObject* Caller);
	bool Resume(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool PlayById(const struct FName& Group, const struct FName& AnimName, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
	bool Play(class UFaceFXAnim* Animation, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
	bool Pause(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	void STATIC_OnCharacterPlaybackStopped(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId);
	void STATIC_OnCharacterAudioStart(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId, bool IsAudioStarted, class UActorComponent* AudioComponentStartedOn);
	bool JumpToById(float Position, bool Pause, const struct FName& Group, const struct FName& AnimName, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool JumpTo(float Position, bool Pause, class UFaceFXAnim* Animation, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPlayingAnimation(const struct FFaceFXAnimId& AnimId, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPlaying(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPaused(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
};


// Class FaceFX.FaceFXMatineeControl
// 0x0010 (0x0088 - 0x0078)
class UFaceFXMatineeControl : public UInterpTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXMatineeControl");
		return ptr;
	}

};


// Class FaceFX.FaceFXMatineeControlInst
// 0x0058 (0x0088 - 0x0030)
class UFaceFXMatineeControlInst : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXMatineeControlInst");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
