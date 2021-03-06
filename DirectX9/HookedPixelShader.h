#pragma once
#define CINTERFACE
#define D3D9_NO_HELPERS
#define COBJMACROS
namespace D3D9Base
{

#include <d3d9.h>

}
#undef COBJMACROS
#undef D3D9_NO_HELPERS
#undef CINTERFACE
D3D9Base::IDirect3DPixelShader9* hook_pixel_shader(D3D9Base::IDirect3DPixelShader9 *orig_pixel_shader, D3D9Base::IDirect3DPixelShader9 *hacker_pixel_shader);
D3D9Base::IDirect3DPixelShader9* lookup_hooked_pixel_shader(D3D9Base::IDirect3DPixelShader9 *orig_pixel_shader);
