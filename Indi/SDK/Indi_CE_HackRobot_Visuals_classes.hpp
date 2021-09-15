#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_HackRobot_Visuals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_HackRobot_Visuals.CE_HackRobot_Visuals_C
// 0x0018 (0x01A0 - 0x0188)
class UCE_HackRobot_Visuals_C : public UStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0188(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_HackRobot_Visuals.CE_HackRobot_Visuals_C");
		return ptr;
	}


	void STATIC_ReceiveClearEffect(class AActor** Target);
	void STATIC_ReceiveApplyEffect(class AActor** Target, float* Ratio, bool* bRestoredFromSave);
	void STATIC_ExecuteUbergraph_CE_HackRobot_Visuals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
