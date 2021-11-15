/*

Module:	MCCI_EPD_wrap.h

Function:
    Wraper for Adafruit_EPD to keep header files separate.

Copyright and License:
    This file copyright (C) 2021 by

        MCCI Corporation
        3520 Krums Corners Road
        Ithaca, NY  14850

    See accompanying LICENSE file for copyright and license information.

Author:
    Terry Moore, MCCI Corporation	November 2021

*/

#ifndef _MCCI_EPD_wrap_h_
#define _MCCI_EPD_wrap_h_	/* prevent multiple includes */

#pragma once

#include <Arduino.h>
#include <cstdint>
#include <SPI.h>
#include <Adafruit_GFX.h>

// forward reference:
class Adafruit_EPD;

namespace McciEpd {

///
/// \brief the wrapper class template for Epaper Displays.
///
/// \details This template is used to wrap the specific settings of the underlying
///     physical display. The Adafruit display drivers are abstracted but don't
///     split header and code, so we introduce this template.
///
// /    This template is also used to create an 
template <class Tdisplay>
class cEPD_physical : public Tdisplay
    {
public:
    cEPD_physical(std::int8_t DC, std::int8_t RST, std::int8_t CS,
        std::int8_t SRCS, std::int8_t BUSY, SPIClass *spi)
        : Tdisplay(DC, RST, CS, SRCS, BUSY, spi) {}
    // ~cEPD_physical();    -- use default desctructor
    // neither copyable nor movable.
    cEPD_physical(const cEPD_physical&) = delete;
    cEPD_physical& operator=(const cEPD_physical&) = delete;
    cEPD_physical(const cEPD_physical&&) = delete;
    cEPD_physical& operator=(const cEPD_physical&&) = delete;

/*
    void begin(ThinkInkMode_t mode = ThinkInkMode_t::TRICOLOR)
        {
        return this->Tdisplay::begin
        }
    void drawPixel(std::int16_t x, std::int16_t y, std::uint16_t color);
    void clearBuffer();
    void clearDisplay();
    void setBlackBuffer(int8_t index, bool inverted);
    void setColorBuffer(int8_t index, bool inverted);
    void display(bool sleep = false);
    void powerUp();
    void powerDown();
    void update();
    void displayPartial(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);

    ThinkInkMode_t getMode(void);

    void startWrite(void)
        {
        this->Tdisplay::startWrite();
        }
    void writePixel(int16_t x, int16_t y, uint16_t color)
        {
        this->Tdisplay::writePixel(x, y, color);
        }
    void writeFillRect(int16_t x, int16_t y, int16_t w, int16_t h,
                       uint16_t color)
        {
        this->Tdisplay::writeFillRect(x, y, w, h, color);
        }
    void writeFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color)
        {
        this->Tdisplay::writeFastVLine(x, y, h, color);
        }
    void writeFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color)
        {
        this->Tdisplay::writeFastHLine(x, y, w, color);
        }
    void writeLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
                   uint16_t color)
        {
        this->Tdisplay::writeLine(x0, y0, x1, y1, color);
        }
    void endWrite(void)
        {
        this->Tdisplay::endWrite();
        }

    void setRotation(uint8_t r)
        {
        this->Tdisplay::setRotation(r);
        }

    void invertDisplay(bool i)
        {
        this->Tdisplay::invertDisplay(i);
        }
    void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color)
        {
        this->Tdisplay::drawFastVLine(x, y, h, color);
        }
    void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color)
        {
        this->Tdisplay::drawFastHLine(x, y, w, color);
        }
    void fillRect(int16_t x, int16_t y, int16_t w, int16_t h,
                    uint16_t color)
        {
        this->Tdisplay::fillRect(x, y, w, h, color);
        }
    void fillScreen(uint16_t color)
        {
        this->Tdisplay::fillScreen(color);
        }
    void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
                    uint16_t color)
        {
        this->Tdisplay::drawLine(x0, y0, x1, y1, color);
        }
    void drawRect(int16_t x, int16_t y, int16_t w, int16_t h,
                            uint16_t color)
        {
        this->Tdisplay::drawRect(x, y, w, y, color);
        }
    void drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color)
        {
        this->Tdisplay::drawCircle(x0, y0, r, color);
        }
    void drawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
                            uint16_t color)
        {
        this->Tdisplay::drawCircleHelper(x0, y0, r, cornername, color);
        }
    void fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color)
        {
        this->Tdisplay::fillCircle(x0, y0, r, color);
        }
    void fillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
                            int16_t delta, uint16_t color)
        {
        this->Tdisplay::fillCircleHelper(x0, y0, r, cornername, delta, color);
        }
    void drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2,
                        int16_t y2, uint16_t color)
        {
        this->Tdisplay::drawTriangle(x0, y0, x1, y1, x2, y2, color);
        }
    void fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2,
                        int16_t y2, uint16_t color)
        {
        this->Tdisplay::fillTriangle(x0, y0, x1, y1, x2, y2, color);
        }
    void drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
                        int16_t radius, uint16_t color)
        {
        this->Tdisplay::drawRoundRect(x0, y0, w, h, radius, color);
        }
    void fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
                        int16_t radius, uint16_t color)
        {
        this->Tdisplay::fillRoundRect(x0, y0, w, h, radius, color);
        }
    void drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                    int16_t h, uint16_t color)
        {
        this->Tdisplay::drawBitmap(x, y, bitmap, w, h, color);
        }
    void drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                    int16_t h, uint16_t color, uint16_t bg)
        {
        this->Tdisplay::drawBitmap(x, y, bitmap, w, h, color, bg);
        }
    void drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h,
                    uint16_t color)
        {
        this->Tdisplay::drawBitmap(x, y, bitmap, w, h, color);
        }
    void drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h,
                    uint16_t color, uint16_t bg)
        {
        this->Tdisplay::drawBitmap(x, y, bitmap, w, h, color, bg);
        }
    void drawXBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                    int16_t h, uint16_t color)
        {
        this->Tdisplay::drawXBitmap(x, y, bitmap, w, h, color);
        }
    void drawGrayscaleBitmap(int16_t x, int16_t y, const uint8_t bitmap[],
                            int16_t w, int16_t h)
        {
        this->Tdisplay::drawGrayscaleBitmap(x, y, bitmap, w, h);
        }
    void drawGrayscaleBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w,
                            int16_t h)
        {
        this->Tdisplay::drawGrayscaleBitmap(x, y, bitmap, w, h);
        }
    void drawGrayscaleBitmap(int16_t x, int16_t y, const uint8_t bitmap[],
                            const uint8_t mask[], int16_t w, int16_t h)
        {
        this->Tdisplay::drawGrayscaleBitmap(x, y, bitmap, mask, w, h);
        }
    void drawGrayscaleBitmap(int16_t x, int16_t y, uint8_t *bitmap, uint8_t *mask,
                            int16_t w, int16_t h)
        {
        this->Tdisplay::drawGrayscaleBitmap(x, y, bitmap, mask, w, h);
        }
    void drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[], int16_t w,
                        int16_t h)
        {
        this->Tdisplay::drawRGBBitmap(x, y, bitmap, w, h);
        }
    void drawRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap, int16_t w,
                        int16_t h)
        {
        this->Tdisplay::drawRGBBitmap(x, y, bitmap, w, h);
        }
    void drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[],
                        const uint8_t mask[], int16_t w, int16_t h)
        {
        this->Tdisplay::drawRGBBitmap(x, y, bitmap, mask, w, h);
        }
    void drawRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap, uint8_t *mask,
                        int16_t w, int16_t h)
        {
        this->Tdisplay::drawRGBBitmap(x, y, bitmap, mask, w, h);
        }
    void drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
                    uint16_t bg, uint8_t size)
        {
        this->Tdisplay::drawChar(x, y, c, color, bg, size);
        }
    void drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
                    uint16_t bg, uint8_t size_x, uint8_t size_y)
        {
        this->Tdisplay::drawChar(x, y, c, color, bg, size_x, size_y);
        }
    void getTextBounds(const char *string, int16_t x, int16_t y, int16_t *x1,
                        int16_t *y1, uint16_t *w, uint16_t *h)
        {
        this->Tdisplay::getTextBounds(string, x, y, x1, y1, w, h);
        }
    void getTextBounds(const __FlashStringHelper *s, int16_t x, int16_t y,
                        int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h)
        {
        this->Tdisplay::getTextBounds(s, x, y, x1, y1, w, h);
        }
    void getTextBounds(const String &str, int16_t x, int16_t y, int16_t *x1,
                        int16_t *y1, uint16_t *w, uint16_t *h)
        {
        this->Tdisplay::getTextBounds(str, x, y, x1, y1, w, h);
        }
    void setTextSize(uint8_t s)
        {
        this->Tdisplay::setTextSize(s);
        }
    void setTextSize(uint8_t sx, uint8_t sy)
        {
        this->Tdisplay::setTextSize(sx, sy);
        }
    void setFont(const GFXfont *f = NULL)
        {
        this->Tdisplay::setFont(f);
        }
    void setCursor(int16_t x, int16_t y)
        {
        this->Tdisplay::setCursor(x, y);
        }
    void setTextColor(uint16_t c)
        {
        this->Tdisplay::setTextColor(c);
        }
    void setTextColor(uint16_t c, uint16_t bg)
        {
        this->Tdisplay::setTextColor(c, bg);
        }
    void setTextWrap(bool w)
        {
        this->Tdisplay::setTextWrap(w);
        }
    void cp437(bool x = true)
        {
        this->Tdisplay::cp437(x);
        }
    int16_t width(void) const
        {
        return this->Tdisplay::width();
        }
    int16_t height(void) const
        {
        return this->Tdisplay::height(); 
        }
    uint8_t getRotation(void) const
        {
        return this->Tdisplay::getRotation();
        }
    int16_t getCursorX(void) const 
        {
        return this->Tdisplay::getCursorX();
        }
    int16_t getCursorY(void) const
        {
        return this->Tdisplay::getCursorY();
        }

    using Print::write;
    virtual size_t write(uint8_t x)
        {
        return this->Tdisplay::write(x);
        }
*/
    };

class cEPD : public Print
    {
public:
    cEPD(std::int8_t DC, std::int8_t RST, std::int8_t CS,
        std::int8_t SRCS, std::int8_t BUSY, SPIClass *spi);
    ~cEPD();
    // neither copyable nor movable.
    cEPD(const cEPD&) = delete;
    cEPD& operator=(const cEPD&) = delete;
    cEPD(const cEPD&&) = delete;
    cEPD& operator=(const cEPD&&) = delete;

