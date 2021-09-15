#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CompanionMoveToWC_3D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompanionMoveToWC_3D.CompanionMoveToWC_3D_C
// 0x0000 (0x07A0 - 0x07A0)
class UCompanionMoveToWC_3D_C : public UCompanionMoveToWidgetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CompanionMoveToWC_3D.CompanionMoveToWC_3D_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
