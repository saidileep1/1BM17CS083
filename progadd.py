def li(str):
    lis=list(str)
    l=[]
    for i in lis:
        if i.isdigit()==True:
            l.append(i)
    print(l)
s=input("enter string")
li(s)
