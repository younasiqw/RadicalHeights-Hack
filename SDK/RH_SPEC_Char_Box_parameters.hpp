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

// Function SPEC_Char_Box.SPEC_Char_Box_C.SetAllegiance
struct USPEC_Char_Box_C_SetAllegiance_Params
{
	TEnumAsByte<EShooterAllegiance>                    bpp__Allegiance__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SPEC_Char_Box.SPEC_Char_Box_C.OnPlayerStatusChanged
struct USPEC_Char_Box_C_OnPlayerStatusChanged_Params
{
	TEnumAsByte<EShooterPlayerStatus>                  bpp__PlayerStatus__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
