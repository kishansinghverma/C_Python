n=234578
lst=str(n)

result=[]
fnl=[]
for i in range(1, len(lst)+1):
    for j in range(len(lst)-i+1):
        result.append((lst[j:i+j]))
print(result)
for x in result:
    res=1
    for y in x:
        res *= int(y)
    fnl.append(res)

print(fnl)

if(len(fnl)==len(set(fnl))):
    print("Colorful Number!")
else:
    print("Not Colorful!")