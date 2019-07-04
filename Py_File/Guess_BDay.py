print("01  03  05  07\n09  11  13  15\n17  19  21  23\n25  27  29  31\n")
dec1=input("Is Your Date Present In Given Calendar? (Yes/No): ")

print("\n02  03  06  07\n10  11  14  15\n18  19  22  23\n26  27  30  31\n")
dec2=input("Is Your Date Present In Given Calendar? (Yes/No): ")


print("\n04  05  06  07\n12  13  14  15\n20  21  22  23\n28  29  30  31\n")
dec3=input("Is Your Date Present In Given Calendar? (Yes/No): ")

print("\n08  09  10  11\n12  13  14  15\n24  25  26  27\n28  29  30  31\n")
dec4=input("Is Your Date Present In Given Calendar? (Yes/No): ")

print("\n16  17  18  19\n20  21  22  23\n24  25  26  27\n28  29  30  31\n")
dec5=input("Is Your Date Present In Given Calendar? (Yes/No): ")

date=0

if(dec1=="yes" or dec1=="Yes" or dec1=="YES" or dec1=="1" or dec1=="Y" or dec1=="y"):
    date += 1

if(dec2=="yes" or dec2=="Yes" or dec2=="YES" or dec2=="1" or dec2=="Y" or dec2=="y"):
    date += 2

if(dec3=="yes" or dec3=="Yes" or dec3=="YES" or dec3=="1" or dec3=="Y" or dec3=="y"):
    date += 4

if(dec4=="yes" or dec4=="Yes" or dec4=="YES" or dec4=="1" or dec4=="Y" or dec4=="y"):
    date += 8

if(dec5=="yes" or dec5=="Yes" or dec1=="YES" or dec5=="1" or dec5=="Y" or dec5=="y"):
    date += 16

print("\nI think your Birth Date is: ",date)




