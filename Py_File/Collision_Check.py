from collections import Counter

n= int(input())
data=[]

for _ in range(n):
    data.append(list(map(int, input().rstrip().split())))


arr=[]
for x in data:
    arr.append(pow(pow(x[0], 2) + pow(x[1], 2), (1/2)) / x[2]);

sum=0
count=Counter(arr)
for x in count:
    sum += (count[x]*(count[x]-1))//2

print(sum)