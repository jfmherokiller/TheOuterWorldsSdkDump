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

// ScriptStruct BuildPatchServices.SHAHashData
// 0x0014
struct FSHAHashData
{
	unsigned char                                      Hash[0x14];                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildPatchServices.ChunkPartData
// 0x0018
struct FChunkPartData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Offset;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Size;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct BuildPatchServices.FileManifestData
// 0x0068
struct FFileManifestData
{
	class FString                                      Filename;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FSHAHashData                                FileHash;                                                 // 0x0000(0x0014)
	TArray<struct FChunkPartData>                      FileChunkParts;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              InstallTags;                                              // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bIsUnixExecutable;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class FString                                      SymlinkTarget;                                            // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bIsReadOnly;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCompressed;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67];                                      // 0x0001(0x0067) MISSED OFFSET
};

// ScriptStruct BuildPatchServices.ChunkInfoData
// 0x0040
struct FChunkInfoData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           Hash;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSHAHashData                                ShaHash;                                                  // 0x0000(0x0014)
	int64_t                                            FileSize;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      GroupNumber;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0001(0x003F) MISSED OFFSET
};

// ScriptStruct BuildPatchServices.CustomFieldData
// 0x0020
struct FCustomFieldData
{
	class FString                                      Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