    /// \brief the colors for a display.
    ///
    /// \note These values must match the corresponding value in Adafruit_EPD.h
    enum EpdColor_t : std::uint16_t
        {
        WHITE,      ///< white color
        BLACK,      ///< black color
        RED,        ///< red color
        GRAY,       ///< gray color ('red' on grayscale)
        DARK,       ///< darker color
        LIGHT,      ///< lighter color
        NUM_COLORS
        };

    ///
    /// \brief the mode of an EPaper display
    ///
    /// \note the values must match the corresponding value in Adafruit_EPD.h
    ///
    enum class ThinkInkMode_t : std::uint8_t
        {
        MONO,           ///< monochrome
        TRICOLOR,       ///< tricolor
        GRAYSCALE4,     ///< 4 grayscale
        MONO_PARTIAL,   ///< monochrome with partial update
        };

    void begin(ThinkInkMode_t mode = ThinkInkMode_t::TRICOLOR);
    void drawPixel(std::int16_t x, std::int16_t y, std::uint16_t color);
    void clearBuffer();
    void clearDisplay();
    void setBlackBuffer(int8_t index, bool inverted);
    void setColorBuffer(int8_t index, bool inverted);
    void display(bool sleep = false);
    void powerUp();
    void powerDown();
    void update();
    void displayPartial(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);

