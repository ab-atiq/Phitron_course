""" 
Write a function that takes 3 integer inputs from user and outputs absolute values of these integers without using any library functions.

Sample Input:
-100
234
-350

Sample Output:
100
234
350
"""
for i in range(3):
    input_num = int(input("Enter integer number: "))
    abs_value = abs(input_num)
    print(f"Absolute value is: {abs_value}")
    
    if input_num < 0:
        print(f'Absolute value for negative number: {input_num * -1}')
    else:
        print(f'Absolute value for positive number: {input_num}')
