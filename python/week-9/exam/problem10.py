class A:
    number = 5

    def fun1(self):
        print("This is function 1")


class B:
    def fun2(self):
        print('This is function 2')


class C(A, B):
    def fun3(self):
        print('This is function 3')


a = A()
a.fun1()
print(a.number)

b = B()
b.fun2()

c = C()
print(c.number)
c.fun1()
c.fun2()
c.fun3()
