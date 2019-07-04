from tkinter import *

class ProcessEvent:
    def __init__(self):
        a=str()
        b=str()
        window =Tk()
        l1=Label(window, text="Number 1:")
        l2=Label(window, text="Number 2:")
        l3=Label(window, text="Answer:")

        self.T1=Entry(window, textvariable=a)
        self.T2=Entry(window, textvariable=b)
        self.l3=Label(window, text="")
        
        b1=Button(window, text="Sum", command=self.sum,width=17)
        b2=Button(window, text="Subtract", command=self.sub, width=17)
        b3=Button(window, text="Multiply", command=self.mul,width=17)
        b4=Button(window, text="Divide", command=self.div,width=17)

        l1.grid(row=0, column=0)
        self.T1.grid(row=0, column=2)
        l2.grid(row=1, column=0)
        self.T2.grid(row=1, column=2)
        self.l3.grid(row=2, column=2)
        l3.grid(row=2, column=0)
        b1.grid(row=3,  column=0)
        b2.grid(row=3,  column=1)
        b3.grid(row=3,  column=2)
        b4.grid(row=3,  column=3)
        

        window.mainloop()

    def getVal(self):
        x=0
        y=0
        try:
            x=eval(self.T1.get())
        except:
            pass
        try:
            y=eval(self.T2.get())
        except:
            pass

        return x,y
    
    def sum(self):
        x,y=self.getVal()

        self.l3.config(text=str(x+y))
        
    def sub(self):
        x,y=self.getVal()

        self.l3.config(text=str(x-y))
        
    def mul(self):
        x,y=self.getVal()

        self.l3.config(text=str(x*y))

    def div(self):
        x,y=self.getVal()

        self.l3.config(text=str(x/y))

        
        

ProcessEvent()
