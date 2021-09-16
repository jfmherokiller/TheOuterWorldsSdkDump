#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VendingContainer_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VendingContainer_BP.VendingContainer_BP_C
// 0x024F (0x07C0 - 0x0571)
class AVendingContainer_BP_C : public AContainerBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x24F];                                     // 0x0571(0x024F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VendingContainer_BP.VendingContainer_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_BndEvt__OCLComponent_K2Node_ComponentBoundEvent_0_OCLCloseStart__DelegateSignature(class AActor* Initiator);
	void STATIC_ExecuteUbergraph_VendingContainer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
