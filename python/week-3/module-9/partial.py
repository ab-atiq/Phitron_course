from functools import partial


def get_number(a, b, c, d):
    return a*1000+b*100+c*10+d


number = get_number(4, 5, 3, 2)
print(number)

forth_only = partial(get_number, b=0, c=0, d=0)
number2 = forth_only(4)
print(number2)

forth_three = partial(get_number, c=0, d=0)
number3 = forth_three(4, 5)
print(number3)
