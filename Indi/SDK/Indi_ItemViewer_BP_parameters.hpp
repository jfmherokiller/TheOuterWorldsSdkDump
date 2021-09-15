#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_ItemViewer_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemViewer_BP.ItemViewer_BP_C.Construct
struct UItemViewer_BP_C_Construct_Params
{
};

// Function ItemViewer_BP.ItemViewer_BP_C.Tick
struct UItemViewer_BP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemViewer_BP.ItemViewer_BP_C.ExecuteUbergraph_ItemViewer_BP
struct UItemViewer_BP_C_ExecuteUbergraph_ItemViewer_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
