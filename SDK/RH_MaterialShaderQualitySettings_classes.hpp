#pragma once

// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0010 (0x0038 - 0x0028)
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides                   QualityOverrides[0x3];                                    // 0x0028(0x0005) (Edit, Config)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0037(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
		return ptr;
	}

};


// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0050 (0x0078 - 0x0028)
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<struct FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                        // 0x0028(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
