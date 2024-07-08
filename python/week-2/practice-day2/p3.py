"""  Create a python program that takes user input string and converts into Capitalized Upper and Lower case

Example Input: 
>> Enter your sentence: pHitRon

Output:
>> lower case: phitron
>> upper: PHITRON
>> capitalized: Phitron
"""
str = input("Enter your sentence: ")
print("lower case: ", str.lower())
print("upper: ", str.upper())
print("capitalized: ", str.capitalize())