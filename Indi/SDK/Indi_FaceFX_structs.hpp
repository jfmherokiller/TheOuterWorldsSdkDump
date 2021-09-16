#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"
#include "Indi_Engine_classes.hpp"
#include "Indi_CoreUObject_classes.hpp"
#include "Indi_MovieScene_classes.hpp"
#include "Indi_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FaceFX.EFaceFXTargetPlatform
enum class EFaceFXTargetPlatform : uint8_t
{
	PC                             = 0,
	PS4                            = 1,
	XBoxOne                        = 2,
	Switch                         = 3,
	MAX                            = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FaceFX.FaceFXIdData
// 0x0010
struct FFaceFXIdData
{
	uint64_t                                           ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXActorData
// 0x0080
struct FFaceFXActorData
{
	TArray<unsigned char>                              ActorRawData;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              BonesRawData;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FFaceFXIdData>                       Ids;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0010(0x0070) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXAnimData
// 0x0010
struct FFaceFXAnimData
{
	TArray<unsigned char>                              RawData;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FaceFX.FaceFXAnimId
// 0x0010
struct FFaceFXAnimId
{
	struct FName                                       Group;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXSkelMeshComponentId
// 0x0010
struct FFaceFXSkelMeshComponentId
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXEntry
// 0x0048
struct FFaceFXEntry
{
	class USkeletalMeshComponent*                      SkelMeshComp;                                             // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorComponent*                             AudioComp;                                                // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TSoftObjectPtr<class UFaceFXActor>                 Asset;                                                    // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UFaceFXCharacter*                            Character;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsAutoPlaySound : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsDisableMorphTargets : 1;                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsDisableMaterialParameters : 1;                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXTrackKey
// 0x0058
struct FFaceFXTrackKey
{
	struct FFaceFXSkelMeshComponentId                  SkelMeshComponentId;                                      // 0x0000(0x0010) (Edit)
	struct FFaceFXAnimId                               AnimationId;                                              // 0x0000(0x0010) (Edit)
	TSoftObjectPtr<class UFaceFXAnim>                  Animation;                                                // 0x0000(0x0028) (Edit)
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoop : 1;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bIsAnimationDurationLoaded : 1;                           // 0x0000(0x0001) (Transient)
	float                                              AnimationDuration;                                        // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0004(0x0054) MISSED OFFSET
};

// ScriptStruct FaceFX.AnimNode_BlendFaceFXAnimation
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_BlendFaceFXAnimation : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipBoneMappingWithoutNS;                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0001(0x0077) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXAnimComponentSet
// 0x0048
struct FFaceFXAnimComponentSet
{
	struct FFaceFXSkelMeshComponentId                  SkelMeshComponentId;                                      // 0x0000(0x0010) (Edit)
	struct FFaceFXAnimId                               AnimationId;                                              // 0x0000(0x0010) (Edit)
	TSoftObjectPtr<class UFaceFXAnim>                  Animation;                                                // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXAnimationSectionData
// 0x0078
struct FFaceFXAnimationSectionData
{
	struct FGuid                                       TrackId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                RowIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFaceFXAnimId                               AnimationId;                                              // 0x0000(0x0010)
	TSoftObjectPtr<class UFaceFXAnim>                  Animation;                                                // 0x0000(0x0028)
	struct FFaceFXSkelMeshComponentId                  ComponentId;                                              // 0x0000(0x0010)
	float                                              AnimDuration;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                StartTime;                                                // 0x0000(0x0004)
	struct FFrameNumber                                EndTime;                                                  // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x74];                                      // 0x0004(0x0074) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXAnimationSectionTemplate
// 0x0078 (0x0098 - 0x0020)
struct FFaceFXAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFaceFXAnimationSectionData                 SectionData;                                              // 0x0000(0x0078)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET
};

// ScriptStruct FaceFX.FaceFXAnimSetData
// 0x0010
struct FFaceFXAnimSetData
{
	TArray<struct FFaceFXAnimData>                     Animations;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
