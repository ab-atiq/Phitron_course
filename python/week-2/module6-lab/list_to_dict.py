# my_list = ['@F1', 'OBCD', '!', '@F2', 'ADDAB', '!', '@F3', 'OKKA', '!']
my_list = ['@F1', 'O@BCD', '!', '@F2', 'ADDAB', '!', '@F3', 'OKKA', '!']

list_dict = {}
for idx, val in enumerate(my_list):
    # if '@' in val:
    if val[0] == '@':
        list_dict[val] = my_list[idx+1]

print(list_dict)
