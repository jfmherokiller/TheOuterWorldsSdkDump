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

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	class FString                                      Text;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	double                                             TimeSeconds;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	class FString                                      Command;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      UserToGrant;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	class FString                                      UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      UserToDeny;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	class FString                                      CurrentLevel;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                EngineVersion;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasBegunPlay;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceType;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WorldTimeSeconds;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
