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
    { L11, L21, L31, L41, XXX, XXX, XXX, XXX, XXX}, \
    { L12, L22, L32, L42, XXX, XXX, XXX, XXX, XXX}, \
    { L13, L23, L33, L43, L53, XXX, XXX, XXX, XXX}, \
    { L14, L24, L34, L44, L54, XXX, XXX, XXX, XXX}, \
    { L15, L25, L35, L45, L55, XXX, XXX, XXX, XXX}, \
    { L16, L26, L36, L46, L56, XXX, XXX, XXX, XXX}, \
    { L17, L27, L37, XXX, XXX, XXX, XXX, XXX, XXX}, \
    { XXX, XXX, XXX, XXX, L58, L68, XXX, XXX, XXX}, \
    { XXX, XXX, XXX, XXX, L59, L69, XXX, XXX, XXX}, \
    { XXX, XXX, XXX, XXX, R51, R61, XXX, XXX, XXX}, \
    { XXX, XXX, XXX, XXX, R52, R62, XXX, XXX, XXX}, \
    { R13, R23, R33, XXX, XXX, XXX, XXX, XXX, XXX}, \
    { R14, R24, R34, R44, R54, XXX, XXX, XXX, XXX}, \
    { R15, R25, R35, R45, R55, XXX, XXX, XXX, XXX}, \
    { R16, R26, R36, R46, R56, XXX, XXX, XXX, XXX}, \
    { R17, R27, R37, R47, R57, XXX, XXX, XXX, XXX}, \
    { R18, R28, R38, R48, XXX, XXX, XXX, XXX, XXX}, \
    { R19, R29, R39, R49, XXX, XXX, XXX, XXX, XXX} \
}