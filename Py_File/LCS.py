s2="AGGTAB"
s1="GXTXAYB"

table=[[0 for i in range(len(s1)+2)] for j in range(len(s2)+2)]

for i in range(len(s1)):
    table[0][i+2]=ord(s1[i])

for i in range(len(s2)):
    table[i+2][0]=ord(s2[i])

for i in range(len(s2)):
    for j in range(len(s1)):
        if(table[0][j+2]==table[i+2][0]):
            table[i+2][j+2]=table[i+1][j+1]+1
        else:
            table[i+2][j+2]=max(table[i+2][j+1], table[i+1][j+2])

for x in table:
    for y in x:
        print(y, end=" ")
    print()

print(table[-1][-1])