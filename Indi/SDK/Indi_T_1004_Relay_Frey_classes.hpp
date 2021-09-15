#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_T_1004_Relay_Frey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass T_1004_Relay_Frey.T_1004_Relay_Frey_C
// 0x0000 (0x0238 - 0x0238)
class UT_1004_Relay_Frey_C : public UT_Generic_Neutral_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass T_1004_Relay_Frey.T_1004_Relay_Frey_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
