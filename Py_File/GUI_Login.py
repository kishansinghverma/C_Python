from tkinter import *

class ProcessEvent:
    def __init__(self):
        x=str()
        y=str()

        window =Tk()
        window.title("LogIn")
        window.geometry('240x170')


        self.l1=Label(window, text="User Name:")
        self.l1.place(x=10,y=20)
        self.l2=Label(window, text="Password:")
        self.l2.place(x=10, y=60)
        self.l3=Label(window, text="")
        self.l3.place(x=90, y=140)

        self.T1=Entry(window, textvariable=x)
        self.T1.place(x=90, y=20)
        self.T2=Entry(window, textvariable=y, show='*')
        self.T2.place(x=90, y=60)

        b1=Button(window, text="Reset", command=self.reset,width=7).place(x=10, y=100)
        b2=Button(window, text="Submit", command=self.submit, width=7).place(x=90, y=100)
        b3=Button(window, text="SignUp", command=self.signup, width=7).place(x=170, y=100)

    def reset(self):
        self.T1.delete(0,END)
        self.T2.delete(0,END)
        self.l3.config(text='')

    def submit(self):
        user=self.T1.get()
        passwd=self.T2.get()
        

        if(user=='Admin' and passwd=='Admin'):
            self.l3.config(text='Login Successfull!!')
        else:
            self.l3.config(text='Login Failed!!')
        
        

    def signup(self):
        name=str()
        dob=str()
        address=str()
        gender=str()
        email=str()
        phone=str()
        
        window =Tk()
        window.title('SignUp')
        l1=Label(window, text="Name:")
        l2=Label(window, text="DOB:")
        l3=Label(window, text="Address:")
        l4=Label(window, text="Gender:")
        l5=Label(window, text="E-Mail:")
        l6=Label(window, text="Phone No:")

        l1.grid(row=0, column=0)
        l2.grid(row=1, column=0)
        l3.grid(row=2, column=0)
        l4.grid(row=3, column=0)
        l5.grid(row=4, column=0)
        l6.grid(row=5, column=0)
        

        self.T1=Entry(window, textvariable=name)
        self.T2=Entry(window, textvariable=dob)
        self.T3=Entry(window, textvariable=address)
        self.T4=Entry(window, textvariable=gender)
        self.T5=Entry(window, textvariable=email)
        self.T6=Entry(window, textvariable=phone)

        self.T1.grid(row=0, column=1)
        self.T2.grid(row=1, column=1)
        self.T3.grid(row=2, column=1)
        self.T4.grid(row=3, column=1)
        self.T5.grid(row=4, column=1)
        self.T6.grid(row=5, column=1)
        
        b1=Button(window, text="Reset", command=self.s_reset,width=17)
        b2=Button(window, text="Submit", command=self.s_submit, width=17)

        b1.grid(row=6, column=0)
        b2.grid(row=6, column=1)

        window.mainloop()


    def s_reset(self):
        self.name=""
    
    def s_submit(self):
        pass
        
        
        

ProcessEvent()
