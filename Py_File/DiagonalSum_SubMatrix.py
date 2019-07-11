def get_sum(arr, r, c, s):
    sum1 = 0
    sum2 = 0
    for i in range(s):
        sum1 += (arr[r + i][c + i])
        sum2 += (arr[r + i][s + c - i - 1])

    return max(sum1, sum2)


for _ in range(int(input())):
    r = int(input())
    arr = []
    for x in range(r):
        arr.append(list(map(int, input().rstrip().split())))
    c=len(arr[0])

    values = []
    for i in range(2, min(r, c)+1):
        for j in range(r):
            for k in range(c):
                if j + i < r+1 and k + i < c+1:
                    values.append(get_sum(arr, j, k, i))
                else:
                    break

    print(max(values))
