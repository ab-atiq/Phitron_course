""" Write a python program to reverse every word from a given string s and output a new string. The position of words will remain the same, but their contents will be in reverse order.

s = “Programming Hero is the best”

Expected output: “gnimmargorP oreH si eht tseb”
"""

s = "Programming Hero is the best"
lst = s.split(' ')
output_str = ''
for word in lst:
    output_str += reversed(word)+' '
print(output_str)
