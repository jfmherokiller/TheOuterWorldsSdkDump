#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_SC_Recruit_SickhouseGuard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_SC_Recruit_SickhouseGuard.0002_SC_Recruit_SickhouseGuard_C
// 0x0000 (0x1120 - 0x1120)
class A0002_SC_Recruit_SickhouseGuard_C : public ACM_Recruit_F_Ranged_SC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_SC_Recruit_SickhouseGuard.0002_SC_Recruit_SickhouseGuard_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
