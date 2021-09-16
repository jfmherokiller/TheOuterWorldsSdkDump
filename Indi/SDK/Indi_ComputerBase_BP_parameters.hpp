#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ComputerBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ComputerBase_BP.ComputerBase_BP_C.IsLocked
struct AComputerBase_BP_C_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.UserConstructionScript
struct AComputerBase_BP_C_UserConstructionScript_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.ReceiveBeginPlay
struct AComputerBase_BP_C_ReceiveBeginPlay_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUse_Event_1
struct AComputerBase_BP_C_OnComputerUse_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUnlocked_Event_1
struct AComputerBase_BP_C_OnComputerUnlocked_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerUnlockAttemptedLocked_Event_1
struct AComputerBase_BP_C_OnComputerUnlockAttemptedLocked_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerLocked_Event_1
struct AComputerBase_BP_C_OnComputerLocked_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerInsufficientSkill_Event_1
struct AComputerBase_BP_C_OnComputerInsufficientSkill_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackSuccess_Event_1
struct AComputerBase_BP_C_OnComputerHackSuccess_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackStart_Event_1
struct AComputerBase_BP_C_OnComputerHackStart_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HackSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HackNumResources;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackInterrupted_Event_1
struct AComputerBase_BP_C_OnComputerHackInterrupted_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.PlayUseAudio
struct AComputerBase_BP_C_PlayUseAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.PlayUnlockedAudio
struct AComputerBase_BP_C_PlayUnlockedAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.PlayUnlockAttemptedLockedAudio
struct AComputerBase_BP_C_PlayUnlockAttemptedLockedAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.PlayLockedAudio
struct AComputerBase_BP_C_PlayLockedAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.PlayInsufficientSkillAudio
struct AComputerBase_BP_C_PlayInsufficientSkillAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.PlayHackSuccessAudio
struct AComputerBase_BP_C_PlayHackSuccessAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.PlayHackStartAudio
struct AComputerBase_BP_C_PlayHackStartAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.PlayHackInterruptedAudio
struct AComputerBase_BP_C_PlayHackInterruptedAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.StopHackingAudio
struct AComputerBase_BP_C_StopHackingAudio_Params
{
};

// Function ComputerBase_BP.ComputerBase_BP_C.OnComputerHackLoopStop_Event_1
struct AComputerBase_BP_C_OnComputerHackLoopStop_Event_1_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ComputerBase_BP.ComputerBase_BP_C.ExecuteUbergraph_ComputerBase_BP
struct AComputerBase_BP_C_ExecuteUbergraph_ComputerBase_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
