def div(x):
    lis=[]
    for i in range(1,int(x/2+1)):
        if(x%i==0):
            lis.append(i)
    print(lis)
a=int(input("enter number"))
div(a)
