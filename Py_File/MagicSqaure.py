import  numpy
psbl=[]
for i in range (1,14):
    for j in range(1,14):
        for k in range(1,14):
            if((i+j+k)==15 and (j != i) and ((k != i) and (k!=j))):
                psbl.append([i,j,k])
comb1=list(psbl)
comb2=list(psbl)
comb3=list(psbl)

final=[]
for x in comb1:
    for y in comb2:
        for z in comb3:
            if((x[0]+y[0]+z[0])==15 and (x[1]+y[1]+z[1])==15 and (x[2]+y[2]+z[2])==15):
                if(len(set(y).intersection(x))==0 and len(set(z).intersection(x))==0 and len(set(z).intersection(y))==0):
                    if((x[0]+y[1]+z[2])==15 and (x[2]+y[1]+z[0])==15):
                        final.append([x,y,z])
    
print(numpy.array(final))


