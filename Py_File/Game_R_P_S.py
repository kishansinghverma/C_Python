import random

play=1;
while(play==1):
    pc=random.choice(['Rock','Paper','Scissors'])
    me=input("\nYour Turn:\nRock(r), Paper(p), Scissors(s): ")

    
    if((me=="r" and pc=="Rock")or(me=="s" and pc=="Scissors")or (me=="p" and pc=="Paper")):
        print("\nBoth Choose Same! ie.",pc
              ,"\nGame Tie!! ")
    elif(me=="p" and pc=="Rock"):
        print("\nYou Win!\nPc Choosed Rock!!")
    elif(me=="r" and pc=="Scissors"):
        print("\nYou Win!\nPc Choosed Scissors!!")
    elif(me=="s" and pc=="Paper"):
        print("\nYou Win!\nPc Choosed Paper!!")
    else:
        print("\nYou Lose!\nPc Choosed",pc)
    play=eval(input("Play Again(0/1): "))

exit(0)
        
