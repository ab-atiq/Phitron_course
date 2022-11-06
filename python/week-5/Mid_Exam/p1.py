""" 
1. We can read 'abba' if we reverse the letters, it's still 'abba', so this string is called palindrome. Write a python program to check if a string is palindrome or not. 
"""
input_string = input("Enter string check for palindrome or not: ")
reverse_string = input_string[::-1]
if input_string == reverse_string:
    print("Input string is palindrome.")
else:
    print("Input number is not palindrome.")
