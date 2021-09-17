#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Base_Dreg_Thug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Dreg_Thug.Base_Dreg_Thug_C
// 0x0000 (0x1120 - 0x1120)
class ABase_Dreg_Thug_C : public ABase_Human_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Dreg_Thug.Base_Dreg_Thug_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
