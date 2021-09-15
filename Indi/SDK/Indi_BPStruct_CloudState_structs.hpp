#pragma once

// TheOuterWorlds SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Indi_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BPStruct_CloudState.BPStruct_CloudState
// 0x0040
struct FBPStruct_CloudState
{
	class UTexture2D*                                  WeatherMap_4_F16208AE48BF6B4780CA23AA5326E3FC;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density_16_CC76C8E94C4E0CA63B9582B260FCF423;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scattering_20_FD2BE1C84A97EBE570C4F1888089CE71;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Extinction_18_9E5307944F3E5033FD55459647856CFA;           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HighCloudMap_6_6D67D5BD44CBC2BF4879C0A04C0701E0;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighCloudErosion_9_697A9E4D42E4D3B6F5E0F08494933503;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighCloudScattering_11_54CE697742D445EDB730C1946B964FBB;  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighCloudOpacity_13_8B025F8846B46C5808E4798FE6F8D373;     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyProbeScattering_24_96310787465621A2BD39F783DDCD1F5A;   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeed_27_42651CD64E5934CDB3ED488859CF47C5;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindDirection_31_FDE9F55B499C1F3B827BBD9A144C28A3;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighWindSpeed_29_3CA7D0C54DDD7A9D6648AA8E5AFA2477;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighWindDirection_33_8374566B412FCE8555C53FB29DB50089;    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
