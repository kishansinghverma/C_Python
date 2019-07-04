import random
num=['King','Ace','2','3','4','5','6','7','8','9','10','Jake', 'Queen']
type=['Spade', 'Diamond', 'Club', 'Heart']
cards=[]

for x in range(4):
    card=random.randint(1,52)
    while(card in cards):
        card=random.randint(1,52)
    cards.append(card)

for x in cards:
    print(x,"->",num[x%13],"of",type[x//13])
