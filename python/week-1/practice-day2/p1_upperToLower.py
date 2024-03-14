"""  
You are given a string and your task is to swap cases. In other words, convert all lowercase letters to uppercase letters and vice versa.(don’t use any python built in function)
Example :  "pHitrOn.iO presents "Python COuRSe".
Ans : PhITRoN.Io PRENSENTS “pYTHON coUrsE”
"""

text = "pHitrOn.iO presents \"Python COuRSe\""
print(text)

output = ""
for char in text:
    if char >= 'a' and char <= 'z':
        output += char.upper()
    elif char >= 'A' and char <= 'Z':
        output += char.lower()
    else:
        output += char

print(output)
