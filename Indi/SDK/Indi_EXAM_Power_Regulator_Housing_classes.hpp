#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EXAM_Power_Regulator_Housing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C
// 0x0018 (0x03F8 - 0x03E0)
class AEXAM_Power_Regulator_Housing_C : public AExaminableActorBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EXAM_Power_Regulator_Housing.EXAM_Power_Regulator_Housing_C");
		return ptr;
	}


	EInteractionType GetInteraction(struct FInteractionDescription* Description, struct FInteractPayload* Payload, float* InteractDistance);
	struct FLocString GetInteractLocString();
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
