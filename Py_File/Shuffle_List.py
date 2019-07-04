import random

def shuffle(lst):

    s_list=[]
    n=len(lst)
    
    for x in range(n):
        item=random.choice(lst)
        s_list.append(item)
        lst.remove(item)

    return s_list

print(shuffle([10,20,30,40,50,60]))


