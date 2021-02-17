/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "VORONDesign"

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_BMPWIDTH  128

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000001,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00011111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B11111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000011,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00001111,B11111111,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00011111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00111111,B11111110,B00111111,B00011111,B11110011,B10000000,B00011100,B00111111,B11110000,B00111111,B11111000,B00000111,B11111110,B00000111,B10000000,B00110000,
  B00111111,B11111100,B01111110,B00111111,B11110011,B10000000,B00011100,B01111111,B11111100,B00111111,B11111100,B00001111,B11111111,B10000111,B11000000,B00110000,
  B00111111,B11111100,B11111100,B01111111,B11110001,B11000000,B00011100,B11110000,B00011100,B00111000,B00011110,B00011110,B00000011,B10000111,B11100000,B00110000,
  B00111111,B11111000,B11111100,B01111111,B11110001,B11000000,B00111000,B11100000,B00001110,B00111000,B00001110,B00011100,B00000001,B11000111,B11100000,B00110000,
  B00111111,B11110001,B11111000,B11111111,B11110001,B11000000,B00111000,B11100000,B00001110,B00111000,B00001110,B00011100,B00000001,B11000111,B01110000,B00110000,
  B00111111,B11110011,B11111001,B11111111,B11110000,B11100000,B00110000,B11100000,B00001110,B00111000,B00001110,B00011100,B00000001,B11000111,B01111000,B00110000,
  B00111111,B11100011,B11110001,B11111111,B11110000,B11100000,B01110000,B11100000,B00001110,B00111000,B00001110,B00011100,B00000001,B11000111,B00111000,B00110000,
  B00111111,B11000111,B11100011,B11111111,B11110000,B01110000,B01110000,B11100000,B00001110,B00111000,B00011110,B00011100,B00000001,B11000111,B00011100,B00110000,
  B00111111,B11001111,B11100111,B11111111,B11110000,B01110000,B11100000,B11100000,B00001110,B00111111,B11111100,B00011100,B00000001,B11000111,B00011110,B00110000,
  B00111111,B11111111,B11000111,B11111111,B11110000,B01110000,B11100000,B11100000,B00001110,B00111111,B11110000,B00011100,B00000001,B11000111,B00001110,B00110000,
  B00111111,B11111111,B10001111,B11111111,B11110000,B00111000,B11000000,B11100000,B00001110,B00111000,B11100000,B00011100,B00000001,B11000111,B00001111,B00110000,
  B00111111,B11111111,B10011111,B11001111,B11110000,B00111001,B11000000,B11100000,B00001110,B00111000,B11110000,B00011100,B00000001,B11000111,B00000111,B00110000,
  B00111111,B11111111,B00011111,B10001111,B11110000,B00111001,B11000000,B11100000,B00001110,B00111000,B01111000,B00011100,B00000001,B11000111,B00000011,B10110000,
  B00111111,B11111110,B00111111,B00011111,B11110000,B00011101,B10000000,B11100000,B00001110,B00111000,B00111000,B00011100,B00000001,B11000111,B00000011,B11110000,
  B00111111,B11111110,B01111111,B00111111,B11110000,B00011111,B10000000,B11110000,B00011110,B00111000,B00011100,B00011110,B00000011,B10000111,B00000001,B11110000,
  B00111111,B11111100,B01111110,B00111111,B11110000,B00001111,B00000000,B01111110,B11111100,B00111000,B00011110,B00001111,B10011111,B10000111,B00000000,B11110000,
  B00111111,B11111000,B11111100,B01111111,B11110000,B00001111,B00000000,B00111111,B11111000,B00111000,B00001110,B00000111,B11111111,B00000111,B00000000,B11110000,
  B00111111,B11111001,B11111100,B11111111,B11110000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,B11111000,B00000000,B00000000,B00000000,
  B00111111,B11110001,B11111000,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00011111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00001111,B11111111,B11111111,B11111111,B11000011,B11110000,B00000001,B11110000,B00000000,B11110000,B00000000,B01100000,B00000001,B11110000,B00000011,B00010000,
  B00000011,B11111111,B11111111,B11111111,B10000011,B00111000,B00000001,B10000000,B00000001,B10000000,B00000000,B01100000,B00000011,B00000000,B00000011,B00011000,
  B00000000,B11111111,B11111111,B11111110,B00000011,B00011000,B00000001,B00000000,B00000001,B00000000,B00000000,B01100000,B00000010,B00000000,B00000011,B10011000,
  B00000000,B01111111,B11111111,B11111000,B00000011,B00011000,B00000001,B11100000,B00000001,B11100000,B00000000,B01100000,B00000010,B01110000,B00000010,B11011000,
  B00000000,B00011111,B11111111,B11110000,B00000011,B00011000,B00000001,B11100000,B00000000,B11110000,B00000000,B01100000,B00000010,B01110000,B00000010,B11011000,
  B00000000,B00000111,B11111111,B11000000,B00000011,B00011000,B00000001,B00000000,B00000000,B00011000,B00000000,B01100000,B00000010,B00010000,B00000010,B01111000,
  B00000000,B00000011,B11111111,B00000000,B00000011,B00011000,B00000001,B00000000,B00000000,B00010000,B00000000,B01100000,B00000010,B00010000,B00000010,B00111000,
  B00000000,B00000000,B11111100,B00000000,B00000011,B11110000,B00000001,B11110000,B00000001,B11110000,B00000000,B01100000,B00000011,B11110000,B00000010,B00111000,
  B00000000,B00000000,B00111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};
