"""  
Count all uppercase, lowercase, digits, and special symbols from a given
"P@#yn26at^&i5ve"
Total counts of chars, digits, and symbols 

Uppercase = 1
Lowercase = 7 
Digits = 3 
Symbol = 4
"""

str = "P@#yn26at^&i5ve"

upper_count = 0
lower_count = 0
digit_count = 0
symbol_count = 0

for char in str:
    if char >= 'A' and char <= 'Z':
        upper_count += 1
    elif char >= 'a' and char <= 'z':
        lower_count += 1
    elif char >= '0' and char <= '9':
        digit_count += 1
    else:
        symbol_count += 1

print("Uppercase =", upper_count)
print("Lowercase =", lower_count)
print("Digit =", digit_count)
print("Symbol =", symbol_count)
