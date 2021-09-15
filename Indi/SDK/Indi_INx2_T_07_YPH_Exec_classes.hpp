#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_INx2_T_07_YPH_Exec_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INx2_T_07_YPH_Exec.INX2_T_07_YPH_Exec_C
// 0x0000 (0x0238 - 0x0238)
class UINX2_T_07_YPH_Exec_C : public UTeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INx2_T_07_YPH_Exec.INX2_T_07_YPH_Exec_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
