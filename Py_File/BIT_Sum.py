for _ in range(int(input())):
    n=int(input())
    lst=list(map(int, input().rstrip().split()))

    bit=[0]*(max(lst)+1)

    result=0
    for x in reversed(lst):
        y=x-1
        while(x<len(bit)):
            bit[x] += 1
            x += x & -x

        x=y
        while(x!=0):
            result += bit[x]
            x -= x & -x

    print(result)
