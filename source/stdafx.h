/*
* Copyright (c) 2007-2014 SlimDX Group
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

#define NOMINMAX

#include <InitGuid.h>		// include these two headers in this order or die a horrible firey GUID related death
#include <CGuid.h>

#include <windows.h>
#include <vcclr.h>
#include <unknwn.h>

#include <d3d11_1.h>
#include <xinput.h>
#include <dwrite.h>

#include <d3dcompiler.h>

#include <memory>
#include <stdexcept>
#include <cmath>
#include <cassert>
#include <algorithm>

#pragma warning(push)
#pragma warning(disable : 4005)
#include <cstdint>
#include <wincodec.h>
#pragma warning(pop)

using namespace SlimMath;	// I'm lazy