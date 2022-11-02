"""  
Write a program to create function calculation() such that it can accept two variables and calculate addition and subtraction. Also, it must return both addition and subtraction in a single return call. Receive the returned values and print the type. 
HInts: Please google how to return multiple values from a function in python
https://www.geeksforgeeks.org/g-fact-41-multiple-return-values-in-python/
"""


def Calculation(x, y):
    add = x+y
    sub = x-y
    return (add, sub)


addition, subtraction = Calculation(50, 25)
print(addition, subtraction)
