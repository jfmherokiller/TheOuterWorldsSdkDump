#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CM_Recruit_M_Ranged_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CM_Recruit_M_Ranged.CM_Recruit_M_Ranged_C
// 0x0000 (0x1120 - 0x1120)
class ACM_Recruit_M_Ranged_C : public ABase_CM_Recruit_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CM_Recruit_M_Ranged.CM_Recruit_M_Ranged_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
