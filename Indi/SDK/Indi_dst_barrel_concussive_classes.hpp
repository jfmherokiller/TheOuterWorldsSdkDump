#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_dst_barrel_concussive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dst_barrel_concussive.dst_barrel_concussive_C
// 0x0000 (0x01D8 - 0x01D8)
class Udst_barrel_concussive_C : public UDestructibleAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dst_barrel_concussive.dst_barrel_concussive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
