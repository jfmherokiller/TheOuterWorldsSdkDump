#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_CE_Phobia_Disposophobia_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Phobia_Disposophobia.CE_Phobia_Disposophobia_C
// 0x0000 (0x01B8 - 0x01B8)
class UCE_Phobia_Disposophobia_C : public UCE_Phobia_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Phobia_Disposophobia.CE_Phobia_Disposophobia_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
