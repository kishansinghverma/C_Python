from Class_Perent_OverRiding import Perent
class Base(Perent):

    def fun(self):
        print("Defination From Base Class")


p=Perent()
p.fun()
p=Base()
p.fun()
