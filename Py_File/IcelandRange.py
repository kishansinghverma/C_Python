def getDistance(p, q, r, s):
    return (abs(p-r)+abs(q-s))

arr=[]
for _ in range(int(input())):
    arr.append(list(map(int, input().rstrip().lstrip().split())))

x,y=map(int, input().rstrip().lstrip().split())

dst=[]

for lst in arr:
    a=getDistance(lst[0], lst[1], x, y);
    b=getDistance(lst[2], lst[3], x, y);
    c=getDistance(lst[0], lst[3], x, y);
    d=getDistance(lst[2], lst[1], x, y);
    dst.append(min(a,b,c,d))

counter=dict()

for i,m in enumerate(dst):
    counter[m]=i+1

for j in sorted(counter.keys()):
    print(counter[j], "", end="")