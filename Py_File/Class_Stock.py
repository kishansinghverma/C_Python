class Stock:
    def __init__(self,  symbol, name, pcp=1, cp=1):
        self.__symbol=symbol
        self.__name=name
        self.__previousClosingPrice=pcp
        self.__currentPrice=cp

    def getName(self):
        return self.__name
    
    def getSymbol(self):
        return self.__symbol

    def getPreviousPrice(self):
        return self.__previousClosingPrice

    def getCurrentPrice(self):
        return self.__currentPrice

    def setPreviousPrice(self, pcp):
        self.__previousClosingPrice=pcp

    def setCurrentPrice(self, cp):
        self.__currentPrice=cp

    def getPercentageChange(self):
        change=((self.__currentPrice - self.__previousClosingPrice)/self.__previousClosingPrice)*100

        if(change>0):
            return str(abs(change))+"% Increased!"
        elif(change<0):
            return str("{:.3f}".format(abs(change)))+"% Decreased!"
        else:
            return "No Change!"


def main():
    s1=Stock("INTC", "Intel", 20.5, 20.35)
    
    print("Symbol: ",s1.getSymbol())
    print("Name: ",s1.getName())
    print("Previous Price: ",s1.getPreviousPrice())
    print("Current Price: ",s1.getCurrentPrice())
    print("Change: ",s1.getPercentageChange())

    s1.setPreviousPrice(20)
    s1.setCurrentPrice(22)

    print("\nPrevious Price: ",s1.getPreviousPrice())
    print("Current Price: ",s1.getCurrentPrice())
    print("Change: ",s1.getPercentageChange())

    s1.setPreviousPrice(25)
    s1.setCurrentPrice(25)

    print("\nPrevious Price: ",s1.getPreviousPrice())
    print("Current Price: ",s1.getCurrentPrice())
    print("Change: ",s1.getPercentageChange())
    

main()



    
        
        
