"""

class Triangle:
    base=""
    height=""
    def __init__(self,b,h):
        self.base=b
        self.height=h
        area = self.base*self.height*.5
        print(f"Area is: {area}")
Triangle(10,20)

"""


class Triangle:
    def __init__(self, b, h):
        self.base = b
        self.height = h

    def calculate_area(self):
        area = self.base * self.height * .5
        print(f"Area is: {area}")


t1 = Triangle(10, 20)
t1.calculate_area()

t2 = Triangle(20, 30)
t2.calculate_area()
