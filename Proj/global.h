#pragma once


#include <d3d11.h>
#pragma comment (lib, "d3d11")

#include "SimpleMath.h"
using namespace DirectX;
using namespace DirectX::SimpleMath;
typedef Vector2 Vec2;
typedef Vector3 Vec3;
typedef Vector4 Vec4;

#include <d3dcompiler.h>
#pragma comment (lib, "d3dcompiler")

#include <wrl.h>
using namespace Microsoft::WRL;



#define CHKFAIL(hr)      if(((HRESULT)(hr)) < 0) assert(false)

#include <vector>

extern float g_DeltaTime;


struct Vertex
{
	Vec3 vPos;
	Vec4 vColor;
};


struct Transform
{
	Matrix MatWVP;
};