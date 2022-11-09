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

#ifdef __cplusplus
  extern "C" { /* C-declarations for C++ */
#endif

enum {
    Z_OFFSET_STATUS_START,
    Z_OFFSET_STATUS_HOT,
    Z_OFFSET_STATUS_MOVE,
    Z_OFFSET_STATUS_ADJUST,
    Z_OFFSET_STATUS_SAVE
};

extern void lv_draw_auto_level_offset_settings(void);
extern void lv_clear_auto_level_offset_settings();
extern void flash_zoffset_status();
extern void zoffset_repeat_ops();

#ifdef __cplusplus
  } /* C-declarations for C++ */
#endif
