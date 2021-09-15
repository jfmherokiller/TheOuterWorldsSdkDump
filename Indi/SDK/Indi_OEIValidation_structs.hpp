#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"
#include "Indi_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OEIValidation.EValidationLevel
enum class EValidationLevel : uint8_t
{
	CriticalError                  = 0,
	Error                          = 1,
	Warning                        = 2,
	Info                           = 3,
	EValidationLevel_MAX           = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OEIValidation.ValidationInfo
// 0x00E0
struct FValidationInfo
{
	class UObject*                                     ValidationObject;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      ObjectName;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      ObjectType;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Filename;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      PackagePath;                                              // 0x0000(0x0010) (ZeroConstructor)
	bool                                               TestResult;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EValidationLevel>                      Level;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class FString                                      ReportType;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              Tags;                                                     // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      OeiLinkEditor;                                            // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      OeiLinkGame;                                              // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      LastModifiedBy;                                           // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Version;                                                  // 0x0000(0x0010) (ZeroConstructor)
	bool                                               WiP;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class FString                                      Tool;                                                     // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0010(0x00D0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
