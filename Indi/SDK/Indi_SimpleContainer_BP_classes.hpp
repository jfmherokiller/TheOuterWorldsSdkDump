#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SimpleContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SimpleContainer_BP.SimpleContainer_BP_C
// 0x00B7 (0x0628 - 0x0571)
class ASimpleContainer_BP_C : public AContainerBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0xB7];                                      // 0x0571(0x00B7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SimpleContainer_BP.SimpleContainer_BP_C");
		return ptr;
	}


	void STATIC_ApplyLight();
	void STATIC_GetLightingConfig(class UStaticMeshComponent** Mesh, struct FName* MaterialSlot);
	void STATIC_UserConstructionScript();
	void STATIC_AnimateLid__FinishedFunc();
	void STATIC_AnimateLid__UpdateFunc();
	void STATIC_OnAnimateOpen(bool* InstantAnimation);
	void STATIC_OnAnimateClose(bool* IgnoreSound, bool* InstantAnimation);
	void STATIC_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item);
	void STATIC_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_ItemStackDelegate__DelegateSignature(const struct FItemStack& Item);
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnPlayerOpenedContainer_Event_1();
	void STATIC_OnStateChanged();
	void STATIC_ExecuteUbergraph_SimpleContainer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
