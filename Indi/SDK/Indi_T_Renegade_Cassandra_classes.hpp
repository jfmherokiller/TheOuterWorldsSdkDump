#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_T_Renegade_Cassandra_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass T_Renegade_Cassandra.T_Renegade_Cassandra_C
// 0x0000 (0x0238 - 0x0238)
class UT_Renegade_Cassandra_C : public UT_Generic_Friendly_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass T_Renegade_Cassandra.T_Renegade_Cassandra_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
