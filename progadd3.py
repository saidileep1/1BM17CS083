marks={"1BM17CS083":89,"1BM17CS084":90,"1BM17CS111":74,"1BM17CS065":40}
d={}
for a,b in marks.items():
    if(b>=90):
        d[a]="S"
    elif(b>75):
        d[a]="A"
    elif(b>60):
        d[a]="B"
    elif(b>50):
        d[a]="C"
    elif(b>45):
        d[a]="D"
    else:
        d[a]="F"
print(d)
        
