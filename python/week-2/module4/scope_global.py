balance = 500
def total_cost(price, quantity):
    global balance # it must declare else balance will not work in function
    cost = price*quantity
    balance -= cost
    return cost


print(f"Balance before cost: {balance}")

cost = total_cost(20, 3)
print(f"Total cost: {cost}")

print(f"Balance after cost: {balance}")

# global variable use
name = "Atiqur Rahman"
age = 25
print("My name is " + name + " and I am " + str(age) + " years old.")
def change_age(new_age):
    global age
    age = new_age
    print("I am " + str(age) + " years old.")
    
change_age(30)
print("I am " + str(age) + " years old.")