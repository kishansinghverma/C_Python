import math

def modInverse(a, m) :

    g = math.gcd(a, m)

    if (g != 1) :
        print("Inverse doesn't exist")

    else :
        print("Modular multiplicative inverse is ",
              power(a, m - 2, m))

def power(x, y, m) :

    if (y == 0) :
        return 1

    p = power(x, y // 2, m) % m
    p = (p * p) % m

    if(y % 2 == 0) :
        return p
    else :
        return ((x * p) % m)


a = 2; m = (10**9)+7
modInverse(a, m)
