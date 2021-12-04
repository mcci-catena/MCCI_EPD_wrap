/*

Module:	cEPD_Fonts_Adafruit.cpp

Function:
	Wrapper for the Adafruit fonts.

Copyright and License:
	This file copyright (C) 2021 by

		MCCI Corporation
		3520 Krums Corners Road
		Ithaca, NY  14850

	See accompanying LICENSE file for copyright and license information.

Author:
	Terry Moore, MCCI Corporation	December 2021

*/

#include <MCCI_EPD_wrap.h>

using namespace McciEpd;

/****************************************************************************\
|
|	Manifest constants & typedefs.
|
\****************************************************************************/


/****************************************************************************\
|
|	Read-only data.
|
\****************************************************************************/


/****************************************************************************\
|
|	Variables.
|
\****************************************************************************/


/****************************************************************************\
|
|	Code.
|
\****************************************************************************/

/*

generated against the Adafruit directory using:

find ../libraries/Adafruit-GFX-Library/Fonts -name '*.h' |
sed -e 's;.*[/];;' -e 's/\.h$//' | sort | awk '
	{ 
	printf("#include <Fonts/%s.h>\n\nconst GFXfont *cEPD::Fonts::Adafruit::%s()\n\t{\n\treturn &::%s;\n\t}\n\n", $0, $0, $0);
	++nFonts ;
	F[nFonts] = $0;
	}
END 	{
	printf("// for header file:\nclass cEPD::Fonts::Adafruit\n\t{\n");
	for (i = 1; i <= nFonts; ++i)
		{
		printf("\tstatic const GFXfont *%s();\n", F[i]); 
		}
	printf("\t};\n"); 
	}'

*/

#include <Fonts/FreeMono12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMono12pt7b()
	{
	return &::FreeMono12pt7b;
	}

#include <Fonts/FreeMono18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMono18pt7b()
	{
	return &::FreeMono18pt7b;
	}

#include <Fonts/FreeMono24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMono24pt7b()
	{
	return &::FreeMono24pt7b;
	}

#include <Fonts/FreeMono9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMono9pt7b()
	{
	return &::FreeMono9pt7b;
	}

#include <Fonts/FreeMonoBold12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoBold12pt7b()
	{
	return &::FreeMonoBold12pt7b;
	}

#include <Fonts/FreeMonoBold18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoBold18pt7b()
	{
	return &::FreeMonoBold18pt7b;
	}

#include <Fonts/FreeMonoBold24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoBold24pt7b()
	{
	return &::FreeMonoBold24pt7b;
	}

#include <Fonts/FreeMonoBold9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoBold9pt7b()
	{
	return &::FreeMonoBold9pt7b;
	}

#include <Fonts/FreeMonoBoldOblique12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoBoldOblique12pt7b()
	{
	return &::FreeMonoBoldOblique12pt7b;
	}

#include <Fonts/FreeMonoBoldOblique18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoBoldOblique18pt7b()
	{
	return &::FreeMonoBoldOblique18pt7b;
	}

#include <Fonts/FreeMonoBoldOblique24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoBoldOblique24pt7b()
	{
	return &::FreeMonoBoldOblique24pt7b;
	}

#include <Fonts/FreeMonoBoldOblique9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoBoldOblique9pt7b()
	{
	return &::FreeMonoBoldOblique9pt7b;
	}

#include <Fonts/FreeMonoOblique12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoOblique12pt7b()
	{
	return &::FreeMonoOblique12pt7b;
	}

#include <Fonts/FreeMonoOblique18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoOblique18pt7b()
	{
	return &::FreeMonoOblique18pt7b;
	}

#include <Fonts/FreeMonoOblique24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoOblique24pt7b()
	{
	return &::FreeMonoOblique24pt7b;
	}

#include <Fonts/FreeMonoOblique9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeMonoOblique9pt7b()
	{
	return &::FreeMonoOblique9pt7b;
	}

#include <Fonts/FreeSans12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSans12pt7b()
	{
	return &::FreeSans12pt7b;
	}

#include <Fonts/FreeSans18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSans18pt7b()
	{
	return &::FreeSans18pt7b;
	}

#include <Fonts/FreeSans24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSans24pt7b()
	{
	return &::FreeSans24pt7b;
	}

#include <Fonts/FreeSans9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSans9pt7b()
	{
	return &::FreeSans9pt7b;
	}

#include <Fonts/FreeSansBold12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansBold12pt7b()
	{
	return &::FreeSansBold12pt7b;
	}

