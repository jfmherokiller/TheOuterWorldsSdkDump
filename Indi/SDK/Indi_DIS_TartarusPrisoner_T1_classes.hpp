#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_DIS_TartarusPrisoner_T1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DIS_TartarusPrisoner_T1.DIS_TartarusPrisoner_T1_C
// 0x0000 (0x01D0 - 0x01D0)
class UDIS_TartarusPrisoner_T1_C : public UDisguiseItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DIS_TartarusPrisoner_T1.DIS_TartarusPrisoner_T1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
