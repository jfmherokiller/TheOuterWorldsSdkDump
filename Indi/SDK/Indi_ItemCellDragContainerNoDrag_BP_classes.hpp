#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemCellDragContainerNoDrag_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C
// 0x0030 (0x0290 - 0x0260)
class UItemCellDragContainerNoDrag_BP_C : public UDragContainerWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0260(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemCellDragContainerNoDrag_BP.ItemCellDragContainerNoDrag_BP_C");
		return ptr;
	}


	void STATIC_StopAnimations();
	void STATIC_SetPendingDropAnimationEnabled(bool Enabled);
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void STATIC_OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void STATIC_OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void STATIC_OnDragGroupStarted(class UIndianaDragDropOperation** Operation);
	void STATIC_OnDragConfirmDrop(class UIndianaDragDropOperation** Operation);
	void STATIC_OnDragGroupCancelled(class UIndianaDragDropOperation** Operation);
	void STATIC_OnDragGroupDrop(class UIndianaDragDropOperation** Operation);
	void STATIC_ExecuteUbergraph_ItemCellDragContainerNoDrag_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
