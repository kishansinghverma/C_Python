org_msg=input("Please Enter A Message: ")

enc_msg=[]

print()
for x in org_msg:
    enc_msg.append(chr(ord(x)+3))

print("Encrypted Message Is: ",end="")
for x in enc_msg:
    print(x,end="")

choice=input("\n\nYou Want To Dcrypt It? (0/1): ")

if(choice=='1'):
    print("\nDecrypted Message Is: ",end="")
    for x in enc_msg:
        print(chr(ord(x)-3),end="")
