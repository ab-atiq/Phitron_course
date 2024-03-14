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