from itertools import permutations, combinations

a=combinations('abc', 2)
b=combinations('defg', 3)
c=combinations('hij', 2)

a=list(a)
b=list(b)
c=list(c)

n=0
f=False
for x in a:
    flag=False
    if('a' in x):
        flag=True
    for y in b:
        if(('d' in y) and flag):
            continue
        for z in c:
            if(f and 'g' in y):
                continue
            print(x,y,z)
            if('g' in y):
                f=True
            n += 1

print(n)
    

