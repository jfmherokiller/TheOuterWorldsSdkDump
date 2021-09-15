#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"
#include "Indi_Engine_classes.hpp"
#include "Indi_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	Generic                        = 0,
	RelativeLocation               = 1,
	RelativeRotation               = 2,
	RelativeScale3D                = 3,
	bVisible                       = 4,
	Material                       = 5,
	EPropertyValueCategory_MAX     = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
