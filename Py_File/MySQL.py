import mysql.connector

mydb = mysql.connector.connect(
  host="linux.kishan.ml",
  user="kishan",
  passwd="root",
)
mycursor = mydb.cursor()
mycursor.execute("use test")
mycursor.execute("create table users(name varchar(20), password varchar(20))")


