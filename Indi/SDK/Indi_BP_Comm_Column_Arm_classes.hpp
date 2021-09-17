#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BP_Comm_Column_Arm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Comm_Column_Arm.BP_Comm_Column_Arm_C
// 0x002A (0x03B2 - 0x0388)
class ABP_Comm_Column_Arm_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A];                                      // 0x0388(0x002A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Comm_Column_Arm.BP_Comm_Column_Arm_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
