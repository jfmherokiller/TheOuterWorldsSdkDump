#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Helmet_DissAgitator_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Helmet_DissAgitator_T1.Helmet_DissAgitator_T1_C
// 0x0000 (0x02B0 - 0x02B0)
class UHelmet_DissAgitator_T1_C : public UHelmet_DissAgitator_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Helmet_DissAgitator_T1.Helmet_DissAgitator_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
