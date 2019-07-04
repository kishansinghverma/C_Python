import cgi, cgitb

print('/n')
data=cgi.FieldStorage()

print(data.keys())
