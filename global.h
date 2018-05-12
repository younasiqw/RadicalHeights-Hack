#pragma once
#include <Windows.h>
#include <Psapi.h>
#include "SDK.hpp"

namespace Global
{
    DWORD_PTR BaseAddress;
    MODULEINFO info;
    Classes::UWorld** m_UWorld;
	Classes::ULevel* m_PersistentLevel;
	Classes::ULocalPlayer* m_LocalPlayer;
	Classes::TArray<Classes::AActor*>* m_Actors;
}