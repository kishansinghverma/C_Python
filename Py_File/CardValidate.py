
def digitizer(card):
    digit=[]
    while(card>0):
        digit.append(card%10)
        card //= 10;
    return digit


def sumOfDoubleEvenPlace(digit):
    sum_even=0
    for x in range((len(digit)//2)):
        if(((digit[(x*2)+1])*2)<9):
            sum_even += (digit[(x*2)+1])*2;
        else:
            sum_even +=(((digit[(x*2)+1])*2)%10)+(((digit[(x*2)+1])*2)//10)
    return sum_even

def sumofOddPlace(digit):
    sum_odd=0
    for x in range((len(digit)//2)):
        sum_odd+=digit[(x*2)]
    return sum_odd



def isValid(sum1, sum2, digit):
    if(((sum1+sum2)%10==0) and (len(digit)>12)):
        return True
    else:
        return False
    

def card_detail(isValid,digit):
    if(isValid):
        if(digit[15]==4):
            print("Valid Visa Card")
        elif(digit[15]==5):
            print("Valid MasterCard Card")
        elif(digit[15]==6):
            print("Valid Discover Card")
        elif(digit[15]==3 and digit[14]==7):
            print("Valid American Express Card")
        else:
            print("Can't Varify Card!")
    else:
        print("Invalid Card")

def main():
    card=eval(input("Enter A Card No: "))
    digit=digitizer(card)
    sum1=sumOfDoubleEvenPlace(digit)
    sum2=sumofOddPlace(digit)
    validate=isValid(sum1,sum2,digit)
    card_detail(validate, digit)

main()


