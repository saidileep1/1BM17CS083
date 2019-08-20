def li(str):
    lis=list(str.split())
    for i in lis:
        if i.isdigit()==True:
            print(i)
s=input("enter string")
li(s)
