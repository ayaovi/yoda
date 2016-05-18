import serial

#-----------Transmit-----------
ser = serial.Serial('/dev/ttyUSB1', baudrate=10000, bytesize=8, parity='N', stopbits=1, timeout=None, xonxoff=0, rtscts=0)  # open serial port
print(ser.name)         # check which port was really used
data = 'craigplatias'
keys = 'AED'
ser.write(chr(len(data)).encode())     # write the lenght of the data
ser.write(data.encode())     # write a data
ser.write(chr(len(keys)).encode())     # write the lenght of keys
ser.write(keys.encode())     # write a keys
ser.close()

with serial.Serial('/dev/ttyUSB1', 10000, timeout=1) as ser1:
	lengthOfdata = ser1.read()          # read one byte
	receivedData = ser1.read(lengthOfdata)        # read up to ten bytes (timeout)
	print(lengthOfdata)
	print(receivedData)
	#line = ser1.readline()   # read a '\n' terminated line
