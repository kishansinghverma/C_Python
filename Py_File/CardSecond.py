def sumOfDoubleEvenPlace(card):
    sum_even=0
    i=0
    while(card>0):
        if(i%2==1):
            if(((card%10)*2)>9):
                sum_even += ((card%10)*2)%10 +((card%10)*2)//10
            else:
                sum_even += (card%10)*2
        card //= 10
        i += 1
        
    return sum_even

def sumofOddPlace(card):
    sum_odd=0
    i=0
    while(card>0):
        if(i%2==0):
                sum_odd += card%10
        card //= 10
        i += 1
    return sum_odd, i



def isValid(sum1, sum2, i):
    if(((sum1+sum2)%10==0) and (i>12)):
        return True
    else:
        return False
    

def card_detail(card, isValid,i):
    if(isValid):
        if(card//(10**(i-1))==4):
            print("Valid Visa Card")
        elif(card//(10**(i-1))==5):
            print("Valid MasterCard Card")
        elif(card//(10**(i-1))==6):
            print("Valid Discover Card")
        elif(card//(10**(i-2))==37):
            print("Valid American Express Card")
        else:
            print("Can't Varify Card!")
    else:
        print("Invalid Card")

def main():
    card=eval(input("Enter A Card No: "))
    sum1=sumOfDoubleEvenPlace(card)
    sum2, i=sumofOddPlace(card)
    validate=isValid(sum1,sum2,i)
    card_detail(card, validate, i)

main()


