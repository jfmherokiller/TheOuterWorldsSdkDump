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
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// 0x0030
struct FStructSerializerNumericTestStruct
{
	int8_t                                             Int8;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Int16;                                                    // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int                                                Int32;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Int64;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UInt8;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           UInt16;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UInt32;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UInt64;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	double                                             Double;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0008
struct FStructSerializerBooleanTestStruct
{
	bool                                               BoolFalse;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolTrue;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Bitfield;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x0010
struct FStructSerializerObjectTestStruct
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectPtr;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x0060
struct FStructSerializerBuiltinTestStruct
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      String;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FRotator                                    Rotator;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0000(0x0028)
	struct FVector                                     Vector;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x000C(0x0054) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0040
struct FStructSerializerArrayTestStruct
{
	TArray<int>                                        Int32Array;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                StaticSingleElement;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StaticInt32Array[0x3];                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StaticFloatArray[0x3];                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VectorArray;                                              // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// 0x00F0
struct FStructSerializerMapTestStruct
{
	TMap<int, class FString>                           IntToStr;                                                 // 0x0000(0x0050) (ZeroConstructor)
	TMap<class FString, class FString>                 StrToStr;                                                 // 0x0000(0x0050) (ZeroConstructor)
	TMap<class FString, struct FVector>                StrToVec;                                                 // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0050(0x00A0) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerTestStruct
// 0x01D8
struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct          Numerics;                                                 // 0x0000(0x0030)
	struct FStructSerializerBooleanTestStruct          Booleans;                                                 // 0x0000(0x0008)
	struct FStructSerializerObjectTestStruct           Objects;                                                  // 0x0000(0x0010)
	struct FStructSerializerBuiltinTestStruct          Builtins;                                                 // 0x0000(0x0060)
	struct FStructSerializerArrayTestStruct            Arrays;                                                   // 0x0000(0x0040)
	struct FStructSerializerMapTestStruct              Maps;                                                     // 0x0000(0x00F0)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x00F0(0x00E8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
