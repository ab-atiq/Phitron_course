""" 
Write a Python program to check if user entered number is ZERO, POSITIVE or NEGATIVE until user does not want to quit.
User will type ‘Quit’ to close the program.
Sample:
> Enter input: 2
> 2 is positive
> -3
> -3 is negative
> “Quit”
> (stop the program)
"""

while 1:
    num = input("Enter a number or \"Quit\": ")
    if num == "Quit":
        print("(stop the program)")
        break
    
    num = int(num)
    if num < 0:
        print(num, " is negative.")
    elif num > 0:
        print(num, " is positive.")
    else:
        print(num, " is zero.")
