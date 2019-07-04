def eliminateDuplicate(lst):

    u_list=[]
    for x in lst:
        if (x not in u_list):
            u_list.append(x)

    return u_list

print(eliminateDuplicate([5,8,7,5,4,3,7,2,9,1,3]))
