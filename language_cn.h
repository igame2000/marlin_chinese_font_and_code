/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Chinese
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_CN_TEST_H
#define LANGUAGE_CN_TEST_H

#define DISPLAY_CHARSET_ISO10646_CN

#define WELCOME_MSG                         "\xa4\xa5\xca\xf3"
#define MSG_SD_INSERTED                     "\xa8\xa9\xaa\xab"
#define MSG_SD_REMOVED                      "\xa8\xa9\xac\xad"
#define MSG_MAIN                            "\xae\xaf\xb0"
#define MSG_AUTOSTART                       "\xb1\xb2\xb3\xb4"
#define MSG_DISABLE_STEPPERS                "\xb5\xb6\xb7\xb8\xb9\xba"
#define MSG_AUTO_HOME                       "\xbb\xbc\xbd"
#define MSG_LEVEL_BED_HOMING                "XYZ \xcf\xd0\xbc\xbd"
#define MSG_LEVEL_BED_WAITING               "\xb3\xb4"
#define MSG_LEVEL_BED_DONE                  "\x80\x81\xcf\xd0!"
#define MSG_LEVEL_BED_CANCEL                "\x82\x83"
#define MSG_SET_HOME_OFFSETS                "\xbe\xbf\xbb\xbc\xbd\xc0\xc1"
#define MSG_HOME_OFFSETS_APPLIED            "\xc0\xc1\xa9\x84\x85"
#define MSG_SET_ORIGIN                      "\xbe\xbf\xbc\xbd"
#define MSG_PREHEAT_1                       "\xc3\xc4 PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " \xc5\xc6"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " \xc4\xc7"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " \xbe\xbf"
#define MSG_PREHEAT_2                       "\xc3\xc4 ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " \xc5\xc6"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " \xbe\xc6"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " \xbe\xbf"
#define MSG_COOLDOWN                        "\xc8\xc9"
#define MSG_SWITCH_PS_ON                    "\xb9\xcb\xca\xb3"
#define MSG_SWITCH_PS_OFF                   "\xb9\xcb\xb5\xb6"
#define MSG_EXTRUDE                         "\xcc\xad"
#define MSG_RETRACT                         "\xbb\xcd"
#define MSG_MOVE_AXIS                       "\xc1\xb2\xce"
#define MSG_LEVEL_BED                       "\xc4\xc7\xcf\xd0"
#define MSG_MOVE_X                          "\xc1\xb2 X"
#define MSG_MOVE_Y                          "\xc1\xb2 Y"
#define MSG_MOVE_Z                          "\xc1\xb2 Z"
#define MSG_MOVE_E                          "\xcc\xad\xba"
#define MSG_MOVE_01MM                       "\xc1\xb2 0.1mm"
#define MSG_MOVE_1MM                        "\xc1\xb2 1mm"
#define MSG_MOVE_10MM                       "\xc1\xb2 10mm"
#define MSG_SPEED                           "\xd1\xd2"
#define MSG_NOZZLE                          "\xd3\xd4"
#define MSG_BED                             "\xc4\xc7"
#define MSG_FAN_SPEED                       "\xd5\xd6\xd1\xd2"
#define MSG_FLOW                            "\xcc\xad\xd1\xd2"
#define MSG_CONTROL                         "\xd8\xd9"
#define MSG_MIN                             LCD_STR_THERMOMETER " \xda\xdb"
#define MSG_MAX                             LCD_STR_THERMOMETER " \xda\xdc"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " \xdd\xde"
#define MSG_AUTOTEMP                        "\xb1\xb2\xd8\xc9"
#define MSG_ON                              "\xb3 "  // intentional space to shift wide symbol to the left
#define MSG_OFF                             "\xb5 "  // intentional space to shift wide symbol to the left
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "\x86\xd1\xd2"
#define MSG_VX_JERK                         "X\x87\xb2\xd1\xd2"
#define MSG_VY_JERK                         "Y\x87\xb2\xd1\xd2"
#define MSG_VZ_JERK                         "Z\x87\xb2\xd1\xd2"
#define MSG_VE_JERK                         "\xcc\xad\x87\xb2\xd1\xd2"
#define MSG_VMAX                            "\xda\xdc\xd1\xd2 "
#define MSG_VMIN                            "\xda\xdb\xd1\xd2"
#define MSG_VTRAV_MIN                       "\xda\xdb\xc1\xb2"
#define MSG_AMAX                            "\xda\xdc\x86\xd1\xd2 "
#define MSG_A_RETRACT                       "\xbb\xcd\x86\xd1\xd2"
#define MSG_A_TRAVEL                        "\xc1\xb2\x86\xd1\xd2"
#define MSG_XSTEPS                          "X\xb7\x88/mm"
#define MSG_YSTEPS                          "Y\xb7\x88/mm"
#define MSG_ZSTEPS                          "Z\xb7\x88/mm"
#define MSG_ESTEPS                          "\xcc\xad\xb7\x88/mm"
#define MSG_TEMPERATURE                     "\xc9\xd2"
#define MSG_MOTION                          "\xdf\xb2"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "\xe0\xe1\x89\x8a"
#define MSG_CONTRAST                        "LCD\xe2\xe3\xd2"
#define MSG_STORE_EPROM                     "\xe6\xf8\x8b\xbf"
#define MSG_LOAD_EPROM                      "\x86\xe4\x8b\xbf"
#define MSG_RESTORE_FAILSAFE                "\xad\xe9\xbe\xbf"
#define MSG_REFRESH                         "\x8c\xeb"
#define MSG_WATCH                           "\xec\xed\xee\xef"
#define MSG_PREPARE                         "\xa4\xa5"
#define MSG_TUNE                            "\xcf\xf0"
#define MSG_PAUSE_PRINT                     "\xf1\xf2\xca\xf3"
#define MSG_RESUME_PRINT                    "\xf4\xf5\xca\xf3"
#define MSG_STOP_PRINT                      "\xf2\xf6\xca\xf3"
#define MSG_CARD_MENU                       "\xaf\xb0"
#define MSG_NO_CARD                         "\xf9\xa8"
#define MSG_DWELL                           "\xfa\xfb ..."
#define MSG_USERWAIT                        "\xfc\xfd\xfe\xff..."
#define MSG_RESUMING                        "\xe7\xe8\xca\xf3"
#define MSG_PRINT_ABORTED                   "\xca\xf3\xa9\x82\x83"
#define MSG_NO_MOVE                         "\xf9\xc1\xb2."
#define MSG_KILLED                          "\xa9\x8d\xf6. "
#define MSG_STOPPED                         "\xa9\xf2\xf6. "
#define MSG_CONTROL_RETRACT                 "\xbb\xcd mm"
#define MSG_CONTROL_RETRACT_SWAP            "\x8e\x8f\xbb\xcd mm"
#define MSG_CONTROL_RETRACTF                "\xbb\xcd\xd1\xd2"
#define MSG_CONTROL_RETRACT_ZLIFT           "\xca\xf3\xc7\x90\x91 mm"
#define MSG_CONTROL_RETRACT_RECOVER         "\xbb\xcd\xe7\xe8 +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "\x8e\x8f\xbb\xcd\xe7\xe8 +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "\xe7\xe8\xbb\xcd\xd1\xd2"
#define MSG_AUTORETRACT                     "\xb1\xb2\xbb\xcd"
#define MSG_FILAMENTCHANGE                  "\xea\x92\xe0\xe1"
#define MSG_INIT_SDCARD                     "\x93\xb4\x94SD\xa8"
#define MSG_CNG_SDCARD                      "\xea\x92SD\xa8"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_HOME                            "\xbc\xbd"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "\x95\xa0"
#define MSG_ZPROBE_ZOFFSET                  "Z \xc0\xc1"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "\x82\x83\x96\x97"
#define MSG_HEATING_FAILED_LCD              "\x86\xc4\x9f\x9e"
#define MSG_ERR_REDUNDANT_TEMP              "\xad\x98 : \xc9\xd2\xbe\xbf\x99\x9a"
#define MSG_THERMAL_RUNAWAY                 "\xc9\xd8\xad\x98"
#define MSG_ERR_MAXTEMP                     "\xad\x98 : \x9b\xc9\xbe\xbf"
#define MSG_ERR_MINTEMP                     "\xad\x98 : \x9c\xc9\xbe\xbf"
#define MSG_ERR_MAXTEMP_BED                 "\xad\x98 : \xc4\xc7\x9b\xc9\xbe\xbf"
#define MSG_DELTA_CALIBRATE                 "Delta \x9d\xa4"
#define MSG_DELTA_CALIBRATE_X               "\x9d\xa4 X"
#define MSG_DELTA_CALIBRATE_Y               "\x9d\xa4 Y"
#define MSG_DELTA_CALIBRATE_Z               "\x9d\xa4 Z"
#define MSG_DELTA_CALIBRATE_CENTER          "\x9d\xa4 \xa1\xa3\xbd"

#define MSG_ERR_MINTEMP_BED                 "\xad\x98 : \xc4\xc7\x9c\xc9\xbe\xbf"
#define MSG_HALTED                          "\xca\xf3\xba\xf2\xba"
#define MSG_PLEASE_RESET                    "\xa6\xe8\x97"
#define MSG_HEATING                         "\x86\xc4\xa1 ..."
#define MSG_HEATING_COMPLETE                "\x86\xc4\x80\x81"
#define MSG_BED_HEATING                     "\xc4\xc7\x86\xc4\xa1"
#define MSG_BED_DONE                        "\xc4\xc7\x86\xc4\x80\x81"

#endif // LANGUAGE_CN_H








