import datetime

class time:
    def __init__(self):
        x = datetime.datetime.now()
        self.hh=int(x.strftime("%H"))
        self.mm=int(x.strftime("%M"))
        self.ss=int(x.strftime("%S"))

    def dispTime(self):
        print(self.hh,":",self.mm,":",self.ss)

    def addTime(self,hh,mm,ss):
        tm=(self.ss+ss)//60
        self.ss = (self.ss+ss)%60
        th=(self.mm+mm+tm)//60
        self.mm = (self.mm+mm+tm)%60
        self.hh = (self.hh+hh+th)%24
        

t1=time()
t1.dispTime()
t1.addTime(5,6,3)
t1.dispTime()
        
    
