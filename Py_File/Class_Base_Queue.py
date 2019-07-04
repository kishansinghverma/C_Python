from Class_DataStructure import DataStructure

class Queue(DataStructure):
    def __init__(self):
        super().__init__()

    def isEmpty(self):
        if(len(self.getArray())==0):
            return True
        else:
            return False

    def enQueue(self, x):
        self.getArray().append(x)

    def deQueue(self):
        if(self.isEmpty()):
            return "Queue Is Empty!!"
        else:
            n=self.getArray()[0]
            del self.getArray()[0]
            return n

    def peek(self):
        if(self.isEmpty()):
            return "Stack Is Empty!!"
        else:
            return self.getArray()[0]
            

        
