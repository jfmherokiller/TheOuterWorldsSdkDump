#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemInspector_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemInspector_BP.ItemInspector_BP_C.ZoomToggled
struct UItemInspector_BP_C_ZoomToggled_Params
{
	bool*                                              bFullZoom;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspector_BP.ItemInspector_BP_C.ExecuteUbergraph_ItemInspector_BP
struct UItemInspector_BP_C_ExecuteUbergraph_ItemInspector_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
