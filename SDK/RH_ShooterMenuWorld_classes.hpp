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

// BlueprintGeneratedClass ShooterMenuWorld.ShooterMenuWorld_C
// 0x0030 (0x03D0 - 0x03A0)
class AShooterMenuWorld_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCameraComponent*                            ActiveZoomCamera;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMatineeActor*                               Matinee_Customization_ExecuteUbergraph_ShooterMenuWorld_RefProperty;// 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_Home_ExecuteUbergraph_ShooterMenuWorld_RefProperty;// 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALevelMessageHandler_C*                      LevelMessageHandler_C_1_ExecuteUbergraph_ShooterMenuWorld_RefProperty;// 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShooterMenuWorld.ShooterMenuWorld_C");
		return ptr;
	}


	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(const struct FKEY& KEY);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ShooterMenuWorld(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
