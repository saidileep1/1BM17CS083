l=[]
n=int(input("enter size of list"))
while len(l)<n:
	i=int(input("enter the elements"))
	l.append(i)
print("list:",l)
nl=[]
for i in l:
    if(i%2==0):
	    nl.append(i)

print("even list:",nl)
