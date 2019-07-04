class test:
    def __init__(self):
        self.__r=50
        self.x=20
    def get(self):
        return self.__r

c1=test()
print(c1.x)
c1.x=30
print(c1.x)
#print(c1.__r)
print(c1.get())
        

        
        
    
