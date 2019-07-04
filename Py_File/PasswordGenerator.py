import random

n=eval(input("No. Of Passwords: "))
size=eval(input("Password Length: "))

print()
for x in range(n):
    for y in range(size):
        print(chr(random.randint(33,126)),end="")
    print("\n")
