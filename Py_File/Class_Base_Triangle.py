from Class_Perent_GeoMetricObject import GeoMetricObject
import math
import turtle

class Triangle(GeoMetricObject):
    def __init__(self, s1=1, s2=1, s3=1):
        super().__init__()

        self.__s1=s1
        self.__s2=s2
        self.__s3=s3

    def getArea(self):
        x = (self.__s1 + self.__s2 + self.__s3)/2
        area = (x*((x - self.__s1)*(x - self.__s2)*(x - self.__s3)))**(0.5)
        return area

    def getPeriMeter(self):
        return self.__s1+self.__s2+self.__s3

    def drawShape(self):
        turtle.showturtle()
        
        turtle.color("black", self.getColor())
        a=self.__s1
        b=self.__s2
        c=self.__s3

        y=( (a**2) + (b**2) - (c**2)) / (2*b*a)
        z=( (c**2) + (b**2) - (a**2)) / (2*c*b)
        
        if(self.isFilled()):
            turtle.begin_fill()
         
        turtle.forward(self.__s1)
        turtle.left(180-math.degrees(math.acos(y)))
        turtle.forward(self.__s2)
        turtle.left(180-math.degrees(math.acos(z)))
        turtle.forward(self.__s3)
        
        if(self.isFilled()):
            turtle.end_fill()


    
