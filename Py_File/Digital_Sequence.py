def solve (arr):
    temp=[0]*10
    for x in arr:
        for y in set(str(x)):
            temp[int(y)] += 1

    return max(temp)

print(solve([12,11,3,4,5]))



