"""  Write a python program for the requirement below. Notice the output must be in sorted order -
Input  : x3b4U5i2
Output : bbbbiiUUUUUxxx
"""
str_input = input("Input: ")
list = []
for i in range(0, len(str_input), 2):
    rep = int(str_input[i+1])
    list.append(str_input[i]*rep)

list.sort(key=str.lower)
out_str = ''.join(list)
print('Output:', out_str)
