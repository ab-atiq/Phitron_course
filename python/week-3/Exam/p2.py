"""  Write a python to read three floating numbers from the keyboard in a single line with ‘-’ (dash) in between and output their sum.

Example input:
>> enter numbers: 2.3-4.5-1.7

Example Output:
>> sum is: 8.5
"""
numbers = input(">> enter numbers: ")
number1, number2, number3 = numbers.split('-')
number1_float = float(number1)
number2_float = float(number2)
number3_float = float(number3)

sum_of_numbers = number1_float+number2_float+number3_float
print(">> sum is:", sum_of_numbers)
