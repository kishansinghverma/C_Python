from Class_Base_Stack import Stack
from Class_Base_Queue import Queue

s=Stack()
q=Queue()
print(s.isEmpty())
s.push(12)
print(s.isEmpty())
print(s.peek())
s.push(13)
s.push(45)
s.push(50)

print(s.peek())
s.pop()
print(s.peek())

print(q.isEmpty())
q.enQueue(10)
print(q.isEmpty())
q.deQueue()
print(q.isEmpty())
q.enQueue(12)
q.enQueue(14)
q.enQueue(16)
print(q.peek())
q.deQueue()
print(q.peek())

