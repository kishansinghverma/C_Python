s = "aaabbcctcc"
n=len(s)
count=0

current=s[0]
counter=0
arr=[]
acc=0

for i in range(n):
    if(current==s[i]):
        counter += 1
        acc += 1
    else:
        count += (counter * (counter+1))//2
        for x in range(acc):
            arr.append(counter)
        acc=1
        counter=1
        current=s[i]

count += (counter * (counter+1))//2
for x in range(acc):
    arr.append(counter)

for i in range(1,n-1):
    if(s[i-1]==s[i+1] and arr[i]==1):
        count += min(arr[i-1], arr[i+1])

print(count, arr)