from Class_Base_Rectangle import Rectangle
from Class_Base_Circle import Circle
from Class_Base_Triangle import Triangle

class Geometry(Rectangle, Circle, Triangle):
    def __init__(self):
        super().__init__()
        
    c1=Rectangle(50, 70)
    c1.setColor("red")
    c1.setFilled(False)
    c1.drawShape()
    print(c1.isFilled())
    
