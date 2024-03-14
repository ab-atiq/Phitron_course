"""  
Write a program to check if one string contains another. For example, the result will be True if all the characters in the s1 are present in s2, otherwise False. The character’s position doesn’t matter. Take inputs from the user.

s1 = "Phi"
s2 = "Phitron"

Output : True
"""


def find_char_str2(str1, str2):
    ret = True
    for char in str1:
        if char not in str2:
            ret = False
    return ret


# s1 = "Phi"
# s2 = "Phitron"

s1 = "Phif"
s2 = "Phitron"

print(find_char_str2(s1, s2))
