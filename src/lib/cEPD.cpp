/* cEPD.cpp	Mon Nov 15 2021 14:16:41 tmm */

/*

Module:	cEPD.cpp

Function:
	Constructor/core functions for EPD wrapper.

Version:
	V0.1.0	Mon Nov 15 2021 14:16:41 tmm	Edit level 1

Copyright notice:
	This file copyright (C) 2021 by

		MCCI Corporation
		3520 Krums Corners Road
		Ithaca, NY  14850

	An unpublished work.  All rights reserved.

	This file is proprietary information, and may not be disclosed or
	copied without the prior permission of MCCI Corporation.

Author:
	Terry Moore, MCCI Corporation	November 2021

Revision History:
   0.1.0  Mon Nov 15 2021 14:16:41  tmm
	ticket: Module created.

*/

#include <MCCI_EPD_wrap.h>

#include <Adafruit_ThinkInk.h>

using namespace McciEpd;

/****************************************************************************\
|
|	Manifest constants & typedefs.
|
\****************************************************************************/

using cDisplay = ThinkInk_290_Tricolor_Z10;


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

static cDisplay *s_pDisplay;

/****************************************************************************\
|
|	Code.
|
\****************************************************************************/

cEPD::cEPD(
    std::int8_t DC,
    std::int8_t RST,
    std::int8_t CS,
    std::int8_t SRCS,
    std::int8_t BUSY, 
    SPIClass *spi
    )
    {
    s_pDisplay = new cDisplay(DC, RST, CS, SRCS, BUSY, spi);
    }

cEPD::~cEPD()
    {
    if (s_pDisplay != nullptr)
        {
        delete s_pDisplay;
        s_pDisplay = nullptr;
        }
    }

/****************************************************************************\
|
|	Methods.
|
\****************************************************************************/

void cEPD::begin(ThinkInkMode_t mode)
    {
    s_pDisplay->begin(thinkinkmode_t(mode));
    }

void cEPD::drawPixel(std::int16_t x, std::int16_t y, std::uint16_t color)
    {
    s_pDisplay->drawPixel(x, y, color);
    }

void cEPD::clearBuffer()
    {
    s_pDisplay->clearBuffer();
    }

void cEPD::clearDisplay()
    {
    s_pDisplay->clearDisplay();
    }

void cEPD::setBlackBuffer(int8_t index, bool inverted)
    {
    s_pDisplay->setBlackBuffer(index, inverted);
    }

void cEPD::setColorBuffer(int8_t index, bool inverted)
    {
    s_pDisplay->setColorBuffer(index, inverted);
    }

void cEPD::display(bool sleep)
    {
    s_pDisplay->display(sleep);
    }

void cEPD::powerUp()
    {
    s_pDisplay->powerUp();
    }

void cEPD::powerDown()
    {
    s_pDisplay->powerDown();
    }

void cEPD::update()
    {
    s_pDisplay->update();
    }

void cEPD::displayPartial(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2)
    {
    s_pDisplay->displayPartial(x1, y1, x2, y2);
    }

cEPD::ThinkInkMode_t 
cEPD::getMode(void)
    {
    return cEPD::ThinkInkMode_t(s_pDisplay->getMode());
    }

void cEPD::startWrite(void)
    {
    s_pDisplay->startWrite();
    }

void cEPD::writePixel(int16_t x, int16_t y, uint16_t color)
    {
    s_pDisplay->writePixel(x, y, color);
    }

void cEPD::writeFillRect(int16_t x, int16_t y, int16_t w, int16_t h,
                    uint16_t color)
    {
    s_pDisplay->writeFillRect(x, y, w, h, color);
    }

void cEPD::writeFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color)
    {
    s_pDisplay->writeFastVLine(x, y, h, color);
    }

void cEPD::writeFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color)
    {
    s_pDisplay->writeFastHLine(x, y, w, color);
    }

void cEPD::writeLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
                uint16_t color)
    {
    s_pDisplay->writeLine(x0, y0, x1, y1, color);
    }

void cEPD::endWrite(void)
    {
    s_pDisplay->endWrite();
    }

void cEPD::setRotation(uint8_t r)
    {
    s_pDisplay->setRotation(r);
    }

void cEPD::invertDisplay(bool i)
    {
    s_pDisplay->invertDisplay(i);
    }

void cEPD::drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color)
    {
    s_pDisplay->drawFastVLine(x, y, h, color);
    }

void cEPD::drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color)
    {
    s_pDisplay->drawFastHLine(x, y, w, color);
    }

void cEPD::fillRect(int16_t x, int16_t y, int16_t w, int16_t h,
                uint16_t color)
    {
    s_pDisplay->fillRect(x, y, w, h, color);
    }

void cEPD::fillScreen(uint16_t color)
    {
    s_pDisplay->fillScreen(color);
    }

void cEPD::drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
                uint16_t color)
    {
    s_pDisplay->drawLine(x0, y0, x1, y1, color);
    }

void cEPD::drawRect(int16_t x, int16_t y, int16_t w, int16_t h,
                        uint16_t color)
    {
    s_pDisplay->drawRect(x, y, w, y, color);
    }

void cEPD::drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color)
    {
    s_pDisplay->drawCircle(x0, y0, r, color);
    }

void cEPD::drawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
                        uint16_t color)
    {
    s_pDisplay->drawCircleHelper(x0, y0, r, cornername, color);
    }

void cEPD::fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color)
    {
    s_pDisplay->fillCircle(x0, y0, r, color);
    }

void cEPD::fillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
                        int16_t delta, uint16_t color)
    {
    s_pDisplay->fillCircleHelper(x0, y0, r, cornername, delta, color);
    }

void cEPD::drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2,
                    int16_t y2, uint16_t color)
    {
    s_pDisplay->drawTriangle(x0, y0, x1, y1, x2, y2, color);
    }

