import numpy

data=numpy.genfromtxt('my.txt', delimiter=',', skip_header=1, dtype=numpy.int)
a=data.T

print("Roll No.:",a[0])
print("Age:",a[1])
print("Average of Roll No.:",numpy.average(a[0]))
print("Average of Ages:",numpy.average(a[1]))
print("Maximum Roll No:",max(a[0]))
print("Maximum Age:",max(a[1]))
print("Minimum Roll No:",min(a[0]))
print("Minimum Age:",min(a[1]))

print("Roll No with Minimum Age:", a[0][(list(a[1])).index(min(list(a[1])))], min(a[1]))
print("Roll No with Maximum Age:", a[0][(list(a[1])).index(max(list(a[1])))], max(a[1]))

print("Age of Minimum Roll No:", a[1][(list(a[0])).index(min(list(a[0])))], min(a[0]))
print("Age of Maximum Roll No:", a[1][(list(a[0])).index(max(list(a[0])))], max(a[0]))
