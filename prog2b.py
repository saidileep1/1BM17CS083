def rev(str):
    lis=str.split(" ")
    lis.reverse()
    a=" "
    s2=a.join(lis)
    print(s2)
    
def rev2(str):
    lis=str.split()
    lis2=""
    for i in lis:
        lis2+=i[::-1]+" "
        
    print(lis2)

    
s=input("enetr string")
rev(s)
rev2(s)
