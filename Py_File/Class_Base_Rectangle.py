from Class_Perent_GeoMetricObject import GeoMetricObject
import turtle

class Rectangle(GeoMetricObject):
    def __init__(self, w=1, h=1):
        super().__init__()
        self.__w=w
        self.__h=h

    def setHeight(self, h):
        self.__h=h

    def getHeight(self):
        return self.__h

    def setWidth(self, w):
        self.__w=w

    def getWidth(self):
        return self.__w

    def getPeriMeter(self):
        return 2*(self.__h+self.__w)

    def getArea(self):
        return self.__h*self.__w

    def drawShape(self):
        turtle.showturtle()
        turtle.color("black", self.getColor())
        
        if(self.isFilled()):
            turtle.begin_fill()

            
        turtle.forward(self.__w)
        turtle.left(90)
        turtle.forward(self.__h)
        turtle.left(90)
        turtle.forward(self.__w)
        turtle.left(90)
        turtle.forward(self.__h)

        if(self.isFilled()):
            turtle.end_fill()
    
