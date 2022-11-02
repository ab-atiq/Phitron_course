""" 
Write a Python class to get all possible unique subsets from a set of integers.
Input  : [4, 5, 6] 
Output : [[], [6], [5], [5, 6], [4], [4, 6], [4, 5], [4, 5, 6]]
"""


class UniqueSubsets:
    def sub_sets(self, lst):
        return self.recursionSubSets([], sorted(lst))

    def recursionSubSets(self, current, sorted_lst):
        if sorted_lst:
            return self.recursionSubSets(current, sorted_lst[1:]) + self.recursionSubSets(current + [sorted_lst[0]], sorted_lst[1:])
        return [current]


input = [4, 5, 6]
print(UniqueSubsets().sub_sets(input))
