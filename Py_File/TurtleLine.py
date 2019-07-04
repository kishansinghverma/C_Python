import turtle
x1=eval(input('Enter x1: '))
x2=eval(input('Enter x2: '))
y1=eval(input('Enter y1: '))
y2=eval(input('Enter y2: '))

tmp=(((x1-x2)**2)+((y1-y2)**2))**0.5

turtle.showturtle()
turtle.penup()
turtle.goto(x1,y1)
turtle.pendown()
turtle.dot()
turtle.write(str(x1)+","+str(y1))
turtle.goto(x2,y2)
turtle.dot()
turtle.write(str(x2)+","+str(y2))

c1=(x1+x2)/2
c2=(y1+y2)/2

turtle.goto(c1,c2)
turtle.dot()
turtle.write(tmp)

