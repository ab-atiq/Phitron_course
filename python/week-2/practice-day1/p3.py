"""  
Write a program to add two lists index-wise. Create a new list that contains the 0th index item from both the list, then the 1st index item, and so on till the last element. any leftover items will get added at the end of the new list

Sample Input:
list1 = ["M", "na", "i", "Bo"]
list2 = ["y", "me", "s", "nd"]

Sample Output:
['My', 'name', 'is', 'Bond']
"""

list1 = ["M", "na", "i", "Ati"]
list2 = ["y", "me", "s", "qur"]

output_list = []
for i, item in enumerate(list1):
    # output_list.append(list1[i]+list2[i])
    output_list.append(item+list2[i])
print(output_list)

# comprehension or sort hand use
new_list = [list1[idx]+list2[idx] for idx in range(len(list1))]
print(new_list)

# using zip
output = [i+j for i, j in zip(list1, list2)]
print(output)
