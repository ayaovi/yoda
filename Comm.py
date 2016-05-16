import serial
ser = serial.Serial('/dev/ttyUSB1', baudrate=10000, bytesize=8, parity='N', stopbits=1, timeout=None, xonxoff=0, rtscts=0)  # open serial port
print(ser.name)         # check which port was really used
ser.write(b'hello')     # write a string
ser.close()
