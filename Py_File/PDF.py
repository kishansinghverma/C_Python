import os
import numpy
import time
from collections import Counter
cat=[]
mark=[]

data=numpy.loadtxt('fetch.txt', delimiter=' ', unpack=True, dtype='str')

for x in data:
        tmp=x.split('\t')
        if(tmp[1] != ''):
            if(tmp[0]=='SC'):
                cat.append(tmp[0])
                mark.append(eval(tmp[1]))

mark.sort()
mark.reverse()
count=0
for x in range(60):
    if(mark[x]>=42.5):
        print(mark[x])
        count += 1

print('count:',count)

    
        
        
