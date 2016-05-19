#!/usr/bin/env python
# encoding: utf-8
"""
XOREncryption.py
Created by Kyle Banks on 2013-10-06.
"""
import time

def encryptDecrypt(input):
	key = ['A', 'E', 'D'] #Can be any chars, and any size array
	output = []
	
	for i in range(len(input)):
		xor_num = ord(input[i]) ^ ord(key[i % len(key)])
		output.append(chr(xor_num))
	
	return ''.join(output)


def main():
	start_time = time.time()
	encrypted = encryptDecrypt("craigplaatjes");
	stop_time = time.time()	
	print("Encrypted: "+encrypted);
	print("Encryption process took %s us ---" % (stop_time*1000000 - start_time*1000000))
	
	start_time = time.time()
	decrypted = encryptDecrypt(encrypted);
	stop_time = time.time()
	print("Decrypted:"+decrypted);
	print("Decryption process took %s us ---" % (stop_time*1000000 - start_time*1000000))
	pass


if __name__ == '__main__':
	main()
