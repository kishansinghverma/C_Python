arr=[2,4,3,1,7,6,9,5]

h1=arr[0]; h2=arr[1];
for x in arr:
    if(h1<x):
        h1=x
    if(h2<x and x<h1):
        h2=x

print(h1, h2)