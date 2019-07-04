def multiplyAll(*ht):
    sum=1;
    for x in ht:
        sum = x*sum
    return sum

print(multiplyAll(1,3,4,6,2))
