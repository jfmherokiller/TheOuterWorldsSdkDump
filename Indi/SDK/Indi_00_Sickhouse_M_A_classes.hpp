#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_00_Sickhouse_M_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 00_Sickhouse_M_A.00_Sickhouse_M_A_C
// 0x0000 (0x1120 - 0x1120)
class A00_Sickhouse_M_A_C : public ATownie_Resident_Male_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 00_Sickhouse_M_A.00_Sickhouse_M_A_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
