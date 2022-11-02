""" Given a two Python list. Write a program to iterate both lists simultaneously and display items from list1 in original order and items from list2 in reverse order
Hints: Search google about zip() function

Sample Input: 
list1 = [10, 20, 30, 40]
list2 = [100, 200, 300, 400]

Sample Output:
10 400
20 300
30 200
40 100
"""

list1 = [10, 20, 30, 40]
list2 = [100, 200, 300, 400]
# reverse list item
# list2 = list(reversed(list2))
list3 = list(reversed(list2))
# print(list2)

for item1, item2 in zip(list1, list3):
    print(item1, item2)


# in one line
print()
for i1, i2 in zip(list1, list2[::-1]):
    print(i1, i2)
