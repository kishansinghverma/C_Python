from tkinter import *

def run():
    label1.config(text="Done")
    
window=Tk()
window.title("Test Window")
window.geometry("500x400")

label1=Label(window, text="Label 1")
btn1=Button(window, text="Sample Button", width=15, height=2, fg='red', bg='blue')
label1.place(x=0, y=0)
btn1.place(x=50,y=0)

label2=Label(window, text="Label 2")
btn2=Button(window, text="Another Button", width=20, height=2, command=run, image= 'download.jpg')
label2.place(x=0,
             y=50)
btn2.place(x=50, y=50)

a=str()
edit=Entry(window, textvariable=a)
edit.place(x=0, y=100)

gender=IntVar()
radio1=Radiobutton(window, text="Male", variable=gender, value=2)
radio1.place(x=0, y=150)

radio2=Radiobutton(window, text="Female", variable=gender, value=1)
radio2.place(x=50, y=150)

subject1=IntVar()
subject2=IntVar()
check1=Checkbutton(window, text="Male", variable=subject1, onvalue=1, offvalue=0)
check1.place(x=0, y=200)

check2=Checkbutton(window, text="Female", variable=subject2, onvalue=1, offvalue=0)
check2.place(x=50, y=200)

canvas=Canvas(window, height=200, width=200)
canvas.create_oval(10,20, 50,40 , outline='black', fill='red')
canvas.place(x=50, y=250)




window.mainloop()
