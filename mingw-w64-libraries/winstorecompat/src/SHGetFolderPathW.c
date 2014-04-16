/*
    Copyright (c) 2013 mingw-w64 project

    Contributing authors: Rafaël Carré

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

#define SHGetFolderPathW __SHGetFolderPathW
#include <windows.h>
#include <shfolder.h>
#undef SHGetFolderPathW

HRESULT WINAPI SHGetFolderPathW(HWND hwnd,int csidl,HANDLE hToken,DWORD dwFlags,LPWSTR pszPath);

HRESULT WINAPI SHGetFolderPathW(HWND hwnd,int csidl,HANDLE hToken,DWORD dwFlags,LPWSTR pszPath)
{
    return S_FALSE;
}

HRESULT (WINAPI *__MINGW_IMP_SYMBOL(SHGetFolderPathW))(HWND hwnd,int csidl,HANDLE hToken,DWORD dwFlags,LPWSTR pszPath) asm("__imp__SHGetFolderPathW@20") = SHGetFolderPathW;