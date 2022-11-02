"""  Write a Python class to find a pair of elements (indices of the two numbers) from a given array whose sum equals a specific target number.
Input:
numbers= [10,20,10,40,50,60,70]
target=50 
Output: 3, 4
"""
# solution 1


class PairsOfElements(object):
    def index(self, lst, target):
        for i in range(len(lst)-1):
            if (int(lst[i]) + int(lst[i+1]) == target):
                return (i, i+1)


numbers = [10, 20, 10, 40, 50, 60, 70]
target = 50

idx1, idx2 = PairsOfElements().index(numbers, target)
pos1 = idx1+1
pos2 = idx2+1
print("Output:", pos1, pos2)


# class py_solution(object):
#     def twoSum(self, nums, target_num):
#         result_dict = dict()
#         pos = 0
#         while pos < len(nums):
#             if (target_num - nums[pos]) not in result_dict:
#                 result_dict[nums[pos]] = pos
#                 pos += 1
#             else:
#                 return [result_dict[target_num - nums[pos]], pos]

# numbers = [10, 20, 10, 40, 50, 60, 70]
# target = 50
# print(py_solution().twoSum(numbers, target))
# print(py_solution().twoSum([10, 20, 10, 40, 50, 60, 70], 52))
