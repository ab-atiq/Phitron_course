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
