largest = max(15, 65, 89, 150, 64, -158, -365)
print(largest)

numbers = [15, 65, 89, 150, 64, -158, -365]
print(numbers)
max_number = max(numbers)
print(max_number)

reverse_numbers = list(reversed(numbers))
print("List reverse: ", reverse_numbers)

sorted_number = sorted(numbers)
print("Sorted list: ", sorted_number)

reverse_sorted_number = sorted(numbers, reverse=True)
print("Reverse sorted list: ", reverse_sorted_number)

# dictionary sorted base on key and reverse parameter
actors = [
    {'name': 'Sakib khan', 'age': 34},
    {'name': 'Salman khan', 'age': 54},
    {'name': 'Atiq khan', 'age': 22},
    {'name': 'Bappi khan', 'age': 28},
    {'name': 'Manna', 'age': 44}
]

sorted_actor_base_age = sorted(actors, key=lambda actor: actor['age'])
print(sorted_actor_base_age)

sorted_actor_base_age_reverse = sorted(
    actors, key=lambda actor: actor['age'], reverse=True)
print(sorted_actor_base_age_reverse)
print()

sorted_actor_base_name = sorted(actors, key=lambda actor: actor['name'])
print(sorted_actor_base_name)

sorted_actor_base_name_reverse = sorted(
    actors, key=lambda actor: actor['name'], reverse=True)
print(sorted_actor_base_name_reverse)

# list sort
friends = ["Abul","Bashar","Rony","Monir","Rakib","Alif","Sabuj"]
sorted_friend = sorted(friends)
print(sorted_friend)
sorted_friend_reverse = sorted(friends,reverse=True)
print(sorted_friend_reverse)
