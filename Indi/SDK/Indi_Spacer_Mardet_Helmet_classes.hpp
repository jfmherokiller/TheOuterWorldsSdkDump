#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Spacer_Mardet_Helmet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spacer_Mardet_Helmet.Spacer_Mardet_Helmet_C
// 0x0000 (0x02B0 - 0x02B0)
class USpacer_Mardet_Helmet_C : public USpacer_Helmet_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spacer_Mardet_Helmet.Spacer_Mardet_Helmet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
