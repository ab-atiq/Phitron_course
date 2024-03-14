def add(x, y, z):
    return x+y+z


sum = add(12, 23, 34)
print(sum)

# add_lambda = lambda x,y,z : x+y+z  # this is sort cut but when save next line automatically create.


def add_lambda(x, y, z): return x+y+z


total_lam = add_lambda(15, 35, 65)
print(total_lam)


# double the list item
def double_it(x):
    return x*2


# double_it2 = lambda x : x*2
def double_it2(x): return x*2


# map use
list_num = [15, 20, 30, 35, 50]
print(list_num)

double_list_num_add = map(double_it, list_num)
print(double_list_num_add)
convert_object_to_list = list(double_list_num_add)
print(convert_object_to_list)

double_list_num = list(map(double_it, list_num))
print(double_list_num)

double_list_num2 = list(map(double_it2, list_num))
print(double_list_num2)

# map using lambda
double_list_num3 = list(map(lambda x: x*2, list_num))
print(double_list_num3)

# filter using lambda
big_number = list(filter(lambda x: x > 30, list_num))
print(big_number)

actors = [
    {"name": "Atiq khan", "age": 22},
    {"name": "Rony islam", "age": 28},
    {"name": "Rakib hasam", "age": 25},
    {"name": "sakib khan", "age": 35},
    {"name": "Sabana", "age": 45},
    {"name": "apu bisshas", "age": 32},
]

senior_actor = list(filter(lambda actor: actor['age'] > 30, actors))
junior_actor = list(filter(lambda actor: actor['age'] < 30, actors))

print(senior_actor)
print(junior_actor)
