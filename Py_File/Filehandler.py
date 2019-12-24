from tkinter import filedialog
from tkinter import *
from tkinter import messagebox

from pymongo import MongoClient
import gridfs

path="None Selected"
window = Tk()
lbl = Label(window, text =path)

def uploadFile():
    global path
    db=MongoClient().gridfs_Demo
    fs=gridfs.GridFS(db)
    fileID = fs.put( open( path, 'rb'))
    messagebox.showinfo( "Upload", "Uploaded with ID: \n"+str(fileID))
    

def selectFile():
    global path
    filename =  filedialog.askopenfilename(initialdir = "/",title = "Select file",filetypes = (("jpeg files","*.jpg"),("all files","*.*")))
    path=filename
    lbl.config(text=path)

def drawLayout():
    window.geometry('150x120')
    btn = Button(window, text ="Pick", command = selectFile)
    btn.place(x=50, y=10)
    
    lbl.place(x=40, y=40)
    
    upload = Button(window, text ="Upload", command = uploadFile)
    upload.place(x=50, y=70)
    
    window.mainloop()

drawLayout()
    
