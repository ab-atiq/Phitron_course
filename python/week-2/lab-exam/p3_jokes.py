""" 
Go to this repo: https://pypi.org/project/pyjokes/ and try to make a chat bot to tell you joke using pyjokes.
Write a function named tell_some_jokes() and write your code inside this function. 
"""
import pyjokes

while True:
    print("Do you want to hear a joke? Y/N: ", end=" ")
    s = input()
    if s == "Y":
        print(pyjokes.get_joke())
        print()
    else:
        break
