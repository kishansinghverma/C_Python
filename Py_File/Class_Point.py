class Point:

    def __init__(self, x=0, y=0):
        self.__x=x
        self.__y=y
        
    def setx(self, x):
        self.__x=x
        
    def sety(self, y):
        self.__y=x
        
    def getx(self):
        return self.__x
    
    def gety(self):
        return self.__y

    def __add__(self, sec):
        z=Point()
        z.__x = self.__x + sec.__x
        z.__y = self.__y + sec.__y
        return z

    def __sub__(self, sec):
        z=Point()
        z.__x = self.__x - sec.__x
        z.__y = self.__y - sec.__y
        return z

    def __gt__(self, sec):
        d1=(((self.__x )**2) + ((self.__y)**2))**0.5
        d2=(((sec.__x )**2) + ((sec.__y)**2))**0.5

        return d1>d2

p1=Point(14,81)
p2=Point(14,16)

p3=p2+p1

print(p3.getx(), p3.gety())

print(p1>p2)



    

    
