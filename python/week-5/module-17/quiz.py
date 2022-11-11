""" class A:
    def __str__(self):
        return '1'
class B(A):
    def __init__(self):
        super().__init__()
class C(B):
    def __init__(self):
        super().__init__()
def main():
    obj1 = B()
    obj2 = A()
    obj3 = C()
    print(obj1, obj2,obj3)
main() """
class A:
    def __init__(self):
        self.multiply(15)
    def multiply(self, i):
        self.i = 4 * i;
class B(A):
    def __init__(self):
        super().__init__()
        print(self.i)
 
    def multiply(self, i):
        self.i = 2 * i;
obj = B()

def mk(x):
    def mk1():
        print("Decorated")
        x()
    return mk1
def mk2():
    print("Ordinary")
p = mk(mk2)
p()

class A:
    @staticmethod
    def a(x):
        print(x)
A.a(100)

class Demo:
    def __check(self):
        return " Demo's check "
    def display(self):
        print(self.__check(),end="")
class Demo_Derived(Demo):
    def __check(self):
        return " Derived's check "
Demo().display()
Demo_Derived().display()