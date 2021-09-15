#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Electric_Hazard_PP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C
// 0x0000 (0x0208 - 0x0208)
class UCE_Electric_Hazard_PP_C : public UPostProcessStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Electric_Hazard_PP.CE_Electric_Hazard_PP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
