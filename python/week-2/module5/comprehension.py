numbers = [12, 45, 65, 23, 89, 78, 11]

odd_num_list = []
for num in numbers:
    if num % 2 != 0:
        odd_num_list.append(num)
print(odd_num_list)

# one line
num_list = [num for num in numbers]
print(num_list)

num_list_double = [num*2 for num in numbers]
print(num_list_double)
num_list_square = [num*num for num in numbers]
print(num_list_square)

odd_num_list2 = [num for num in numbers if num % 2 != 0]
print(odd_num_list2)

odd_and_five_multiplier_num_list = [num for num in numbers if num % 2 != 0 if num % 5 == 0]
print(odd_and_five_multiplier_num_list)


# one line list nested loop
names = ['atiq', 'sharif', 'arif', 'akram', 'nasir', 'biddut']
ages = [22, 23, 26, 24, 24, 23]

person = [(name, age) for name in names for age in ages]
print(person)
print()

small_person = [(name, age) for name in names for age in ages if age < 24]
print(small_person)
print()

# use nested for loop
big_person = []
for name in names:
    for age in ages:
        if age >= 24:
            big_person.append((name, age))
print(big_person)


# remove items from a list while iterating. Remove numbers greater than 50
number_list = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
new_lst=[]
for num in number_list:
    if num <= 50:
        new_lst.append(num)
print(new_lst)

# remove items from a list while iterate using list comprehension. Remove numbers greater than 50
number_list=[(num) for num in number_list if num<= 50]
print(number_list)

# remove items from a list while iterating but without creating a different copy of a list. Remove numbers greater than 50
number_list = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
i = 0
n = len(number_list)
while i < n:               # iterate list till i is smaller than n
    if number_list[i] > 50:
        del number_list[i] # delete current index from list
        n = n - 1          # reduce the list size and deleted index recheck
    else:
        i = i + 1          # move to next item
print(number_list)