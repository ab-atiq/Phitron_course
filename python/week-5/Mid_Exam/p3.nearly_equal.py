"""  
Write a function nearly_equal to test whether two strings are nearly equal. Two strings a and b are nearly equal when a can be generated by a single mutation on b.
>>> nearly_equal('python', 'perl') 
False 
>>> nearly_equal('perl', 'pearl') 
True
"""


def nearly_equal(s1, s2):
    count = 0
    i = j = 0
    while (i < len(s1) and j < len(s2)):
        if (s1[i] != s2[j]):
            count = count+1
            if (len(s1) > len(s2)):
                i = i+1
            elif (len(s1) == len(s2)):
                pass
            else:
                i = i-1
        if (count > 1):
            return False
        i = i+1
        j = j+1
    if (count < 2):
        return True


str1 = input("Enter first string: ")
str2 = input("Enter second string: ")
result = nearly_equal(str1, str2)
print(result)
