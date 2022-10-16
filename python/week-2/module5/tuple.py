# tuple like list but it is immutable (we can not change or assignment or deletion)
# numbers_tuple = (12, 45, 56, 45, 12, 89)
numbers_tuple = 12, 45, 56, 45, 12, 89
print(numbers_tuple)
read = numbers_tuple[2]
print(read)
# numbers_tuple[2] = 105 # we can not write the tuple
# del numbers_tuple[2]  # we can not write the tuple
print(numbers_tuple)

tuple2D = ([12, 45, 12], [35, 22, 12])
# tuple2D[0] = [15, 35, 65]  # tuple is immutable
tuple2D[0][2] = 105  # list inside tuple is mutable
print(tuple2D)

numbers_list = [12, 45, 56, 45, 12, 89]
convert_tuple_from_list = tuple(numbers_list)
print(convert_tuple_from_list)

short_tuple = 2,
print(short_tuple)
