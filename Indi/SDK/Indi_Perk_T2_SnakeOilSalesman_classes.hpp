#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Perk_T2_SnakeOilSalesman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Perk_T2_SnakeOilSalesman.Perk_T2_SnakeOilSalesman_C
// 0x0000 (0x0070 - 0x0070)
class UPerk_T2_SnakeOilSalesman_C : public UPerk
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Perk_T2_SnakeOilSalesman.Perk_T2_SnakeOilSalesman_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif