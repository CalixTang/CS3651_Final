#include <Ramps.h>

#ifndef CONSTANTS

#define CONSTANTS   "CONSTANT"

#define MIN_X 0
#define MAX_X 20000  //this is really more like 28000, but a piece of printer paper does not span the whole board.
#define MIN_Y 0
#define MAX_Y 23800  //more like 24000, but for supporting 1400 tall cells, we do a nice multiple of 1400.
#define MIN_Z 0
#define MAX_Z 8000

#define Z_THRESHOLD 5700
#define Z_UP 6600
#define Z_DOWN 4800
#define LEGAL_STRING "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890.,!?;: "

#define NEG_X_PIN 40
#define POS_X_PIN 64

// #define CHAR_WIDTH 800
#define CHAR_HEIGHT 1400
#define CHAR_PADDING 50

#define CTRL_STEP_DELAY 300

Ramps ramps = Ramps();
int anchor_x = 0;
int anchor_y = 0;


void pen_up_start() {
  ramps.moveTo(ramps.motorX.position, ramps.motorY.position, ramps.motorZ.position + 7000, 300);
}

void pen_up() {
  if (ramps.motorZ.position > Z_THRESHOLD) {
    return;
  }

  ramps.moveTo(ramps.motorX.position, ramps.motorY.position, Z_UP, 300);
}

void pen_down() {
  if (ramps.motorZ.position < Z_THRESHOLD) {
    return;
  }

  ramps.moveTo(ramps.motorX.position, ramps.motorY.position, Z_DOWN, 300);
}

//might want to rename to move_to absolute later
void move_to(long x, long y) {
  if (x < MIN_X || y < MIN_Y || x > MAX_X || y > MAX_Y) {
    //don't allow going out of bounds
    return;
  }
  ramps.moveTo(x, y, ramps.motorZ.position, 500);
}

void move_to_relative(long x, long y) {
  long x_new = anchor_x + x;
  long y_new = anchor_y + y;
  move_to(x_new, y_new);
}

#endif