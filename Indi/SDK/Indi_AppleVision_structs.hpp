#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"
#include "Indi_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AppleVision.EDetectedFaceFeatureType
enum class EDetectedFaceFeatureType : uint8_t
{
	Unkown                         = 0,
	FaceContour                    = 1,
	InnerLips                      = 2,
	LeftEye                        = 3,
	LeftEyebrow                    = 4,
	LeftPupil                      = 5,
	MedianLine                     = 6,
	Nose                           = 7,
	NoseCrest                      = 8,
	OuterLips                      = 9,
	RightEye                       = 10,
	RightEyebrow                   = 11,
	RightPupil                     = 12,
	EDetectedFaceFeatureType_MAX   = 13
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleVision.DetectedFeature
// 0x0004
struct FDetectedFeature
{
	float                                              Confidence;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AppleVision.DetectedFeatureRegion
// 0x0014 (0x0018 - 0x0004)
struct FDetectedFeatureRegion : public FDetectedFeature
{
	TArray<struct FVector2D>                           Points;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AppleVision.DetectedFeature2D
// 0x0014 (0x0018 - 0x0004)
struct FDetectedFeature2D : public FDetectedFeature
{
	struct FBox2D                                      BoundingBox;                                              // 0x0000(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AppleVision.DetectedFaceFeature2D
// 0x0004 (0x001C - 0x0018)
struct FDetectedFaceFeature2D : public FDetectedFeature2D
{
	EDetectedFaceFeatureType                           FeatureType;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x0001(0x001B) MISSED OFFSET
};

// ScriptStruct AppleVision.DetectedFaceFeatureRegion
// 0x0008 (0x0020 - 0x0018)
struct FDetectedFaceFeatureRegion : public FDetectedFeatureRegion
{
	EDetectedFaceFeatureType                           FeatureType;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct AppleVision.DetectedFace
// 0x0038 (0x0050 - 0x0018)
struct FDetectedFace : public FDetectedFeatureRegion
{
	struct FBox2D                                      BoundingBox;                                              // 0x0000(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDetectedFaceFeature2D>              Features;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDetectedFaceFeatureRegion>          FeatureRegions;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct AppleVision.FaceDetectionResult
// 0x0010
struct FFaceDetectionResult
{
	TArray<struct FDetectedFace>                       DetectedFaces;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
