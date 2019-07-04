def display(arr):
    for x in range(1,10):
        arr[x]=arr[x]+arr[x-1]
        print(x," ", arr[x])
    
    
def update(arr,l,r,v):
    arr[l] += v;
    arr[r+1] -= v;

def driver():
    arr=[0]*10
    query=((2,4,3),(5,8,1),(1,6,5))
    for x in query:
        update(arr,x[0],x[1],x[2])
    display(arr)

driver()
