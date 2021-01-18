                                                                                                                                                                                                                                                                                              

typedef HRESULT(APIENTRY *SetStreamSource)(IDirect3DDevice9*, UINT, IDirect3DVertexBuffer9*, UINT, UINT);
SetStreamSource SetStreamSource_orig = 0;

typedef HRESULT(APIENTRY *DrawIndexedPrimitive)(IDirect3DDevice9*, D3DPRIMITIVETYPE, INT, UINT, UINT, UINT, UINT);
DrawIndexedPrimitive DrawIndexedPrimitive_orig = 0;

typedef HRESULT(APIENTRY* Present) (IDirect3DDevice9*, const RECT *, const RECT *, HWND, const RGNDATA *);
Present Present_orig = 0;

typedef HRESULT(APIENTRY* EndScene) (IDirect3DDevice9*);
EndScene EndScene_orig = 0;

typedef HRESULT(APIENTRY *Reset)(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
Reset Reset_orig = 0;

bool Menu = true;
HMODULE Hand;
UINT Stride;
HWND TargetWnd = NULL;
WNDPROC oWndProc = NULL;

const char* VariableText(const char* format, ...) {
	va_list argptr;
	va_start(argptr, format);

	char buffer[2048];
	vsprintf_s(buffer, format, argptr); // It should use vsnprintf but meh doesn't matter here

	va_end(argptr);

	return buffer;
}

//TABS
bool pic = 0;
bool hometab = 1;
bool teacher = 0;
bool school = 0;
unsigned int asdelay = 49;
bool IsPressed = false;
bool ShowMenu = true;

//CHECK
bool math = 0;
bool literature = 0;
bool science = 0;

#pragma warning (disable: 4099) 
#if defined _M_X64
#pragma comment(lib, "detours.X64/detours.lib")
#elif defined _M_IX86
#pragma comment(lib, "detours.X86/detours.lib")
#endif


