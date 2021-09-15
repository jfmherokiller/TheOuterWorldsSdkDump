#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_T_01_GB_Blakeslee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_T_01_GB_Blakeslee.XFH_T_01_GB_Blakeslee_C
// 0x0000 (0x0238 - 0x0238)
class UXFH_T_01_GB_Blakeslee_C : public UTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_T_01_GB_Blakeslee.XFH_T_01_GB_Blakeslee_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
