from operator import length_hint

from numpy import number
numbers = [12, 45, 65, 23, 89, 78, 11]

print(numbers)
print(numbers[:])
print(numbers[4])
print(numbers[-4])

# list [start: end: step]
print(numbers[1:5])
print(numbers[3:])
print(numbers[3:-2])
print(numbers[1:6:2])

# empty because step went to negative  base on start and end
print(numbers[1:6:-1])

# not empty because step went to positive base on start and end
print(numbers[6:1:-1])
print(numbers[-1:-6:-1])
print(numbers[-1:-6:-3])
print(numbers[::2])
print(numbers[::-1])  # reverse print
print(numbers[-1:-8:-1])  # reverse print

# length of list
length_of_lst = length_hint(numbers)
print("length of list: ", length_of_lst)

count = 0
for item in numbers:
    count += 1
print("length of list using for loop: ", count)

len_list = len(numbers)
print("length of list using build in function: ", len_list)


# list loop
numbers = [1,2,3,4,5,6,7,8,9]
for n in numbers:
    print(n,end=" ")
    
for i in range(len(numbers)):
    print(numbers[i], end="_")

l = 0
while l<len(numbers):
    print(numbers[l], end=", ")
    l+=1
    
[print(n, end="-") for n in numbers] # using list comprehension
print()

# create new list which contain 'a' in fruits
fruits = ['apple', 'banana', 'orange', 'cherry', 'kiwi', 'mango',]
newFruits = [f for f in fruits if 'a' in f]
print(newFruits)

# copy all list item in new list - method 1
newFruitsList = fruits.copy()
print(newFruitsList)

# method 2
newFruitsList2 = list(fruits)
print(newFruitsList2)

# join two list in one
list1 = ['a','b','c']
list1.extend(('1','2','3'))
print(list1)

list2 = [1, 2, 3]
list3 = list1 + list2 # join using '+' operator
print(list3)

for x in [50,60,60]:
    list3.append(x)

print(list3)