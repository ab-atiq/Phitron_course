# set like list but we can not store duplicate value in set
number_list = [12, 45, 65, 23, 12, 45, 89, 78, 11]
convert_list_to_set = set(number_list)
print(convert_list_to_set)

number_set = {12, 45, 65, 23, 12, 45, 89, 78, 11}
print(number_set)
number_set.add(69)
number_set.add(102)
number_set.add(45)  # it will not add in set
print(number_set)
number_set.remove(45)
print(number_set)

# length of set
print(len(number_set))
