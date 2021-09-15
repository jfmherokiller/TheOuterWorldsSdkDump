#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_LegCripple_Flaw_MoveSpd_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_LegCripple_Flaw_MoveSpd.CE_LegCripple_Flaw_MoveSpd_C
// 0x0000 (0x01B8 - 0x01B8)
class UCE_LegCripple_Flaw_MoveSpd_C : public UCE_LegCripple_Flaw_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_LegCripple_Flaw_MoveSpd.CE_LegCripple_Flaw_MoveSpd_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
