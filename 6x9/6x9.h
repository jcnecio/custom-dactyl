#pragma once

#include "dactyl_manuform.h"

#define XXX KC_NO

#define LAYOUT_6x9( \
    L11, L12, L13, L14, L15, L16, L17, \
    L21, L22, L23, L24, L25, L26, L27, \
    L31, L32, L33, L34, L35, L36, L37, \
    L41, L42, L43, L44, L45, L46, \
              L53, L54, \
                          L55, L56, \
                                  L58, L59, \
                                  L68, L69, \
         R13, R14, R15, R16, R17, R18, R19, \
         R23, R24, R25, R26, R27, R28, R29, \
         R33, R34, R35, R36, R37, R38, R39, \
              R44, R45, R46, R47, R48, R49, \
                        R56, R57, \
            R54, R55, \
    R51, R52, \
    R61, R62 \
) { \
    { L11, L12, L13, L14, L15, L16, L17, XXX, XXX }, \
    { L21, L22, L23, L24, L25, L26, L27, XXX, XXX }, \
    { L31, L32, L33, L34, L35, L36, L37, XXX, XXX }, \
    { L41, L42, L43, L44, L45, L46, XXX, XXX, XXX }, \
    { XXX, XXX, L53, L54, L55, L56, XXX, L58, L59 }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, L68, L69 }, \
    { XXX, XXX, R13, R14, R15, R16, R17, R18, R19 }, \
    { XXX, XXX, R23, R24, R25, R26, R27, R28, R29 }, \
    { XXX, XXX, R33, R34, R35, R36, R37, R38, R39 }, \
    { XXX, XXX, XXX, R44, R45, R46, R47, R48, R49 }, \
    { R51, R52, XXX, R54, R55, R56, R57, XXX, XXX }, \
    { R61, R62, XXX, XXX, XXX, XXX, XXX, XXX, XXX }  \
}