    ThinkInkMode_t getMode(void);

    void startWrite(void);
    void writePixel(int16_t x, int16_t y, uint16_t color);
    void writeFillRect(int16_t x, int16_t y, int16_t w, int16_t h,
                       uint16_t color);
    void writeFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color);
    void writeFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color);
    void writeLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
                   uint16_t color);
    void endWrite(void);
    void setRotation(uint8_t r);
    void invertDisplay(bool i);
    void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color);
    void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color);
    void fillRect(int16_t x, int16_t y, int16_t w, int16_t h,
                    uint16_t color);
    void fillScreen(uint16_t color);
    void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1,
                    uint16_t color);
    void drawRect(int16_t x, int16_t y, int16_t w, int16_t h,
                            uint16_t color);
    void drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
    void drawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
                            uint16_t color);
    void fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
    void fillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,
                            int16_t delta, uint16_t color);
    void drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2,
                        int16_t y2, uint16_t color);
    void fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2,
                        int16_t y2, uint16_t color);
    void drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
                        int16_t radius, uint16_t color);
    void fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,
                        int16_t radius, uint16_t color);
    void drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                    int16_t h, uint16_t color);
    void drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                    int16_t h, uint16_t color, uint16_t bg);
    void drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h,
                    uint16_t color);
    void drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h,
                    uint16_t color, uint16_t bg);
    void drawXBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w,
                    int16_t h, uint16_t color);
    void drawGrayscaleBitmap(int16_t x, int16_t y, const uint8_t bitmap[],
                            int16_t w, int16_t h);
    void drawGrayscaleBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w,
                            int16_t h);
    void drawGrayscaleBitmap(int16_t x, int16_t y, const uint8_t bitmap[],
                            const uint8_t mask[], int16_t w, int16_t h);
    void drawGrayscaleBitmap(int16_t x, int16_t y, uint8_t *bitmap, uint8_t *mask,
                            int16_t w, int16_t h);
    void drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[], int16_t w,
                        int16_t h);
    void drawRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap, int16_t w,
                        int16_t h);
    void drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[],
                        const uint8_t mask[], int16_t w, int16_t h);
    void drawRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap, uint8_t *mask,
                        int16_t w, int16_t h);
    void drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
                    uint16_t bg, uint8_t size);
    void drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
                    uint16_t bg, uint8_t size_x, uint8_t size_y);
    void getTextBounds(const char *string, int16_t x, int16_t y, int16_t *x1,
                        int16_t *y1, uint16_t *w, uint16_t *h);
    void getTextBounds(const __FlashStringHelper *s, int16_t x, int16_t y,
                        int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h);
    void getTextBounds(const String &str, int16_t x, int16_t y, int16_t *x1,
                        int16_t *y1, uint16_t *w, uint16_t *h);
    void setTextSize(uint8_t s);
    void setTextSize(uint8_t sx, uint8_t sy);
    void setFont(const GFXfont *f = NULL);
    void setCursor(int16_t x, int16_t y);
    void setTextColor(uint16_t c);
    void setTextColor(uint16_t c, uint16_t bg);
    void setTextWrap(bool w);
    void cp437(bool x = true);
    int16_t width(void) const;
    int16_t height(void) const;
    uint8_t getRotation(void) const;
    int16_t getCursorX(void) const;
    int16_t getCursorY(void) const;

    using Print::write;
    virtual size_t write(uint8_t x);
    };


} // end namespace McciEpd

#endif /* _MCCI_EPD_wrap_h_ */
