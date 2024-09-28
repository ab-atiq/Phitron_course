subjects = ["C", "C++", "Java", "React", "JavaScript"]

print(subjects[0])  # 0 index print
print(subjects[2:])  # 2 index to last index print
print(subjects)  # all print
print(subjects[-1])  # reverse index print means last index
print(subjects + ["NextJs", "Node", "Git", "Typescript", 1905000, 1905004])  # another 6 item are added in subjects
# list and we can add any type of data
print(subjects * 3)  # all item will print 3 times
print("Java" in subjects)  # find item in subjects list
print("Java" not in subjects)  # find item in subjects list but not in subjects list
print(len(subjects))  # length of subjects list
subjects.append("Append Something")  # append item in the last of list
print(subjects)
subjects.insert(3, "Insert Python")  # insert at 3 index
print(subjects)
subjects.remove("Java")  # remove Java from list
print(subjects)
subjects.sort()  # sort subjects list in lexicographically
print(subjects)
subjects.reverse()  # sort reverse order list in lexicographically
print(subjects)
subjects.pop()  # pop last item
print(subjects)
subjects2 = subjects.copy()  # all item copy in another list
print(subjects2)
subjects.clear()  # clear or remove all item from list
print(subjects)
# pos = subjects2.index("Java")  # not find position from list
# print(pos)
pos2 = subjects2.index("C++")  # find position from list
print(pos2)
cnt1 = subjects2.count("C")  # count a string in subjects2 list
print(cnt1)

numbers = [56, 15, 28, 94, 26, 28, 37, 19, 65, 20, 28]
numbers.sort()  # ascending order sort
print(numbers)
numbers.reverse()  # descending order sort
print(numbers)
numbers.pop()  # pop last item
print(numbers)
numbers2 = numbers.copy()  # all item copy in another list
print(numbers2)
numbers.clear()  # clear or remove all item from list
print(numbers)
pon = numbers2.index(28)  # position of a number in numbers2 list
print(pon)
cnt = numbers2.count(28)  # count of a number in numbers2 list
print(cnt)
print()


# print and summation of list items
idx = 0
sumOfListItem = 0
while idx < len(numbers2):
    print(numbers2[idx])
    sumOfListItem += numbers2[idx]
    idx += 1
print(sumOfListItem)
print()

# use of for loop in list
for x in numbers2:
    print(x)
print()

# summation of list items use of for loop
sumOfNum = 0
for x2 in numbers2:
    sumOfNum = sumOfNum + x2
print(sumOfNum)
