#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemCellDragContainerNoDrag_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.StopAnimations
struct UItemCellDragContainerNoDrag_BP_C_StopAnimations_Params
{
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.SetPendingDropAnimationEnabled
struct UItemCellDragContainerNoDrag_BP_C_SetPendingDropAnimationEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnPreviewMouseButtonDown
struct UItemCellDragContainerNoDrag_BP_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragEnter
struct UItemCellDragContainerNoDrag_BP_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragLeave
struct UItemCellDragContainerNoDrag_BP_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragCancelled
struct UItemCellDragContainerNoDrag_BP_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupStarted
struct UItemCellDragContainerNoDrag_BP_C_OnDragGroupStarted_Params
{
	class UIndianaDragDropOperation**                  Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragConfirmDrop
struct UItemCellDragContainerNoDrag_BP_C_OnDragConfirmDrop_Params
{
	class UIndianaDragDropOperation**                  Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupCancelled
struct UItemCellDragContainerNoDrag_BP_C_OnDragGroupCancelled_Params
{
	class UIndianaDragDropOperation**                  Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.OnDragGroupDrop
struct UItemCellDragContainerNoDrag_BP_C_OnDragGroupDrop_Params
{
	class UIndianaDragDropOperation**                  Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C.ExecuteUbergraph_ItemCellDragContainerNoDrag_BP
struct UItemCellDragContainerNoDrag_BP_C_ExecuteUbergraph_ItemCellDragContainerNoDrag_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
