def solve(n):
    arr=[]
    i=0
    while(True):
        lst=[]
        k=9*(10**i)
        if(k%n==0):
            return k
        else:
            for x in arr:
                if((x+k)%n==0):
                    return x+k
                else:
                    lst.append(x+k)
            arr.append(k)
        arr += lst
        i += 1


print("->",solve(1))