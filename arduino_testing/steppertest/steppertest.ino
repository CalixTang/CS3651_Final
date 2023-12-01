#include <DeltaRamps.h>
#include <PololuDriver.h>
#include <Ramps.h>

//2000 steps is ~13/16ths of an inch = 20.6375 mm -> 0.01031875 mm / step
//24000 steps = 247.65mm, 28000 = 288.925mm


#define MIN_X 0
#define MAX_X 24000  //this is really more like 28000, but for the sake of keeping a square print area i'm limiting it to 24000
#define MIN_Y 0
#define MAX_Y 23800  //more like 24000, but for supporting 1400 tall cells, we do a nice multiple of 1400.
#define MIN_Z 0
#define MAX_Z 8000

#define Z_THRESHOLD 5700
#define Z_UP 6400
#define Z_DOWN 5000
#define LEGAL_STRING "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890.,!?;: "

#define NEG_X_PIN 40
#define POS_X_PIN 64

#define CTRL_STEP_DELAY 300

//letters will be defined in [1000, 1400] cells.
// https://github.com/Stypox/text-to-gcode

bool isWriting = false;
bool bufferFilled = false;
String print_buffer = "";
int anchor_x = 0;
int anchor_y = 0;

Ramps ramps = Ramps();
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

  home_all_axes();
  pen_up();
  move_to(0, 20000);

  Serial.println("Finished startup sequence.");
  // figure out how to send stuff over to draw. One idea is to basically create a typewriter and define the writing of each character individually.
}

void loop() {
  // put your main code here, to run repeatedly:

  if (isWriting) {
    //never look at new buffer things
    while (print_buffer.length() > 0) {
    }
    //once the buffer is no longer filled
    bufferFilled = false;
    isWriting = false;
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

void pen_up() {
  if (ramps.motorZ.position > Z_THRESHOLD) {
    return;
  }

  ramps.moveTo(ramps.motorX.position, ramps.motorY.position, Z_UP, 600);
}

void pen_down() {
  if (ramps.motorZ.position < Z_THRESHOLD) {
    return;
  }

  ramps.moveTo(ramps.motorX.position, ramps.motorY.position, Z_DOWN, 600);
}


//might want to rename to move_to absolute later
void move_to(long x, long y) {
  if (x < MIN_X || y < MIN_Y || x > MAX_X || y > MAX_Y) {
    //don't allow going out of bounds
    return;
  }
  ramps.moveTo(x, y, ramps.motorZ.position, 300);
}
