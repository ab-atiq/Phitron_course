sub_marks = {"physics": 59, "chemistry": 75, "math": 70}
print(sub_marks)
sub_marks["biology"] = 86.6  # key is not found then it will add the dictionary
print(sub_marks)
sub_marks["physics"] = 89
print(sub_marks)
del sub_marks["chemistry"]
print(sub_marks)

# key
key_of_sub_marks = sub_marks.keys()
print(key_of_sub_marks)
# value
value_of_sub_marks = sub_marks.values()
print(value_of_sub_marks)
# item
item_of_sub_marks = sub_marks.items()
print(item_of_sub_marks)

sub_marks.clear()  # clear
print(sub_marks)
