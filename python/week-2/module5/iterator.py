# when we need to work sometimes later for any sequence element of list
numbers = [15, 35, 18, 16, 68, 95, 15, 88]
number_iter = iter(numbers)
print(number_iter) # iterator object created
# print(list(number_iter)) # convert iterator to list. it is same as numbers list

try:
    print(next(number_iter))
    print(next(number_iter))
    print(next(number_iter))
    print("I am exploring iterator")
    print("I am confused about iter")
    print(next(number_iter))
    print(next(number_iter))
    print("Something working")
    print(next(number_iter))
    print(next(number_iter))
    print(next(number_iter))
    print(next(number_iter)) # iteration complete
except StopIteration:
    print("Iteration complete!!!")