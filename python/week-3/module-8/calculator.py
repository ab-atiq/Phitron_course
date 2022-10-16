class Calculator:
    def add(self, x, y):
        sum = x+y
        print(sum)

    def subtract(self, x, y):
        sub = x-y
        print(sub)

    def multiply(self, x, y):
        mul = x*y
        print(mul)

    def divide(self, x, y):
        div = x/y
        print(div)


calculator = Calculator()
calculator.add(10, 20)
calculator.subtract(30, 18)
calculator.multiply(3, 4)
calculator.divide(32, 5)
