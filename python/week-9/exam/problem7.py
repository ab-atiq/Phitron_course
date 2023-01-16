lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
new_lst = []
for num in lst:
    if num % 3 == 0:
        new_lst.append(num)
print(new_lst)
