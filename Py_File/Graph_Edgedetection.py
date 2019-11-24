i=input()
n, m=map(int, i.rstrip().split())
arr = [[False for i in range(n)] for j in range(n)]
for _ in range(m):
    j, k=map(int, input().rstrip().split())
    arr[j][k]=True

for _ in range(int(input())):
    j, k=map(int, input().rstrip().split())
    if(arr[j][k]):
        print("YES")
    else:
        print("NO")