def mul(x, y):
    return x * y


num = [1, 2, 3, 4, 5]
num2 = [5, 4, 3, 2, 1]
ret = list(map(mul, num, num2))
print(ret)
