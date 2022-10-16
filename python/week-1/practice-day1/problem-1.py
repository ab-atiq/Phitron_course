""" 
Suppose you have a floating number N.1 then,
Floor is the greatest integer less than or equal to N. And Ceil is the smallest number greater than or equal to N.
Example: for 3.4 Floor is 3 and Ceil if 4.
Write a python program that takes a floating number from users using input() and outputs both Floor and Ceil of that number.
"""
float_value = float(input("Enter float number: "))
print("Float value is: ", float_value)
int_value = int(float_value)
print("Integer value is: ", int_value)
int_value_ceil = int(float_value)+1
print("Integer value is: ", int_value_ceil)
