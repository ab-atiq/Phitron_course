"""  
https://pynative.com/python-string-exercise/

Given two strings, s1 and s2. Write a program to create a new string s3 made of the first char of s1, then the last char of s2, Next, the second char of s1 and second last char of s2, and so on. 
Any leftover chars go at the end of the result.
s1 = "Abc"
s2 = "Xyz"

Output : AzbycX
"""

# s1 = "Abc"
# s2 = "Xyz"
# s1 = "Abc"
# s2 = "deFXyz"
s1 = "AbcpqR"
s2 = "Xyz"

s1_len = len(s1)
s2_len = len(s2)
# print(s1_len, s2_len)

# max length find from 2 string
# length = s1_len if s1_len > s2_len else s2_len 
max_length = 0
if s1_len > s2_len:
    max_length = s1_len
else:
    max_length = s2_len

output_str = ""

# reverse s2
s2 = s2[::-1]
# print(s2)

for i in range(max_length):
    if i < s1_len:
        output_str += s1[i]
    if i < s2_len:
        output_str += s2[i]

print(output_str)
