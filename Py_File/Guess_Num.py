import random
n=random.randint(1,99)

flag=0

for x in range(5):
    dec=eval(input("Guess the Number: "))

    if(dec==n):
        print("You Guessed The Number In ",x+1," Attempts!")
        flag=1
        break;
    
    if(dec>n):
        print("Your Guessed Number Is Greater Than Actual Number!\nTry Again!!\n")

    if(dec<n):
        print("Your Guessed Number Is Lesser Than Actual Number!\nTry Again!!\n")

if(flag==0):
    print("Game Over!\nYou Were Unable To Guess The Number!!\nThe Number Was ",n)
        
    
