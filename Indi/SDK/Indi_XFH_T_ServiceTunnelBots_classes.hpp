#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_T_ServiceTunnelBots_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_T_ServiceTunnelBots.XFH_T_ServiceTunnelBots_C
// 0x0000 (0x0238 - 0x0238)
class UXFH_T_ServiceTunnelBots_C : public UT_Generic_Hostile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_T_ServiceTunnelBots.XFH_T_ServiceTunnelBots_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
