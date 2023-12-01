#include "constants.h"

#include <DeltaRamps.h>
#include <PololuDriver.h>
#include <Ramps.h>

#include "draw_char.h"

//2000 steps is ~13/16ths of an inch = 20.6375 mm -> 0.01031875 mm / step
//24000 steps = 247.65mm, 28000 = 288.925mm

//abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 `!@#$%^&*()-_=+[]{}\|;:'",./<>?


//letters will be defined in [1000, 1400] cells.
// https://github.com/Stypox/text-to-gcode

bool isWriting = false;
bool bufferFilled = false;
String print_buffer = "";



void setup() {
  // put your setup code here, to run once:
  ramps.led(true);
  ramps.fan(true);
  Serial.begin(9600);
  Serial.println("Booting");

  //all stepper drivers in 'forward' mode
  setDirs();

  //to enable reading limit switches properly
  pinMode(X_MIN_PIN, INPUT_PULLUP);
  pinMode(Y_MIN_PIN, INPUT_PULLUP);
  pinMode(Z_MIN_PIN, INPUT_PULLUP);

  //enable reading input buttons
  pinMode(NEG_X_PIN, INPUT);
  pinMode(POS_X_PIN, INPUT);

  pen_up_start();
  home_all_axes();
  pen_up();
  move_to(0, 22400);
  anchor_x = 0;
  anchor_y = 22400;

  Serial.println("Finished startup sequence. Please input new message to print:");
  // figure out how to send stuff over to draw. One idea is to basically create a typewriter and define the writing of each character individually.
}

void loop() {
  // put your main code here, to run repeatedly:

  if (isWriting) {
    //never look at new buffer things
    while (print_buffer.length() > 0) {
      //read next char to draw
      char c = print_buffer.charAt(0);

      if (print_buffer.length() == 1) {
        print_buffer = "";
      } else {
        print_buffer = print_buffer.substring(1);
      }

      //draw character
      int char_width = draw_char(c);
      if (char_width != -1) {

        //move one cell over upon success
        if (anchor_x + 2 * char_width + CHAR_PADDING < MAX_X) {
          anchor_x = anchor_x + char_width + CHAR_PADDING;
        } else {
          anchor_x = 0;
          if (anchor_y > MIN_Y + CHAR_HEIGHT) { //I want to keep the 'bottom row' empty because of characters like j
            anchor_y = anchor_y - CHAR_HEIGHT;
          } else {
            //move back up to top lol
            anchor_y = MAX_Y - CHAR_HEIGHT;
          }
        }
      }
    }
    //once the buffer is no longer filled
    bufferFilled = false;
    isWriting = false;
    Serial.println("Finished printing. Please input new message to print: ");
  } else {
    if (!bufferFilled) {
      print_buffer = Serial.readString();
      print_buffer.trim();
      if (print_buffer.length() > 0) {
        isWriting = true;
        bufferFilled = true;
        Serial.println("Writing message:");
        Serial.println(print_buffer);
      }
    }
  }
}

void setDirs() {
  ramps.motorX.setDir(1);
  ramps.motorY.setDir(1);
  ramps.motorZ.setDir(1);
}

bool x_min_hit() {
  return !digitalRead(X_MIN_PIN);
}
bool y_min_hit() {
  return !digitalRead(Y_MIN_PIN);
}
bool z_min_hit() {
  return !digitalRead(Z_MIN_PIN);
}

//ONLY CALL HOMING AFTER setDirs()!

void home_all_axes() {
  home_x();
  home_y();
  home_z();
}
void home_x() {
  ramps.motorX.setDir(-1);
  while (!x_min_hit()) {
    ramps.motorX.stepOn();
    delayMicroseconds(750);
    ramps.motorX.stepOff();
  }
  ramps.motorX.setDir(1);
  ramps.motorX.position = 0;  //homed

  Serial.println("X axis homed");
}

void home_y() {
  ramps.motorY.setDir(-1);
  while (!y_min_hit()) {
    ramps.motorY.stepOn();
    delayMicroseconds(750);
    ramps.motorY.stepOff();
  }
  ramps.motorY.setDir(1);
  ramps.motorY.position = 0;  //homed

  Serial.println("Y axis homed");
}

void home_z() {
  ramps.motorZ.setDir(-1);
  while (!z_min_hit()) {
    ramps.motorZ.stepOn();
    delayMicroseconds(750);
    ramps.motorZ.stepOff();
  }
  ramps.motorZ.setDir(1);
  ramps.motorZ.position = 0;  //homed

  Serial.println("Z axis homed");
}





