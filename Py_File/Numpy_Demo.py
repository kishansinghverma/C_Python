import numpy
import matplotlib.pyplot as plt

l=[[[1,2,3],[4,5,6],[7,8,9]],[[10,11,12],[13,14,15],[16,17,18]]]
print(l)

a=numpy.array(l)
print(a)

x=numpy.arange(ord('a'),ord('z'),1)

for y in x:
    print(chr(y), end ="")

print(numpy.linspace(10,100, 19))

print(numpy.diag([1,9,8,7]))
print(numpy.zeros(5))
print(numpy.zeros((3,3,3), dtype=numpy.int))
print(numpy.ones((3,3,3), dtype=numpy.int))

plt.plot([2,4,6,8,10,12],[3,5,4,6,5,7])
plt.show()

x=numpy.arange(0,5*numpy.pi, 0.1)
y=numpy.cos(x)
l=plt.plot(x,y,'b:', markersize=10)
plt.show()
'''
p1=plt.bar(['Amit', 'Mohit', 'Raman', 'Shivam', 'Rohit', 'FuckBoi'], [15,10,20,30,40,20], 0.5)
plt.ylabel('Marks')
plt.xlabel('Students')
plt.show()'''
