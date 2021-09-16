#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0001_SC_Trooper_Intro_Lt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0001_SC_Trooper_Intro_Lt.0001_SC_Trooper_Intro_Lt_C
// 0x0000 (0x1120 - 0x1120)
class A0001_SC_Trooper_Intro_Lt_C : public ACM_Trooper_F_Ranged_SC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0001_SC_Trooper_Intro_Lt.0001_SC_Trooper_Intro_Lt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
