class calldetail:
    def __init__(self):
        self.caller=None
        self.reciever=None
        self.time=None
        self.t=None
        
    def detail(self,caller,reciever,time,t):
        self.caller=caller
        self.reciever=reciever
        self.time=time
        self.t=t
    def dis(self,i):
        print("Detil no:",i)
        print("caller",self.caller)
        print("reciever",self.reciever)
        print("time",self.time)
        print("type",self.t)
        print("*_______________________*")
class util:
    def __init__(self):
        self.listobjects=None
    def parse_customer(self,list_string):
        self.listobjects=list_string
        i=0
        for x in self.listobjects:
            y=x.split(",")
            object=calldetail()
            object.detail(y[0],y[1],y[2],y[3])
            i=i+1
            object.dis(i)
        
cal1="9090909090,9191919191,22,local"
cal2="9898989898,9877898765,54,std"
list_string=[cal1,cal2]
c=util()
c.parse_customer(list_string)
