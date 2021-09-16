#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DI_SAM_Sign_KickMe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DI_SAM_Sign_KickMe.DI_SAM_Sign_KickMe_C
// 0x0000 (0x01D0 - 0x01D0)
class UDI_SAM_Sign_KickMe_C : public UQuestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DI_SAM_Sign_KickMe.DI_SAM_Sign_KickMe_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
