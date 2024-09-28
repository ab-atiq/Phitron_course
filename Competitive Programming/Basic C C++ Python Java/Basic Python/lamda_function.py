def sutro(a, b):
    return a * a + 2 * a * b + b * b


print(sutro(2, 3))

# using lambda function
ret = (lambda a, b: a * a + 2 * a * b + b * b)(2, 3)
print(ret)
