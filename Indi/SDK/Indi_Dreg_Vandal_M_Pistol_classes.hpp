#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Dreg_Vandal_M_Pistol_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dreg_Vandal_M_Pistol.Dreg_Vandal_M_Pistol_C
// 0x0000 (0x1120 - 0x1120)
class ADreg_Vandal_M_Pistol_C : public ABase_Dreg_Vandal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dreg_Vandal_M_Pistol.Dreg_Vandal_M_Pistol_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
