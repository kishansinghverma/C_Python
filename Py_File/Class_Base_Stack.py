from Class_DataStructure import DataStructure

class Stack(DataStructure):
    def __init__(self):
        super().__init__()
        
    def isEmpty(self):
        if(len(self.getArray())==0):
            return True
        else:
            return False
        
    def push(self, x):
        self.getArray().append(x)

    def pop(self):
        if(self.isEmpty()):
            return "Stack Is Empty!!"
        else:
            n=self.getArray()[-1]
            del self.getArray()[-1]
            return n
        
    def peek(self):
        if(self.isEmpty()):
            return "Stack Is Empty!!"
        else:
            return self.getArray()[-1]
    

    
