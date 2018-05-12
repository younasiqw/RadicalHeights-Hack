#pragma once

// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StickerUVTransforms.StickerUVTransforms
// 0x0020
struct FStickerUVTransforms
{
	struct FVector                                     UVScale_2_F139E41C442CD4CB837C6BBDE40E97F8;               // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UVOffset_4_EC85635840557417997DEB9589D5204C;              // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UVRotation_11_32F232E14A71DE7448D48187689ED355;           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStickerProjectionAxis>                ProjectionAxisToUse_8_25984B3342A0660AE9782C894B2D21BD;   // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
