import turtle

x=-270
y=200

turtle.showturtle()
turtle.width(2)
turtle.penup()
turtle.goto(x,y)
turtle.right(90)

for i in range(14):
    turtle.write(i+1, font=("Arial", 12, 'normal'))
    turtle.penup()
    turtle.forward(10)
    
    for j in range(8):
        turtle.pendown()
        turtle.forward(20) 
        turtle.penup()
        turtle.forward(20)
        
    x += 40
    turtle.goto(x,y)

turtle.left(90)
turtle.shape("turtle")

turtle.color('Red')
turtle.goto(-290,130)
turtle.pendown()
turtle.forward(570)
turtle.stamp()
turtle.penup()

turtle.color('blue')
turtle.goto(-290,70)
turtle.pendown()
turtle.forward(520)
turtle.stamp()
turtle.penup()

turtle.color('green')
turtle.goto(-290,10)
turtle.pendown()
turtle.forward(540)
turtle.stamp()
turtle.penup()

turtle.color('orange')
turtle.goto(-290,-50)
turtle.pendown()
turtle.forward(545)
turtle.stamp()
turtle.penup()
