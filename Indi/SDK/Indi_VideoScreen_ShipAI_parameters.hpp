#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VideoScreen_ShipAI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.Play_Screen_Off
struct UVideoScreen_ShipAI_C_Play_Screen_Off_Params
{
};

// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.Play_Screen_On
struct UVideoScreen_ShipAI_C_Play_Screen_On_Params
{
};

// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationNodeChanged
struct UVideoScreen_ShipAI_C_ConversationNodeChanged_Params
{
	class AActor**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Audio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NodeID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationEnded
struct UVideoScreen_ShipAI_C_ConversationEnded_Params
{
	struct FGuid*                                      Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VideoScreen_ShipAI.VideoScreen_ShipAI_C.ConversationStarted
struct UVideoScreen_ShipAI_C_ConversationStarted_Params
{
	class AActor**                                     Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid*                                      Guid;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               NodeID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
