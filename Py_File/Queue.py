import queue
import random

q=queue.Queue()
for x in range(10):
    n=random.randint(1,100)
    print(n, end=" ")
    q.put(n)

print()
while not q.empty():
    print(q.get())