#include <Fonts/FreeSansBold18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansBold18pt7b()
	{
	return &::FreeSansBold18pt7b;
	}

#include <Fonts/FreeSansBold24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansBold24pt7b()
	{
	return &::FreeSansBold24pt7b;
	}

#include <Fonts/FreeSansBold9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansBold9pt7b()
	{
	return &::FreeSansBold9pt7b;
	}

#include <Fonts/FreeSansBoldOblique12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansBoldOblique12pt7b()
	{
	return &::FreeSansBoldOblique12pt7b;
	}

#include <Fonts/FreeSansBoldOblique18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansBoldOblique18pt7b()
	{
	return &::FreeSansBoldOblique18pt7b;
	}

#include <Fonts/FreeSansBoldOblique24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansBoldOblique24pt7b()
	{
	return &::FreeSansBoldOblique24pt7b;
	}

#include <Fonts/FreeSansBoldOblique9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansBoldOblique9pt7b()
	{
	return &::FreeSansBoldOblique9pt7b;
	}

#include <Fonts/FreeSansOblique12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansOblique12pt7b()
	{
	return &::FreeSansOblique12pt7b;
	}

#include <Fonts/FreeSansOblique18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansOblique18pt7b()
	{
	return &::FreeSansOblique18pt7b;
	}

#include <Fonts/FreeSansOblique24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansOblique24pt7b()
	{
	return &::FreeSansOblique24pt7b;
	}

#include <Fonts/FreeSansOblique9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSansOblique9pt7b()
	{
	return &::FreeSansOblique9pt7b;
	}

#include <Fonts/FreeSerif12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerif12pt7b()
	{
	return &::FreeSerif12pt7b;
	}

#include <Fonts/FreeSerif18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerif18pt7b()
	{
	return &::FreeSerif18pt7b;
	}

#include <Fonts/FreeSerif24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerif24pt7b()
	{
	return &::FreeSerif24pt7b;
	}

#include <Fonts/FreeSerif9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerif9pt7b()
	{
	return &::FreeSerif9pt7b;
	}

#include <Fonts/FreeSerifBold12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifBold12pt7b()
	{
	return &::FreeSerifBold12pt7b;
	}

#include <Fonts/FreeSerifBold18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifBold18pt7b()
	{
	return &::FreeSerifBold18pt7b;
	}

#include <Fonts/FreeSerifBold24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifBold24pt7b()
	{
	return &::FreeSerifBold24pt7b;
	}

#include <Fonts/FreeSerifBold9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifBold9pt7b()
	{
	return &::FreeSerifBold9pt7b;
	}

#include <Fonts/FreeSerifBoldItalic12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifBoldItalic12pt7b()
	{
	return &::FreeSerifBoldItalic12pt7b;
	}

#include <Fonts/FreeSerifBoldItalic18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifBoldItalic18pt7b()
	{
	return &::FreeSerifBoldItalic18pt7b;
	}

#include <Fonts/FreeSerifBoldItalic24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifBoldItalic24pt7b()
	{
	return &::FreeSerifBoldItalic24pt7b;
	}

#include <Fonts/FreeSerifBoldItalic9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifBoldItalic9pt7b()
	{
	return &::FreeSerifBoldItalic9pt7b;
	}

#include <Fonts/FreeSerifItalic12pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifItalic12pt7b()
	{
	return &::FreeSerifItalic12pt7b;
	}

#include <Fonts/FreeSerifItalic18pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifItalic18pt7b()
	{
	return &::FreeSerifItalic18pt7b;
	}

#include <Fonts/FreeSerifItalic24pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifItalic24pt7b()
	{
	return &::FreeSerifItalic24pt7b;
	}

#include <Fonts/FreeSerifItalic9pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::FreeSerifItalic9pt7b()
	{
	return &::FreeSerifItalic9pt7b;
	}

#include <Fonts/Org_01.h>

const GFXfont *cEPD::Fonts::Adafruit::Org_01()
	{
	return &::Org_01;
	}

#include <Fonts/Picopixel.h>

const GFXfont *cEPD::Fonts::Adafruit::Picopixel()
	{
	return &::Picopixel;
	}

#include <Fonts/Tiny3x3a2pt7b.h>

const GFXfont *cEPD::Fonts::Adafruit::Tiny3x3a2pt7b()
	{
	return &::Tiny3x3a2pt7b;
	}

#include <Fonts/TomThumb.h>

const GFXfont *cEPD::Fonts::Adafruit::TomThumb()
	{
	return &::TomThumb;
	}

