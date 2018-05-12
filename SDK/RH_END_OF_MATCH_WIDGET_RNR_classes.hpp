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

// DynamicClass END_OF_MATCH_WIDGET_RNR.END_OF_MATCH_WIDGET_RNR_C
// 0x00C8 (0x0388 - 0x02C0)
class UEND_OF_MATCH_WIDGET_RNR_C : public UShooterEoMWidgetRNR
{
public:
	class UWidgetAnimation*                            TestAnim;                                                 // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            BorderLightStrobe;                                        // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     EOM_BUTTON_EXIT;                                          // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     EOM_BUTTON_REPORT;                                        // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     EOM_BUTTON_SPECTATE;                                      // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_KILLCARD_WIDGET_C*                      EOM_KILLCARD_WIDGET;                                      // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             EOM_OUTCOME_SWITCHER;                                     // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_RANK_WIDGET_C*                          EOM_RANK_WIDGET_191;                                      // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_REPORT_DIALOG_C*                        EOM_REPORT_WIDGET;                                        // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_REWARDS_WIDGET_C*                       EOM_REWARDS_WIDGET_194;                                   // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_STATS_PLAYER_WIDGET_C*                  EOM_STATS_PLAYER_WIDGET_86;                               // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UEOM_TEAM_WIDGET_C*                          EOM_TEAM_WIDGET_293;                                      // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      h_box_EOM_LightBorder_BG;                                 // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      h_box_EOM_LightBorderA;                                   // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      h_box_EOM_LightBorderB;                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class ULetterBoxWidget*                            LetterBoxWidget_1;                                        // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0348(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x034C(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x0380(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0384(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0385(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass END_OF_MATCH_WIDGET_RNR.END_OF_MATCH_WIDGET_RNR_C");
		return ptr;
	}


	void Tick(const struct FGeometry& bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	void Construct();
	void BndEvt__EOM_BUTTON_REPORT_K2Node_ComponentBoundEvent_106_OnButtonPressedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
