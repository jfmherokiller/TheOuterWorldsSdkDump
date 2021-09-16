#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_0002_SC_Trooper_M_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 0002_SC_Trooper_M_B.0002_SC_Trooper_M_B_C
// 0x0000 (0x1120 - 0x1120)
class A0002_SC_Trooper_M_B_C : public ACM_Trooper_M_Ranged_SC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 0002_SC_Trooper_M_B.0002_SC_Trooper_M_B_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
