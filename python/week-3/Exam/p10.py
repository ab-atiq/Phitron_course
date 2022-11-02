""" 
Write a Python class named Distance constructed by two points (x1, y1), (x2, y2) and a method which will compute the distance between those points.
"""

from math import sqrt


class Distance:
    def __init__(self, point1, point2) -> None:
        self.p1 = point1
        self.p2 = point2

    def get_distance(self):
        dif_x = self.p1[0]-self.p2[0]
        dif_y = self.p1[1]-self.p2[1]

        dif_x_pow = pow(dif_x, 2)
        dif_y_pow = pow(dif_y, 2)

        return sqrt(dif_x_pow+dif_y_pow)


p1 = [4, 2]
p2 = [8, 6]

distance = Distance(p1, p2)
print(distance.get_distance())
