# when we need to work sometimes later for any sequence element of list
numbers = [15, 35, 18, 16, 68, 95, 15, 88]

def get_numbers(nums):
    for num in nums:
        return num # only one element will return from list
result = get_numbers(numbers)
print(result)


def get_numbers2(nums):
    for num in nums:
        yield num # yield will return all elements from list one by one 


result = get_numbers2(numbers)
print(result)
print(next(result))
print(next(result))
print(next(result))
print("I am exploring generator")
print("I have no idea what is a generator")
print(next(result))
print(next(result))
print(next(result))
print(next(result)) # again print from first element
