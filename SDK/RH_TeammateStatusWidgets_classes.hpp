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

// DynamicClass TeammateStatusWidgets.TeammateStatusWidgets_C
// 0x0008 (0x0240 - 0x0238)
class UTeammateStatusWidgets_C : public UUserWidget
{
public:
	class UVerticalBox*                                TEAMMATE_STATUS_WIDGETS;                                  // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass TeammateStatusWidgets.TeammateStatusWidgets_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
