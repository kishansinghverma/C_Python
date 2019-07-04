class GeoMetricObject:
    def __init__(self, color="white", filled=False):
        self.__color=color
        self.__filled=filled

    def getColor(self):
        return self.__color
    
    def setColor(self, color):
        self.__color=color

    def isFilled(self):
        return self.__filled

    def setFilled(self, filled):
        self.__filled=filled

    

    
        
