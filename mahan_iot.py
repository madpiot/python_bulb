import serial
import time

s=serial.Serial('COM11',9600,timeout=0.5)
s.close()
s.open()

while True:
 time.sleep(1)
 print s.readline()
 print 'Press A for RED BULB ON'
 print 'Press B for RED BULB OFF'
 print 'Press C for GREEN BULB ON'
 print 'Press D for GREEN BULB OFF'
 n=str(raw_input('Enter Choice: '))
 if n=='A':
  s.write('A')
  print s.readline()
 elif n=='B':
  s.write('B')
  print s.readline()
 elif n=='C':
  s.write('C')
  print s.readline()
 elif n=='D':
  s.write('D')
  print s.readline()
   