def check(string): 
    brackets = ['()', '{}', '[]'] 
    while any(x in string for x in brackets): 
        for br in brackets: 
            string=string.replace(br, '') 
    return not string  
string=input("enter the brackets:")
if check(string):
    print("valid")
else:
    print("not valid") 
