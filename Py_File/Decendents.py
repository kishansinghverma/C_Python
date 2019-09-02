counter=0
def traverseIt(lst, n1, n2):
    global counter
    counter+=1
    for x in lst:
        if(x[0]==n1):
            for y in  x:
                if(y==n2):
                    return "Yes", counter
                else:
                    traverseIt(lst, y, n2)

lst=[]
while(True):
    temp=[]
    name, n=input().rstrip().split()
    if(name=="STOP"):
        break
    temp.append(name)
    temp += input().rstrip().split()
    lst.append(temp)


for i in range(n):
    counter=0
    n1, n2=input().rstrip().split()
    print(traverseIt(lst, n1, n2))

