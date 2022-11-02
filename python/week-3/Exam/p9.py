"""  Write a class with two instance variables X, n . Add two methods sum() and pow() to get the sum of X+n and exponential/power of X^n .
"""
# solution 1: 
class SumAndPow:
    def __init__(self, X, n):
        self.X = X
        self.n = n

    def sum(self):
        print("Sum of X and n is: ", self.X+self.n)

    def pow(self):
        print("Sum of X and n is: ", pow(self.X, self.n))

sumAndPow = SumAndPow(10,2)
sumAndPow.sum()
sumAndPow.pow()

# Solution 2:
class SumAndPow:
    def sum(self, X, n):
        self.X = X
        self.n = n
        print("Sum of X and n is: ", self.X+self.n)

    def pow(self, X, n):
        self.X = X
        self.n = n
        print("Sum of X and n is: ", pow(self.X, self.n))


sumAndPow = SumAndPow()
sumAndPow.sum(10, 2)
sumAndPow.pow(10, 2)
