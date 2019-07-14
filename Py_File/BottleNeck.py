n=int(input())
lst=list(map(int, input().rstrip().split()))
lst.sort()

flag=True
flags=[True]*(n+1)

while flag:
    for i in range(len(lst)-1):
        kis=False
        if(lst[i] != lst[i+1] and flags[i+1]):
            flags[i+1]=False
            lst.pop(i)
            flags.pop(i)
            kis=True
            break

    if(not kis):
        flag=False

print(lst)
print(flags)

