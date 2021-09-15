#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_1101_Outlaw_Spelunkers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_1101_Outlaw_Spelunkers.XFH_1101_Outlaw_Spelunkers_C
// 0x0000 (0x0238 - 0x0238)
class UXFH_1101_Outlaw_Spelunkers_C : public UTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_1101_Outlaw_Spelunkers.XFH_1101_Outlaw_Spelunkers_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
