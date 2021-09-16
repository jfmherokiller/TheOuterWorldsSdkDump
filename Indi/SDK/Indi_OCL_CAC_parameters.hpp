#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_OCL_CAC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OCL_CAC.OCL_CAC_C.Update
struct UOCL_CAC_C_Update_Params
{
	bool                                               IsEmpty;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OCL_CAC.OCL_CAC_C.Setup
struct UOCL_CAC_C_Setup_Params
{
	class UOCLComponent*                               OCL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Unused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
