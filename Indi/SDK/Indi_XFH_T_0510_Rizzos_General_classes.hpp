#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_XFH_T_0510_Rizzos_General_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XFH_T_0510_Rizzos_General.XFH_T_0510_Rizzos_General_C
// 0x0000 (0x0238 - 0x0238)
class UXFH_T_0510_Rizzos_General_C : public UTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XFH_T_0510_Rizzos_General.XFH_T_0510_Rizzos_General_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif