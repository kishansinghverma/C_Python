import time
class StopWatch:
    startTime=0
    stopTime=0
    def __init__(self):
        self.startTime=time.time()
    def start(self):
        self.startTime=time.time()
    def stop(self):
        self.endTime=time.time()
    def getStartTime(self):
        print(self.startTime)
    def getStopTime(self):
        print(self.stopTime)
    def getElapsedTime(self):
        print("Time Elapsed:","{:.6f}".format(self.endTime - self.startTime),"Seconds")

def Num_Sum(m,n):
    sum=0
    for x in range (m,n+1):
        sum += x
    return sum

s1 = StopWatch()
s1.start()
print("Sum Is: ",Num_Sum(1,1000000))
s1.stop()
s1.getElapsedTime()

