#pragma once
#include "SDK.hpp"
#include "global.h"

#undef max
#define M_PI 3.14159265358979323846f

namespace Util
{
    bool DataCompare(PBYTE pData, PBYTE bSig, char* szMask)
    {
        for (; *szMask; ++szMask, ++pData, ++bSig)
        {
            if (*szMask == 'x' && *pData != *bSig)
                return false;
        }
        return (*szMask) == 0;
    }

    PBYTE FindPattern(PBYTE dwAddress, DWORD dwSize, PBYTE pbSig, char* szMask, long offset)
    {
        size_t length = strlen(szMask);
        for (size_t i = NULL; i < dwSize - length; i++)
        {
            if (DataCompare(dwAddress + i, pbSig, szMask))
                return dwAddress + i + offset;
        }
        return nullptr;
    }

    namespace Vector
    {
        Classes::FVector Add(Classes::FVector point1, Classes::FVector point2)
        {
			Classes::FVector vector{ 0, 0, 0 };
            vector.X = point1.X + point2.X;
            vector.Y = point1.Y + point2.Y;
            vector.Z = point1.Z + point2.Z;
            return vector;
        }

		Classes::FVector Subtract(Classes::FVector point1, Classes::FVector point2)
        {
			Classes::FVector vector{ 0, 0, 0 };
            vector.X = point1.X - point2.X;
            vector.Y = point1.Y - point2.Y;
            vector.Z = point1.Z - point2.Z;
            return vector;
        }

		Classes::FVector Square(Classes::FVector vector)
        {
            return Classes::FVector{ vector.X * vector.X, vector.Y * vector.Y, vector.Z * vector.Z };
        }

		Classes::FVector Divide(Classes::FVector point1, float num)
		{
			Classes::FVector vector{ 0, 0, 0 };
			vector.X = point1.X / num;
			vector.Y = point1.Y / num;
			vector.Z = point1.Z / num;
			return vector;
		}
    }

    namespace Vector2D
    {
		Classes::FVector2D Subtract(Classes::FVector2D point1, Classes::FVector2D point2)
        {
			Classes::FVector2D vector{ 0, 0 };
            vector.X = point1.X - point2.X;
            vector.Y = point1.Y - point2.Y;
            return vector;
        }

		Classes::FVector2D Add(Classes::FVector2D point1, Classes::FVector2D point2)
		{
			Classes::FVector2D vector{ 0, 0 };
			vector.X = point1.X + point2.X;
			vector.Y = point1.Y + point2.Y;
			return vector;
		}

		Classes::FVector2D Divide(Classes::FVector2D point1, float num)
		{
			Classes::FVector2D vector{ 0, 0 };
			vector.X = point1.X / num;
			vector.Y = point1.Y / num;
			return vector;
		}
    }

    namespace Engine
    {
        DWORD_PTR boneAddress;
		Classes::FMatrix* GetBoneMatrix(Classes::USkeletalMeshComponent* mesh, Classes::FMatrix* result, int boneid)
        {
            return reinterpret_cast<Classes::FMatrix*(__fastcall*)(Classes::USkeletalMeshComponent*, Classes::FMatrix*, int)>(boneAddress)(mesh, result, boneid);
        }

        void GetBoneLocation(Classes::USkeletalMeshComponent* mesh, Classes::FVector* result, int boneid)
        {
			Classes::FMatrix vMatrix;
			Classes::FMatrix *vTempMatrix = GetBoneMatrix(mesh, &vMatrix, boneid);
            *result = vMatrix.WPlane;
        }
    }

    bool IsLocalPlayer(Classes::AActor* player)
    {
        if (Global::m_LocalPlayer->PlayerController->AcknowledgedPawn == nullptr)
            return true;
        return (static_cast<Classes::APawn*>(player) == Global::m_LocalPlayer->PlayerController->AcknowledgedPawn);
    }

    std::wstring DistanceToString(float distance)
    {
        float meters = distance * 0.01f;
        std::wstringstream ss;

        if (meters < 1000.f)
        {
            ss << std::fixed << std::setprecision(0) << meters << "m";
        }
		else
		{
			ss.precision(3);
			ss << std::fixed << std::setprecision(0) << (meters / 1000.f) << "km";
		}
        return ss.str();
    }

    float GetDistance(Classes::FVector x, Classes::FVector y)
    {
        auto z = Vector::Subtract(x, y);
        return sqrt(z.X * z.X + z.Y * z.Y + z.Z * z.Z);
    }

	float GetDistance2D(Classes::FVector2D point1, Classes::FVector2D point2)
	{
		Classes::FVector2D heading = Vector2D::Subtract(point2, point1);
		float distanceSquared;
		float distance;

		distanceSquared = heading.X * heading.X + heading.Y * heading.Y;
		distance = sqrt(distanceSquared);

		return distance;
	}
}