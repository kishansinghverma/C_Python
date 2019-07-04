import sqlite3

conn=sqlite3.connect('mydb.db')

#conn.execute("create table students(rollno int, name char(20), age int)");
#conn.execute("insert into students values(10, 'Kishan', 19)")
#conn.execute("insert into students values(12, 'Sachin', 19)")
#conn.execute("insert into students values(10, 'Amit', 20)")
#conn.commit()

cursor=conn.execute("select * from students")

for x in cursor.fetchall():
    print('Roll No: '+str(x[0])+'   Name: '+str(x[1])+'   Age: '+str(x[2]))
