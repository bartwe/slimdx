#include "stdafx.h"
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

#include "ResultCode11.h"

namespace SlimDX
{
namespace Direct3D11
{
	ResultCode::ResultCode()
	{
	}

	Result ResultCode::InvalidCall::get()
	{
		return Result( DXGI_ERROR_INVALID_CALL );
	}

	Result ResultCode::WasStillDrawing::get()
	{
		return Result( DXGI_ERROR_WAS_STILL_DRAWING );
	}

	Result ResultCode::FileNotFound::get()
	{
		return Result( D3D11_ERROR_FILE_NOT_FOUND );
	}

	Result ResultCode::TooManyUniqueStateObjects::get()
	{
		return Result( D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS );
	}

	Result ResultCode::Success::get()
	{
		return Result( S_OK );
	}

	Result ResultCode::Failure::get()
	{
		return Result( E_FAIL );
	}

	Result ResultCode::InvalidArgument::get()
	{
		return Result( E_INVALIDARG );
	}

	Result ResultCode::OutOfMemory::get()
	{
		return Result( E_OUTOFMEMORY );
	}

	Result ResultCode::False::get()
	{
		return Result( S_FALSE );
	}
}
}