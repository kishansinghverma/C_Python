from Class_Perent_GeoMetricObject import GeoMetricObject
import turtle

class Circle(GeoMetricObject):
    def __init__(self, r=1):
        super().__init__()
        self.__r=r
    def getArea(self):
        return 3.14*(self.__r**2)
    def getPeriMeter(self):
        return 2*3.14*self.__r
    def getRadius(self):
        return self.__r
    def setRadius(self, r):
        self.__r=r
    def drawShape(self):
        turtle.showturtle()
        turtle.color("black", self.getColor())
        
        if(self.isFilled()):
            turtle.begin_fill()
            
        turtle.circle(self.__r)

        if(self.isFilled()):
            turtle.end_fill()
        

        

        
        
    
