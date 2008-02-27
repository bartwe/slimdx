/*
* Copyright (c) 2007-2008 SlimDX Group
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
#pragma once

#include "Enums.h"
#include "SampleDescription.h"

namespace SlimDX
{
	namespace DXGI
	{
		/// <remarks>
		/// Describes properties of a surface.
		/// </remarks>
		public value class SurfaceDescription
		{
			int m_Width;
			int m_Height;
			Format m_Format;
			SampleDescription m_SampleDesc;

		internal:
			SurfaceDescription( const DXGI_SURFACE_DESC& native );

		public:
			/// <summary>
			/// Gets the width of the surface.
			/// </summary>
			property int Width
			{
				int get();
			}
		
			/// <summary>
			/// Gets the height of the surface.
			/// </summary>
			property int Height
			{
				int get();
			}

			/// <summary>
			/// Gets the format of the surface.
			/// </summary>
			property DXGI::Format Format
			{
				DXGI::Format get();
			}

			/// <summary>
			/// Gets the surface's multisampling properties.
			/// </summary>
			property DXGI::SampleDescription SampleDescription
			{
				DXGI::SampleDescription get();
			}
		};
	}
};