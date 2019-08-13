X=int(input("enter the number of fibbonacci number to be genertated"))
FIB=[]
for i in range(0,X):
    if(i==0):
        FIB.append(i)
    elif(i==1):
        FIB.append(i)
    else:
        FIB.append(int(FIB[i-1]+FIB[i-2]))
print(FIB)
