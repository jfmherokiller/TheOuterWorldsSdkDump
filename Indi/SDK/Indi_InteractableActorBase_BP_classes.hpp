#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_InteractableActorBase_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InteractableActorBase_BP.InteractableActorBase_BP_C
// 0x0008 (0x03E0 - 0x03D8)
class AInteractableActorBase_BP_C : public AInteractableActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractableActorBase_BP.InteractableActorBase_BP_C");
		return ptr;
	}


	struct FLocString GetInteractLocString();
	void STATIC_UserConstructionScript();
	void STATIC_BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractComplete__DelegateSignature(const struct FInteractionDescription& Description);
	void STATIC_ExecuteUbergraph_InteractableActorBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
