#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Aptitude_Bureaucrat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Aptitude_Bureaucrat.Aptitude_Bureaucrat_C
// 0x0000 (0x00D0 - 0x00D0)
class UAptitude_Bureaucrat_C : public UAptitude
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Aptitude_Bureaucrat.Aptitude_Bureaucrat_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
