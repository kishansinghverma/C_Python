import matplotlib.pyplot as plt
import numpy as np
import time
import random
#Representing the re-occuring reminder of pi
'''
arr=[]
rem=22%7
arr.append(22//
           7)
for x in range (100):
    rem *= 10
    arr.append(rem//7)
    rem = rem % 7

print(arr)
mplot.plot(arr)
mplot.show()
'''


arr=[]
while(len(arr) != 180):
    n=random.randint(10,200)
    if(n not in arr):
        arr.append(n)
    
x=np.arange(1, (len(arr)+1))

plt.show()
axes=plt.gca()
axes.set_xlim(0, len(arr)+1)
axes.set_ylim(0, max(arr)+5)
line, = axes.plot(x, arr, 'r-')

for i in range(len(arr)):
    for j in range(len(arr)-1-i):
        if(arr[j]>arr[j+1]):
            arr[j], arr[j+1]=arr[j+1], arr[j]

        line.set_xdata(x)
        line.set_ydata(arr)
        plt.draw()
        plt.pause(0.000000001)

print(arr)
