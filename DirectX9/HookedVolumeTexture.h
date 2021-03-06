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
D3D9Base::IDirect3DVolumeTexture9* hook_volume_texture(D3D9Base::IDirect3DVolumeTexture9 *orig_volume_texture, D3D9Base::IDirect3DVolumeTexture9 *hacker_volume_texture);
D3D9Base::IDirect3DVolumeTexture9* lookup_hooked_volume_texture(D3D9Base::IDirect3DVolumeTexture9 *orig_volume_texture);