void cEPD::fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2,
                    int16_t y2, uint16_t color)
    {
    s_pDisplay->fillTriangle(x0, y0, x1, y1, x2, y2, color);
    }

void cEPD::drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
                    int16_t radius, uint16_t color)
    {
    s_pDisplay->drawRoundRect(x0, y0, w, h, radius, color);
    }

void cEPD::fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
                    int16_t radius, uint16_t color)
    {
    s_pDisplay->fillRoundRect(x0, y0, w, h, radius, color);
    }

void cEPD::drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                int16_t h, uint16_t color)
    {
    s_pDisplay->drawBitmap(x, y, bitmap, w, h, color);
    }

void cEPD::drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                int16_t h, uint16_t color, uint16_t bg)
    {
    s_pDisplay->drawBitmap(x, y, bitmap, w, h, color, bg);
    }

void cEPD::drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h,
                uint16_t color)
    {
    s_pDisplay->drawBitmap(x, y, bitmap, w, h, color);
    }

void cEPD::drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h,
                uint16_t color, uint16_t bg)
    {
    s_pDisplay->drawBitmap(x, y, bitmap, w, h, color, bg);
    }

void cEPD::drawXBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                int16_t h, uint16_t color)
    {
    s_pDisplay->drawXBitmap(x, y, bitmap, w, h, color);
    }

void cEPD::drawGrayscaleBitmap(int16_t x, int16_t y, const uint8_t bitmap[],
                        int16_t w, int16_t h)
    {
    s_pDisplay->drawGrayscaleBitmap(x, y, bitmap, w, h);
    }

void cEPD::drawGrayscaleBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w,
                        int16_t h)
    {
    s_pDisplay->drawGrayscaleBitmap(x, y, bitmap, w, h);
    }

void cEPD::drawGrayscaleBitmap(int16_t x, int16_t y, const uint8_t bitmap[],
                        const uint8_t mask[], int16_t w, int16_t h)
    {
    s_pDisplay->drawGrayscaleBitmap(x, y, bitmap, mask, w, h);
    }

void cEPD::drawGrayscaleBitmap(int16_t x, int16_t y, uint8_t *bitmap, uint8_t *mask,
                        int16_t w, int16_t h)
    {
    s_pDisplay->drawGrayscaleBitmap(x, y, bitmap, mask, w, h);
    }

void cEPD::drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[], int16_t w,
                    int16_t h)
    {
    s_pDisplay->drawRGBBitmap(x, y, bitmap, w, h);
    }

void cEPD::drawRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap, int16_t w,
                    int16_t h)
    {
    s_pDisplay->drawRGBBitmap(x, y, bitmap, w, h);
    }

void cEPD::drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[],
                    const uint8_t mask[], int16_t w, int16_t h)
    {
    s_pDisplay->drawRGBBitmap(x, y, bitmap, mask, w, h);
    }

void cEPD::drawRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap, uint8_t *mask,
                    int16_t w, int16_t h)
    {
    s_pDisplay->drawRGBBitmap(x, y, bitmap, mask, w, h);
    }

void cEPD::drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
                uint16_t bg, uint8_t size)
    {
    s_pDisplay->drawChar(x, y, c, color, bg, size);
    }

void cEPD::drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
                uint16_t bg, uint8_t size_x, uint8_t size_y)
    {
    s_pDisplay->drawChar(x, y, c, color, bg, size_x, size_y);
    }

void cEPD::getTextBounds(const char *string, int16_t x, int16_t y, int16_t *x1,
                    int16_t *y1, uint16_t *w, uint16_t *h)
    {
    s_pDisplay->getTextBounds(string, x, y, x1, y1, w, h);
    }

void cEPD::getTextBounds(const __FlashStringHelper *s, int16_t x, int16_t y,
                    int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h)
    {
    s_pDisplay->getTextBounds(s, x, y, x1, y1, w, h);
    }

void cEPD::getTextBounds(const String &str, int16_t x, int16_t y, int16_t *x1,
                    int16_t *y1, uint16_t *w, uint16_t *h)
    {
    s_pDisplay->getTextBounds(str, x, y, x1, y1, w, h);
    }

void cEPD::setTextSize(uint8_t s)
    {
    s_pDisplay->setTextSize(s);
    }

void cEPD::setTextSize(uint8_t sx, uint8_t sy)
    {
    s_pDisplay->setTextSize(sx, sy);
    }

void cEPD::setFont(const GFXfont *f)
    {
    s_pDisplay->setFont(f);
    }

void cEPD::setCursor(int16_t x, int16_t y)
    {
    s_pDisplay->setCursor(x, y);
    }

void cEPD::setTextColor(uint16_t c)
    {
    s_pDisplay->setTextColor(c);
    }

void cEPD::setTextColor(uint16_t c, uint16_t bg)
    {
    s_pDisplay->setTextColor(c, bg);
    }

void cEPD::setTextWrap(bool w)
    {
    s_pDisplay->setTextWrap(w);
    }

void cEPD::cp437(bool x)
    {
    s_pDisplay->cp437(x);
    }

int16_t cEPD::width(void) const
    {
    return s_pDisplay->width();
    }

int16_t cEPD::height(void) const
    {
    return s_pDisplay->height(); 
    }

uint8_t cEPD::getRotation(void) const
    {
    return s_pDisplay->getRotation();
    }

int16_t cEPD::getCursorX(void) const 
    {
    return s_pDisplay->getCursorX();
    }

int16_t cEPD::getCursorY(void) const
    {
    return s_pDisplay->getCursorY();
    }

/* virtual */
size_t cEPD::write(uint8_t x)
    {
    return s_pDisplay->write(x);
    }


/**** end of cEPD.cpp ****/
