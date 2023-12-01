#include <DeltaRamps.h>
#include <PololuDriver.h>
#include <Ramps.h>
Ramps ramps = Ramps();
void setup() {
  // put your setup code here, to run once:
  ramps.led(true);
  ramps.fan(true);
  Serial.begin(9600);

  //all stepper drivers in 'forward' mode
  setDirs();

  //to enable reading limit switches properly
  pinMode(X_MIN_PIN, INPUT_PULLUP); 
  pinMode(Y_MIN_PIN, INPUT_PULLUP); 
  pinMode(Z_MIN_PIN, INPUT_PULLUP); 
  // ramps.home(100);

  // ramps.moveTo(5000, 5000, 10000, 1000);

  home_all_axes();
  ramps.moveTo(1000, 1000, 10000, 1000); //so we aren't forever laying on the limit switch
  
}

void loop() {
  // put your main code here, to run repeatedly:



  
  
  
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
  ramps.motorX.position = 0; //homed

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
  ramps.motorY.position = 0; //homed

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
  ramps.motorZ.position = 0; //homed

  Serial.println("Z axis homed");
}