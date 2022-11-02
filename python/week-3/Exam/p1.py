""" Create a function exp(a, n) that returns the exponential result ( an ). Read user input a and n in a single line from the keyboard.

Example input:
>> enter numbers: 2 3

Example Output:
>> result is: 8
"""
def exp(a, n):
    return pow(a, n)


numbers = input(">> enter numbers: ")
number1, number2 = numbers.split(' ')
number1_int = int(number1)
number2_int = int(number2)
result = exp(number1_int, number2_int)
print(">> result is:", result)
