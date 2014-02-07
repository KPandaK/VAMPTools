/*
 * VTFLib
 * Copyright (C) 2005-2010 Neil Jedrzejewski & Ryan Gregg

 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later
 * version.
 */

#ifndef VTFDXTN_H
#define VTFDXTN_H

//-----------------------------------------------------------------------------
//
// VTFDXTn.h - contains structures and definitions used in dealing with DXTn
// compressed image data.
// 
// Much of this code is based on examples on Microsofts website and from the
// Developers Image Library (http://www.imagelib.org) (c) Denton Woods.
//
//-----------------------------------------------------------------------------

// RGBA Pixel type
typedef struct Colour8888
{
	unsigned char r;		// change the order of names to change the 
	unsigned char g;		// order of the output ARGB or BGRA, etc...
	unsigned char b;		// Last one is MSB, 1st is LSB.
	unsigned char a;
} Colour8888;

// RGB Pixel type
typedef struct Colour888
{
	unsigned char r;		// change the order of names to change the 
	unsigned char g;		// order of the output ARGB or BGRA, etc...
	unsigned char b;		// Last one is MSB, 1st is LSB.
} Colour888;

// BGR565 Pixel type
typedef struct Colour565
{
	int nBlue	: 5;		// order of names changes
	int nGreen	: 6;		// byte order of output to 32 bit
	int nRed	: 5;
} Colour565;

// DXTn Colour block type
typedef struct DXTColBlock
{
	short col0;
	short col1;
	char row[4];		// no bit fields - use bytes
} DXTColBlock;

// DXTn Alpha block types
typedef struct DXTAlphaBlockExplicit
{
	short row[4];
} DXTAlphaBlockExplicit;

typedef struct DXTAlphaBlock3BitLinear
{
	char alpha0;
	char alpha1;
	char stuff[6];
} DXTAlphaBlock3BitLinear;

#endif // VTFDXTN_H