import pyodbc

mydb = pyodbc.connect(r'Driver={Microsoft Access Driver (*.mdb, *.accdb)};DBQ=path where you stored the Access file\file name.accdb;')
cursor = mydb.cursor()

mycursor = mydb.cursor()
mycursor.execute("use test")
mycursor.execute("create table users(name varchar(20), password varchar(20))")


