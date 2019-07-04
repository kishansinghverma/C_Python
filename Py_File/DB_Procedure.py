import mysql.connector

mydb = mysql.connector.connect(
  host="db4free.net",
  user="kishansinghverma",
  passwd="145789632"
)

mycursor = mydb.cursor()
mycursor.execute("use kishansinghverma")
mycursor.execute('''CREATE PROCEDURE `get_pass1`(IN uname varchar(25))
BEGIN
    select * from test;
END;''')
