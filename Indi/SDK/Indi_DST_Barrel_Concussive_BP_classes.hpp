#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DST_Barrel_Concussive_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DST_Barrel_Concussive_BP.DST_Barrel_Concussive_BP_C
// 0x0000 (0x05B8 - 0x05B8)
class ADST_Barrel_Concussive_BP_C : public ADST_Barrel_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DST_Barrel_Concussive_BP.DST_Barrel_Concussive_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
