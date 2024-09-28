def square(x):
    return x * x


num = [1, 2, 3, 4, 5]
ret = list(map(square, num))
print(ret)

ret2 = list(filter(lambda x: x % 2 == 0, num))
print(ret2)

# list comprehension
ret3 = [x * x for x in num]
print(ret3)
ret4 = [x for x in num if x % 2 == 0]
print(ret4)
