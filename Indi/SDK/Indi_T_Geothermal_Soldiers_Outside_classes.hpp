#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_T_Geothermal_Soldiers_Outside_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass T_Geothermal_Soldiers_Outside.T_Geothermal_Soldiers_Outside_C
// 0x0000 (0x0238 - 0x0238)
class UT_Geothermal_Soldiers_Outside_C : public UTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass T_Geothermal_Soldiers_Outside.T_Geothermal_Soldiers_Outside_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
