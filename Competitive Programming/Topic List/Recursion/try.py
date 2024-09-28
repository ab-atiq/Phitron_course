num = int(input())


def A(n):
    str = f'sin({n})'
    for i in range(1, n):
        ch = ''
        if i % 2 == 0 and n % 2 == 0:
            ch = '+'
        elif i % 2 != 0 and n % 2 != 0:
            ch = '+'
        else:
            ch = '-'
        str = f'sin({i}{ch}{str})'
    return str


str = ''
for i in range(1, num+1):
    str += f'{A(i)}+{num-i+1}'
    if i != num:
        str = f'({str})'

print(str)