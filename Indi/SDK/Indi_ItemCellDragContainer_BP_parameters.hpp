#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemCellDragContainer_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.StopAnimations
struct UItemCellDragContainer_BP_C_StopAnimations_Params
{
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.SetPendingDropAnimationEnabled
struct UItemCellDragContainer_BP_C_SetPendingDropAnimationEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnPreviewMouseButtonDown
struct UItemCellDragContainer_BP_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragEnter
struct UItemCellDragContainer_BP_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragLeave
struct UItemCellDragContainer_BP_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragCancelled
struct UItemCellDragContainer_BP_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragGroupStarted
struct UItemCellDragContainer_BP_C_OnDragGroupStarted_Params
{
	class UIndianaDragDropOperation**                  Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragConfirmDrop
struct UItemCellDragContainer_BP_C_OnDragConfirmDrop_Params
{
	class UIndianaDragDropOperation**                  Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragGroupCancelled
struct UItemCellDragContainer_BP_C_OnDragGroupCancelled_Params
{
	class UIndianaDragDropOperation**                  Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.OnDragGroupDrop
struct UItemCellDragContainer_BP_C_OnDragGroupDrop_Params
{
	class UIndianaDragDropOperation**                  Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainer_BP.ItemCellDragContainer_BP_C.ExecuteUbergraph_ItemCellDragContainer_BP
struct UItemCellDragContainer_BP_C_ExecuteUbergraph_ItemCellDragContainer_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
