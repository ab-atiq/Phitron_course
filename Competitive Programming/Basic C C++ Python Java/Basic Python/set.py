num1 = {1, 2, 3, 4, 5, 5}  # duplicate value will remove from set
num2 = set([22, 9, 10, 11])  # print will sort set item
num3 = set([1, 2, 3, 4, 5, 6, 7, 8, 9])
print(num1)
print(num2)
print(num3)
num3.add(10)
print(num3)  # add 10
num3.remove(6)
print(num3)  # remove 6
print(6 in num3)
print(6 not in num3)
print(5 in num3)
print(num2 | num3)  # union operation
print(num2 & num3)  # intersection operation
print(num2 - num3)  # difference operation
