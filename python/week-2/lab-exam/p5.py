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
