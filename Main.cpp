
#include "stdafx.h"
#include "D3D12/Graphics.h"

_Use_decl_annotations_
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
    Graphics sample(1280, 720, L"D2 Engine");
    return Win32Application::Run(&sample, hInstance, nCmdShow);
}