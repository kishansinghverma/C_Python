p1=input("First Name: ")
p2=input("Second Name: ")

sum=0

for x in p1:
    if x in 'aeiou':
        sum += 5
    if x in 'friend':
        sum += 10

for x in p2:
    if x in 'aeiou':
        sum += 5
    if x in 'friend':
        sum += 10

print("Your friendship score is:",sum)
if sum<=100:
    print("You are Casual Friends!!")
    
if sum>100 and sum<=150:
    print("You are Best Friends!!")

if sum>150:
    print("You are Best Friend Forever!!")

