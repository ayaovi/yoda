import serial

#-----------FROM PC TO FPGA-----------
ser = serial.Serial('/dev/ttyUSB1', baudrate=10000, bytesize=8, parity='N', stopbits=1, timeout=None, xonxoff=0, rtscts=0)  # open serial port

print(ser.name)										# check which port was really used

data = 'craigplatias'
keys = 'AED'

ser.write(chr(len(data)).encode())					# write the lenght of the data
ser.write(data.encode())							# write a data
ser.write(chr(len(keys)).encode())					# write the lenght of keys
ser.write(keys.encode())							# write a keys

ser.close()

#-----------FROM FPGA TO PC-----------
with serial.Serial('/dev/ttyUSB1', baudrate=10000, bytesize=8, parity='N', stopbits=1, timeout=1, xonxoff=0, rtscts=0) as ser1:
	#lengthOfdata = ser1.read()          			# read one byte
	#receivedData = ser1.read(int(lengthOfdata, 2))	# read up to ten bytes (timeout)
	receivedData = ser1.read(12)
	#print(lengthOfdata)
	#print(receivedData.decode('ascii'))
	print(receivedData)

ser1.close()
