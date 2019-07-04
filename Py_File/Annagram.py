str1=input("First String: ")
str2=input("Second String: ")

def Anna_Check(str1, str2):

    if(len(str1)!=len(str2)):
        return False
    for x in str1:
        if(str1.count(x) != str2.count(x)):
            return False
        
    return True

if(Anna_Check(str1,str2)):
    print("Given String are Annagram!")
else:
    print("Given String are not Annagram!")
