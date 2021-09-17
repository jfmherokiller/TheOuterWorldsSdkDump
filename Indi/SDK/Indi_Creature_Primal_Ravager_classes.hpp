#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Creature_Primal_Ravager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Creature_Primal_Ravager.Creature_Primal_Ravager_C
// 0x0000 (0x1108 - 0x1108)
class ACreature_Primal_Ravager_C : public ABase_Creature_Gorillian_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Creature_Primal_Ravager.Creature_Primal_Ravager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
