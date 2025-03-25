/**
 * MIT License
 *
 * Copyright (c) 2020 James Smith
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
 * sell copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
 * IN THE SOFTWARE.
 */
/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'ApertureStatus-2.png'
 * 
 * https://github.com/Floppy/Marlin-Bitmaps/blob/master/status/aperture_status.h
 */
/**
 * The Aperture Laboratories Logo is owned and copyrighted by Valve, Inc and
 * was adapted into this form by Kyle (Tony) Kuhn.
 */
 
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_WIDTH       24

const unsigned char status_logo_bmp[] PROGMEM = {
  0x00,0x0C,0x00, // ............##..........
  0x00,0x7F,0x00, // .........#######........
  0x01,0xBF,0xA0, // .......##.#######.#.....
  0x07,0xCF,0xB0, // .....#####..#####.##....
  0x0F,0xF7,0xB8, // ....########.####.###...
  0x1F,0xFB,0xB8, // ...##########.###.###...
  0x3C,0x00,0xBC, // ..####..........#.####..
  0x23,0x00,0x3E, // ..#...##..........#####.
  0x1E,0x00,0x3E, // ...####...........#####.
  0x7C,0x00,0x3D, // .#####............####.#
  0x7C,0x00,0x1B, // .#####.............##.##
  0x78,0x00,0x1B, // .####..............##.##
  0xF4,0x00,0x17, // ####.#.............#.###
  0xEC,0x00,0x0F, // ###.##..............####
  0x6C,0x00,0x0F, // .##.##..............####
  0x5C,0x00,0x1F, // .#.###.............#####
  0x3C,0x00,0x1E, // ..####.............####.
  0x3D,0x00,0x30, // ..####.#..........##....
  0x1D,0x80,0x0C, // ...###.##...........##..
  0x1D,0xCF,0xF8, // ...###.###..#########...
  0x0E,0xF3,0xF8, // ....###.####..#######...
  0x02,0xFD,0xE0, // ......#.######.####.....
  0x02,0xFE,0xC0, // ......#.#######.##......
  0x00,0x7E,0x00  // .........######.........
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
