# CS3651_Final
A repository for files for my Prototyping Final Project. This repository should have everything needed to run the project in its current state; documentation is also included as a pdf and as a demo video [here](https://youtu.be/NQDVxdalme8).

## How to use this project
* Plug in the laptop charger to a socket.
* Plug the USB-A cable into your laptop (connect to the board)
* Open the Arduino IDE or other application capable of reading/writing to Serial
* You should hopefully see messages related to 'Booting', 'Homing [axis name] axis', or 'Please enter a new message to print:'. Type in whatever you'd like to send to the Plotter and watch it print your message!


## Things to do in the future
* Create a manual power button/switch. Right now, the only way to power cycle is to unplug and re-plug the laptop charger.

* Create a way to access the reset button (or do a code reset with another external button). The box on the side of the Lulzbot holds the RAMPS and Mega boards, but there is currently no hole through which to press the reset. 

* Add more functionality to this project! For example, I wanted a free-form drawing mode where I could use pushbuttons and/or joysticks to control the 3 axes' movements individually, but didn't get around to it.

* Design something to prevent the pen from bleeding ink when the plotter is idle.

## External libraries used
I used an available [RAMPS board library](https://github.com/momostein/Ramps) to talk to the stepper drivers and the gcode in this [Gcode library](https://github.com/Stypox/text-to-gcode/tree/master) to generate the equivalent C code that can be written to arduino. 

Please note: I shorted the ramps board that is currently running the project. The dedicated position for the X axis stepper driver doesn't work. I modified the libarary files from the [RAMPS board library](https://github.com/momostein/Ramps) to allow my board to run the x stepper driver from the 'E' axis position. If you decide to use this RAMPS library and run it on the same RAMPS board that I did, you will need to make this modification in the library's 'Ramps.h' header file:

```
// #define X_STEP_PIN         54
// #define X_DIR_PIN          55
// #define X_ENABLE_PIN       38
#define X_STEP_PIN         26
#define X_DIR_PIN          28
#define X_ENABLE_PIN       24
```

### How to generate more drawable characters
* The [Gcode library](https://github.com/Stypox/text-to-gcode/tree/master) from before provides the file [text_to_gcode.py](./ascii/text-to-gcode/) which I haven't touched. Run this script to generate actual G-code files for ascii characters.

* Navigate to the [text-to-gcode](./ascii/text-to-gcode/) folder in a command prompt and run [gcode_to_arduino.py](./ascii/text-to-gcode/gcode_to_arduino.py). You might need to modify it to actually open your new G-code files. This file generates individual header files that contain custom arduino functions to draw each character. You will have to copy this over into the folder containing whatever sketch you want to run on the board. The current folder with the final sketch for my project submission is in the [final](./arduino_testing/final/) folder.

* In the same folder, run [draw.py](./ascii/text-to-gcode/draw.py). This creates a singular header file that includes all of the other header files you just generated and also creates a function that decides what the plotter will do for a certain character input. You will also need to copy this header file over to the final folder.
