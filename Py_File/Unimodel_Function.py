import math

min = math.inf


def getVal(n):
    return (2 * (n ** 2)) - (12 * n) + 7


def solve(s, l, r, f):
    p1 = ((r - l) // 3) + l
    p2 = (((r - l) * 2) // 3) + l

    f1 = False
    f2 = False
    f3 = False

    if getVal(s) < getVal(p1):
        f1 = True

    if(getVal(p1)<getVal(p2)):
        f2=True

    if(getVal(p2)<getVal(s)):
        f3=True

    if(f3):
        solve(s, p2, f, f)

    if(f2):
        solve(s, p1, p2, f)

    if(f3):
        solve(s, s, p1, f)


print(getVal(0))
print(getVal(1))
print(getVal(2))
print(getVal(3))
print(getVal(4))