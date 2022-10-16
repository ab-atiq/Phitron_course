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
    input_num = int(input("Enter number: "))
    if input_num < 0:
        print(input_num * -1)
    else:
        print(input_num)
