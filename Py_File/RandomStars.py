import turtle
import random

def randomcolor():
    return random.choice(['yellow', 'gold', 'orange', 'red', 'maroon', 'violet', 'magenta', 'purple', 'navy', 'blue', 'skyblue', 'cyan', 'turquoise', 'lightgreen', 'green', 'darkgreen', 'chocolate', 'brown', 'black', 'gray',])
def randomplace():
    return random.randint(-200,200),random.randint(-200,200)

def drawstar(n):
    turtle.color(random.random(),random.random(),random.random())
    turtle.begin_fill()
    for i in range(5):
        turtle.forward(n)
        turtle.left(144)
    turtle.end_fill()

turtle.showturtle()
for x in range(100):
    turtle.penup()
    turtle.goto(randomplace())
    turtle.pendown()
    drawstar(random.randint(20,150))
    
