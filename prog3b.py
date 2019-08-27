import random
import string
str=string.printable
x=int(input("enter the length of password"))
for i in range(x):
    print(str[random.randint(0,100)],end="")
