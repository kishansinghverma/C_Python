import random
num=random.randint(0,99)
usr=input('Input a number: ')

if(usr==str(num)):
    print("You have won 10000 Rs.")
elif(usr=="".join(reversed(str(num)))):
    print("You have won 3000 Rs.")
elif(eval(usr)//10==num//10 or eval(usr)%10==num//10 or eval(usr)//10==num%10 or eval(usr)%10==num%10):
    print("You have won 1000 Rs., It Was ",num)
else:
    print("You Lose! Try Again!!, It Was ",num)


