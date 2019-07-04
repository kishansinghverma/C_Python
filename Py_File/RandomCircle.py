import turtle
import random

def randomplace():
    return random.randint(-200,200),random.randint(-200,200)


turtle.showturtle()
for x in range(100):
    turtle.color(random.random(),random.random(),random.random())
    turtle.penup()
    turtle.goto(randomplace())
    turtle.pendown()
    turtle.dot(random.randint(30,150))
    
