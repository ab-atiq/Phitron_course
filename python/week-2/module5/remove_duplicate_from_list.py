# first method: convert list to set, then convert set to list. here order of list element will change.
mylist = ["a", "b", "a", "c", "c"]
print(mylist)

set_to_list = set(mylist)
print(set_to_list)

list_to_set = list(set_to_list)
print(list_to_set)
print()

# second method: dictionary key use, it has the same order as the original List.
mylist = ["a", "b", "a", "c", "c"]
# print(dict.fromkeys(mylist))
mylist = list(dict.fromkeys(mylist))
print(mylist)
