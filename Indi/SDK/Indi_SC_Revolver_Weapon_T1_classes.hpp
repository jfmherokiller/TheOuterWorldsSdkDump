#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_SC_Revolver_Weapon_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_Revolver_Weapon_T1.SC_Revolver_Weapon_T1_C
// 0x0000 (0x05A8 - 0x05A8)
class USC_Revolver_Weapon_T1_C : public USC_Revolver_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_Revolver_Weapon_T1.SC_Revolver_Weapon_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
