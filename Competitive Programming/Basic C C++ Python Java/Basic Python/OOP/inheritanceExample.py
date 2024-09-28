# hierarchical inheritance

class Shape:
    def __init__(self, dim1, dim2):
        self.dimension1 = dim1
        self.dimension2 = dim2

    def area(self):
        print("I am area method of shape class")


class Triangle(Shape):
    def area(self):
        a = .5 * self.dimension1 * self.dimension2
        print("Area of Triangle is: ", a)


class Rectangle(Shape):
    def area(self):
        a = self.dimension1 * self.dimension2
        print("Area of Rectangle is: ", a)


t1 = Triangle(20, 30)
t1.area()

r1 = Rectangle(20, 30)
r1.area()
