#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_CM_AssaultTrooper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_CM_AssaultTrooper.Base_CM_AssaultTrooper_C
// 0x0000 (0x1120 - 0x1120)
class ABase_CM_AssaultTrooper_C : public ABase_Human_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_CM_AssaultTrooper.Base_CM_AssaultTrooper_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
