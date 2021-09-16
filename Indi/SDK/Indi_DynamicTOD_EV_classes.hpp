#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DynamicTOD_EV_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DynamicTOD_EV.DynamicTOD_EV_C
// 0x0000 (0x1078 - 0x1078)
class ADynamicTOD_EV_C : public ABP_DynamicTOD_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DynamicTOD_EV.DynamicTOD_EV_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
