#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_VendorWidget_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VendorWidget_BP.VendorWidget_BP_C.FadeInFactionImage
struct UVendorWidget_BP_C_FadeInFactionImage_Params
{
};

// Function VendorWidget_BP.VendorWidget_BP_C.OnSetCurrentPage
struct UVendorWidget_BP_C_OnSetCurrentPage_Params
{
	EVendorPages*                                      Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationBoughtItem
struct UVendorWidget_BP_C_OnAnimationBoughtItem_Params
{
};

// Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationRepairedItem
struct UVendorWidget_BP_C_OnAnimationRepairedItem_Params
{
};

// Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationSoldItem
struct UVendorWidget_BP_C_OnAnimationSoldItem_Params
{
};

// Function VendorWidget_BP.VendorWidget_BP_C.OnAnimationSoldJunk
struct UVendorWidget_BP_C_OnAnimationSoldJunk_Params
{
};

// Function VendorWidget_BP.VendorWidget_BP_C.ExecuteUbergraph_VendorWidget_BP
struct UVendorWidget_BP_C_ExecuteUbergraph_VendorWidget_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
