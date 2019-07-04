import threading
import time

def thread1():
    while True:
        time.sleep(.5)
        print("This is from t1 ")
        time.sleep(.5)

def thread2():
    while True:
        time.sleep(1)
        print("This is from t2 ")

t1=threading.Thread(target=thread1)
t2=threading.Thread(target=thread2)

t1.start()
t2.start()
