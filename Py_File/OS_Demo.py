import os
import time

f1=open('local.txt', 'r')
current=list(map(float, f1.read().strip().split('/')))

while(True):
    f2=open('remote.txt', 'r')
    rmt=list(map(float, f2.read().strip().split('/')))
    if(current[0] != rmt[0]):
        current[0] = rmt[0]
        if(current[0]==1):
            print('Fan Is Turned On!!')
        else:
            print('Fan Is Turned Off')
            
    if(current[1] != rmt[1]):
        current[1] = rmt[1]
        if(current[1]==1):
            print('Bulb Is Turned On!!')
        else:
            print('Bulb Is Turned Off')

    if(current[2] != rmt[2]):
        current[2] = rmt[2]
        print('Temp changed to: ', current[2])

    f2=open('local.txt', 'r')
    str1=str(current[0])+'/'+str(current[1])+'/'+str(current[2])
    if(str(f2.read()) != str1):
        f1=open('local.txt', 'w')
        f1.write(str1)
        f1.close
    

    time.sleep(1)
    
    

