#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum EN_Particle_Event_Bindings.EN_Particle_Event_Bindings
enum class EN_Particle_Event_Bindings : uint8_t
{
	NewEnumerator4                 = 0,
	NewEnumerator0                 = 1,
	NewEnumerator1                 = 2,
	NewEnumerator2                 = 3,
	NewEnumerator3                 = 4,
	EN_Particle_Event_MAX          = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
