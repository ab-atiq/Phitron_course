from operator import length_hint


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
