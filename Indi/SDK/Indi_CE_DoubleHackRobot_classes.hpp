#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_DoubleHackRobot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_DoubleHackRobot.CE_DoubleHackRobot_C
// 0x0010 (0x01C8 - 0x01B8)
class UCE_DoubleHackRobot_C : public UMultiStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_DoubleHackRobot.CE_DoubleHackRobot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
