# map function use
def square(x):
    return x * x


num = [1, 2, 3, 4, 5]
ret = list(map(square, num))
print(ret)

# square using lamda function
ret1 = list(map(lambda y: y * y, num))
print(ret1)


# multiplication from two list
def mul(x, y):
    return x * y


num2 = [5, 4, 3, 2, 1]
ret = list(map(mul, num, num2))
print("Multiplication: ",ret)

# lamda function
retMulLamda = list(map(lambda x,y: x*y,num,num2))
print(retMulLamda)

# list of string
l = ["Atik","Abul","Bashar","Bozlu"]
# map() can listify the list of strings individually
listListify = list(map(list,l))
print(listListify)

# filter
ret2 = list(filter(lambda x: x % 2 == 0, num))
print(ret2)

# list comprehension
ret3 = [x * x for x in num]
print(ret3)
ret4 = [x for x in num if x % 2 == 0]
print(ret4)
