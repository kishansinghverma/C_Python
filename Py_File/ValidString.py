from collections import Counter
# Complete the isValid function below.
def isValid(s):
    cnt=Counter(s)
    vnt=Counter(cnt.values())
    val=list(vnt.values())
    key=list(vnt.keys())

    if(len(val)==1):
        return "YES"

    if(len(val)==2):
        if(min(key)==1 and vnt[min(key)]==1):
            return "YES"
        if(vnt[max(key)]==1 and abs(min(key)-max(key))==1):
            return "YES"

    return "NO"

print(isValid("abcdefghhgfedecba"))

