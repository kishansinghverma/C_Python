class Circle:
    def __init__(self, r=1):
        self.r=r

    def getArea(self):
        return 3.14*(self.r**2)
    
    def getPerimeter(self):
        return 2*3.14*self.r
    
    def set(self, r):
        self.r=r

c1=Circle(5)
print(c1.getArea())
        

        
        
    
