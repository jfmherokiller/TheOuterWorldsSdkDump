#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Food_CP_NearMapleSyrup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Food_CP_NearMapleSyrup.Food_CP_NearMapleSyrup_C
// 0x0000 (0x0230 - 0x0230)
class UFood_CP_NearMapleSyrup_C : public UConsumableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Food_CP_NearMapleSyrup.Food_CP_NearMapleSyrup_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
