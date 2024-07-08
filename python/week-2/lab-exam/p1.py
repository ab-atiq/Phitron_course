""" 
1. Create a string out of some words given in a list -

l = ["This", "is", "very", "fantastic"]


Expected Output:
"This is very fantastic"

Write a function named create_string() and write your code inside this function.
"""
l = ["This", "is", "very", "fantastic"]


def create_string(list):
    result_string = ""
    for word in list:
        result_string += word + " "
    return result_string


print(create_string(l))
