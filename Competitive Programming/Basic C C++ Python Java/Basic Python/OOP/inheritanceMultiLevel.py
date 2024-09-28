# multi level inheritance
class A:
    def display1(self):
        print("I am inside A class")


class B(A):
    def display2(self):
        print("I am inside B class")


class C(B):
    def display3(self):
        print("I am inside C class")


class D(C):
    def display4(self):
        super().display1()
        super().display2()
        super().display3()
        print("I am inside D class")


obj = C()
obj.display1()
obj.display2()
obj.display3()

objD = D()
objD.display4()

print()
print()


# multiple inheritance
class A1:
    def display(self):
        print("I am inside A class")  # third priority


class B1:
    def display(self):
        print("I am inside B class")  # second priority


class C1(A1, B1):
    def display(self):
        print("I am inside C class")  # first priority


objC = C1()
objC.display()
