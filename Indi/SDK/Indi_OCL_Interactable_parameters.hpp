#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OCL_Interactable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OCL_Interactable.OCL_Interactable_C.CloseOCL
struct UOCL_Interactable_C_CloseOCL_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lock;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Seal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStartEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreEndEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.OpenOCL
struct UOCL_Interactable_C_OpenOCL_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Seal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreLockStatus;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStartEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreEndEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAnimation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.ToggleOpenCloseState
struct UOCL_Interactable_C_ToggleOpenCloseState_Params
{
	class AActor*                                      Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Lock;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Seal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreLockStatus;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStartEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreEndEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpening;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsClosing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.OnPostConstruction
struct UOCL_Interactable_C_OnPostConstruction_Params
{
};

// Function OCL_Interactable.OCL_Interactable_C.OnAnimateCloseComplete
struct UOCL_Interactable_C_OnAnimateCloseComplete_Params
{
};

// Function OCL_Interactable.OCL_Interactable_C.OnAnimateOpenComplete
struct UOCL_Interactable_C_OnAnimateOpenComplete_Params
{
};

// Function OCL_Interactable.OCL_Interactable_C.OnStateChanged
struct UOCL_Interactable_C_OnStateChanged_Params
{
};

// Function OCL_Interactable.OCL_Interactable_C.OnAnimateClose
struct UOCL_Interactable_C_OnAnimateClose_Params
{
	bool                                               IgnoreSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.OnAnimateOpen
struct UOCL_Interactable_C_OnAnimateOpen_Params
{
	bool                                               InstantAnimation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.IsSealed
struct UOCL_Interactable_C_IsSealed_Params
{
	bool                                               IsSealed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.IsClosed
struct UOCL_Interactable_C_IsClosed_Params
{
	bool                                               IsClosed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.IsBarred
struct UOCL_Interactable_C_IsBarred_Params
{
	bool                                               IsBarred;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.SetIsLocked
struct UOCL_Interactable_C_SetIsLocked_Params
{
	bool                                               IsLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLockedOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.IsOpen
struct UOCL_Interactable_C_IsOpen_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpening;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_Interactable.OCL_Interactable_C.IsLocked
struct UOCL_Interactable_C_IsLocked_Params
{
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
