#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_EXAM_0002_ShockingPowerRegulator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EXAM_0002_ShockingPowerRegulator.EXAM_0002_ShockingPowerRegulator_C
// 0x0010 (0x03F0 - 0x03E0)
class AEXAM_0002_ShockingPowerRegulator_C : public AExaminableActorBase_BP_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EXAM_0002_ShockingPowerRegulator.EXAM_0002_ShockingPowerRegulator_C");
		return ptr;
	}


	struct FLocString GetInteractLocString();
	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
