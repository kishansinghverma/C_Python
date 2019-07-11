n = 10
arr = [1, 9, 7, 6, 2, 4, 7, 8, 1, 3]

cost = 0


def getindex(arr):
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if (arr[i] == arr[j]):
                return (arr, i, j)
        arr.pop(0)


def process(arr, x, y):
    global cost
    if (y - x == 0):
        return

    if (arr[x] == arr[x + 1]):
        arr.pop(x)
        arr.pop(x)

    else:
        arr, i, j = getindex(arr)
        process(arr, i, j)


process(arr, 0, len(arr))
print(cost)
