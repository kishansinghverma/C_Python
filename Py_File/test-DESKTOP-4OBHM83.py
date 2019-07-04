from Class_Inheritence import GeometricObject

class Circle(GeometricObject):
    def __int__(self, r):
        super.__init__()
        self.__r=r
    def getRadius(self):
        return self.__r
    def setRadius(self, r):
        self.__r=r
    def getArea(self):
        return 3.14*(self.__r**2)
    def getPerimeter:
        return 2*3.14*self.__r

c=Circle()
print(c.getColor())
print(c.isFilled())
        

        
        
    
