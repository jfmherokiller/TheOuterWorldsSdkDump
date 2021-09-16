#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_SC_Recruit_Ranged_M_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_SC_Recruit_Ranged_M_A.0002_SC_Recruit_Ranged_M_A_C
// 0x0008 (0x1128 - 0x1120)
class A0002_SC_Recruit_Ranged_M_A_C : public ACM_Recruit_M_Ranged_SC_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_SC_Recruit_Ranged_M_A.0002_SC_Recruit_Ranged_M_A_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
