#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_URB_INT_Ladder_01_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass URB_INT_Ladder_01_BP.URB_INT_Ladder_01_BP_C
// 0x0000 (0x0418 - 0x0418)
class AURB_INT_Ladder_01_BP_C : public ALadderBase_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass URB_INT_Ladder_01_BP.URB_INT_Ladder_01_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
