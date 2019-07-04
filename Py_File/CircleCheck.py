import turtle
c1=eval(input('X-Center Of Circle: '))
c2=eval(input('Y-Center Of Circle: '))
r=eval(input('Insert Radius: '))
p1=eval(input('X-Axis Of Point: '))
p2=eval(input('Y-Axis Of Point: '))

turtle.penup()
turtle.goto(c1,c2-r)
turtle.pendown()
turtle.circle(r)

turtle.penup()
turtle.goto(p1,p2)
turtle.pendown()
turtle.dot()
turtle.penup()
turtle.right(90)
turtle.forward(15)
turtle.pendown()
turtle.write(str(p1)+","+str(p2))
turtle.penup()
turtle.penup()
turtle.goto(c1-30,c2-r-40)

d=(((p1-c1)**2)+((p2-c2)**2))**0.5
turtle.pendown()
turtle.hideturtle()
turtle.write("Point is inside circle.") if(d<=r) else turtle.write("Point is outside circle.")


