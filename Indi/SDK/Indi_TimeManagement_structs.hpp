#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"
#include "Indi_CoreUObject_classes.hpp"
#include "Indi_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode           = 0,
	DropFrameTimecode              = 1,
	Seconds                        = 2,
	Frames                         = 3,
	MAX_Count                      = 4,
	EFrameNumberDisplayFormats_MAX = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
