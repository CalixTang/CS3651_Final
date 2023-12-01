import serial
import time 

serialPort = serial.Serial(
    port="COM4", baudrate=9600, bytesize=8, timeout=2, stopbits=serial.STOPBITS_ONE
)

serialString = ""

def serialWrite(arg):
    cmd = arg + ";\r\n"
    serialPort.write(cmd.encode('UTF-8'))

def home():
    penUp()
    serialWrite("G1 X0 Y0")

def penUp():
    serialWrite("G1 Z20")

def penDown():
    serialWrite("G1 Z18")


if __name__ == "__main__":
    home()

    serialWrite("G1 X15 Y70")
    penDown()
    serialWrite("G1 X10")
    serialWrite("G1 Y60")
    serialWrite("G1 X15")
    penUp()


    serialWrite("G1 X20 Y60")
    penDown()
    serialWrite("G1 Y70")
    serialWrite("G1 X25")
    serialWrite("G1 Y60")
    penUp()
    serialWrite("G1 X20 Y65")
    penDown()
    serialWrite("G1 X25")
    penUp()


    serialWrite("G1 X30 Y70")
    penDown()
    serialWrite("G1 Y60")
    serialWrite("G1 X35")
    penUp()

    serialWrite("G1 X40 Y70")
    penDown()
    serialWrite("G1 Y60")
    penUp()

    serialWrite("G1 X45 Y70")
    penDown()
    serialWrite("G1 X50 Y60")
    penUp()
    serialWrite("G1 X45 Y60")
    penDown()
    serialWrite("G1 X50 Y70")
    penUp()

