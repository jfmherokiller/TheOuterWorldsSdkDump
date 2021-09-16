#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_PQ0001_Cleanup_M_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PQ0001_Cleanup_M.PQ0001_Cleanup_M_C
// 0x0000 (0x1120 - 0x1120)
class APQ0001_Cleanup_M_C : public ATownie_Resident_Male_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PQ0001_Cleanup_M.PQ0001_Cleanup_M_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
