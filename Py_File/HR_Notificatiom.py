#!/bin/python3

import os
from collections import deque

def activityNotifications(expenditure, d):
    exp=deque()
    for x in sorted(expenditure[:d]):
        exp.append(x)

    ln=len(exp)
    count=0
    med=0

    for i in range(d, len(expenditure)):

        if(ln%2==0):
            med=(exp[ln//2]+exp[(ln//2)-1])/2
        else:
            med=exp[ln//2]

        if(expenditure[i] >= 2*med):
            count += 1
        
        exp.popleft()
        x=expenditure[i]
        n=len(exp)-1
        loc=n//2
        if(x > exp[n//2]):
            while(loc<=n and x>exp[loc]):
                 loc += 1
            if(loc<=n):
                exp.insert(loc, x)
            else:
                exp.append(x)
        else:
            while(x<exp[loc] and loc>=0):
                loc -= 1
            exp.insert(loc+1, x)

    return count


    for i in range(d, len(expenditure)):

        if(n%2==0):
            med=(exp[n//2]+exp[(n//2)-1])/2
        else:
            med=exp[n//2]

        if(expenditure[i] >= 2*med):
            count += 1

        print(exp, expenditure[i], med)

        exp.popleft()

        flag=False
        if(expenditure[i]<=exp[n//2]):
            for j in range(n//2, 0, -1):
                if(expenditure[i]>exp[j-1]):
                    exp.insert(j, expenditure[i])
                    flag=True
                    break
            if(not flag):
                exp.appendleft(expenditure[i])
        else:
            for j in range(n//2, n-2):
                if(expenditure[i]<exp[j+1]):
                    exp.insert(j, expenditure[i])
                    flag=True
                    break
            if(not flag):
                exp.append(expenditure[i])

        

    return count
    
if __name__ == '__main__':

    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    expenditure = list(map(int, input().rstrip().split()))

    result = activityNotifications(expenditure, d)

    print(str(result) + '\n')
