#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_BackgroundPanelWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BackgroundPanelWidget.BackgroundPanelWidget_C.SetBackgroundFocused
struct UBackgroundPanelWidget_C_SetBackgroundFocused_Params
{
	bool*                                              bFocused;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackgroundPanelWidget.BackgroundPanelWidget_C.OnInnerTextureLoaded
struct UBackgroundPanelWidget_C_OnInnerTextureLoaded_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackgroundPanelWidget.BackgroundPanelWidget_C.OnOuterTextureLoaded
struct UBackgroundPanelWidget_C_OnOuterTextureLoaded_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BackgroundPanelWidget.BackgroundPanelWidget_C.Construct
struct UBackgroundPanelWidget_C_Construct_Params
{
};

// Function BackgroundPanelWidget.BackgroundPanelWidget_C.ExecuteUbergraph_BackgroundPanelWidget
struct UBackgroundPanelWidget_C_ExecuteUbergraph_BackgroundPanelWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
