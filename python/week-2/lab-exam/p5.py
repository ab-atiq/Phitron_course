"""  
You have given a dictionary ‘d’, convert it into a list. The first value will be the key of the dict, and value will come next. 

Example
x = { 'a' : 1, 'b' :  2, 'c': 3, 'd': 4}
output:  [ 'a', 1, 'b',  2, 'c', 3, 'd', 4]


Now do the same for -
d = {'!': 1, '@' : 2, '#': 3, '$' : 4, '%' : 5, '^' : 6}


Write a function named create_list() and write your code inside this function.
"""

# x = {'a': 1, 'b':  2, 'c': 3, 'd': 4}
d = {'!': 1, '@': 2, '#': 3, '$': 4, '%': 5, '^': 6}


def create_list(dic):
    lst = []
    for key, value in dic.items():
        # print(key, value)
        lst.append(key)
        lst.append(value)
    return lst


result_list = create_list(d)
print(result_list)
