data = {1: [2, 3, 4, 5], 2: [1, 3, 4, 5], 3: [
    1, 2, 4, 5], 4: [1, 2, 3, 5], 5: [1, 2, 3, 4]}

# keys = [1, 2, 3, 4, 5]
# values = [[2, 3, 4, 5], [1, 3, 4, 5], [1, 2, 4, 5], [1, 2, 3, 5], [1, 2, 3, 4]]
# empty_dict = dict()
# for key in keys:
#     empty_dict[key] = values[key-1]
# print(empty_dict)

keys = [1, 2, 3, 4, 5]
com_dic = {key: [value for value in keys if key != value] for key in keys}
print(com_dic)
