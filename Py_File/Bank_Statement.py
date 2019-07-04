import math
def calc(lst):
    n=0
    for x in lst:
        n+=x

    i=n*8.0*(10/365)/100
    return i

m=calc([355,153,94,63,261,514,206,137])
given=0.6084383561643835*10
y=given-m

n=math.ceil(y*100/(8.0*(10/365)))
z=261+355

print(n-z, z)
