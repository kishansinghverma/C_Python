def printMatrix(arr, r, c, s):
    for i in range(s):
        for j in range(s):
            print(arr[r+i][c+j],"", end="")
        print()
    print()

for _ in range(int(input())):
    n=int(input())
    arr=[]
    for x in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    for i in range(2, n+1):
        for j in range(n):
            for k in range(n):
                if(j+i < n+1 and k+i < n+1):
                    #print(str(j)+","+str(k),i)
                    printMatrix(arr, j, k, i)
                else:
                    break