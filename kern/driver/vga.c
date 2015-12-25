#include "font.h"
#include <thumips.h>

static unsigned int posX, posY;
static volatile unsigned int* row = (unsigned int*)GPU_ROW_PTR;
static volatile unsigned int* img = (unsigned int*)GPU_BASE;

void vga_init() {
  *row = 12800; // 16 rows * 800 pix
  posX = 0;
  posY = 0;
}

inline void newline() {
  unsigned int i, j, tx;
  *row += 12800; // 16 rows * 800 pix
  if (*row >= 480000) *row -= 480000; // 600 rows * 800 pix
  posX += 16;
  if (posX >= 600) posX -= 600;
  posY = 0;
  for (i = 0; i < 16; i++) {
    for (j = 0; j < 100; j++) { // 1 int for 8 pixel, 100 int, 800 pix
      tx = posX + i;
      if (tx >= 600) tx -= 600; // row number
      *(img + tx * 100 + j) = 0; // 800pix 400 byte per row
    }
  }
}

void vga_putch(int ch) {
  unsigned int i, tx;
  if (ch == '\n') {
    newline();
  } else if (ch >= 32 && ch < 127) {
    if (posY == 800) newline();
    for (i = 0; i < 16; i++) {
      tx = posX + i;
      if (tx >= 600) tx -= 600;
      *(img + tx * 100 + (posY >> 3)) = CHAR_FONT_BITMAP[ch - 32][i];
      // *(img + tx * 100 + (posY >> 3)) = 0xffffffffu; //a white box
    }
    posY += 8;
  }
}
