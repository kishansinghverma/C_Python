def d2b(n):
    num=[]
    while(n>0):
        num.append(n%2)
        n //= 2;
    num.reverse()
    for x in num:
        print(x,end=" ")

def d2h(n):
    num=[]
    while(n>0):
        num.append(n%16)
        n //= 16
    num.reverse()
    for x in num:
        
        if(x>=10):
            print(chr(x+55),end="")
        else:
            print(x,end="")
var=eval(input("Input Number: "))
choice=input("1.Decimal To Binary\n2.Decimal To HexaDecimal\nSelect a option:")
if(choice=='1'):
    d2b(var)
elif(choice=='2'):
    d2h(var)
else:
    print("Invalid Choice!!")
    
