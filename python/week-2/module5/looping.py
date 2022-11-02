list_numbers = [12, 45, 65, 23, 89, 78, 11, 10]
set_numbers = {12, 45, 65, 45, 89, 78, 12, 45}
tuple_numbers = 12, 45, 65, 45, 89, 78, 12, 4
dictionary_numbers = {"physics": 68, "chemistry": 96, "math": 88}

# list loop
total_of_list = sum(list_numbers)
print(total_of_list)

total = 0
for num in list_numbers:
    total += num
print(total)

print("Index and numbers pair tuple: ")
for index_num in enumerate(list_numbers):
    print(index_num)

print("Index and number list: ")
for i, num in enumerate(list_numbers):
    print(i, num)

# set loop
total_of_set = sum(set_numbers)
print("Set sum of numbers: ", total_of_set)

total_set = 0
for num in set_numbers:
    total_set += num
print(total_set)

print("Index and numbers pair tuple: ")
for index_num in enumerate(set_numbers):
    print(index_num)

print("Index and number list: ")
for i, num in enumerate(set_numbers):
    print(i, num)

# tuple loop
total_of_tuple = sum(tuple_numbers)
print("Tuple sum of numbers: ", total_of_tuple)

total_tuple = 0
for num in tuple_numbers:
    total_tuple += num
print(total_tuple)

print("Index and numbers pair tuple: ")
for index_num in enumerate(tuple_numbers):
    print(index_num)

print("Index and number list: ")
for i, num in enumerate(tuple_numbers):
    print(i, num)

# dictionary loop
for sub in dictionary_numbers:
    print(sub, dictionary_numbers[sub])

for sub, mark in dictionary_numbers.items():
    print(sub, mark)
