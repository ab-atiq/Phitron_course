# method/function overloading
# print(max(12, 45, 87, 12, 98, 45, 63, 458, -8))
# print(max([13, 45, 87]))
# print(max('A', 'P', 'K', 'C'))

def add(num1, num2, num3=0, num4=0):
    return num1 + num2 + num3 + num4

# print(add(12, 13))
# print(add(12, 13, 50))


def add2(*args, **Kwargs):
    pass


# operator overloading built in
print(12 + 13)
print('H' + 'W')

# create operator overloading
class Account:
    def __init__(self, holder, balance) -> None:
        self.holder = holder
        self.__balance = balance

    def __add__(self, other):
        return self.__balance + other.__balance

    def __eq__(self, __o: object) -> bool:
        return self.__balance == __o.__balance


my_account = Account('Sakib Al Hasan', 50000)
her_account = Account('Shishir vabi', 90000)

# user defined class add method will add two objects balance
result = my_account + her_account
print(result)

# user defined class equal method will check two objects balance
print(my_account == her_account)
