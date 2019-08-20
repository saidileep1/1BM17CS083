def search(lis,x):
    print(lis)
    if x in lis:
    	return True
    else:
    	return False
lis=[]
while True:
    a=int(input(":enter the number:"))
    if a!=-1:
    	lis.append(a)
    else:
    	break
x=int(input("enter the number to be searched"))
print(search(lis,int(x)))
