#include <DeltaRamps.h>
#include <PololuDriver.h>
#include <Ramps.h>
Ramps ramps = Ramps();
void setup() {
  // put your setup code here, to run once:
  ramps.led(true);
  ramps.fan(true);
  Serial.begin(9600);

  ramps.moveTo(0, 0, 1000, 100);
  Serial.println("At origin");
}

void loop() {
  // put your main code here, to run repeatedly:
  ramps.moveTo(0, 0, 2000, 100);
  Serial.println("0, 0, 0 to 0, 0, 200");
  delay(1000);
  
  ramps.moveTo(0, 0, 0, 100);
  Serial.println("0, 0, 200 to 0, 0, 0");
  delay(1000);

  // ramps.motorX.setDir(1);
  // for (int i = 0; i < 100; i++) {
  //   ramps.motorX.stepOn();
  //   delayMicroseconds(1000);
  //   ramps.motorX.stepOff();
  //   delay(30);
  // }
  // ramps.motorX.setDir(-1);
  // for (int i = 0; i < 100; i++) {
    
  //   ramps.motorX.stepOn();
  //   delayMicroseconds(1000);
  //   ramps.motorX.stepOff();
  //   delay(30);
  // }
  
}
