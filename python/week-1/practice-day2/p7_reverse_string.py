"""  
Write a program to check if the given number is a palindrome number.
Input : 121
Output : True
"""
input_number = input("Enter a number for check palindrome: ")
reverse_input_number = input_number[::-1]
# print(reverse_input_number)

if input_number == reverse_input_number:
    print("True")
else:
    print("False")
