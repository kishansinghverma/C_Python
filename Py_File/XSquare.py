for _ in range(int(input())):
    x=int(input())
    if(x%2==0):
        m=pow(26, (x//2), (10**9)+9)
    else:
        m=pow(26, ((x+1)//2), (10**9)+9)

    print(m)