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

// DynamicClass HUD_BIKERACE_WORLDWIDGET_Start.HUD_BIKERACE_WORLDWIDGET_Start_C
// 0x0040 (0x0298 - 0x0258)
class UHUD_BIKERACE_WORLDWIDGET_Start_C : public UShooterObjectiveWorldWidget
{
public:
	class UWidgetAnimation*                            ScoreFocusAnimation;                                      // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Arrow;                                                    // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  distance_meters_text;                                     // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      HUD_BIKE_RACE_IMAGE;                                      // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  HUD_OBJECTIVE_TIMER;                                      // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UCanvasPanel*                                MainCanvas;                                               // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  ObjectiveText;                                            // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Team;                                  // 0x0290(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_BIKERACE_WORLDWIDGET_Start.HUD_BIKERACE_WORLDWIDGET_Start_C");
		return ptr;
	}


	void Update_Timer(int bpp__Time__pf);
	void UpdateColor(int bpp__Team__pf);
	void TriggerOnScreen();
	void TriggerOffScreen();
	void Construct();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
