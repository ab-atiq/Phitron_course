from abc import ABC, abstractmethod


class Shape:
    def __init__(self, dim1, dim2):
        self.dimension1 = dim1
        self.dimension2 = dim2

    @abstractmethod
    def area(self): # just we will override this. we can not call this.
        pass


class Triangle(Shape):
    def area(self):
        a = .5 * self.dimension1 * self.dimension2
        print("Area of Triangle is: ", a)


class Rectangle(Shape):
    def area(self):
        a = self.dimension1 * self.dimension2
        print("Area of Rectangle is: ", a)


s1 = Shape()   # when we will make method as abstract we can not make any objects
s1.area()

t1 = Triangle(20, 30)
t1.area()

r1 = Rectangle(20, 30)
r1.area()
