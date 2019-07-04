from tkinter import *

class ProcessEvent:
    def __init__(self):
        a=str()
        b=str()
        window =Tk()
        l1=Label(window, text="First Number")
        l2=Label(window, text="Second Number")

        self.T1=Entry(window, textvariable=a)
        self.T2=Entry(window, textvariable=b)
        self.l3=Label(window, text="")
        
        b1=Button(window, text="Sum", command=self.onclick)

        l1.pack()
        self.T1.pack()
        l2.pack()
        self.T2.pack()
        b1.pack()
        self.l3.pack()

        window.mainloop()

    def onclick(self):
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

        self.l3.config(text=str(x+y))
        

ProcessEvent()
