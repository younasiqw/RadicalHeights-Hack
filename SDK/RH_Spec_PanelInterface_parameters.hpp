#pragma once

// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spec_PanelInterface.Spec_PanelInterface_C.OnUserSettingsChanged
struct USpec_PanelInterface_C_OnUserSettingsChanged_Params
{
	bool                                               bpp__bUseGamepad__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Spec_PanelInterface.Spec_PanelInterface_C.OnSpectatorTargetChanged
struct USpec_PanelInterface_C_OnSpectatorTargetChanged_Params
{
	TEnumAsByte<EShooterAllegiance>                    bpp__Allegiance__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       bpp__Role__pf;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class AShooterCharacter*                           bpp__Target__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
