"""  Write a Python program to create a new dictionary by extracting the mentioned keys from the below dictionary
Hints: Search about Dictionary Comprehension

Given dictionary:
sample_dict = {
    "name": "Kelly",
    "age": 25,
    "salary": 8000,
    "city": "New york"
}

# Keys to extract
keys = ["name", "salary"]

Expected Output:
{'name': 'Kelly', 'salary': 8000}

"""
sample_dict = {
    "name": "Kelly",
    "age": 25,
    "salary": 8000,
    "city": "New york"
}
keys = ["name", "salary"]

# me
new_dic = dict()
for key in keys:
    if key in sample_dict:
        new_dic[key] = sample_dict[key]
print(new_dic)

# dictionary comprehension
dic_comprehension = {k: sample_dict[k] for k in keys}
print(dic_comprehension)

# update method
update_dic = dict()
for k in keys:
    update_dic.update({k: sample_dict[k]})
print(update_dic)
